#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTPropertyModifierValue_GameplayTag.generated.h"

class URSTPropertyCustomOperation_Tag;
class URSTPropertyModifierCustomValue_Tag;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_GameplayTag : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_Tag* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_Tag* CustomOperation;
    
    URSTPropertyModifierValue_GameplayTag();

};

