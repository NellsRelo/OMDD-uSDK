#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "GetSkinUserFacingDataOutputPinDelegate.h"
#include "RSTGetSkinUserFacingDataAsync.generated.h"

class UCommonActivatableWidget;
class URSTGetSkinUserFacingDataAsync;

UCLASS(Blueprintable)
class OMD4_API URSTGetSkinUserFacingDataAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSkinUserFacingDataOutputPin OnStreamableFinished;
    
    URSTGetSkinUserFacingDataAsync();

    UFUNCTION(BlueprintCallable)
    static URSTGetSkinUserFacingDataAsync* GetSkinUserFacingDataAsyncTag(FGameplayTag Tag, TArray<FName> InBundles, UCommonActivatableWidget* OwningWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteAfterStreamableFinished();
    
};

