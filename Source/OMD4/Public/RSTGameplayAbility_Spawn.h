#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_Spawn.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_Spawn : public URSTGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SpawnMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDuration;
    
public:
    URSTGameplayAbility_Spawn();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpawnDuration();
    
};

