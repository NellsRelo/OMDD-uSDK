#pragma once
#include "CoreMinimal.h"
#include "Input/CommonBoundActionButton.h"
#include "Templates/SubclassOf.h"
#include "RSTBoundActionButton.generated.h"

class UCommonButtonStyle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OMD4_API URSTBoundActionButton : public UCommonBoundActionButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> KeyboardStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> GamepadStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> TouchStyle;
    
public:
    URSTBoundActionButton();

    UFUNCTION(BlueprintCallable)
    void SetActionText(FText newText);
    
};

