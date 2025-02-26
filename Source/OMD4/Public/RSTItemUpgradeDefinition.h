#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RSTItemUpgradeDefinition.generated.h"

class URSTModifierBase;

UCLASS(Blueprintable, Const)
class OMD4_API URSTItemUpgradeDefinition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTModifierBase*> ModifierData;
    
    URSTItemUpgradeDefinition();

};

