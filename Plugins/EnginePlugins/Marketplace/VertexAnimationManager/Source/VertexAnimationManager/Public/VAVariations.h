#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VAVariationData.h"
#include "VAVariations.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VERTEXANIMATIONMANAGER_API UVAVariations : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVAVariationData> Variations;
    
    UVAVariations();

};

