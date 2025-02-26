#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPawnDefinitionAdditionalHUDElement.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FRSTPawnDefinitionAdditionalHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    OMD4_API FRSTPawnDefinitionAdditionalHUDElement();
};

