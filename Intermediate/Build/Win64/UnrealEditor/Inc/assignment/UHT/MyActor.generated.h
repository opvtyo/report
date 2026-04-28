// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyActor.h"

#ifdef ASSIGNMENT_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define ASSIGNMENT_MyActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyActor *****************************************************************
#define FID_unreal_assignment_Source_assignment_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTriggerEvent); \
	DECLARE_FUNCTION(execRunMoveTurn); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMove);


struct Z_Construct_UClass_AMyActor_Statics;
ASSIGNMENT_API UClass* Z_Construct_UClass_AMyActor_NoRegister();

#define FID_unreal_assignment_Source_assignment_MyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct ::Z_Construct_UClass_AMyActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSIGNMENT_API UClass* ::Z_Construct_UClass_AMyActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/assignment"), Z_Construct_UClass_AMyActor_NoRegister) \
	DECLARE_SERIALIZER(AMyActor)


#define FID_unreal_assignment_Source_assignment_MyActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyActor(AMyActor&&) = delete; \
	AMyActor(const AMyActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor) \
	NO_API virtual ~AMyActor();


#define FID_unreal_assignment_Source_assignment_MyActor_h_9_PROLOG
#define FID_unreal_assignment_Source_assignment_MyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_assignment_Source_assignment_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_assignment_Source_assignment_MyActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_unreal_assignment_Source_assignment_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyActor;

// ********** End Class AMyActor *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_assignment_Source_assignment_MyActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
