// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item1.h"




// Sets default values
AItem1::AItem1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

// Called when the game starts or when spawned
void AItem1::BeginPlay()
{
	Super::BeginPlay();
	 int32 AvgInt = Avg<int32>(1,3);
	UE_LOG(LogTemp,Warning,TEXT("Avg of 1 and 3: %d"),AvgInt)
	
	// if (GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ITEM1 BEGINPLAY"));
	// }
	// if (GEngine)
	// {
	// 	GEngine->AddOnScreenDebugMessage(1,60.f,FColor::Red,FString("Hello World"));
	// }
	UWorld *World = GetWorld();
	//SetActorLocation (FVector(7310.f,-6295.f,-10235.0));
	//SetActorRotation(FRotator(0.f,0.f,0.f));
	FVector Location = GetActorLocation();
	
	if (World)
	{
		 FVector Forward = GetActorForwardVector();
		// //DrawDebugSphere(World,Location,25.f,24,FColor::Red,false,30.f);
		// DrawDebugLine(World,Location,Location+Forward*100.f,FColor::Red,true,-1.f,0,1.f);
		// DrawDebugPoint(World,Location,15.f,FColor::Red,true);
		
	}
}

float AItem1::TransformedSin()
{
	return Amplitude*FMath::Sin(RunningTime*TimeConstant);
}

float AItem1::TransformedCos()
{
	return Amplitude*FMath::Cos(RunningTime*TimeConstant);
}

//add debug sphere


// Called every frame
void AItem1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunningTime += DeltaTime;
	
	//float DeltaZ = Amplitude*FMath::Sin(RunningTime*TimeConstant);
	//FVector Movement(0.F,0.f,DeltaZ);
	//AddActorWorldOffset(Movement);
	//AddActorLocalRotation(FRotator(0.f,45.f*DeltaTime,0.f));
	AddActorWorldRotation(FRotator(0.f,45.f*DeltaTime,0.f));
	//DrawDebugSphere(GetWorld(),GetActorLocation(),25.f,24,FColor::Red,false);
	//DrawDebugLine(GetWorld(),GetActorLocation(),GetActorLocation()+GetActorForwardVector()*100.f,FColor::Red,false,-1.f,0,1.f);
	//DrawDebugPoint(GetWorld(),GetActorLocation(),15.f,FColor::Red,false);
//	FVector AvgVector = Avg<FVector>(GetActorLocation(),FVector::ZeroVector);
	//DrawDebugPoint(GetWorld(),AvgVector,15.f,FColor::Blue,false);
}

