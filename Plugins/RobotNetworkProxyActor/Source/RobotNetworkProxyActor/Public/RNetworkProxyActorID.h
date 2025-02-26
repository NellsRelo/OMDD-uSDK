#pragma once
#include "CoreMinimal.h"
#include "RNetworkProxyActorID.generated.h"

USTRUCT(BlueprintType)
struct ROBOTNETWORKPROXYACTOR_API FRNetworkProxyActorID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    FRNetworkProxyActorID();
};
FORCEINLINE uint32 GetTypeHash(const FRNetworkProxyActorID) { return 0; }

