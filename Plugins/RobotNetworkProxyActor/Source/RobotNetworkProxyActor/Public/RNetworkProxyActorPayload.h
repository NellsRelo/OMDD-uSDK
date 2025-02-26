#pragma once
#include "CoreMinimal.h"
#include "RNetworkProxyActorPayload.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct ROBOTNETWORKPROXYACTOR_API FRNetworkProxyActorPayload {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* Type;
    
public:
    FRNetworkProxyActorPayload();
};

