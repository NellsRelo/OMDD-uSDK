#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RSTAbilitySet_AttributeSet.generated.h"

class UAttributeSet;
class UDataTable;

USTRUCT(BlueprintType)
struct FRSTAbilitySet_AttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAttributeSet> AttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OptionalInitialStats;
    
    OMD4_API FRSTAbilitySet_AttributeSet();
};

