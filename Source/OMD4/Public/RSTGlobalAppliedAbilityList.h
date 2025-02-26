#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "RSTGlobalAppliedAbilityList.generated.h"

class UObject;
class URSTAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FRSTGlobalAppliedAbilityList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URSTAbilitySystemComponent*, FGameplayAbilitySpecHandle> Handles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> SourceObjectPtr;
    
    OMD4_API FRSTGlobalAppliedAbilityList();
};

