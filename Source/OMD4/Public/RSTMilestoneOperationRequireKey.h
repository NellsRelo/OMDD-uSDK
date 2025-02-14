#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTMilestoneOperationBase.h"
#include "RSTMilestoneOperationRequireKey.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTMilestoneOperationRequireKey : public URSTMilestoneOperationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredKeys;
    
    URSTMilestoneOperationRequireKey();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetRequiredKeys() const;
    
};

