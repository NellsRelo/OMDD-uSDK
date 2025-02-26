#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "RSTInteractableTarget.h"
#include "RSTInteractionOption.h"
#include "RSTInteractableActor.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTInteractableActor : public AActor, public IRSTInteractableTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInteractionOption InteractionOption;
    
public:
    ARSTInteractableActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetInteractableLocationInternal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInteract(const FGameplayAbilityActorInfo& ActorInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanInteractWith(AActor* RequestingInteractor, bool& RetValue);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void StopInteraction(AActor* InteractingActor) override PURE_VIRTUAL(StopInteraction,);
    
};

