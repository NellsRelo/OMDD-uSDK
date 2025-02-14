#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "RSTInteractableTarget.h"
#include "RSTInteractionOption.h"
#include "RSTChest.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTChest : public AActor, public IRSTInteractableTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInteractionOption InteractionOption;
    
public:
    ARSTChest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInteract(const FGameplayAbilityActorInfo& ActorInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanInteractWith(AActor* RequestingInteractor, bool& RetValue);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopInteraction(AActor* InteractingActor) override PURE_VIRTUAL(StopInteraction,);
    
};

