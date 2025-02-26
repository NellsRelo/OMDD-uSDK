#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "RSTPropertyModifierGameplayEffectComponent.generated.h"

class URSTModifierBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTPropertyModifierGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTModifierBase*> ModifierData;
    
public:
    URSTPropertyModifierGameplayEffectComponent();

};

