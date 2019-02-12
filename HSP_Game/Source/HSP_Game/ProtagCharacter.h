// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PaperFlipbookComponent.h"
#include "PaperCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
// No Includes Beneath Here
#include "ProtagCharacter.generated.h"

UCLASS()
class HSP_GAME_API AProtagCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AProtagCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		UPaperFlipbook * idleAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		UPaperFlipbook * walkRightAnim;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
		UCameraComponent * Camera;

	UPROPERTY(EditAnywhere)
		USpringArmComponent * CamBoom;

};
