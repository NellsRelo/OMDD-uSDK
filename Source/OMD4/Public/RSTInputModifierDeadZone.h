#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "InputModifiers.h"
#include "EDeadzoneStick.h"
#include "RSTInputModifierDeadZone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class URSTInputModifierDeadZone : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeadZoneType Type;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeadzoneStick DeadzoneStick;
    
    URSTInputModifierDeadZone();

};

