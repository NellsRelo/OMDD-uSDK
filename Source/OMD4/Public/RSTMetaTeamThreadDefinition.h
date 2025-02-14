#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTMetaModifierDefinition.h"
#include "RSTMetaTeamThreadDefinition.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTMetaTeamThreadDefinition : public URSTMetaModifierDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SelectedStatTags;
    
    URSTMetaTeamThreadDefinition();

};

