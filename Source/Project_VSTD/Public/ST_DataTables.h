// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VPTD_BaseItem.h"
#include "Engine/DataTable.h"
#include "ST_DataTables.generated.h"

USTRUCT()
struct FST_Enemy : public FTableRowBase
{
	GENERATED_BODY()

public:

	//掉落金钱数
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 MoneyNum;

	//掉落经验数
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 ExpNum;

	//单个掉落金钱数值
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Money;

	//单个掉落经验数值
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Exp;

	//敌人HP值
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float HP;

	//敌人移动速度
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float MoveSpeed;

	//敌人伤害
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float DamageValue;
};

USTRUCT()
struct FST_Turrent:public FTableRowBase
{
	GENERATED_BODY()

public:

	//花费金钱
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	int32 MoneyCost;
	
	//血量
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float HP;
	
	//炮塔等级
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	int32 Level;
	
	//攻击力
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float DamageValue;
	
	//攻击速度
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float AttackSpeed;
	
	//攻击距离
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float AttackRange;
	
	//移动速度
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	float MoveSpeed;
};
