#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "RNetworkProxyActor.h"
#include "RSTActiveSubobjectAbility.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTPropertyModifiable.h"
#include "RSTActiveSubobject.generated.h"

class AActor;
class URSTAbilitySystemComponent;
class URSTModifiableSubobjectComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTActiveSubobject : public ARNetworkProxyActor/*, public IAbilitySystemInterface, public IRSTPropertyModifiable, public IGameplayTagAssetInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTActiveSubobjectAbility> AbilitiesToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTActiveSubobjectAbility> AbilityGrantCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTModifiableSubobjectComponent* ModifiableSubobjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFiniteLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubobjectLifetime;
    
public:
    ARSTActiveSubobject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActorHiddenLocally(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetActorHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestDestroy();
    
    UFUNCTION(BlueprintCallable)
    void RequestDestroyOnServer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLifetimeLapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnControllerDestroyed(AActor* DestroyedActor);
    

    // Fix for true pure virtual functions not being implemented
public:
    //UFUNCTION(BlueprintCallable)
    //bool HasMatchingGameplayTag(FGameplayTag tagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    //
};

