// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREETMAPRUNTIME_StreetMap_generated_h
#error "StreetMap.generated.h already included, missing '#pragma once' in StreetMap.h"
#endif
#define STREETMAPRUNTIME_StreetMap_generated_h

#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapBuilding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<struct FStreetMapBuilding>();

#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapNode_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<struct FStreetMapNode>();

#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<struct FStreetMapRoadRef>();

#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapRoad_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<struct FStreetMapRoad>();

#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<struct FStreetMapMeshBuildSettings>();

#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STREETMAPRUNTIME_API UScriptStruct* StaticStruct<struct FStreetMapCollisionSettings>();

#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_SPARSE_DATA
#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_RPC_WRAPPERS
#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_RPC_WRAPPERS_NO_PURE_DECLS
#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreetMap(); \
	friend struct Z_Construct_UClass_UStreetMap_Statics; \
public: \
	DECLARE_CLASS(UStreetMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreetMapRuntime"), NO_API) \
	DECLARE_SERIALIZER(UStreetMap)


#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_INCLASS \
private: \
	static void StaticRegisterNativesUStreetMap(); \
	friend struct Z_Construct_UClass_UStreetMap_Statics; \
public: \
	DECLARE_CLASS(UStreetMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreetMapRuntime"), NO_API) \
	DECLARE_SERIALIZER(UStreetMap)


#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreetMap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreetMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreetMap(UStreetMap&&); \
	NO_API UStreetMap(const UStreetMap&); \
public:


#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreetMap(UStreetMap&&); \
	NO_API UStreetMap(const UStreetMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStreetMap)


#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Roads() { return STRUCT_OFFSET(UStreetMap, Roads); } \
	FORCEINLINE static uint32 __PPO__Nodes() { return STRUCT_OFFSET(UStreetMap, Nodes); } \
	FORCEINLINE static uint32 __PPO__Buildings() { return STRUCT_OFFSET(UStreetMap, Buildings); } \
	FORCEINLINE static uint32 __PPO__BoundsMin() { return STRUCT_OFFSET(UStreetMap, BoundsMin); } \
	FORCEINLINE static uint32 __PPO__BoundsMax() { return STRUCT_OFFSET(UStreetMap, BoundsMax); }


#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_307_PROLOG
#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_PRIVATE_PROPERTY_OFFSET \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_SPARSE_DATA \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_RPC_WRAPPERS \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_INCLASS \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_PRIVATE_PROPERTY_OFFSET \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_SPARSE_DATA \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_INCLASS_NO_PURE_DECLS \
	RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h_310_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREETMAPRUNTIME_API UClass* StaticClass<class UStreetMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RocAR_Plugins_StreetMap_Source_StreetMapRuntime_Public_StreetMap_h


#define FOREACH_ENUM_ESTREETMAPROADTYPE(op) \
	op(Street) \
	op(MajorRoad) \
	op(Highway) \
	op(Other) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
