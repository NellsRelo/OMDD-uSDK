#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAbilityUIDataElement.generated.h"

class UGameplayAbility;
class URSTAbilityUIData;

USTRUCT(BlueprintType)
struct FRSTAbilityUIDataElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTAbilityUIData> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGameplayAbility> OwningAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ValidQuery;
    
    OMD4_API FRSTAbilityUIDataElement();
};

