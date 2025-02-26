#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "RSTAbilityAnimNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAbilityAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NotifyTag;
    
public:
    URSTAbilityAnimNotifyState();

};

