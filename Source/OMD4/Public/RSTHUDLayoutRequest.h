#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTHUDLayoutRequest.generated.h"

class UCommonActivatableWidget;

USTRUCT(BlueprintType)
struct FRSTHUDLayoutRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> LayoutClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LayerID;
    
    OMD4_API FRSTHUDLayoutRequest();
};

