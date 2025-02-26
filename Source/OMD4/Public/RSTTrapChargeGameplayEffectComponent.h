#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "ERSTTrapRechargeAmount.h"
#include "ERSTTrapRechargeTime.h"
#include "RSTTrapChargeGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTTrapChargeGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTrapRechargeAmount RechargeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTrapRechargeTime RechargeTime;
    
    URSTTrapChargeGameplayEffectComponent();

};

