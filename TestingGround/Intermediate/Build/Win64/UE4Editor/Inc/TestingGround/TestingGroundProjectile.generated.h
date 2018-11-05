// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TESTINGGROUND_TestingGroundProjectile_generated_h
#error "TestingGroundProjectile.generated.h already included, missing '#pragma once' in TestingGroundProjectile.h"
#endif
#define TESTINGGROUND_TestingGroundProjectile_generated_h

#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestingGroundProjectile(); \
	friend struct Z_Construct_UClass_ATestingGroundProjectile_Statics; \
public: \
	DECLARE_CLASS(ATestingGroundProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestingGround"), NO_API) \
	DECLARE_SERIALIZER(ATestingGroundProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATestingGroundProjectile(); \
	friend struct Z_Construct_UClass_ATestingGroundProjectile_Statics; \
public: \
	DECLARE_CLASS(ATestingGroundProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestingGround"), NO_API) \
	DECLARE_SERIALIZER(ATestingGroundProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestingGroundProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestingGroundProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestingGroundProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestingGroundProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestingGroundProjectile(ATestingGroundProjectile&&); \
	NO_API ATestingGroundProjectile(const ATestingGroundProjectile&); \
public:


#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestingGroundProjectile(ATestingGroundProjectile&&); \
	NO_API ATestingGroundProjectile(const ATestingGroundProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestingGroundProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestingGroundProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestingGroundProjectile)


#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATestingGroundProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATestingGroundProjectile, ProjectileMovement); }


#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_9_PROLOG
#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_RPC_WRAPPERS \
	TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_INCLASS \
	TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_INCLASS_NO_PURE_DECLS \
	TestingGround_Source_TestingGround_TestingGroundProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestingGround_Source_TestingGround_TestingGroundProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
