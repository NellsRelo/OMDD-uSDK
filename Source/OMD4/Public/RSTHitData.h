#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RSTHitData.generated.h"

class URSTDamageImmunityData;
class URSTKnockbackData;
class URSTRagdollData;

UCLASS(Abstract, Blueprintable, CollapseCategories, Const, EditInlineNew)
class OMD4_API URSTHitData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HitCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTKnockbackData* KnockbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTDamageImmunityData* DamageImmunityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTRagdollData* RagdollData;
    
    URSTHitData();

};

