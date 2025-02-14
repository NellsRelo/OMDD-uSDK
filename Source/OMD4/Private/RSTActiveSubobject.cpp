#include "RSTActiveSubobject.h"
#include "Components/SceneComponent.h"
#include "RSTAbilitySystemComponent.h"
#include "RSTModifiableSubobjectComponent.h"

ARSTActiveSubobject::ARSTActiveSubobject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AbilitySystemComponent = CreateDefaultSubobject<URSTAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->bSendAttachParent = false;
    this->ModifiableSubobjectComponent = CreateDefaultSubobject<URSTModifiableSubobjectComponent>(TEXT("ModifiableSubobject"));
    this->bFiniteLifetime = false;
    this->SubobjectLifetime = 0.00f;
}

void ARSTActiveSubobject::SetActorHiddenLocally(bool bNewHidden) {
}

void ARSTActiveSubobject::Server_SetActorHidden_Implementation(bool bNewHidden) {
}
bool ARSTActiveSubobject::Server_SetActorHidden_Validate(bool bNewHidden) {
    return true;
}

void ARSTActiveSubobject::Server_RequestDestroy_Implementation() {
}
bool ARSTActiveSubobject::Server_RequestDestroy_Validate() {
    return true;
}

void ARSTActiveSubobject::RequestDestroyOnServer() {
}

void ARSTActiveSubobject::OnLifetimeLapsed() {
}

void ARSTActiveSubobject::OnControllerDestroyed(AActor* DestroyedActor) {
}


