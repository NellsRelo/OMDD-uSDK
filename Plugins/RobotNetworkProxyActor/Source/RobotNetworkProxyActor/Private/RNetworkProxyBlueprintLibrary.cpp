#include "RNetworkProxyBlueprintLibrary.h"

URNetworkProxyBlueprintLibrary::URNetworkProxyBlueprintLibrary() {
}

bool URNetworkProxyBlueprintLibrary::GetNetworkProxyActorPayloadData(UScriptStruct* StructType, const FRNetworkProxyActorPayload& Payload, int32& OutData) {
    return false;
}

FRNetworkProxyActorPayload URNetworkProxyBlueprintLibrary::CreateNetworkProxyActorPayload(const int32& InData) {
    return FRNetworkProxyActorPayload{};
}


