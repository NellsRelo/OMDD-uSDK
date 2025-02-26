#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAttachmentSkinMaterialOverride.generated.h"

class URSTSkinFragment_MaterialOverride;

USTRUCT(BlueprintType)
struct FRSTAttachmentSkinMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SlotIdentifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTSkinFragment_MaterialOverride* MaterialOverride;
    
    OMD4_API FRSTAttachmentSkinMaterialOverride();
};

