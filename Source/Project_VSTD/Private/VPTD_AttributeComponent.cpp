// Fill out your copyright notice in the Description page of Project Settings.


#include "VPTD_AttributeComponent.h"

#include "VPTD_PaperCharacter.h"


UVPTD_AttributeComponent::UVPTD_AttributeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	HealthMax = 100;
	Level = 0;
	Money = 0;

	Health = HealthMax;
}

UVPTD_AttributeComponent* UVPTD_AttributeComponent::GetAttributes(AActor* FromActor)
{
	if(FromActor)
	{
		return Cast<UVPTD_AttributeComponent>(FromActor->GetComponentByClass(UVPTD_AttributeComponent::StaticClass()));
	}

	return nullptr;
}

bool UVPTD_AttributeComponent::IsActorAlive(AActor* actor)
{
	UVPTD_AttributeComponent* AttributeComp = UVPTD_AttributeComponent::GetAttributes(actor);
	if(AttributeComp)
	{
		return AttributeComp->IsAlive();
	}

	return false;
}

bool UVPTD_AttributeComponent::IsAlive()
{
	return Health > 0.0f;
}

bool UVPTD_AttributeComponent::ApplyChangeHealth(AActor* Instigator, float Delta)
{
	Health += Delta;
	
	if(Health < 0) Health = 0;
	
	OnHealthChangedDelegated.Broadcast(Instigator,nullptr,Health,Delta);

	/*//Died
	if(Health <= 0.0f)
	{
		ASGameModeBase* ASGameModeBase = GetWorld()->GetAuthGameMode<class ASGameModeBase>();
		if(ASGameModeBase)
		{
			ASGameModeBase->OnActorKilled(GetOwner(),Instigator);
		}
	}*/
	
	return true;
}

bool UVPTD_AttributeComponent::ApplyChangeEXP(AActor* InstigatorActor,int32 Delta)
{
	TotalEXP += Delta;
	int32 NewLevel = TotalEXP / PerLevelEXP;
	if(NewLevel > Level)
	{
		ApplyChangeLevel(GetOwner(),NewLevel - Level);
	}
	

	OnExpChangedDelegated.Broadcast(InstigatorActor,nullptr,Delta);

	return true;
}

bool UVPTD_AttributeComponent::ApplyChangeMoney(AActor* InstigatorActor, int32 Delta)
{
	Money += Delta;

	OnMoneyChangedDelegated.Broadcast(InstigatorActor,nullptr,Money,Delta);

	return true;
}

bool UVPTD_AttributeComponent::ApplyChangeLevel(AActor* InstigatorActor, int32 Delta)
{
	Level += Delta;

	OnLevelChangedDelegated.Broadcast(InstigatorActor,nullptr,Delta);

	return true;
}

