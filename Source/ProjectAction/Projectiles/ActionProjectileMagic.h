// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionProjectileMagic.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
class UNiagaraComponent;

UCLASS()
class PROJECTACTION_API AActionProjectileMagic : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AActionProjectileMagic();

protected:
	
	UPROPERTY(EditDefaultsOnly, Category="Components")
	TObjectPtr<USphereComponent> SphereComponent;
	
	UPROPERTY(EditDefaultsOnly, Category="Components")
	TObjectPtr<UNiagaraComponent> LoopedNiagaraComp;
	
	UPROPERTY(EditDefaultsOnly, Category="Components")
	TObjectPtr<UProjectileMovementComponent> ProjectileMoveComp;
	
	
};
