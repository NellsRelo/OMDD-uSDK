#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "RSTAbilityCollisionSpecHandle.h"
#include "RSTTraceDefinedOverlapDelegateDelegate.h"
#include "RSTAbilityTask_TraceDefinedOverlap.generated.h"

class AActor;
class UGameplayAbility;
class URSTAbilityTask_TraceDefinedOverlap;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_TraceDefinedOverlap : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTraceDefinedOverlapDelegate OnBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTraceDefinedOverlapDelegate OnEndOverlap;
    
    URSTAbilityTask_TraceDefinedOverlap();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TraceDefinedOverlap* TraceDefinedOverlap(UGameplayAbility* OwningAbility, FRSTAbilityCollisionSpecHandle Spec, FVector Location, FRotator Rotation, const TArray<AActor*>& ActorsToIgnore, AActor* AttachToActor, FLinearColor TraceColor, bool bIgnoreSelf, bool bDebugDraw);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_TraceDefinedOverlap* SweepDefinedOverlap(UGameplayAbility* OwningAbility, FRSTAbilityCollisionSpecHandle Spec, FVector Start, FVector End, FRotator Rotation, const TArray<AActor*>& ActorsToIgnore, FLinearColor TraceColor, bool bIgnoreSelf, bool bDebugDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayAbilityTargetDataHandle GetAllCurrentActors() const;
    
};

