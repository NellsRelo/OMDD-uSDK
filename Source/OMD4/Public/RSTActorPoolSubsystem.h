#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RSTActorPool.h"
#include "RSTActorPoolSubsystem.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTActorPoolSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FRSTActorPool> ActorPools;
    
public:
    URSTActorPoolSubsystem();

};

