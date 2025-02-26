#pragma once
#include "CoreMinimal.h"
#include "RSTSkinFragment_MeshReplacement.h"
#include "RSTSkinFragment_MeshReplacement_Skeletal.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTSkinFragment_MeshReplacement_Skeletal : public URSTSkinFragment_MeshReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* MeshReplacement;
    
    URSTSkinFragment_MeshReplacement_Skeletal();

};

