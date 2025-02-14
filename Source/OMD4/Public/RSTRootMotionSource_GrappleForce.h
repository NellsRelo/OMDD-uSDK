#pragma once
#include "CoreMinimal.h"
#include "GameFramework/RootMotionSource.h"
#include "Engine/NetSerialization.h"
#include "RSTRootMotionSource_GrappleForce.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTRootMotionSource_GrappleForce : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    FRSTRootMotionSource_GrappleForce();
};

