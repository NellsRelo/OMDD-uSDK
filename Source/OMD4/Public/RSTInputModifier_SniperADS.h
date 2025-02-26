#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "GameplayTagContainer.h"
#include "RSTInputModifier_SniperADS.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTInputModifier_SniperADS : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SensitivityScalar;
    
    URSTInputModifier_SniperADS();

};

