

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class ASSIGNMENT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AMyActor();

protected:
	
	virtual void BeginPlay() override;



public:
	UFUNCTION(BlueprintCallable)
	void Move();

	UFUNCTION(BlueprintCallable)
	void Turn();

	UFUNCTION()
	void RunMoveTurn();

	UFUNCTION()
	void TriggerEvent();


private:
	int32 RepeatCount;

	float MoveDistance;
	float TurnAngle;

	int32 CurrentMoveIndex;
	int32 EventCount;

	float TotalMoveDistance;

};
