#pragma once
#include "CoreMinimal.h"
#include "RSTActivatableWidget.h"
#include "RSTModal.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTModal : public URSTActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ModalTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ModalDescription;
    
    URSTModal();

};

