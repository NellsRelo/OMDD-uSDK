#pragma once
#include "CoreMinimal.h"
#include "RNetworkProxyActorInfo.generated.h"

class ARNetworkProxyActor;

USTRUCT(BlueprintType)
struct ROBOTNETWORKPROXYACTOR_API FRNetworkProxyActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARNetworkProxyActor* ProxyActor;
    
    FRNetworkProxyActorInfo();
};

