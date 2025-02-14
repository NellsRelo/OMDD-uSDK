#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyCustomOperation_AdditionalGameplayEffectArray.h"
#include "Templates/SubclassOf.h"
#include "RSTPropertyCustomOperation_AdditionalGameplayEffectArray_ModifySetByCaller.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_AdditionalGameplayEffectArray_ModifySetByCaller : public URSTPropertyCustomOperation_AdditionalGameplayEffectArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SetByCallerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    URSTPropertyCustomOperation_AdditionalGameplayEffectArray_ModifySetByCaller();

};

