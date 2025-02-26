#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAbilityUIDataMessage.generated.h"

class AActor;
class UGameplayAbility;
class URSTAbilityUIData;

USTRUCT(BlueprintType)
struct FRSTAbilityUIDataMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTAbilityUIData> UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGameplayAbility> OwningAbility;
    
    OMD4_API FRSTAbilityUIDataMessage();
};

