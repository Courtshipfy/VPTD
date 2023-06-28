// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VPTD_BaseItem.generated.h"

UCLASS()
class PROJECT_VSTD_API AVPTD_BaseItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AVPTD_BaseItem();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="物品属性")
	int32 value_exp;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="物品属性")
	int32 value_money;
};
