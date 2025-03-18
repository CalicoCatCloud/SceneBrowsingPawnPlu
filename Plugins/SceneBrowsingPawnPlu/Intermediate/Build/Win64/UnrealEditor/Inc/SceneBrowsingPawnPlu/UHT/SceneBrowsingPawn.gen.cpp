// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SceneBrowsingPawnPlu/Public/SceneBrowsingPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneBrowsingPawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
SCENEBROWSINGPAWNPLU_API UClass* Z_Construct_UClass_ASceneBrowsingPawn();
SCENEBROWSINGPAWNPLU_API UClass* Z_Construct_UClass_ASceneBrowsingPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_SceneBrowsingPawnPlu();
// End Cross Module References

// Begin Class ASceneBrowsingPawn Function AstaticMeshGetBox
struct Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics
{
	struct SceneBrowsingPawn_eventAstaticMeshGetBox_Parms
	{
		AStaticMeshActor* StaticMeshActor;
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GetBox" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventAstaticMeshGetBox_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventAstaticMeshGetBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::NewProp_StaticMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "AstaticMeshGetBox", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::SceneBrowsingPawn_eventAstaticMeshGetBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::SceneBrowsingPawn_eventAstaticMeshGetBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execAstaticMeshGetBox)
{
	P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=P_THIS->AstaticMeshGetBox(Z_Param_StaticMeshActor);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function AstaticMeshGetBox

// Begin Class ASceneBrowsingPawn Function FlyToBPointSpeed
struct Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics
{
	struct SceneBrowsingPawn_eventFlyToBPointSpeed_Parms
	{
		FVector BLocation;
		FRotator BRotator;
		int32 speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fly To BPoint Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xbb\x91\xe5\x8a\xa8\xe5\x88\xb0""B\xe7\x82\xb9\xe5\x9d\x90\xe6\xa0\x87\xe4\xbb\xa5\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\xba\xe5\x9f\xba\xe5\x87\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xbb\x91\xe5\x8a\xa8\xe5\x88\xb0""B\xe7\x82\xb9\xe5\x9d\x90\xe6\xa0\x87\xe4\xbb\xa5\xe9\x80\x9f\xe5\xba\xa6\xe4\xb8\xba\xe5\x9f\xba\xe5\x87\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BRotator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::NewProp_BLocation = { "BLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFlyToBPointSpeed_Parms, BLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::NewProp_BRotator = { "BRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFlyToBPointSpeed_Parms, BRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFlyToBPointSpeed_Parms, speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::NewProp_BLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::NewProp_BRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::NewProp_speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "FlyToBPointSpeed", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::SceneBrowsingPawn_eventFlyToBPointSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::SceneBrowsingPawn_eventFlyToBPointSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execFlyToBPointSpeed)
{
	P_GET_STRUCT(FVector,Z_Param_BLocation);
	P_GET_STRUCT(FRotator,Z_Param_BRotator);
	P_GET_PROPERTY(FIntProperty,Z_Param_speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlyToBPointSpeed(Z_Param_BLocation,Z_Param_BRotator,Z_Param_speed);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function FlyToBPointSpeed

// Begin Class ASceneBrowsingPawn Function FlyToBPointTime
struct Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics
{
	struct SceneBrowsingPawn_eventFlyToBPointTime_Parms
	{
		FVector BLocation;
		FRotator BRotator;
		int32 time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fly To BPoint Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xbb\x91\xe5\x8a\xa8\xe5\x88\xb0""B\xe7\x82\xb9\xe5\x9d\x90\xe6\xa0\x87\xe4\xbb\xa5\xe6\x97\xb6\xe9\x97\xb4\xe4\xb8\xba\xe5\x9f\xba\xe5\x87\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xbb\x91\xe5\x8a\xa8\xe5\x88\xb0""B\xe7\x82\xb9\xe5\x9d\x90\xe6\xa0\x87\xe4\xbb\xa5\xe6\x97\xb6\xe9\x97\xb4\xe4\xb8\xba\xe5\x9f\xba\xe5\x87\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BRotator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::NewProp_BLocation = { "BLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFlyToBPointTime_Parms, BLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::NewProp_BRotator = { "BRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFlyToBPointTime_Parms, BRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFlyToBPointTime_Parms, time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::NewProp_BLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::NewProp_BRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "FlyToBPointTime", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::SceneBrowsingPawn_eventFlyToBPointTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::SceneBrowsingPawn_eventFlyToBPointTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execFlyToBPointTime)
{
	P_GET_STRUCT(FVector,Z_Param_BLocation);
	P_GET_STRUCT(FRotator,Z_Param_BRotator);
	P_GET_PROPERTY(FIntProperty,Z_Param_time);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FlyToBPointTime(Z_Param_BLocation,Z_Param_BRotator,Z_Param_time);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function FlyToBPointTime

// Begin Class ASceneBrowsingPawn Function FocusViewportOnBox
struct Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics
{
	struct SceneBrowsingPawn_eventFocusViewportOnBox_Parms
	{
		FBox BoundingBox;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus Viewport On Box" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x99\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x9c\xa8\xe5\xb1\x8f\xe5\xb9\x95\xe5\xb1\x85\xe4\xb8\xad\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\xb1\x85\xe4\xb8\xad\xe5\x8d\xa0\xe6\xaf\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x99\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x9c\xa8\xe5\xb1\x8f\xe5\xb9\x95\xe5\xb1\x85\xe4\xb8\xad\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\xb1\x85\xe4\xb8\xad\xe5\x8d\xa0\xe6\xaf\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFocusViewportOnBox_Parms, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::NewProp_BoundingBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "FocusViewportOnBox", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::SceneBrowsingPawn_eventFocusViewportOnBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::SceneBrowsingPawn_eventFocusViewportOnBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execFocusViewportOnBox)
{
	P_GET_STRUCT(FBox,Z_Param_BoundingBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusViewportOnBox(Z_Param_BoundingBox);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function FocusViewportOnBox

// Begin Class ASceneBrowsingPawn Function FocusViewportOnBoxLeft
struct Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics
{
	struct SceneBrowsingPawn_eventFocusViewportOnBoxLeft_Parms
	{
		FBox BoundingBox;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus Viewport On Box Left" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x99\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x9c\xa8\xe5\xb1\x8f\xe5\xb9\x95\xe5\xb7\xa6\xe4\xbe\xa7\xe5\xb1\x85\xe4\xb8\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x99\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x9c\xa8\xe5\xb1\x8f\xe5\xb9\x95\xe5\xb7\xa6\xe4\xbe\xa7\xe5\xb1\x85\xe4\xb8\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFocusViewportOnBoxLeft_Parms, BoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::NewProp_BoundingBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "FocusViewportOnBoxLeft", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::SceneBrowsingPawn_eventFocusViewportOnBoxLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::SceneBrowsingPawn_eventFocusViewportOnBoxLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execFocusViewportOnBoxLeft)
{
	P_GET_STRUCT(FBox,Z_Param_BoundingBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusViewportOnBoxLeft(Z_Param_BoundingBox);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function FocusViewportOnBoxLeft

// Begin Class ASceneBrowsingPawn Function FocusViewportOnPosition
struct Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics
{
	struct SceneBrowsingPawn_eventFocusViewportOnPosition_Parms
	{
		FVector Position;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus View port On Position" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x99\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe7\x82\xb9\xe4\xbd\xbf\xe8\xaf\xa5\xe7\x82\xb9\xe5\x86\x8d\xe5\xb1\x8f\xe5\xb9\x95\xe5\x89\xa7\xe4\xb8\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x99\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe7\x82\xb9\xe4\xbd\xbf\xe8\xaf\xa5\xe7\x82\xb9\xe5\x86\x8d\xe5\xb1\x8f\xe5\xb9\x95\xe5\x89\xa7\xe4\xb8\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFocusViewportOnPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventFocusViewportOnPosition_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "FocusViewportOnPosition", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::SceneBrowsingPawn_eventFocusViewportOnPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::SceneBrowsingPawn_eventFocusViewportOnPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execFocusViewportOnPosition)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FocusViewportOnPosition(Z_Param_Position,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function FocusViewportOnPosition

// Begin Class ASceneBrowsingPawn Function GetMoveSpeed
struct Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics
{
	struct SceneBrowsingPawn_eventGetMoveSpeed_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GetSpeed" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "GetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::SceneBrowsingPawn_eventGetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::SceneBrowsingPawn_eventGetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execGetMoveSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMoveSpeed();
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function GetMoveSpeed

// Begin Class ASceneBrowsingPawn Function LoadLocation
struct Z_Construct_UFunction_ASceneBrowsingPawn_LoadLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Load Location" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x8e\xe6\x9c\xac\xe5\x9c\xb0\xe4\xb8\xad\xe8\xaf\xbb\xe5\x8f\x96\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe6\x9c\xac\xe5\x9c\xb0\xe4\xb8\xad\xe8\xaf\xbb\xe5\x8f\x96" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_LoadLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "LoadLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_LoadLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_LoadLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_LoadLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_LoadLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execLoadLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadLocation();
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function LoadLocation

// Begin Class ASceneBrowsingPawn Function RotationRoundPoint
struct Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics
{
	struct SceneBrowsingPawn_eventRotationRoundPoint_Parms
	{
		float AngX;
		float AngY;
		int32 leng;
		FVector CenterPoint;
		float RunSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rotation Round Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief\n\x09 * @param AngX \xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e\xe5\x9c\x86\xe5\xbf\x83\xe7\x9a\x84X\xe8\xa7\x92\xe5\xba\xa6\n\x09 * @param AngY \xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e\xe5\x9c\x86\xe5\xbf\x83\xe7\x9a\x84Y\xe8\xa7\x92\xe5\xba\xa6\n\x09 * @param leng \xe8\xb7\x9d\xe7\xa6\xbb\xe5\x9c\x86\xe5\xbf\x83\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb\n\x09 * @param CenterPoint \xe5\x9c\x86\xe5\xbf\x83\n\x09 * @param RunSpeed \xe6\x97\x8b\xe8\xbd\xac\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief\n@param AngX \xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e\xe5\x9c\x86\xe5\xbf\x83\xe7\x9a\x84X\xe8\xa7\x92\xe5\xba\xa6\n@param AngY \xe7\x9b\xb8\xe5\xaf\xb9\xe4\xba\x8e\xe5\x9c\x86\xe5\xbf\x83\xe7\x9a\x84Y\xe8\xa7\x92\xe5\xba\xa6\n@param leng \xe8\xb7\x9d\xe7\xa6\xbb\xe5\x9c\x86\xe5\xbf\x83\xe7\x9a\x84\xe8\xb7\x9d\xe7\xa6\xbb\n@param CenterPoint \xe5\x9c\x86\xe5\xbf\x83\n@param RunSpeed \xe6\x97\x8b\xe8\xbd\xac\xe7\x9a\x84\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_leng;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_AngX = { "AngX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventRotationRoundPoint_Parms, AngX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_AngY = { "AngY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventRotationRoundPoint_Parms, AngY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_leng = { "leng", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventRotationRoundPoint_Parms, leng), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_CenterPoint = { "CenterPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventRotationRoundPoint_Parms, CenterPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventRotationRoundPoint_Parms, RunSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_AngX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_AngY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_leng,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_CenterPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::NewProp_RunSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "RotationRoundPoint", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::SceneBrowsingPawn_eventRotationRoundPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::SceneBrowsingPawn_eventRotationRoundPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execRotationRoundPoint)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngY);
	P_GET_PROPERTY(FIntProperty,Z_Param_leng);
	P_GET_STRUCT(FVector,Z_Param_CenterPoint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RunSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotationRoundPoint(Z_Param_AngX,Z_Param_AngY,Z_Param_leng,Z_Param_CenterPoint,Z_Param_RunSpeed);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function RotationRoundPoint

// Begin Class ASceneBrowsingPawn Function SaveLocationRotation
struct Z_Construct_UFunction_ASceneBrowsingPawn_SaveLocationRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save Location&Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_SaveLocationRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "SaveLocationRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SaveLocationRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_SaveLocationRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_SaveLocationRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_SaveLocationRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execSaveLocationRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveLocationRotation();
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function SaveLocationRotation

// Begin Class ASceneBrowsingPawn Function SceneExplorationSpeed
struct Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics
{
	struct SceneBrowsingPawn_eventSceneExplorationSpeed_Parms
	{
		TArray<FVector> InBLocationS;
		TArray<FRotator> InBRotatorS;
		TArray<int32> Inspeeds;
		bool Loop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scene Exploration Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief\n\x09 * @param InBLocationS \xe5\x9d\x90\xe6\xa0\x87\xe6\x95\xb0\xe7\xbb\x84\n\x09 * @param InBRotatorS \xe8\xa7\x92\xe5\xba\xa6\xe6\x95\xb0\xe7\xbb\x84\n\x09 * @param Inspeeds \xe9\x80\x9f\xe5\xba\xa6\xe6\x95\xb0\xe7\xbb\x84\n\x09 * @param Loop \xe6\x98\xaf\xe5\x90\xa6\xe5\xbe\xaa\xe7\x8e\xaf\xe6\x92\xad\xe6\x94\xbe\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief\n@param InBLocationS \xe5\x9d\x90\xe6\xa0\x87\xe6\x95\xb0\xe7\xbb\x84\n@param InBRotatorS \xe8\xa7\x92\xe5\xba\xa6\xe6\x95\xb0\xe7\xbb\x84\n@param Inspeeds \xe9\x80\x9f\xe5\xba\xa6\xe6\x95\xb0\xe7\xbb\x84\n@param Loop \xe6\x98\xaf\xe5\x90\xa6\xe5\xbe\xaa\xe7\x8e\xaf\xe6\x92\xad\xe6\x94\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBLocationS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBLocationS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBRotatorS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBRotatorS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Inspeeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inspeeds;
	static void NewProp_Loop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Loop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_InBLocationS_Inner = { "InBLocationS", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_InBLocationS = { "InBLocationS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventSceneExplorationSpeed_Parms, InBLocationS), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_InBRotatorS_Inner = { "InBRotatorS", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_InBRotatorS = { "InBRotatorS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventSceneExplorationSpeed_Parms, InBRotatorS), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_Inspeeds_Inner = { "Inspeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_Inspeeds = { "Inspeeds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventSceneExplorationSpeed_Parms, Inspeeds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_Loop_SetBit(void* Obj)
{
	((SceneBrowsingPawn_eventSceneExplorationSpeed_Parms*)Obj)->Loop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SceneBrowsingPawn_eventSceneExplorationSpeed_Parms), &Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_InBLocationS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_InBLocationS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_InBRotatorS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_InBRotatorS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_Inspeeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_Inspeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::NewProp_Loop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "SceneExplorationSpeed", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::SceneBrowsingPawn_eventSceneExplorationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::SceneBrowsingPawn_eventSceneExplorationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execSceneExplorationSpeed)
{
	P_GET_TARRAY(FVector,Z_Param_InBLocationS);
	P_GET_TARRAY(FRotator,Z_Param_InBRotatorS);
	P_GET_TARRAY(int32,Z_Param_Inspeeds);
	P_GET_UBOOL(Z_Param_Loop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SceneExplorationSpeed(Z_Param_InBLocationS,Z_Param_InBRotatorS,Z_Param_Inspeeds,Z_Param_Loop);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function SceneExplorationSpeed

// Begin Class ASceneBrowsingPawn Function SceneExplorationTime
struct Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics
{
	struct SceneBrowsingPawn_eventSceneExplorationTime_Parms
	{
		TArray<FVector> InBLocationS;
		TArray<FRotator> InBRotatorS;
		TArray<int32> Intimes;
		bool Loop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scene Exploration Time" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBLocationS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBLocationS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBRotatorS_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBRotatorS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Intimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Intimes;
	static void NewProp_Loop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Loop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_InBLocationS_Inner = { "InBLocationS", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_InBLocationS = { "InBLocationS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventSceneExplorationTime_Parms, InBLocationS), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_InBRotatorS_Inner = { "InBRotatorS", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_InBRotatorS = { "InBRotatorS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventSceneExplorationTime_Parms, InBRotatorS), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_Intimes_Inner = { "Intimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_Intimes = { "Intimes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventSceneExplorationTime_Parms, Intimes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_Loop_SetBit(void* Obj)
{
	((SceneBrowsingPawn_eventSceneExplorationTime_Parms*)Obj)->Loop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SceneBrowsingPawn_eventSceneExplorationTime_Parms), &Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_InBLocationS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_InBLocationS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_InBRotatorS_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_InBRotatorS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_Intimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_Intimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::NewProp_Loop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "SceneExplorationTime", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::SceneBrowsingPawn_eventSceneExplorationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::SceneBrowsingPawn_eventSceneExplorationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execSceneExplorationTime)
{
	P_GET_TARRAY(FVector,Z_Param_InBLocationS);
	P_GET_TARRAY(FRotator,Z_Param_InBRotatorS);
	P_GET_TARRAY(int32,Z_Param_Intimes);
	P_GET_UBOOL(Z_Param_Loop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SceneExplorationTime(Z_Param_InBLocationS,Z_Param_InBRotatorS,Z_Param_Intimes,Z_Param_Loop);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function SceneExplorationTime

// Begin Class ASceneBrowsingPawn Function SetMoveSpeed
struct Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics
{
	struct SceneBrowsingPawn_eventSetMoveSpeed_Parms
	{
		int32 Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetSpeed" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneBrowsingPawn_eventSetMoveSpeed_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "SetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::SceneBrowsingPawn_eventSetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::SceneBrowsingPawn_eventSetMoveSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execSetMoveSpeed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoveSpeed(Z_Param_Speed);
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function SetMoveSpeed

// Begin Class ASceneBrowsingPawn Function StopFly
struct Z_Construct_UFunction_ASceneBrowsingPawn_StopFly_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stop Fly" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x81\x9c\xe6\xad\xa2\xe9\xa3\x9e\xe7\xbf\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe9\xa3\x9e\xe7\xbf\x94" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_StopFly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "StopFly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_StopFly_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_StopFly_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_StopFly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_StopFly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execStopFly)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFly();
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function StopFly

// Begin Class ASceneBrowsingPawn Function StopRotationRoundPoint
struct Z_Construct_UFunction_ASceneBrowsingPawn_StopRotationRoundPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stop Rotation Round Point" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x81\x9c\xe6\xad\xa2\xe8\xbd\xac\xe5\x9c\x88\xe5\x9c\x88\n" },
#endif
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe8\xbd\xac\xe5\x9c\x88\xe5\x9c\x88" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneBrowsingPawn_StopRotationRoundPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneBrowsingPawn, nullptr, "StopRotationRoundPoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneBrowsingPawn_StopRotationRoundPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASceneBrowsingPawn_StopRotationRoundPoint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASceneBrowsingPawn_StopRotationRoundPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneBrowsingPawn_StopRotationRoundPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASceneBrowsingPawn::execStopRotationRoundPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRotationRoundPoint();
	P_NATIVE_END;
}
// End Class ASceneBrowsingPawn Function StopRotationRoundPoint

// Begin Class ASceneBrowsingPawn
void ASceneBrowsingPawn::StaticRegisterNativesASceneBrowsingPawn()
{
	UClass* Class = ASceneBrowsingPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AstaticMeshGetBox", &ASceneBrowsingPawn::execAstaticMeshGetBox },
		{ "FlyToBPointSpeed", &ASceneBrowsingPawn::execFlyToBPointSpeed },
		{ "FlyToBPointTime", &ASceneBrowsingPawn::execFlyToBPointTime },
		{ "FocusViewportOnBox", &ASceneBrowsingPawn::execFocusViewportOnBox },
		{ "FocusViewportOnBoxLeft", &ASceneBrowsingPawn::execFocusViewportOnBoxLeft },
		{ "FocusViewportOnPosition", &ASceneBrowsingPawn::execFocusViewportOnPosition },
		{ "GetMoveSpeed", &ASceneBrowsingPawn::execGetMoveSpeed },
		{ "LoadLocation", &ASceneBrowsingPawn::execLoadLocation },
		{ "RotationRoundPoint", &ASceneBrowsingPawn::execRotationRoundPoint },
		{ "SaveLocationRotation", &ASceneBrowsingPawn::execSaveLocationRotation },
		{ "SceneExplorationSpeed", &ASceneBrowsingPawn::execSceneExplorationSpeed },
		{ "SceneExplorationTime", &ASceneBrowsingPawn::execSceneExplorationTime },
		{ "SetMoveSpeed", &ASceneBrowsingPawn::execSetMoveSpeed },
		{ "StopFly", &ASceneBrowsingPawn::execStopFly },
		{ "StopRotationRoundPoint", &ASceneBrowsingPawn::execStopRotationRoundPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASceneBrowsingPawn);
UClass* Z_Construct_UClass_ASceneBrowsingPawn_NoRegister()
{
	return ASceneBrowsingPawn::StaticClass();
}
struct Z_Construct_UClass_ASceneBrowsingPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SceneBrowsingPawn.h" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Property" },
		{ "DisplayName", "Default Speed" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMoveSpeed_MetaData[] = {
		{ "Category", "Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "DisplayName", "Max Speed" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMoveSpeed_MetaData[] = {
		{ "Category", "Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "DisplayName", "Min Speed" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointRotator_MetaData[] = {
		{ "Category", "Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xb0\x8f\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "DisplayName", "Open Point Rotator" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe7\x9a\x84\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenMoveSleep_MetaData[] = {
		{ "Category", "Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------\xe4\xb8\x8b\xe9\x9d\xa2\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\xe6\x98\xaf\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xbc\x93\xe5\x86\xb2\xe7\x9a\x84\xe5\x8a\x9f\xe8\x83\xbd------------------------------------\n" },
#endif
		{ "DisplayName", "Moveing Buffer" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------\xe4\xb8\x8b\xe9\x9d\xa2\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\xe6\x98\xaf\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xbc\x93\xe5\x86\xb2\xe7\x9a\x84\xe5\x8a\x9f\xe8\x83\xbd------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTime_MetaData[] = {
		{ "Category", "Property" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x80\xe5\x90\xaf\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xbc\x93\xe5\x86\xb2\xe5\x8a\x9f\xe8\x83\xbd\n" },
#endif
		{ "DisplayName", "Moveing Buffer Time" },
		{ "ModuleRelativePath", "Public/SceneBrowsingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\x90\xaf\xe7\xa7\xbb\xe5\x8a\xa8\xe7\xbc\x93\xe5\x86\xb2\xe5\x8a\x9f\xe8\x83\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMoveSpeed;
	static void NewProp_PointRotator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PointRotator;
	static void NewProp_OpenMoveSleep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OpenMoveSleep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_AstaticMeshGetBox, "AstaticMeshGetBox" }, // 2190804102
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointSpeed, "FlyToBPointSpeed" }, // 323616200
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_FlyToBPointTime, "FlyToBPointTime" }, // 1746030728
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBox, "FocusViewportOnBox" }, // 2970742666
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnBoxLeft, "FocusViewportOnBoxLeft" }, // 3769773336
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_FocusViewportOnPosition, "FocusViewportOnPosition" }, // 400096288
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_GetMoveSpeed, "GetMoveSpeed" }, // 1760341523
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_LoadLocation, "LoadLocation" }, // 869093135
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_RotationRoundPoint, "RotationRoundPoint" }, // 2334029368
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_SaveLocationRotation, "SaveLocationRotation" }, // 3713055304
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationSpeed, "SceneExplorationSpeed" }, // 2359584853
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_SceneExplorationTime, "SceneExplorationTime" }, // 1181807066
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_SetMoveSpeed, "SetMoveSpeed" }, // 2811132134
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_StopFly, "StopFly" }, // 1343635204
		{ &Z_Construct_UFunction_ASceneBrowsingPawn_StopRotationRoundPoint, "StopRotationRoundPoint" }, // 1630770102
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneBrowsingPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASceneBrowsingPawn, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_MaxMoveSpeed = { "MaxMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASceneBrowsingPawn, MaxMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMoveSpeed_MetaData), NewProp_MaxMoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_MinMoveSpeed = { "MinMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASceneBrowsingPawn, MinMoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMoveSpeed_MetaData), NewProp_MinMoveSpeed_MetaData) };
void Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_PointRotator_SetBit(void* Obj)
{
	((ASceneBrowsingPawn*)Obj)->PointRotator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_PointRotator = { "PointRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASceneBrowsingPawn), &Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_PointRotator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointRotator_MetaData), NewProp_PointRotator_MetaData) };
void Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_OpenMoveSleep_SetBit(void* Obj)
{
	((ASceneBrowsingPawn*)Obj)->OpenMoveSleep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_OpenMoveSleep = { "OpenMoveSleep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASceneBrowsingPawn), &Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_OpenMoveSleep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenMoveSleep_MetaData), NewProp_OpenMoveSleep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_MoveTime = { "MoveTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASceneBrowsingPawn, MoveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTime_MetaData), NewProp_MoveTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneBrowsingPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_MaxMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_MinMoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_PointRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_OpenMoveSleep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneBrowsingPawn_Statics::NewProp_MoveTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneBrowsingPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASceneBrowsingPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_SceneBrowsingPawnPlu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneBrowsingPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASceneBrowsingPawn_Statics::ClassParams = {
	&ASceneBrowsingPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASceneBrowsingPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASceneBrowsingPawn_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASceneBrowsingPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASceneBrowsingPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASceneBrowsingPawn()
{
	if (!Z_Registration_Info_UClass_ASceneBrowsingPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASceneBrowsingPawn.OuterSingleton, Z_Construct_UClass_ASceneBrowsingPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASceneBrowsingPawn.OuterSingleton;
}
template<> SCENEBROWSINGPAWNPLU_API UClass* StaticClass<ASceneBrowsingPawn>()
{
	return ASceneBrowsingPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneBrowsingPawn);
ASceneBrowsingPawn::~ASceneBrowsingPawn() {}
// End Class ASceneBrowsingPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASceneBrowsingPawn, ASceneBrowsingPawn::StaticClass, TEXT("ASceneBrowsingPawn"), &Z_Registration_Info_UClass_ASceneBrowsingPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASceneBrowsingPawn), 3602028669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_1385325008(TEXT("/Script/SceneBrowsingPawnPlu"),
	Z_CompiledInDeferFile_FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
