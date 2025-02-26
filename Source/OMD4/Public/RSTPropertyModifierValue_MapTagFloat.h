#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyModifierValue_Map.h"
#include "RSTPropertyModifierValue_MapTagFloat.generated.h"

class URSTPropertyCustomOperation_MapTagFloat;
class URSTPropertyModifierCustomValue_MapTagFloat;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_MapTagFloat : public URSTPropertyModifierValue_Map {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_MapTagFloat* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_MapTagFloat* CustomOperation;
    
    URSTPropertyModifierValue_MapTagFloat();

};

