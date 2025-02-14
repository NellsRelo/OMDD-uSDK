#pragma once
#include "CoreMinimal.h"
#include "RNetworkProxyActorPayload.h"
#include "RNetworkProxyActorSpawnData.generated.h"

class AActor;
class APawn;
class ARNetworkProxyActor;

USTRUCT(BlueprintType)
struct ROBOTNETWORKPROXYACTOR_API FRNetworkProxyActorSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARNetworkProxyActor* ProxyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRNetworkProxyActorPayload Payload;
    
    FRNetworkProxyActorSpawnData();
};

