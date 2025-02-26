#pragma once
#include "CoreMinimal.h"
#include "RSTSkinFragment_MeshReplacement.h"
#include "RSTSkinFragment_MeshReplacement_Static.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTSkinFragment_MeshReplacement_Static : public URSTSkinFragment_MeshReplacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshReplacement;
    
    URSTSkinFragment_MeshReplacement_Static();

};

