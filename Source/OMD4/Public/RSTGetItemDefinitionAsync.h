#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "GetItemDefinitionOutputPinDelegate.h"
#include "RSTGetItemDefinitionAsync.generated.h"

class URSTGetItemDefinitionAsync;

UCLASS(Blueprintable)
class OMD4_API URSTGetItemDefinitionAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetItemDefinitionOutputPin OnStreamableFinished;
    
    URSTGetItemDefinitionAsync();

    UFUNCTION(BlueprintCallable)
    static URSTGetItemDefinitionAsync* GetItemDefinitionAsyncTag(FGameplayTag GameplayTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteAfterStreamableFinished();
    
};

