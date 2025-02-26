#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTReplicatedStatKey.generated.h"

USTRUCT(BlueprintType)
struct FRSTReplicatedStatKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SubStatTag;
    
    OMD4_API FRSTReplicatedStatKey();
};
FORCEINLINE uint32 GetTypeHash(const FRSTReplicatedStatKey) { return 0; }

