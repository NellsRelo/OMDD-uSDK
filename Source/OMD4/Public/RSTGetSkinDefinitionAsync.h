#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "GetSkinDefinitionOutputPinDelegate.h"
#include "RSTGetSkinDefinitionAsync.generated.h"

class UCommonActivatableWidget;
class URSTGetSkinDefinitionAsync;

UCLASS(Blueprintable)
class OMD4_API URSTGetSkinDefinitionAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetSkinDefinitionOutputPin OnStreamableFinished;
    
    URSTGetSkinDefinitionAsync();

    UFUNCTION(BlueprintCallable)
    static URSTGetSkinDefinitionAsync* GetSkinDefinitionAsyncTag(FGameplayTag Tag, TArray<FName> InBundles, UCommonActivatableWidget* OwningWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteAfterStreamableFinished();
    
};

