// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStaticMeshActor.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

void AMyStaticMeshActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Get the location of this actor
	FVector MyLocation = GetActorLocation();

	SetActorLocation(MyLocation + FVector(30.0f,0.0f, 0.0f));

	// Display debug message with the new location
	FString DebugMessage = FString::Printf(TEXT("Location: %s"), *(MyLocation+ FVector(30.0f,0.0f, 0.0f)).ToString());
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, DebugMessage);
	// Get the location of the character actor (assuming it exists)
	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (Character != nullptr)
	{
		FVector CharacterLocation = Character->GetActorLocation();

		Character->SetActorLocation(CharacterLocation+ FVector(30.0f,0.0f, 0.0f));
	}
}
