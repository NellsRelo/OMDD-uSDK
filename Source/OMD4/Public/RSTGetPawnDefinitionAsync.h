#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayTagContainer.h"
#include "GetPawnDefinitionOutputPinDelegate.h"
#include "RSTGetPawnDefinitionAsync.generated.h"

class URSTGetPawnDefinitionAsync;
class URSTPawnUserFacingData;

UCLASS(Blueprintable)
class OMD4_API URSTGetPawnDefinitionAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetPawnDefinitionOutputPin OnStreamableFinished;
    
    URSTGetPawnDefinitionAsync();

    UFUNCTION(BlueprintCallable)
    static URSTGetPawnDefinitionAsync* GetPawnDefinitionAsyncTag(FGameplayTag GameplayTag);
    
    UFUNCTION(BlueprintCallable)
    static URSTGetPawnDefinitionAsync* GetPawnDefinitionAsync(const URSTPawnUserFacingData* PawnUserFacingData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecuteAfterStreamableFinished();
    
};

