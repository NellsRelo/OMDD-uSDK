#pragma once
#include "CoreMinimal.h"
#include "RSTModifierContextData.generated.h"

class AActor;
class UObject;
class URSTModifierBase;

USTRUCT(BlueprintType)
struct FRSTModifierContextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSTModifierBase> modifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> OptionalContextObject;
    
    OMD4_API FRSTModifierContextData();
};

