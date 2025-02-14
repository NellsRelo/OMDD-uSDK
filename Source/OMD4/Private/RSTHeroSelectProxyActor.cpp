#include "RSTHeroSelectProxyActor.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Components/SceneComponent.h"
#include "RDialogueComponent.h"
#include "RSTAttachmentManagerComponent.h"

ARSTHeroSelectProxyActor::ARSTHeroSelectProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Mesh"));
    this->AttachmentManager = CreateDefaultSubobject<URSTAttachmentManagerComponent>(TEXT("AttachmentManager"));
    this->SkinDefinition = NULL;
    this->DialogueComponent = CreateDefaultSubobject<URDialogueComponent>(TEXT("DialogueComponent"));
    this->SkeletalMeshComp->SetupAttachment(RootComponent);
}

void ARSTHeroSelectProxyActor::NotifyCharacterSelected() {
}


