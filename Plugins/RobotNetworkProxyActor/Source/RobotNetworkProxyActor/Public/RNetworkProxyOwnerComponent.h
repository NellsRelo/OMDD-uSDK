#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ControllerComponent.h"
#include "RNetworkProxyActorID.h"
#include "RNetworkProxyActorInfo.h"
#include "RNetworkProxyActorSpawnData.h"
#include "RNetworkProxyOwnerComponent.generated.h"

class AController;
class URNetworkProxyOwnerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROBOTNETWORKPROXYACTOR_API URNetworkProxyOwnerComponent : public UControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRNetworkProxyActorID, FRNetworkProxyActorInfo> ProxyActorLookup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRNetworkProxyActorID, double> RemovedClientProxyActors;
    
public:
    URNetworkProxyOwnerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SpawnProxyActor(FRNetworkProxyActorID ProxyID, UClass* Class, const FTransform& Transform, const FRNetworkProxyActorSpawnData& SpawnData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ClientRemovedProxyActor(FRNetworkProxyActorID ProxyID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ClientReceivedProxyActor(FRNetworkProxyActorID ProxyID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URNetworkProxyOwnerComponent* FindNetworkProxyOwnerComponent(const AController* Controler);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyProxyRemoved(FRNetworkProxyActorID ProxyID);
    
};

