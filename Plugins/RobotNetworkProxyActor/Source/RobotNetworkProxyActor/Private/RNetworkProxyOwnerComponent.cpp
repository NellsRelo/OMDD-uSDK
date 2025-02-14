#include "RNetworkProxyOwnerComponent.h"

URNetworkProxyOwnerComponent::URNetworkProxyOwnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URNetworkProxyOwnerComponent::Server_SpawnProxyActor_Implementation(FRNetworkProxyActorID ProxyID, UClass* Class, const FTransform& Transform, const FRNetworkProxyActorSpawnData& SpawnData) {
}

void URNetworkProxyOwnerComponent::Server_ClientRemovedProxyActor_Implementation(FRNetworkProxyActorID ProxyID) {
}

void URNetworkProxyOwnerComponent::Server_ClientReceivedProxyActor_Implementation(FRNetworkProxyActorID ProxyID) {
}

URNetworkProxyOwnerComponent* URNetworkProxyOwnerComponent::FindNetworkProxyOwnerComponent(const AController* Controler) {
    return NULL;
}

void URNetworkProxyOwnerComponent::Client_NotifyProxyRemoved_Implementation(FRNetworkProxyActorID ProxyID) {
}


