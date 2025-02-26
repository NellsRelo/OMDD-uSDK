#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "RSTButtonBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class URSTButtonBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ButtonText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
public:
    URSTButtonBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonStyle();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetButtonText(const FText& InText);
    
};

