#pragma once
#include "CoreMinimal.h"
#include "RSTComponentCollisionOverride.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRSTComponentCollisionOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimitiveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfile;
    
    OMD4_API FRSTComponentCollisionOverride();
};

