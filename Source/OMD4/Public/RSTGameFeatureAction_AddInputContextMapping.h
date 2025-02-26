#pragma once
#include "CoreMinimal.h"
#include "RSTGameFeatureAction_WorldBase.h"
#include "RSTInputMappingContextAndPriority.h"
#include "RSTGameFeatureAction_AddInputContextMapping.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class URSTGameFeatureAction_AddInputContextMapping : public URSTGameFeatureAction_WorldBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTInputMappingContextAndPriority> InputMappings;
    
    URSTGameFeatureAction_AddInputContextMapping();

};

