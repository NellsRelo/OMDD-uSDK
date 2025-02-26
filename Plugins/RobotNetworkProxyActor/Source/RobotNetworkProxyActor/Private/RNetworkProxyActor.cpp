#include "RNetworkProxyActor.h"

ARNetworkProxyActor::ARNetworkProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Controller = NULL;
    this->bInstigatorIsNetOwner = true;
}

void ARNetworkProxyActor::ReceivedNewActorData_Implementation(const FRNetworkProxyActorPayload& Payload) {
}

FTransform ARNetworkProxyActor::PrepareForSpawnOnServer_Implementation(const FTransform& SpawnTransform, bool& bOutShouldSpawn) {
    return FTransform{};
}

bool ARNetworkProxyActor::IsLocalProxy() const {
    return false;
}

bool ARNetworkProxyActor::IsLocallyControlled() const {
    return false;
}

bool ARNetworkProxyActor::IsClientReplacement() const {
    return false;
}

bool ARNetworkProxyActor::IsAwaitingReplacement() const {
    return false;
}

AController* ARNetworkProxyActor::GetController() const {
    return NULL;
}

FRNetworkProxyActorPayload ARNetworkProxyActor::CreateNewActorData_Implementation() const {
    return FRNetworkProxyActorPayload{};
}



