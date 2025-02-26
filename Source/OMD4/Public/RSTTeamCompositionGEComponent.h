#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "GameplayTagContainer.h"
#include "RSTTeamCompositionGEComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTTeamCompositionGEComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredHeroes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForbiddenHeroes;
    
    URSTTeamCompositionGEComponent();

};

