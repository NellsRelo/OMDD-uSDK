#include "RSTInteractableActor.h"

ARSTInteractableActor::ARSTInteractableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector ARSTInteractableActor::GetInteractableLocationInternal_Implementation() const {
    return FVector{};
}




