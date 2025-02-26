#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAbilityUIDataMessage.h"
#include "RSTAbilityRegisterUIDataMessage.generated.h"

USTRUCT(BlueprintType)
struct FRSTAbilityRegisterUIDataMessage : public FRSTAbilityUIDataMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ShowQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    OMD4_API FRSTAbilityRegisterUIDataMessage();
};

