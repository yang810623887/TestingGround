// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorPool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTINGGROUND_API UActorPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorPool();

	/**  */
	AActor* CheckOut();

	/** return we need actor */
	void Return(AActor* ActorToReturn);

	/**  */
	void Add(AActor* ActorToAdd);

private:
	TArray<AActor*> Pool;


};
