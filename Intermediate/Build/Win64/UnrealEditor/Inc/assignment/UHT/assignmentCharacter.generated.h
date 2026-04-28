// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "assignmentCharacter.h"

#ifdef ASSIGNMENT_assignmentCharacter_generated_h
#error "assignmentCharacter.generated.h already included, missing '#pragma once' in assignmentCharacter.h"
#endif
#define ASSIGNMENT_assignmentCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AassignmentCharacter *****************************************************
#define FID_unreal_assignment_Source_assignment_assignmentCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_AassignmentCharacter_Statics;
ASSIGNMENT_API UClass* Z_Construct_UClass_AassignmentCharacter_NoRegister();

#define FID_unreal_assignment_Source_assignment_assignmentCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAassignmentCharacter(); \
	friend struct ::Z_Construct_UClass_AassignmentCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSIGNMENT_API UClass* ::Z_Construct_UClass_AassignmentCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AassignmentCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/assignment"), Z_Construct_UClass_AassignmentCharacter_NoRegister) \
	DECLARE_SERIALIZER(AassignmentCharacter)


#define FID_unreal_assignment_Source_assignment_assignmentCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AassignmentCharacter(AassignmentCharacter&&) = delete; \
	AassignmentCharacter(const AassignmentCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AassignmentCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AassignmentCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AassignmentCharacter) \
	NO_API virtual ~AassignmentCharacter();


#define FID_unreal_assignment_Source_assignment_assignmentCharacter_h_21_PROLOG
#define FID_unreal_assignment_Source_assignment_assignmentCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_assignment_Source_assignment_assignmentCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_assignment_Source_assignment_assignmentCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_unreal_assignment_Source_assignment_assignmentCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AassignmentCharacter;

// ********** End Class AassignmentCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_assignment_Source_assignment_assignmentCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
