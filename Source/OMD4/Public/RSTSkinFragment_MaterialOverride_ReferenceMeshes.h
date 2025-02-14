#pragma once
#include "CoreMinimal.h"
#include "RSTSkinFragment_MaterialOverride_ReferenceMeshes.generated.h"

class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FRSTSkinFragment_MaterialOverride_ReferenceMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ReferenceSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* ReferenceStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> ReferenceMaterials;
    
    OMD4_API FRSTSkinFragment_MaterialOverride_ReferenceMeshes();
};

