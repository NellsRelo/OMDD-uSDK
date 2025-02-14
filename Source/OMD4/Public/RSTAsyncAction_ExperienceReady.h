#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RSTAsyncAction_ExperienceReady.generated.h"

class UObject;
class URSTAsyncAction_ExperienceReady;

UCLASS(Blueprintable)
class OMD4_API URSTAsyncAction_ExperienceReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncActionDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncActionDelegate OnReady;
    
    URSTAsyncAction_ExperienceReady();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URSTAsyncAction_ExperienceReady* WaitForExperienceReady(UObject* WorldContextObject);
    
};

