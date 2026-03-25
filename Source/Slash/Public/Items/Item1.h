// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item1.generated.h"

UCLASS()
class SLASH_API AItem1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	float RunningTime;
	UPROPERTY(EditAnywhere)
	float Amplitude = 2.5f;//độ sóng
	float TimeConstant = 1.f;//thời gian đi hết 1 chu kỳ (đi từ điểm đầu đến cuối và quay lại điểm đầu )
	
	};
