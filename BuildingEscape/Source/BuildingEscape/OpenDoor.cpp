// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// Find the owning Actor
	AActor* Owner = GetOwner();

	// Create the rotator
	FRotator NewRotation = FRotator(0.f, 35.f, 0.f);

	// Set the door rotation
	Owner->SetActorRotation(NewRotation);

	//UE_LOG(LogTemp, Warning, TEXT("%s has rotation of %s"), *Owner->GetName(), *Owner->GetActorRotation().ToString());
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
