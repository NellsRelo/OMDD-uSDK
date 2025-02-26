#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "RSTAnimNotify_FireProjectile.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAnimNotify_FireProjectile : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FirePointIdentifier;
    
    URSTAnimNotify_FireProjectile();

};

