// Fill out your copyright notice in the Description page of Project Settings.

#include "ProtagCharacter.h"

// Sets default values
AProtagCharacter::AProtagCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CamBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	CamBoom->SetupAttachment(GetCapsuleComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(CamBoom);
}

// Called when the game starts or when spawned
void AProtagCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProtagCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AProtagCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

