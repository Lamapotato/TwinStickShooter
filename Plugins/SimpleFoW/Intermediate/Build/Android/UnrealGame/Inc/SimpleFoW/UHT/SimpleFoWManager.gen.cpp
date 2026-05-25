// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleFoWManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSimpleFoWManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SIMPLEFOW_API UClass* Z_Construct_UClass_ASimpleFoWManager();
SIMPLEFOW_API UClass* Z_Construct_UClass_ASimpleFoWManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleFoW();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASimpleFoWManager Function debugTextureAccess ****************************
struct Z_Construct_UFunction_ASimpleFoWManager_debugTextureAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FogOfWar" },
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function debugTextureAccess constinit property declarations ********************
// ********** End Function debugTextureAccess constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleFoWManager_debugTextureAccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleFoWManager, nullptr, "debugTextureAccess", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleFoWManager_debugTextureAccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleFoWManager_debugTextureAccess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASimpleFoWManager_debugTextureAccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleFoWManager_debugTextureAccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleFoWManager::execdebugTextureAccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->debugTextureAccess();
	P_NATIVE_END;
}
// ********** End Class ASimpleFoWManager Function debugTextureAccess ******************************

// ********** Begin Class ASimpleFoWManager Function LogNames **************************************
struct Z_Construct_UFunction_ASimpleFoWManager_LogNames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Temp method for logging an actor components names\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temp method for logging an actor components names" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LogNames constinit property declarations ******************************
// ********** End Function LogNames constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleFoWManager_LogNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleFoWManager, nullptr, "LogNames", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleFoWManager_LogNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleFoWManager_LogNames_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASimpleFoWManager_LogNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleFoWManager_LogNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleFoWManager::execLogNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogNames();
	P_NATIVE_END;
}
// ********** End Class ASimpleFoWManager Function LogNames ****************************************

