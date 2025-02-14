#include "RSTAIAttachment.h"

ARSTAIAttachment::ARSTAIAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayerInteractable = false;
}

UMeshComponent* ARSTAIAttachment::GetMesh() const {
    return NULL;
}

UMeshComponent* ARSTAIAttachment::GetFXMesh() const {
    return NULL;
}




