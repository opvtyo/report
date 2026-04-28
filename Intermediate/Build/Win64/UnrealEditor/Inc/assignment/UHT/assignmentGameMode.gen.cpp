// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "assignmentGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeassignmentGameMode() {}

// ********** Begin Cross Module References ********************************************************
ASSIGNMENT_API UClass* Z_Construct_UClass_AassignmentGameMode();
ASSIGNMENT_API UClass* Z_Construct_UClass_AassignmentGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_assignment();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AassignmentGameMode ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AassignmentGameMode;
UClass* AassignmentGameMode::GetPrivateStaticClass()
{
	using TClass = AassignmentGameMode;
	if (!Z_Registration_Info_UClass_AassignmentGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("assignmentGameMode"),
			Z_Registration_Info_UClass_AassignmentGameMode.InnerSingleton,
			StaticRegisterNativesAassignmentGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AassignmentGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AassignmentGameMode_NoRegister()
{
	return AassignmentGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AassignmentGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "assignmentGameMode.h" },
		{ "ModuleRelativePath", "assignmentGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AassignmentGameMode constinit property declarations **********************
// ********** End Class AassignmentGameMode constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AassignmentGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AassignmentGameMode_Statics
UObject* (*const Z_Construct_UClass_AassignmentGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_assignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AassignmentGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AassignmentGameMode_Statics::ClassParams = {
	&AassignmentGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AassignmentGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AassignmentGameMode_Statics::Class_MetaDataParams)
};
void AassignmentGameMode::StaticRegisterNativesAassignmentGameMode()
{
}
UClass* Z_Construct_UClass_AassignmentGameMode()
{
	if (!Z_Registration_Info_UClass_AassignmentGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AassignmentGameMode.OuterSingleton, Z_Construct_UClass_AassignmentGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AassignmentGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AassignmentGameMode);
AassignmentGameMode::~AassignmentGameMode() {}
// ********** End Class AassignmentGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_assignment_Source_assignment_assignmentGameMode_h__Script_assignment_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AassignmentGameMode, AassignmentGameMode::StaticClass, TEXT("AassignmentGameMode"), &Z_Registration_Info_UClass_AassignmentGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AassignmentGameMode), 1294784531U) },
	};
}; // Z_CompiledInDeferFile_FID_unreal_assignment_Source_assignment_assignmentGameMode_h__Script_assignment_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_assignment_Source_assignment_assignmentGameMode_h__Script_assignment_2370611468{
	TEXT("/Script/assignment"),
	Z_CompiledInDeferFile_FID_unreal_assignment_Source_assignment_assignmentGameMode_h__Script_assignment_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_assignment_Source_assignment_assignmentGameMode_h__Script_assignment_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
