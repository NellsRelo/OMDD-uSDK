#include "RSTStatusFXVolume.h"
#include "RSTAbilitySystemComponent.h"

ARSTStatusFXVolume::ARSTStatusFXVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = CreateDefaultSubobject<URSTAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->bDestroyOnGoBreak = true;
    this->bDoOverlapChecksInTick = true;
    this->bRemoveOnExit = false;
}

void ARSTStatusFXVolume::OnReceivedOverlap(AActor* MyActor, AActor* OtherActor) {
}

void ARSTStatusFXVolume::OnReceivedEndOverlap(AActor* MyActor, AActor* OtherActor) {
}

URSTAbilitySystemComponent* ARSTStatusFXVolume::GetRSTAbilitySystemComponent() const {
    return NULL;
}

void ARSTStatusFXVolume::ApplyGameplayEffects(AActor* TargetActor) {
}


