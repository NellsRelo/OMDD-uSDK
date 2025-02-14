#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility_RangedWeapon.h"
#include "RSTGameplayAbility_Ranged_Burst.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_Ranged_Burst : public URSTGameplayAbility_RangedWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstCount;
    
    URSTGameplayAbility_Ranged_Burst();

};

