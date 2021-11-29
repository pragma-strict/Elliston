// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralHouse.h"

// Sets default values
AProceduralHouse::AProceduralHouse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this.VertexBuffer = new TArray<FVector>();
}

// Called when the game starts or when spawned
void AProceduralHouse::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProceduralHouse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

