// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AuroCharacterBase.h"
#include "../Public/Interaction/EnemyInterface.h"
#include "AuroEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuroEnemy : public AAuroCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	AAuroEnemy();

	//enemy interface
	virtual void HighlightActor() override;

	virtual void UnHighlightActor() override;
	//end enemy inteface

protected:
	virtual void BeginPlay() override;


};
