// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimpleFoWManager.h"

#ifdef SIMPLEFOW_SimpleFoWManager_generated_h
#error "SimpleFoWManager.generated.h already included, missing '#pragma once' in SimpleFoWManager.h"
#endif
#define SIMPLEFOW_SimpleFoWManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTexture2D;

// ********** Begin Class ASimpleFoWManager ********************************************************
#define FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFowTextureUpdated_Implementation(UTexture2D* currentTexture, UTexture2D* lastTexture); \
	DECLARE_FUNCTION(execLogNames); \
	DECLARE_FUNCTION(execRegisterFowActor); \
	DECLARE_FUNCTION(execdebugTextureAccess); \
	DECLARE_FUNCTION(execOnFowTextureUpdated);


#define FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ASimpleFoWManager_Statics;
SIMPLEFOW_API UClass* Z_Construct_UClass_ASimpleFoWManager_NoRegister();

#define FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimpleFoWManager(); \
	friend struct ::Z_Construct_UClass_ASimpleFoWManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SIMPLEFOW_API UClass* ::Z_Construct_UClass_ASimpleFoWManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ASimpleFoWManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleFoW"), Z_Construct_UClass_ASimpleFoWManager_NoRegister) \
	DECLARE_SERIALIZER(ASimpleFoWManager)


#define FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASimpleFoWManager(ASimpleFoWManager&&) = delete; \
	ASimpleFoWManager(const ASimpleFoWManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimpleFoWManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimpleFoWManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimpleFoWManager)


#define FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_12_PROLOG
#define FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_CALLBACK_WRAPPERS \
	FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASimpleFoWManager;

// ********** End Class ASimpleFoWManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
