// Fill out your copyright notice in the Description page of Project Settings.


#include "Lost_NPC.h"

// Sets default values
ALost_NPC::ALost_NPC()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALost_NPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALost_NPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALost_NPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

