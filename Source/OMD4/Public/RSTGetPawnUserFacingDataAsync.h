#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "GetPawnUserFacingDataOutputPinDelegate.h"
#include "RSTGetPawnUserFacingDataAsync.generated.h"

class UCommonActivatableWidget;
class URSTGetPawnUserFacingDataAsync;
class URSTPawnDefinition;
class URSTPawnExtensionComponent;

UCLASS(Blueprintable)
class OMD4_API URSTGetPawnUserFacingDataAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPawnUserFacingDataOutputPin OnStreamableFinished;
    
    URSTGetPawnUserFacingDataAsync();

    UFUNCTION(BlueprintCallable)
    static URSTGetPawnUserFacingDataAsync* GetPawnUserFacingDataAsyncTag(FGameplayTag Tag, TArray<FName> InBundles, UCommonActivatableWidget* OwningWidget);
    
    UFUNCTION(BlueprintCallable)
    static URSTGetPawnUserFacingDataAsync* GetPawnUserFacingDataAsyncString(const FString& TagString, TArray<FName> InBundles, UCommonActivatableWidget* OwningWidget);
    
    UFUNCTION(BlueprintCallable)
    static URSTGetPawnUserFacingDataAsync* GetPawnUserFacingDataAsyncPD(const URSTPawnDefinition* PawnDefinition, TArray<FName> InBundles, UCommonActivatableWidget* OwningWidget);
    
    UFUNCTION(BlueprintCallable)
    static URSTGetPawnUserFacingDataAsync* GetPawnUserFacingDataAsync(URSTPawnExtensionComponent* PawnExtension, TArray<FName> InBundles, UCommonActivatableWidget* OwningWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteAfterStreamableFinished();
    
};

