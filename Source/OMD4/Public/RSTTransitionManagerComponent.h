#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTTransitionDelegate_DynamicDelegate.h"
#include "RSTTransitionDelegate_MulticastDelegate.h"
#include "RSTTransitionState.h"
#include "RSTTransitionManagerComponent.generated.h"

class URSTTransitionAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTTransitionManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTransitionDelegate_Multicast OnAnyTransitionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTransitionDelegate_Multicast OnAnyTransitionFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerState, meta=(AllowPrivateAccess=true))
    FRSTTransitionState ServerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PreloadIdentifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URSTTransitionAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentFinishedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurrentAdditionalTags;
    
public:
    URSTTransitionManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartTransition(FGameplayTag TransitionTag, const FRSTTransitionDelegate_Dynamic& FinishedDelegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTransitionLoaded(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void OnResourcesPrepared(URSTTransitionAction* Action);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerState();
    
    UFUNCTION(BlueprintCallable)
    void OnCleanedUp(URSTTransitionAction* Action);
    
    UFUNCTION(BlueprintCallable)
    void OnActionFinished(URSTTransitionAction* Action);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTransition(FGameplayTag Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCurrentTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAdditionalTags(FGameplayTagContainer Tags) const;
    
};

