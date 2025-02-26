#pragma once
#include "CoreMinimal.h"
#include "RSTAttachmentSkinMeshReplacement.h"
#include "RSTSkinFragment.h"
#include "RSTSkinFragment_AttachmentMeshReplacement.generated.h"

class URSTAttachmentManagerComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTSkinFragment_AttachmentMeshReplacement : public URSTSkinFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttachmentSkinMeshReplacement> Overrides;
    
    URSTSkinFragment_AttachmentMeshReplacement();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveMeshOverrides(URSTAttachmentManagerComponent* AttachmentComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyMeshOverrides(URSTAttachmentManagerComponent* AttachmentComp) const;
    
};

