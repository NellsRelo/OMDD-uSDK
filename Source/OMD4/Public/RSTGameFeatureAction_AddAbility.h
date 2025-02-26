#pragma once
#include "CoreMinimal.h"
#include "RSTGameFeatureAbilitiesEntry.h"
#include "RSTGameFeatureAction_WorldBase.h"
#include "RSTGameFeatureAction_AddAbility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTGameFeatureAction_AddAbility : public URSTGameFeatureAction_WorldBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTGameFeatureAbilitiesEntry> AbilitiesList;
    
    URSTGameFeatureAction_AddAbility();

};

