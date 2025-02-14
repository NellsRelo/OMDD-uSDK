#pragma once
#include "CoreMinimal.h"
#include "RSTModal.h"
#include "RSTModal_Video.generated.h"

class UBinkMediaPlayer;
class URSTVideoDefinition;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTModal_Video : public URSTModal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTVideoDefinition* VideoDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayCloseButton;
    
    URSTModal_Video();

    UFUNCTION(BlueprintCallable)
    void OnModalComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMediaPlayerAssigned();
    
};

