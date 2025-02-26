#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Templates/SubclassOf.h"
#include "RSTAbilityTask_SpawnActorDefer.generated.h"

class AActor;
class APawn;
class UGameplayAbility;
class URSTAbilityTask_SpawnActorDefer;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_SpawnActorDefer : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTSpawnActorDeferSpawnFail);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTSpawnActorDeferInitCallback, AActor*, SpawnedActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTSpawnActorDeferInitCallback OnInitActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTSpawnActorDeferSpawnFail OnSpawnFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTSpawnActorDeferInitCallback OnSpawnFinished;
    
    URSTAbilityTask_SpawnActorDefer();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_SpawnActorDefer* SpawnActorWithDeferredInit(UGameplayAbility* OwningAbility, TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandling, AActor* Owner, APawn* Instigator);
    
};

