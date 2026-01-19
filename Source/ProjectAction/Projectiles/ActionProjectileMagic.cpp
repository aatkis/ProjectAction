// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionProjectileMagic.h"
#include "ActionProjectileMagic.h"

#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


// Sets default values
AActionProjectileMagic::AActionProjectileMagic()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	RootComponent = SphereComponent;
	SphereComponent->SetSphereRadius(16.0f);
	SphereComponent->SetCollisionProfileName("Projectile");
	
	LoopedNiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LoopedNiagaraComp"));
	LoopedNiagaraComp->SetupAttachment(SphereComponent);
	
	ProjectileMoveComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMoveComp"));
	ProjectileMoveComp->InitialSpeed = 2000.0f;
	ProjectileMoveComp->ProjectileGravityScale = 0.0f;
}



