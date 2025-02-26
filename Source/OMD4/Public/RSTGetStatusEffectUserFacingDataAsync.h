#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "RSTGetStatusEffectUserFacingDataAsync.generated.h"

class URSTGetStatusEffectUserFacingDataAsync;
class URSTStatusEffectUserFacingData;

UCLASS(Blueprintable)
class OMD4_API URSTGetStatusEffectUserFacingDataAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetStatusEffectUserFacingDataOutputPin, FGameplayTag, StatusEffectTag, const URSTStatusEffectUserFacingData*, UserFacingData);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetStatusEffectUserFacingDataOutputPin OnStreamableFinished;
    
public:
    URSTGetStatusEffectUserFacingDataAsync();

private:
    UFUNCTION(BlueprintCallable)
    static URSTGetStatusEffectUserFacingDataAsync* GetStatusEffectUserFacingDataAsync(FGameplayTag InStatusEffectTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteAfterStreamableFinished();
    
};