// ********** Begin Class ASimpleFoWManager Function OnFowTextureUpdated ***************************
struct SimpleFoWManager_eventOnFowTextureUpdated_Parms
{
	UTexture2D* currentTexture;
	UTexture2D* lastTexture;
};
static FName NAME_ASimpleFoWManager_OnFowTextureUpdated = FName(TEXT("OnFowTextureUpdated"));
void ASimpleFoWManager::OnFowTextureUpdated(UTexture2D* currentTexture, UTexture2D* lastTexture)
{
	UFunction* Func = FindFunctionChecked(NAME_ASimpleFoWManager_OnFowTextureUpdated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SimpleFoWManager_eventOnFowTextureUpdated_Parms Parms;
		Parms.currentTexture=currentTexture;
		Parms.lastTexture=lastTexture;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnFowTextureUpdated_Implementation(currentTexture, lastTexture);
	}
}
struct Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Triggers a update in the blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers a update in the blueprint" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnFowTextureUpdated constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_currentTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lastTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnFowTextureUpdated constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnFowTextureUpdated Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::NewProp_currentTexture = { "currentTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFoWManager_eventOnFowTextureUpdated_Parms, currentTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::NewProp_lastTexture = { "lastTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFoWManager_eventOnFowTextureUpdated_Parms, lastTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::NewProp_currentTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::NewProp_lastTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::PropPointers) < 2048);
// ********** End Function OnFowTextureUpdated Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleFoWManager, nullptr, "OnFowTextureUpdated", 	Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::PropPointers), 
sizeof(SimpleFoWManager_eventOnFowTextureUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SimpleFoWManager_eventOnFowTextureUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleFoWManager::execOnFowTextureUpdated)
{
	P_GET_OBJECT(UTexture2D,Z_Param_currentTexture);
	P_GET_OBJECT(UTexture2D,Z_Param_lastTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFowTextureUpdated_Implementation(Z_Param_currentTexture,Z_Param_lastTexture);
	P_NATIVE_END;
}
// ********** End Class ASimpleFoWManager Function OnFowTextureUpdated *****************************

// ********** Begin Class ASimpleFoWManager Function RegisterFowActor ******************************
struct Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics
{
	struct SimpleFoWManager_eventRegisterFowActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register an actor to influence the FOW-texture\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register an actor to influence the FOW-texture" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterFowActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterFowActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterFowActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleFoWManager_eventRegisterFowActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::PropPointers) < 2048);
// ********** End Function RegisterFowActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASimpleFoWManager, nullptr, "RegisterFowActor", 	Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::SimpleFoWManager_eventRegisterFowActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::SimpleFoWManager_eventRegisterFowActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimpleFoWManager::execRegisterFowActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterFowActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class ASimpleFoWManager Function RegisterFowActor ********************************

// ********** Begin Class ASimpleFoWManager ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASimpleFoWManager;
UClass* ASimpleFoWManager::GetPrivateStaticClass()
{
	using TClass = ASimpleFoWManager;
	if (!Z_Registration_Info_UClass_ASimpleFoWManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SimpleFoWManager"),
			Z_Registration_Info_UClass_ASimpleFoWManager.InnerSingleton,
			StaticRegisterNativesASimpleFoWManager,
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
	return Z_Registration_Info_UClass_ASimpleFoWManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ASimpleFoWManager_NoRegister()
{
	return ASimpleFoWManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASimpleFoWManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleFoWManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerMeter_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The number of samples per 100 unreal units\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of samples per 100 unreal units" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnfogColor_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FColor\x09""ColorOne = FColor((uint8)255, (uint8)255, (uint8)255, 255);\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FColor  ColorOne = FColor((uint8)255, (uint8)255, (uint8)255, 255);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FowMaskColor_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTextureFile_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureInFile_MetaData[] = {
		{ "Category", "FogOfWar" },
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDoneBlending_MetaData[] = {
		{ "Category", "SimpleFoWManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If the last texture blending is done\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the last texture blending is done" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlurEnabled_MetaData[] = {
		{ "Category", "SimpleFoWManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Should we blur? It takes up quite a lot of CPU time...\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we blur? It takes up quite a lot of CPU time..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnfoggedData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Array containing what parts of the map we've unveiled.\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array containing what parts of the map we've unveiled." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBlurData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Temp array for horizontal blur pass\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temp array for horizontal blur pass" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Our texture data (result of vertical blur pass)\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our texture data (result of vertical blur pass)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFrameTextureData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Our texture data from the last frame\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our texture data from the last frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureInFileData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOWTimeArray_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Time Array\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Array" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOWArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFowTimerEnabled_MetaData[] = {
		{ "Category", "SimpleFoWManager" },
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FowTimeLimit_MetaData[] = {
		{ "Category", "SimpleFoWManager" },
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blurKernel_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Blur kernel\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blur kernel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FowActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Store the actors that will be unveiling the FOW-texture.\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Store the actors that will be unveiling the FOW-texture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOWTexture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Our dynamically updated texture\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our dynamically updated texture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFOWTexture_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Texture from last update. We blend between the two to do a smooth unveiling of newly discovered areas.\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Texture from last update. We blend between the two to do a smooth unveiling of newly discovered areas." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is for accessing the actor component \"RegisterToFow_BP\"\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleFoWManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is for accessing the actor component \"RegisterToFow_BP\"" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASimpleFoWManager constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplesPerMeter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UnfogColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FowMaskColor;
	static void NewProp_bUseTextureFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTextureFile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureInFile;
	static void NewProp_bIsDoneBlending_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDoneBlending;
	static void NewProp_bIsBlurEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlurEnabled;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UnfoggedData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnfoggedData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalBlurData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HorizontalBlurData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastFrameTextureData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastFrameTextureData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureInFileData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureInFileData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOWTimeArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FOWTimeArray;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FOWArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FOWArray;
	static void NewProp_bIsFowTimerEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFowTimerEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FowTimeLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_blurKernel_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_blurKernel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FowActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FowActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FOWTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastFOWTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASimpleFoWManager constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("debugTextureAccess"), .Pointer = &ASimpleFoWManager::execdebugTextureAccess },
		{ .NameUTF8 = UTF8TEXT("LogNames"), .Pointer = &ASimpleFoWManager::execLogNames },
		{ .NameUTF8 = UTF8TEXT("OnFowTextureUpdated"), .Pointer = &ASimpleFoWManager::execOnFowTextureUpdated },
		{ .NameUTF8 = UTF8TEXT("RegisterFowActor"), .Pointer = &ASimpleFoWManager::execRegisterFowActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimpleFoWManager_debugTextureAccess, "debugTextureAccess" }, // 3867673312
		{ &Z_Construct_UFunction_ASimpleFoWManager_LogNames, "LogNames" }, // 3844286951
		{ &Z_Construct_UFunction_ASimpleFoWManager_OnFowTextureUpdated, "OnFowTextureUpdated" }, // 453777149
		{ &Z_Construct_UFunction_ASimpleFoWManager_RegisterFowActor, "RegisterFowActor" }, // 387544616
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleFoWManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASimpleFoWManager_Statics

// ********** Begin Class ASimpleFoWManager Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_SamplesPerMeter = { "SamplesPerMeter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, SamplesPerMeter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerMeter_MetaData), NewProp_SamplesPerMeter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_UnfogColor = { "UnfogColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, UnfogColor), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnfogColor_MetaData), NewProp_UnfogColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FowMaskColor = { "FowMaskColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, FowMaskColor), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FowMaskColor_MetaData), NewProp_FowMaskColor_MetaData) };
void Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bUseTextureFile_SetBit(void* Obj)
{
	((ASimpleFoWManager*)Obj)->bUseTextureFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bUseTextureFile = { "bUseTextureFile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASimpleFoWManager), &Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bUseTextureFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTextureFile_MetaData), NewProp_bUseTextureFile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureInFile = { "TextureInFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, TextureInFile), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureInFile_MetaData), NewProp_TextureInFile_MetaData) };
void Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsDoneBlending_SetBit(void* Obj)
{
	((ASimpleFoWManager*)Obj)->bIsDoneBlending = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsDoneBlending = { "bIsDoneBlending", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASimpleFoWManager), &Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsDoneBlending_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDoneBlending_MetaData), NewProp_bIsDoneBlending_MetaData) };
void Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsBlurEnabled_SetBit(void* Obj)
{
	((ASimpleFoWManager*)Obj)->bIsBlurEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsBlurEnabled = { "bIsBlurEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASimpleFoWManager), &Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsBlurEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlurEnabled_MetaData), NewProp_bIsBlurEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_UnfoggedData_Inner = { "UnfoggedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_UnfoggedData = { "UnfoggedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, UnfoggedData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnfoggedData_MetaData), NewProp_UnfoggedData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_HorizontalBlurData_Inner = { "HorizontalBlurData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_HorizontalBlurData = { "HorizontalBlurData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, HorizontalBlurData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBlurData_MetaData), NewProp_HorizontalBlurData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureData_Inner = { "TextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, TextureData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureData_MetaData), NewProp_TextureData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_LastFrameTextureData_Inner = { "LastFrameTextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_LastFrameTextureData = { "LastFrameTextureData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, LastFrameTextureData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFrameTextureData_MetaData), NewProp_LastFrameTextureData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureInFileData_Inner = { "TextureInFileData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureInFileData = { "TextureInFileData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, TextureInFileData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureInFileData_MetaData), NewProp_TextureInFileData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWTimeArray_Inner = { "FOWTimeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWTimeArray = { "FOWTimeArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, FOWTimeArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOWTimeArray_MetaData), NewProp_FOWTimeArray_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWArray_Inner = { "FOWArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWArray = { "FOWArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, FOWArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOWArray_MetaData), NewProp_FOWArray_MetaData) };
void Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsFowTimerEnabled_SetBit(void* Obj)
{
	((ASimpleFoWManager*)Obj)->bIsFowTimerEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsFowTimerEnabled = { "bIsFowTimerEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASimpleFoWManager), &Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsFowTimerEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFowTimerEnabled_MetaData), NewProp_bIsFowTimerEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FowTimeLimit = { "FowTimeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, FowTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FowTimeLimit_MetaData), NewProp_FowTimeLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_blurKernel_Inner = { "blurKernel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_blurKernel = { "blurKernel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, blurKernel), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blurKernel_MetaData), NewProp_blurKernel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FowActors_Inner = { "FowActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FowActors = { "FowActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, FowActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FowActors_MetaData), NewProp_FowActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWTexture = { "FOWTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, FOWTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOWTexture_MetaData), NewProp_FOWTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_LastFOWTexture = { "LastFOWTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, LastFOWTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFOWTexture_MetaData), NewProp_LastFOWTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_ActorComp = { "ActorComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimpleFoWManager, ActorComp), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComp_MetaData), NewProp_ActorComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimpleFoWManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_SamplesPerMeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_UnfogColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FowMaskColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bUseTextureFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureInFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsDoneBlending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsBlurEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_UnfoggedData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_UnfoggedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_HorizontalBlurData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_HorizontalBlurData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_LastFrameTextureData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_LastFrameTextureData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureInFileData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_TextureInFileData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWTimeArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWTimeArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_bIsFowTimerEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FowTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_blurKernel_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_blurKernel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FowActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FowActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_FOWTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_LastFOWTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimpleFoWManager_Statics::NewProp_ActorComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleFoWManager_Statics::PropPointers) < 2048);
// ********** End Class ASimpleFoWManager Property Definitions *************************************
UObject* (*const Z_Construct_UClass_ASimpleFoWManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleFoW,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleFoWManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimpleFoWManager_Statics::ClassParams = {
	&ASimpleFoWManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASimpleFoWManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleFoWManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleFoWManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimpleFoWManager_Statics::Class_MetaDataParams)
};
void ASimpleFoWManager::StaticRegisterNativesASimpleFoWManager()
{
	UClass* Class = ASimpleFoWManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASimpleFoWManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASimpleFoWManager()
{
	if (!Z_Registration_Info_UClass_ASimpleFoWManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimpleFoWManager.OuterSingleton, Z_Construct_UClass_ASimpleFoWManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimpleFoWManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASimpleFoWManager);
// ********** End Class ASimpleFoWManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h__Script_SimpleFoW_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimpleFoWManager, ASimpleFoWManager::StaticClass, TEXT("ASimpleFoWManager"), &Z_Registration_Info_UClass_ASimpleFoWManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimpleFoWManager), 972764337U) },
	};
}; // Z_CompiledInDeferFile_FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h__Script_SimpleFoW_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h__Script_SimpleFoW_589612474{
	TEXT("/Script/SimpleFoW"),
	Z_CompiledInDeferFile_FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h__Script_SimpleFoW_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_git_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_SimpleFoWManager_h__Script_SimpleFoW_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
