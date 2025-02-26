#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPlayerProfileMessage.h"
#include "RSTPlayerProfileMessage_CharacterChanged.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage_CharacterChanged : public FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Character;
    
    FRSTPlayerProfileMessage_CharacterChanged();
};

