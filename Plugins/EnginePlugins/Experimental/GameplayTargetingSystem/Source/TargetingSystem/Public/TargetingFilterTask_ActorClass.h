#pragma once
#include "CoreMinimal.h"
#include "TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_ActorClass.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> RequiredActorClassFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> IgnoredActorClassFilters;
    
public:
    UTargetingFilterTask_ActorClass();

};

