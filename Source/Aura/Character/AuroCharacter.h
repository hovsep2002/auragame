// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AuroCharacterBase.h"
#include "AuroCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuroCharacter : public AAuroCharacterBase
{
	GENERATED_BODY()

public:
	AAuroCharacter();

	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_PlayerState() override;

private:
	void InitActorAbilityInfo();
	
};
