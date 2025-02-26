#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AttributeSet.h"
#include "RSTPawnCollectionChangedDelegate.h"
#include "RSTPawnCollectionCompleteDelegate.h"
#include "RSTAbilityTask_AICollectPawns.generated.h"

class AActor;
class APawn;
class UGameplayAbility;
class URSTAbilityTask_AICollectPawns;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_AICollectPawns : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPawnCollectionChanged OnPawnsAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPawnCollectionChanged OnPawnsRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPawnCollectionComplete OnComplete;
    
    URSTAbilityTask_AICollectPawns();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_AICollectPawns* RSTAICollectPawns_AttributeRadius(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* MovingActor, FGameplayAttribute RadiusAttribute, const float ScanRate, const float Duration, bool bShowDebugCircle);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_AICollectPawns* RSTAICollectPawns(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* MovingActor, const float Radius, const float ScanRate, const float Duration, const bool bShowDebugCircle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetCurrentCollection();
    
};

