#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RNetworkProxyActor.h"
#include "RSTWandClone.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTWandClone : public ARNetworkProxyActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HiddenGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShownGameplayCue;
    
public:
    ARSTWandClone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActorHiddenLocally(bool bNewHidden);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetActorHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestDestroy();
    
    UFUNCTION(BlueprintCallable)
    void RequestDestroyOnServer();
    
};

