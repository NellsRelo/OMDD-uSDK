#pragma once
#include "CoreMinimal.h"
#include "RSTLaunchGameplayEffectComponent_Base.h"
#include "RSTLaunchGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTLaunchGameplayEffectComponent : public URSTLaunchGameplayEffectComponent_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchStrength;
    
    URSTLaunchGameplayEffectComponent();

};

