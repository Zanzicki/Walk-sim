// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "UsableInterface.h"
#include "CaptureZone.generated.h"

UENUM(BlueprintType)
enum class EFlagState : uint8
{
	UP,DOWN,
};

UCLASS()
class WALKSIM_API ACaptureZone : public AActor, public IUsableInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACaptureZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PoleMesh;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FlagMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CaptureTime;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex);

	float timeSinceTick;
	float percentage;

	bool capturing;

	EFlagState flagstate;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Use_Implementation() override;

};
