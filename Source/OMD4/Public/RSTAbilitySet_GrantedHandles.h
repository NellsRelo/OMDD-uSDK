#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "RSTAbilitySet_GrantedHandles.generated.h"

class UAttributeSet;

USTRUCT(BlueprintType)
struct FRSTAbilitySet_GrantedHandles {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> GameplayEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAttributeSet*> GrantedAttributeSets;
    
public:
    OMD4_API FRSTAbilitySet_GrantedHandles();
};

