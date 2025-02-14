#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERSTTransitionActionState.h"
#include "RSTTransitionAction.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTTransitionAction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERSTTransitionActionState State;
    
public:
    URSTTransitionAction();

protected:
    UFUNCTION(BlueprintCallable)
    void SetShouldTick(bool bInShouldTick);
    
    UFUNCTION(BlueprintCallable)
    void ResourcesPrepared();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_PrepareResources();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_FastForwardAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_CleanUpAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_CancelAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_BeginAction();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpFinished();
    
    UFUNCTION(BlueprintCallable)
    void ActionFinished();
    
};

