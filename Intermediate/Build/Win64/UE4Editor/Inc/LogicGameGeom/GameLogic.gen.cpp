// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogicGameGeom/GameLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLogic() {}
// Cross Module References
	LOGICGAMEGEOM_API UClass* Z_Construct_UClass_AGameLogic_NoRegister();
	LOGICGAMEGEOM_API UClass* Z_Construct_UClass_AGameLogic();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LogicGameGeom();
	LOGICGAMEGEOM_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameLogic::execGetRoundWinner)
	{
		P_GET_TARRAY(ASpawner*,Z_Param_CardTableArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstMovePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AGameLogic::GetRoundWinner(Z_Param_CardTableArray,Z_Param_FirstMovePlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execGetPowerCard)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Card);
		P_GET_PROPERTY(FIntProperty,Z_Param_TrumpSuit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AGameLogic::GetPowerCard(Z_Param_Card,Z_Param_TrumpSuit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execFindMove)
	{
		P_GET_TARRAY(ASpawner*,Z_Param_PlayerHandCards);
		P_GET_TARRAY(ASpawner*,Z_Param_CardTableArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AGameLogic::FindMove(Z_Param_PlayerHandCards,Z_Param_CardTableArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execIsEqualColumns)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Card);
		P_GET_PROPERTY(FIntProperty,Z_Param_CardOnTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=AGameLogic::IsEqualColumns(Z_Param_Card,Z_Param_CardOnTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execValidateMove)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Card);
		P_GET_PROPERTY(FIntProperty,Z_Param_CardOnTable);
		P_GET_TARRAY(ASpawner*,Z_Param_PlayerHandCards);
		P_GET_PROPERTY(FIntProperty,Z_Param_TrumpSuit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=AGameLogic::ValidateMove(Z_Param_Card,Z_Param_CardOnTable,Z_Param_PlayerHandCards,Z_Param_TrumpSuit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execGetDebugSuitsAndValues)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=AGameLogic::GetDebugSuitsAndValues(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execGetPowerHands)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=AGameLogic::GetPowerHands(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execSortSuitsAndValues)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Player);
		P_GET_TARRAY_REF(int32,Z_Param_Out_PlayersDeck);
		P_GET_TARRAY_REF(int32,Z_Param_Out_PlayerHandCards);
		P_FINISH;
		P_NATIVE_BEGIN;
		AGameLogic::SortSuitsAndValues(Z_Param_Player,Z_Param_Out_PlayersDeck,Z_Param_Out_PlayerHandCards);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execGetCoordsUV)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IDcard);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Ucoords);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Vcoords);
		P_FINISH;
		P_NATIVE_BEGIN;
		AGameLogic::GetCoordsUV(Z_Param_IDcard,Z_Param_Out_Ucoords,Z_Param_Out_Vcoords);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execGetCardColumn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Card);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AGameLogic::GetCardColumn(Z_Param_Card);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execNormalization)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=AGameLogic::Normalization(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execGetCardsPlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Player);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=AGameLogic::GetCardsPlayer(Z_Param_Player,Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameLogic::execGenerateDeck)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Cards);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=AGameLogic::GenerateDeck(Z_Param_Cards);
		P_NATIVE_END;
	}
	void AGameLogic::StaticRegisterNativesAGameLogic()
	{
		UClass* Class = AGameLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindMove", &AGameLogic::execFindMove },
			{ "GenerateDeck", &AGameLogic::execGenerateDeck },
			{ "GetCardColumn", &AGameLogic::execGetCardColumn },
			{ "GetCardsPlayer", &AGameLogic::execGetCardsPlayer },
			{ "GetCoordsUV", &AGameLogic::execGetCoordsUV },
			{ "GetDebugSuitsAndValues", &AGameLogic::execGetDebugSuitsAndValues },
			{ "GetPowerCard", &AGameLogic::execGetPowerCard },
			{ "GetPowerHands", &AGameLogic::execGetPowerHands },
			{ "GetRoundWinner", &AGameLogic::execGetRoundWinner },
			{ "IsEqualColumns", &AGameLogic::execIsEqualColumns },
			{ "Normalization", &AGameLogic::execNormalization },
			{ "SortSuitsAndValues", &AGameLogic::execSortSuitsAndValues },
			{ "ValidateMove", &AGameLogic::execValidateMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameLogic_FindMove_Statics
	{
		struct GameLogic_eventFindMove_Parms
		{
			TArray<ASpawner*> PlayerHandCards;
			TArray<ASpawner*> CardTableArray;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHandCards_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerHandCards;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CardTableArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CardTableArray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_PlayerHandCards_Inner = { "PlayerHandCards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_PlayerHandCards = { "PlayerHandCards", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventFindMove_Parms, PlayerHandCards), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_CardTableArray_Inner = { "CardTableArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_CardTableArray = { "CardTableArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventFindMove_Parms, CardTableArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventFindMove_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_FindMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_PlayerHandCards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_PlayerHandCards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_CardTableArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_CardTableArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_FindMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_FindMove_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ?????? ?????????? ????\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_FindMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "FindMove", nullptr, nullptr, sizeof(GameLogic_eventFindMove_Parms), Z_Construct_UFunction_AGameLogic_FindMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_FindMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_FindMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_FindMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_FindMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_FindMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics
	{
		struct GameLogic_eventGenerateDeck_Parms
		{
			int32 Cards;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Cards;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGenerateDeck_Parms, Cards), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGenerateDeck_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::NewProp_Cards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ????????? ????????? ??????\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GenerateDeck", nullptr, nullptr, sizeof(GameLogic_eventGenerateDeck_Parms), Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GenerateDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GenerateDeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics
	{
		struct GameLogic_eventGetCardColumn_Parms
		{
			int32 Card;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Card;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetCardColumn_Parms, Card), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetCardColumn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::NewProp_Card,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ? ????? ???????  ?????\x09\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GetCardColumn", nullptr, nullptr, sizeof(GameLogic_eventGetCardColumn_Parms), Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GetCardColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GetCardColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics
	{
		struct GameLogic_eventGetCardsPlayer_Parms
		{
			int32 Player;
			TArray<int32> Array;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetCardsPlayer_Parms, Player), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetCardsPlayer_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetCardsPlayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ???????? ???? ???? ?? ?????\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GetCardsPlayer", nullptr, nullptr, sizeof(GameLogic_eventGetCardsPlayer_Parms), Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GetCardsPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GetCardsPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics
	{
		struct GameLogic_eventGetCoordsUV_Parms
		{
			int32 IDcard;
			float Ucoords;
			float Vcoords;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IDcard;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ucoords;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vcoords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::NewProp_IDcard = { "IDcard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetCoordsUV_Parms, IDcard), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::NewProp_Ucoords = { "Ucoords", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetCoordsUV_Parms, Ucoords), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::NewProp_Vcoords = { "Vcoords", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetCoordsUV_Parms, Vcoords), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::NewProp_IDcard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::NewProp_Ucoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::NewProp_Vcoords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ???????? ????????? UV ?? ??????????? ??????(IDcard)\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
		{ "ToolTip", "??????? ???????? ????????? UV ?? ??????????? ??????(IDcard)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GetCoordsUV", nullptr, nullptr, sizeof(GameLogic_eventGetCoordsUV_Parms), Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GetCoordsUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GetCoordsUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics
	{
		struct GameLogic_eventGetDebugSuitsAndValues_Parms
		{
			TArray<int32> Array;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetDebugSuitsAndValues_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetDebugSuitsAndValues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ??? ??????????? ???????? ? ?????? ? ???????\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GetDebugSuitsAndValues", nullptr, nullptr, sizeof(GameLogic_eventGetDebugSuitsAndValues_Parms), Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics
	{
		struct GameLogic_eventGetPowerCard_Parms
		{
			int32 Card;
			int32 TrumpSuit;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Card;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TrumpSuit;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetPowerCard_Parms, Card), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::NewProp_TrumpSuit = { "TrumpSuit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetPowerCard_Parms, TrumpSuit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetPowerCard_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::NewProp_Card,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::NewProp_TrumpSuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ?????? ???? ?????( ??????? ?? ????? ??? ?? ???????????? ??????)\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GetPowerCard", nullptr, nullptr, sizeof(GameLogic_eventGetPowerCard_Parms), Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GetPowerCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GetPowerCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics
	{
		struct GameLogic_eventGetPowerHands_Parms
		{
			TArray<int32> Array;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetPowerHands_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetPowerHands_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ?????? \"???? ????\"(????? ?????? ???? \"????\" ????????? ??? ????????)\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GetPowerHands", nullptr, nullptr, sizeof(GameLogic_eventGetPowerHands_Parms), Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GetPowerHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GetPowerHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics
	{
		struct GameLogic_eventGetRoundWinner_Parms
		{
			TArray<ASpawner*> CardTableArray;
			int32 FirstMovePlayer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CardTableArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CardTableArray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FirstMovePlayer;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::NewProp_CardTableArray_Inner = { "CardTableArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::NewProp_CardTableArray = { "CardTableArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetRoundWinner_Parms, CardTableArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::NewProp_FirstMovePlayer = { "FirstMovePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetRoundWinner_Parms, FirstMovePlayer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventGetRoundWinner_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::NewProp_CardTableArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::NewProp_CardTableArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::NewProp_FirstMovePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "GetRoundWinner", nullptr, nullptr, sizeof(GameLogic_eventGetRoundWinner_Parms), Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_GetRoundWinner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_GetRoundWinner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics
	{
		struct GameLogic_eventIsEqualColumns_Parms
		{
			int32 Card;
			int32 CardOnTable;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Card;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CardOnTable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventIsEqualColumns_Parms, Card), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::NewProp_CardOnTable = { "CardOnTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventIsEqualColumns_Parms, CardOnTable), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLogic_eventIsEqualColumns_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLogic_eventIsEqualColumns_Parms), &Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::NewProp_Card,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::NewProp_CardOnTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "IsEqualColumns", nullptr, nullptr, sizeof(GameLogic_eventIsEqualColumns_Parms), Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_IsEqualColumns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_IsEqualColumns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_Normalization_Statics
	{
		struct GameLogic_eventNormalization_Parms
		{
			TArray<int32> Array;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_Normalization_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_Normalization_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventNormalization_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_Normalization_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_Normalization_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventNormalization_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_Normalization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_Normalization_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_Normalization_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_Normalization_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_Normalization_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_Normalization_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?????? ???????????? ???????? ????(?????????? ????? ? ????????? ?????????)\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_Normalization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "Normalization", nullptr, nullptr, sizeof(GameLogic_eventNormalization_Parms), Z_Construct_UFunction_AGameLogic_Normalization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_Normalization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_Normalization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_Normalization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_Normalization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_Normalization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics
	{
		struct GameLogic_eventSortSuitsAndValues_Parms
		{
			int32 Player;
			TArray<int32> PlayersDeck;
			TArray<int32> PlayerHandCards;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayersDeck_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayersDeck;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerHandCards_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerHandCards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventSortSuitsAndValues_Parms, Player), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_PlayersDeck_Inner = { "PlayersDeck", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_PlayersDeck = { "PlayersDeck", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventSortSuitsAndValues_Parms, PlayersDeck), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_PlayerHandCards_Inner = { "PlayerHandCards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_PlayerHandCards = { "PlayerHandCards", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventSortSuitsAndValues_Parms, PlayerHandCards), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_PlayersDeck_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_PlayersDeck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_PlayerHandCards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::NewProp_PlayerHandCards,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ?????????? ???? ?? ????? ? ?? ????????\n" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "SortSuitsAndValues", nullptr, nullptr, sizeof(GameLogic_eventSortSuitsAndValues_Parms), Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_SortSuitsAndValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_SortSuitsAndValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameLogic_ValidateMove_Statics
	{
		struct GameLogic_eventValidateMove_Parms
		{
			int32 Card;
			int32 CardOnTable;
			TArray<ASpawner*> PlayerHandCards;
			int32 TrumpSuit;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Card;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CardOnTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHandCards_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerHandCards;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TrumpSuit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventValidateMove_Parms, Card), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_CardOnTable = { "CardOnTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventValidateMove_Parms, CardOnTable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_PlayerHandCards_Inner = { "PlayerHandCards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_PlayerHandCards = { "PlayerHandCards", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventValidateMove_Parms, PlayerHandCards), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_TrumpSuit = { "TrumpSuit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameLogic_eventValidateMove_Parms, TrumpSuit), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameLogic_eventValidateMove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameLogic_eventValidateMove_Parms), &Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_Card,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_CardOnTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_PlayerHandCards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_PlayerHandCards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_TrumpSuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??????? ????????????? ????\n" },
		{ "CPP_Default_TrumpSuit", "-1" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameLogic, nullptr, "ValidateMove", nullptr, nullptr, sizeof(GameLogic_eventValidateMove_Parms), Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameLogic_ValidateMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameLogic_ValidateMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameLogic_NoRegister()
	{
		return AGameLogic::StaticClass();
	}
	struct Z_Construct_UClass_AGameLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LogicGameGeom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameLogic_FindMove, "FindMove" }, // 60058109
		{ &Z_Construct_UFunction_AGameLogic_GenerateDeck, "GenerateDeck" }, // 2394952037
		{ &Z_Construct_UFunction_AGameLogic_GetCardColumn, "GetCardColumn" }, // 3477245399
		{ &Z_Construct_UFunction_AGameLogic_GetCardsPlayer, "GetCardsPlayer" }, // 3150802404
		{ &Z_Construct_UFunction_AGameLogic_GetCoordsUV, "GetCoordsUV" }, // 795186808
		{ &Z_Construct_UFunction_AGameLogic_GetDebugSuitsAndValues, "GetDebugSuitsAndValues" }, // 2497387767
		{ &Z_Construct_UFunction_AGameLogic_GetPowerCard, "GetPowerCard" }, // 1324700003
		{ &Z_Construct_UFunction_AGameLogic_GetPowerHands, "GetPowerHands" }, // 3672621020
		{ &Z_Construct_UFunction_AGameLogic_GetRoundWinner, "GetRoundWinner" }, // 2469596556
		{ &Z_Construct_UFunction_AGameLogic_IsEqualColumns, "IsEqualColumns" }, // 178279206
		{ &Z_Construct_UFunction_AGameLogic_Normalization, "Normalization" }, // 3677418741
		{ &Z_Construct_UFunction_AGameLogic_SortSuitsAndValues, "SortSuitsAndValues" }, // 2543705984
		{ &Z_Construct_UFunction_AGameLogic_ValidateMove, "ValidateMove" }, // 207595144
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameLogic.h" },
		{ "ModuleRelativePath", "GameLogic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameLogic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameLogic_Statics::ClassParams = {
		&AGameLogic::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameLogic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameLogic, 1226376846);
	template<> LOGICGAMEGEOM_API UClass* StaticClass<AGameLogic>()
	{
		return AGameLogic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameLogic(Z_Construct_UClass_AGameLogic, &AGameLogic::StaticClass, TEXT("/Script/LogicGameGeom"), TEXT("AGameLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
