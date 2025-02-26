#pragma once
#include "CoreMinimal.h"
#include "RSTNameplateInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD4_API FRSTNameplateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FRSTNameplateInfo();
};

