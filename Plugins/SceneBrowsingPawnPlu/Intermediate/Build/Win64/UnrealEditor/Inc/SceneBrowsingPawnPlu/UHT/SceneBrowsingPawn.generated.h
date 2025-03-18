// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneBrowsingPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStaticMeshActor;
#ifdef SCENEBROWSINGPAWNPLU_SceneBrowsingPawn_generated_h
#error "SceneBrowsingPawn.generated.h already included, missing '#pragma once' in SceneBrowsingPawn.h"
#endif
#define SCENEBROWSINGPAWNPLU_SceneBrowsingPawn_generated_h

#define FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMoveSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execAstaticMeshGetBox); \
	DECLARE_FUNCTION(execLoadLocation); \
	DECLARE_FUNCTION(execSaveLocationRotation); \
	DECLARE_FUNCTION(execFocusViewportOnBoxLeft); \
	DECLARE_FUNCTION(execFocusViewportOnBox); \
	DECLARE_FUNCTION(execFocusViewportOnPosition); \
	DECLARE_FUNCTION(execStopRotationRoundPoint); \
	DECLARE_FUNCTION(execRotationRoundPoint); \
	DECLARE_FUNCTION(execStopFly); \
	DECLARE_FUNCTION(execFlyToBPointTime); \
	DECLARE_FUNCTION(execFlyToBPointSpeed); \
	DECLARE_FUNCTION(execSceneExplorationTime); \
	DECLARE_FUNCTION(execSceneExplorationSpeed);


#define FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASceneBrowsingPawn(); \
	friend struct Z_Construct_UClass_ASceneBrowsingPawn_Statics; \
public: \
	DECLARE_CLASS(ASceneBrowsingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SceneBrowsingPawnPlu"), NO_API) \
	DECLARE_SERIALIZER(ASceneBrowsingPawn)


#define FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASceneBrowsingPawn(ASceneBrowsingPawn&&); \
	ASceneBrowsingPawn(const ASceneBrowsingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASceneBrowsingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASceneBrowsingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASceneBrowsingPawn) \
	NO_API virtual ~ASceneBrowsingPawn();


#define FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_40_PROLOG
#define FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_43_INCLASS_NO_PURE_DECLS \
	FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCENEBROWSINGPAWNPLU_API UClass* StaticClass<class ASceneBrowsingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SceneBrowsingPawn_Plugins_SceneBrowsingPawnPlu_Source_SceneBrowsingPawnPlu_Public_SceneBrowsingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
