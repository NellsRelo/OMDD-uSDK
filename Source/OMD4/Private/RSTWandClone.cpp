#include "RSTWandClone.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

ARSTWandClone::ARSTWandClone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->CapsuleComp = (UCapsuleComponent*)RootComponent;
    this->MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->MeshComp->SetupAttachment(RootComponent);
}

void ARSTWandClone::SetActorHiddenLocally(bool bNewHidden) {
}

void ARSTWandClone::Server_SetActorHidden_Implementation(bool bNewHidden) {
}
bool ARSTWandClone::Server_SetActorHidden_Validate(bool bNewHidden) {
    return true;
}

void ARSTWandClone::Server_RequestDestroy_Implementation() {
}
bool ARSTWandClone::Server_RequestDestroy_Validate() {
    return true;
}

void ARSTWandClone::RequestDestroyOnServer() {
}


