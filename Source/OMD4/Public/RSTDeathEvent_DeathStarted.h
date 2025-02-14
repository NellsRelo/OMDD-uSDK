#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTDeathEvent.h"
#include "RSTDeathEvent_DeathStarted.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD4_API URSTDeathEvent_DeathStarted : public URSTDeathEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InstigatorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DeathSourceTags;
    
    URSTDeathEvent_DeathStarted();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

