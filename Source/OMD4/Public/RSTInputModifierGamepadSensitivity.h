#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "ERSTTargetingType.h"
#include "RSTInputModifierGamepadSensitivity.generated.h"

class URSTAimSensitivityData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class URSTInputModifierGamepadSensitivity : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTargetingType TargetingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTAimSensitivityData* SensitivityLevelTable;
    
    URSTInputModifierGamepadSensitivity();

};

