#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAnimInstanceCharacter.h"
#include "RSTStatusEffectCategoryBools.h"
#include "RSTAnimInstanceEnemy.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTAnimInstanceEnemy : public URSTAnimInstanceCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseGroundedPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseFrozenPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTStatusEffectCategoryBools StatusEffectCategoryBools;
    
public:
    URSTAnimInstanceEnemy();

    UFUNCTION(BlueprintCallable)
    void EnableRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void DoDie(const FGameplayTag& StatusAnimationTag);
    
};

