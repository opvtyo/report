// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "assignmentGameMode.h"

#ifdef ASSIGNMENT_assignmentGameMode_generated_h
#error "assignmentGameMode.generated.h already included, missing '#pragma once' in assignmentGameMode.h"
#endif
#define ASSIGNMENT_assignmentGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AassignmentGameMode ******************************************************
struct Z_Construct_UClass_AassignmentGameMode_Statics;
ASSIGNMENT_API UClass* Z_Construct_UClass_AassignmentGameMode_NoRegister();

#define FID_unreal_assignment_Source_assignment_assignmentGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAassignmentGameMode(); \
	friend struct ::Z_Construct_UClass_AassignmentGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSIGNMENT_API UClass* ::Z_Construct_UClass_AassignmentGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AassignmentGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/assignment"), Z_Construct_UClass_AassignmentGameMode_NoRegister) \
	DECLARE_SERIALIZER(AassignmentGameMode)


#define FID_unreal_assignment_Source_assignment_assignmentGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AassignmentGameMode(AassignmentGameMode&&) = delete; \
	AassignmentGameMode(const AassignmentGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AassignmentGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AassignmentGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AassignmentGameMode) \
	NO_API virtual ~AassignmentGameMode();


#define FID_unreal_assignment_Source_assignment_assignmentGameMode_h_12_PROLOG
#define FID_unreal_assignment_Source_assignment_assignmentGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_assignment_Source_assignment_assignmentGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_assignment_Source_assignment_assignmentGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AassignmentGameMode;

// ********** End Class AassignmentGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_assignment_Source_assignment_assignmentGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
