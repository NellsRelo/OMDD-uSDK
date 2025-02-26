#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTCorruptedTrapGridTransformVariance.h"
#include "RSTCorruptedTrapGridDecorator.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTCorruptedTrapGridDecorator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTCorruptedTrapGridTransformVariance TransformVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideTransformVariance: 1;
    
    ARSTCorruptedTrapGridDecorator(const FObjectInitializer& ObjectInitializer);

};

