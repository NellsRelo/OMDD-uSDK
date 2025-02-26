#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyOperationValidityCheck.h"
#include "RSTTeamCompositionValidityCheck.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTTeamCompositionValidityCheck : public URSTPropertyOperationValidityCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredHeroes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForbiddenHeroes;
    
    URSTTeamCompositionValidityCheck();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTeamCompositionChanged();
    
};

