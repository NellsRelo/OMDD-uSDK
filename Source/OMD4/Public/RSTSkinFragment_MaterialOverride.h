#pragma once
#include "CoreMinimal.h"
#include "RSTSkinFragment.h"
#include "RSTSkinFragment_MaterialOverride.generated.h"

class UMaterialInterface;
class UMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTSkinFragment_MaterialOverride : public URSTSkinFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialOverrides;
    
    URSTSkinFragment_MaterialOverride();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveMaterialOverrides(UMeshComponent* Mesh, const UMeshComponent* DefaultMesh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyMaterialOverrides(UMeshComponent* Mesh) const;
    
};

