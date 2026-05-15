// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RegisterToSimpleFoW.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRegisterToSimpleFoW() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIMPLEFOW_API UClass* Z_Construct_UClass_ASimpleFoWManager_NoRegister();
SIMPLEFOW_API UClass* Z_Construct_UClass_URegisterToSimpleFoW();
SIMPLEFOW_API UClass* Z_Construct_UClass_URegisterToSimpleFoW_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleFoW();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URegisterToSimpleFoW *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URegisterToSimpleFoW;
UClass* URegisterToSimpleFoW::GetPrivateStaticClass()
{
	using TClass = URegisterToSimpleFoW;
	if (!Z_Registration_Info_UClass_URegisterToSimpleFoW.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RegisterToSimpleFoW"),
			Z_Registration_Info_UClass_URegisterToSimpleFoW.InnerSingleton,
			StaticRegisterNativesURegisterToSimpleFoW,
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
	return Z_Registration_Info_UClass_URegisterToSimpleFoW.InnerSingleton;
}
UClass* Z_Construct_UClass_URegisterToSimpleFoW_NoRegister()
{
	return URegisterToSimpleFoW::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URegisterToSimpleFoW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RegisterToSimpleFoW.h" },
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Select the FOW Manager*/" },
#endif
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select the FOW Manager" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteUnFog_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Is the actor able to influence unfogged texels*/" },
#endif
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the actor able to influence unfogged texels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteFow_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Is the actor able to influence fog of war texels*/" },
#endif
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the actor able to influence fog of war texels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteTerraIncog_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Is the actor able to influence terra incognita texels*/" },
#endif
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the actor able to influence terra incognita texels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckActorTerraIncog_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Check if the actor is in terra incognita*/" },
#endif
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the actor is in terra incognita" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLineOfSight_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Should the actor reveal texels that are out of LOS*/" },
#endif
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should the actor reveal texels that are out of LOS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isActorInTerraIncog_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**/" },
#endif
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRange_MetaData[] = {
		{ "Category", "FogOfWar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*How far will the actor be able to see*/" },
#endif
		{ "ModuleRelativePath", "Public/RegisterToSimpleFoW.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far will the actor be able to see" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URegisterToSimpleFoW constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static void NewProp_WriteUnFog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WriteUnFog;
	static void NewProp_WriteFow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WriteFow;
	static void NewProp_WriteTerraIncog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WriteTerraIncog;
	static void NewProp_bCheckActorTerraIncog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckActorTerraIncog;
	static void NewProp_bUseLineOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLineOfSight;
	static void NewProp_isActorInTerraIncog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isActorInTerraIncog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SightRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URegisterToSimpleFoW constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URegisterToSimpleFoW>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URegisterToSimpleFoW_Statics

// ********** Begin Class URegisterToSimpleFoW Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegisterToSimpleFoW, Manager), Z_Construct_UClass_ASimpleFoWManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
void Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteUnFog_SetBit(void* Obj)
{
	((URegisterToSimpleFoW*)Obj)->WriteUnFog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteUnFog = { "WriteUnFog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URegisterToSimpleFoW), &Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteUnFog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteUnFog_MetaData), NewProp_WriteUnFog_MetaData) };
void Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteFow_SetBit(void* Obj)
{
	((URegisterToSimpleFoW*)Obj)->WriteFow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteFow = { "WriteFow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URegisterToSimpleFoW), &Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteFow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteFow_MetaData), NewProp_WriteFow_MetaData) };
void Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteTerraIncog_SetBit(void* Obj)
{
	((URegisterToSimpleFoW*)Obj)->WriteTerraIncog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteTerraIncog = { "WriteTerraIncog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URegisterToSimpleFoW), &Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteTerraIncog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteTerraIncog_MetaData), NewProp_WriteTerraIncog_MetaData) };
void Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_bCheckActorTerraIncog_SetBit(void* Obj)
{
	((URegisterToSimpleFoW*)Obj)->bCheckActorTerraIncog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_bCheckActorTerraIncog = { "bCheckActorTerraIncog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URegisterToSimpleFoW), &Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_bCheckActorTerraIncog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckActorTerraIncog_MetaData), NewProp_bCheckActorTerraIncog_MetaData) };
void Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_bUseLineOfSight_SetBit(void* Obj)
{
	((URegisterToSimpleFoW*)Obj)->bUseLineOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_bUseLineOfSight = { "bUseLineOfSight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URegisterToSimpleFoW), &Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_bUseLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLineOfSight_MetaData), NewProp_bUseLineOfSight_MetaData) };
void Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_isActorInTerraIncog_SetBit(void* Obj)
{
	((URegisterToSimpleFoW*)Obj)->isActorInTerraIncog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_isActorInTerraIncog = { "isActorInTerraIncog", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URegisterToSimpleFoW), &Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_isActorInTerraIncog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isActorInTerraIncog_MetaData), NewProp_isActorInTerraIncog_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_SightRange = { "SightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URegisterToSimpleFoW, SightRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRange_MetaData), NewProp_SightRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URegisterToSimpleFoW_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteUnFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteFow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_WriteTerraIncog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_bCheckActorTerraIncog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_bUseLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_isActorInTerraIncog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URegisterToSimpleFoW_Statics::NewProp_SightRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URegisterToSimpleFoW_Statics::PropPointers) < 2048);
// ********** End Class URegisterToSimpleFoW Property Definitions **********************************
UObject* (*const Z_Construct_UClass_URegisterToSimpleFoW_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleFoW,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URegisterToSimpleFoW_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URegisterToSimpleFoW_Statics::ClassParams = {
	&URegisterToSimpleFoW::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URegisterToSimpleFoW_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URegisterToSimpleFoW_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URegisterToSimpleFoW_Statics::Class_MetaDataParams), Z_Construct_UClass_URegisterToSimpleFoW_Statics::Class_MetaDataParams)
};
void URegisterToSimpleFoW::StaticRegisterNativesURegisterToSimpleFoW()
{
}
UClass* Z_Construct_UClass_URegisterToSimpleFoW()
{
	if (!Z_Registration_Info_UClass_URegisterToSimpleFoW.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URegisterToSimpleFoW.OuterSingleton, Z_Construct_UClass_URegisterToSimpleFoW_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URegisterToSimpleFoW.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URegisterToSimpleFoW);
URegisterToSimpleFoW::~URegisterToSimpleFoW() {}
// ********** End Class URegisterToSimpleFoW *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_RegisterToSimpleFoW_h__Script_SimpleFoW_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URegisterToSimpleFoW, URegisterToSimpleFoW::StaticClass, TEXT("URegisterToSimpleFoW"), &Z_Registration_Info_UClass_URegisterToSimpleFoW, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URegisterToSimpleFoW), 1960875678U) },
	};
}; // Z_CompiledInDeferFile_FID_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_RegisterToSimpleFoW_h__Script_SimpleFoW_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_RegisterToSimpleFoW_h__Script_SimpleFoW_2909146915{
	TEXT("/Script/SimpleFoW"),
	Z_CompiledInDeferFile_FID_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_RegisterToSimpleFoW_h__Script_SimpleFoW_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TwinStickShooter_Plugins_SimpleFoW_Source_SimpleFoW_Public_RegisterToSimpleFoW_h__Script_SimpleFoW_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
