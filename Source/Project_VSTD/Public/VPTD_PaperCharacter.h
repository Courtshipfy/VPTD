// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "VPTD_AttributeComponent.h"
#include "VPTD_PaperCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_VSTD_API AVPTD_PaperCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:

	AVPTD_PaperCharacter();
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="小明属性")
	float MoveSpeed;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	UVPTD_AttributeComponent* VPTDAttribute;
	
	UFUNCTION()
	void OnHealthChanged(AActor* InstigatorActor,UVPTD_AttributeComponent* OwningComp,float NewHealth,float Delta);

	UFUNCTION()
	void OnEXPChanged(AActor* InstigatorActor,UVPTD_AttributeComponent* OwningComp,int32 Delta);
};
