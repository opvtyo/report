
#include "MyActor.h"
#include "Engine/Engine.h"
#include "Math/UnrealMathUtility.h"
#include "InputCoreTypes.h"


AMyActor::AMyActor()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	RepeatCount = 10;
	MoveDistance = 100.0f;
	TurnAngle = 45.0f;

    CurrentMoveIndex = 0;
    EventCount = 0;
    TotalMoveDistance = 0.0f;
}

void AMyActor::BeginPlay()
{
    Super::BeginPlay();

    SetActorLocation(FVector(0, 50, 0));

    EnableInput(GetWorld()->GetFirstPlayerController());

    if (InputComponent)                                                                 //심심해서 만들었습니다. r키를 누르면 다시 10번 이동합니다.
    {
        InputComponent->BindKey(EKeys::R, IE_Pressed, this, &AMyActor::RunMoveTurn);
    }

    RunMoveTurn();
	}
	

void AMyActor::Move()
{
    FVector PreviousLocation = GetActorLocation();

    float RandomX = FMath::RandRange(-MoveDistance, MoveDistance);
    float RandomY = FMath::RandRange(-MoveDistance, MoveDistance);

    FVector NewLocation = PreviousLocation + FVector(RandomX, RandomY, 0);

    SetActorLocation(NewLocation);

    float Distance = FVector::Dist(PreviousLocation, NewLocation);
    TotalMoveDistance += Distance;

    if (GEngine)
    {
        FString LocationText = FString::Printf(
            TEXT("Move %d | Location: X=%.1f, Y=%.1f, Z=%.1f | Distance: %.1f"),
            CurrentMoveIndex,
            NewLocation.X,
            NewLocation.Y,
            NewLocation.Z,
            Distance
        );

        GEngine->AddOnScreenDebugMessage(
            -1,
            2.0f,
            FColor::Green,
            LocationText
        );
    }
}

void AMyActor::Turn()
{
    FRotator CurrentRotation = GetActorRotation();

    float RandomYaw = FMath::RandRange(-TurnAngle, TurnAngle);

    FRotator NewRotation = CurrentRotation + FRotator(0, RandomYaw, 0);

    SetActorRotation(NewRotation);
}

void AMyActor::RunMoveTurn()
{
    CurrentMoveIndex = 0;
    EventCount = 0;
    TotalMoveDistance = 0.0f;

    for (int32 i = 0; i < RepeatCount; i++)
    {
        CurrentMoveIndex = i + 1;

        Move();
        Turn();

        int32 RandomValue = FMath::RandRange(0, 1);

        if (RandomValue == 1)
        {
            TriggerEvent();
        }
    }

    if (GEngine)
    {
        FString ReportText = FString::Printf(
            TEXT("Final Report | Total Distance: %.1f | Event Count: %d / %d"),
            TotalMoveDistance,
            EventCount,
            RepeatCount
        );

        GEngine->AddOnScreenDebugMessage(
            -1,
            5.0f,
            FColor::Yellow,
            ReportText
        );
    }
}
void AMyActor::TriggerEvent()
{
    EventCount++;

    if (GEngine)
    {
        FString EventText = FString::Printf(
            TEXT("Event Triggered! Count: %d"),
            EventCount
        );

        GEngine->AddOnScreenDebugMessage(
            -1,
            2.0f,
            FColor::Red,
            EventText
        );
    }
}