#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ProxyReplacementActorSpawnedDelegateDelegate.h"
#include "RNetworkProxyActorPayload.h"
#include "RNetworkProxyActor.generated.h"

class AController;
class ARNetworkProxyActor;

UCLASS(Blueprintable)
class ROBOTNETWORKPROXYACTOR_API ARNetworkProxyActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* Controller;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProxyReplacementActorSpawnedDelegate OnReplacementActorSpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRNetworkProxyActorPayload CachedNewActorData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstigatorIsNetOwner: 1;
    
public:
    ARNetworkProxyActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceivedNewActorData(const FRNetworkProxyActorPayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform PrepareForSpawnOnServer(const FTransform& SpawnTransform, bool& bOutShouldSpawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalProxy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientReplacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwaitingReplacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRNetworkProxyActorPayload CreateNewActorData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ReplacementActorSpawned(ARNetworkProxyActor* NetworkedActor);
    
};

