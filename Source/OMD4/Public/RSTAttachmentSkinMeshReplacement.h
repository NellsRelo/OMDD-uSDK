#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAttachmentSkinMeshReplacement.generated.h"

class URSTSkinFragment_MeshReplacement;

USTRUCT(BlueprintType)
struct FRSTAttachmentSkinMeshReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SlotIdentifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTSkinFragment_MeshReplacement* MeshOverride;
    
    OMD4_API FRSTAttachmentSkinMeshReplacement();
};

