// Fill out your copyright notice in the Description page of Project Settings.

#include "InfiniteTerrainGameMode.h"
#include "Engine/World.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "EngineUtils.h"
#include "ActorPool.h"

AInfiniteTerrainGameMode::AInfiniteTerrainGameMode()
{
	NavMeshBoundVolumePool = CreateDefaultSubobject<UActorPool>(FName("Nav Mesh Bounds violume Pool"));
	
}

void AInfiniteTerrainGameMode::PopulateBoundsVolumePool()
{
	//TODO: search the solution of this

	//TActorIterator<ANavMeshBoundsVolume> VolumeIterator = TActorIterator<ANavMeshBoundsVolume>(GetWorld());
	//while (VolumeIterator)
	//{
	//	AddToPool(*VolumeIterator);
	//	++VolumeIterator;
	//}
	
}

void AInfiniteTerrainGameMode::AddToPool(ANavMeshBoundsVolume *VolumeToAdd)
{
	//UE_LOG(LogTemp, Warning, TEXT("found Actor %s"), *VolumeToAdd->GetName())
	NavMeshBoundVolumePool->Add(VolumeToAdd);
}
