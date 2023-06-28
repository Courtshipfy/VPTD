// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VPTD_ProjectileBase.h"
#include "GameFramework/Actor.h"
#include "VPTD_BaseTower.generated.h"

UCLASS()
class PROJECT_VSTD_API AVPTD_BaseTower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVPTD_BaseTower();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="炮塔属性")
	TSubclassOf<AVPTD_ProjectileBase> projectile;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="炮塔属性")
	float Range;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="炮塔属性")
	float Timebetween;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="炮塔属性")
	float MoveWithDis;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="炮塔属性")
	float test_t;

};
