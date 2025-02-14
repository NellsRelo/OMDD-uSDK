#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "RSTPlayerStatePRSComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTPlayerStatePRSComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URSTPlayerStatePRSComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsReadyStateForTag(FGameplayTag PRSTag, bool bIsReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsReadyStateForTag(FGameplayTag PRSTag, bool bIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetUniqueNetIdRepl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReadyStateForTag(FGameplayTag PRSTag);
    
};

