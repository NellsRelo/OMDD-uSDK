#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetUpgradeUserFacingDataOutputPinDelegate.h"
#include "RSTGetUpgradeUserFacingDataAsync.generated.h"

class UCommonActivatableWidget;
class URSTGetUpgradeUserFacingDataAsync;
class URSTUpgradeDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTGetUpgradeUserFacingDataAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUpgradeUserFacingDataOutputPin OnStreamableFinished;
    
public:
    URSTGetUpgradeUserFacingDataAsync();

private:
    UFUNCTION(BlueprintCallable)
    static URSTGetUpgradeUserFacingDataAsync* GetUpgradeUserFacingDataAsync(const URSTUpgradeDefinition* InUpgradeDefinition, UCommonActivatableWidget* OwningWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteAfterStreamableFinished();
    
};

