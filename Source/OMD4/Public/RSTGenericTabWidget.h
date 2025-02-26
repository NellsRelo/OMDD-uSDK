#pragma once
#include "CoreMinimal.h"
#include "RSTActivatableWidget.h"
#include "RSTGenericTabWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTGenericTabWidget : public URSTActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLoopTabID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TabIDMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTabID;
    
public:
    URSTGenericTabWidget();

    UFUNCTION(BlueprintCallable)
    bool SetCurrentTabID(int32 NewTabID, bool bAutoCorrect, bool bForceNotify);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseTabID(int32 amount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTabIDMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTabID();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseTabID(int32 amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanIncreaseTabID(int32 amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDecreaseTabID(int32 amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTabIDSet(int32 NewTabID);
    
};

