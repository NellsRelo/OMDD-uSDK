#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTMetaSessionMissionOption.h"
#include "RSTMetaModifierDefinition.generated.h"

class URSTModifierBase;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTMetaModifierDefinition : public URSTMetaSessionMissionOption {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MetaModifierTag;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTModifierBase*> ModifierData;
    
    URSTMetaModifierDefinition();

};

