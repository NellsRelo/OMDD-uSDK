#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTLaunchGameplayEffectComponent_Base.h"
#include "RSTLaunchGameplayEffectComponent_SetByCaller.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTLaunchGameplayEffectComponent_SetByCaller : public URSTLaunchGameplayEffectComponent_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LaunchStrengthTag;
    
    URSTLaunchGameplayEffectComponent_SetByCaller();

};

