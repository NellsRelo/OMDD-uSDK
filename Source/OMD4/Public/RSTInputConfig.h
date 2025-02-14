#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RSTInputAction.h"
#include "RSTInputConfig.generated.h"

class UInputAction;

UCLASS(Blueprintable, Const)
class URSTInputConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTInputAction> NativeInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTInputAction> AbilityInputActions;
    
    URSTInputConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputAction* FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputAction* FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound) const;
    
};

