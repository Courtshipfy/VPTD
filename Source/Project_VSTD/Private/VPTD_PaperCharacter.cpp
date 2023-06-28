// Fill out your copyright notice in the Description page of Project Settings.


#include "VPTD_PaperCharacter.h"

AVPTD_PaperCharacter::AVPTD_PaperCharacter()
{
	VPTDAttribute = CreateDefaultSubobject<UVPTD_AttributeComponent>("VPTDAttribute");
}

void AVPTD_PaperCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AVPTD_PaperCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	VPTDAttribute->OnHealthChangedDelegated.AddDynamic(this,&AVPTD_PaperCharacter::OnHealthChanged);
	VPTDAttribute->OnExpChangedDelegated.AddDynamic(this,&AVPTD_PaperCharacter::OnEXPChanged);
	
}

void AVPTD_PaperCharacter::OnHealthChanged(AActor* InstigatorActor, UVPTD_AttributeComponent* OwningComp,
	float NewHealth, float Delta)
{
}

void AVPTD_PaperCharacter::OnEXPChanged(AActor* InstigatorActor, UVPTD_AttributeComponent* OwningComp, int32 Delta)
{
}


