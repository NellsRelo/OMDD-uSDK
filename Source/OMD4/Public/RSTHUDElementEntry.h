#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTHUDElementEntry.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FRSTHUDElementEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotID;
    
    OMD4_API FRSTHUDElementEntry();
};

