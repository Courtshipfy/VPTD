// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VPTD_BaseItem.h"
#include "Engine/DataTable.h"
#include "ST_Enemy.generated.h"

USTRUCT()
struct FST_Enemy : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 MoneyNum;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 ExpNum;

	FST_Enemy(int32 InMoneyNum = 1,int32 InExpNum = 1):MoneyNum(InMoneyNum),ExpNum(InExpNum){}
};
