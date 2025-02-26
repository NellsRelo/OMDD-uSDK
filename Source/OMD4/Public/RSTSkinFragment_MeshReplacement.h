#pragma once
#include "CoreMinimal.h"
#include "RSTSkinFragment.h"
#include "RSTSkinFragment_MeshReplacement.generated.h"

class UMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTSkinFragment_MeshReplacement : public URSTSkinFragment {
    GENERATED_BODY()
public:
    URSTSkinFragment_MeshReplacement();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveMeshOverride(UMeshComponent* MeshComponent, const UMeshComponent* DefaultMeshComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyMeshOverride(UMeshComponent* MeshComponent) const;
    
};

