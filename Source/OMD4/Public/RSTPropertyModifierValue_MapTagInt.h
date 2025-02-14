#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyModifierValue_Map.h"
#include "RSTPropertyModifierValue_MapTagInt.generated.h"

class URSTPropertyCustomOperation_MapTagInt;
class URSTPropertyModifierCustomValue_MapTagInt;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_MapTagInt : public URSTPropertyModifierValue_Map {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_MapTagInt* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_MapTagInt* CustomOperation;
    
    URSTPropertyModifierValue_MapTagInt();

};

