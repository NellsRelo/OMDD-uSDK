#include "RSTAttachment.h"
#include "Components/SceneComponent.h"

ARSTAttachment::ARSTAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bUseDefaultVisibilityBehavior = true;
}

void ARSTAttachment::OnVisualVariantTagsChanged(FGameplayTag Tag, int32 Count) {
}


void ARSTAttachment::OnCurrentChargeUpdated(FGameplayTag UpdatedTag) {
}

USceneComponent* ARSTAttachment::GetPrimaryComponent() {
    return NULL;
}

void ARSTAttachment::GetMeshComponents(TArray<UMeshComponent*>& OutComponents) const {
}

void ARSTAttachment::GetFXComponents(TArray<UFXSystemComponent*>& OutComponents) const {
}

int32 ARSTAttachment::GetChargeCount(const FGameplayTag& GameplayTag) const {
    return 0;
}



















