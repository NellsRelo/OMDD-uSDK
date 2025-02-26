#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RNetworkProxyActorPayload.h"
#include "RNetworkProxyBlueprintLibrary.generated.h"

class UScriptStruct;

UCLASS(Blueprintable)
class ROBOTNETWORKPROXYACTOR_API URNetworkProxyBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URNetworkProxyBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool GetNetworkProxyActorPayloadData(UScriptStruct* StructType, const FRNetworkProxyActorPayload& Payload, int32& OutData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRNetworkProxyActorPayload CreateNetworkProxyActorPayload(const int32& InData);
    
};

