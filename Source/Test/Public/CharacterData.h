// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API UCharacterData : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	float Health = 100.f;
	
	UPROPERTY()
	float AttackPower = 25.f;

	UPROPERTY()
	float MoveSpeed = 500.f;
};
