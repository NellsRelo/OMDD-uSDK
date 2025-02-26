#pragma once
#include "CoreMinimal.h"
#include "RSTActorPool.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD4_API FRSTActorPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AvailableActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPoolSize;
    
    FRSTActorPool();
};

