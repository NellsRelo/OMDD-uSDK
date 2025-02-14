#pragma once
#include "CoreMinimal.h"
#include "RSTAttachmentSkinMaterialOverride.h"
#include "RSTSkinFragment.h"
#include "RSTSkinFragment_AttachmentMaterialOverride.generated.h"

class URSTAttachmentManagerComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTSkinFragment_AttachmentMaterialOverride : public URSTSkinFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttachmentSkinMaterialOverride> Overrides;
    
    URSTSkinFragment_AttachmentMaterialOverride();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveMaterialOverrides(URSTAttachmentManagerComponent* AttachmentComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyMaterialOverrides(URSTAttachmentManagerComponent* AttachmentComp) const;
    
};

