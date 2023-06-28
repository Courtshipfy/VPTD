// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VPTD_ProjectileBase.generated.h"

UCLASS()
class PROJECT_VSTD_API AVPTD_ProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AVPTD_ProjectileBase();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float ProjectileSpeed;
};
