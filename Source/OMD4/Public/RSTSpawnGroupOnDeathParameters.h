#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTSpawnGroupOnDeathParameters.generated.h"

class URSTPawnDefinitionEnemy;

USTRUCT(BlueprintType)
struct FRSTSpawnGroupOnDeathParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPawnDefinitionEnemy* PawnDefinitionToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroupSpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalGrantedTags;
    
    OMD4_API FRSTSpawnGroupOnDeathParameters();
};

