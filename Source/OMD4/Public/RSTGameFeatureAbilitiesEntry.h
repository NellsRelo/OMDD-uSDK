#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityGrant.h"
#include "RSTAttributeSetGrant.h"
#include "RSTGameFeatureAbilitiesEntry.generated.h"

class AActor;
class URSTAbilitySet;

USTRUCT(BlueprintType)
struct FRSTGameFeatureAbilitiesEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAbilityGrant> GrantedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttributeSetGrant> GrantedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<URSTAbilitySet>> GrantedAbilitySets;
    
    OMD4_API FRSTGameFeatureAbilitiesEntry();
};

