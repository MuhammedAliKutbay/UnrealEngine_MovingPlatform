// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:	

	UPROPERTY(EditAnywhere, Category="Moving Platform")
	FVector PlatformVeloicty;
	FVector StartLocation;
	UPROPERTY(VisibleAnywhere, Category="Moving Platform")
	double DistanceMoved;
	UPROPERTY(EditAnywhere, Category="Moving Platform")
	float MoveDistance;	
	UPROPERTY(EditAnywhere, Category="Rotating Platform")
	FRotator RotationVelocity;
	void MovePlatform(float DeltaTime);
	void RotatePlatform(float DeltaTime);
	bool ShouldPlatformReturn() const;
	float GetDistanceMoved() const;
};
