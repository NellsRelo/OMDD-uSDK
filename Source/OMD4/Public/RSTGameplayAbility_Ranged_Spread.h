#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTGameplayAbility_Ranged_Refire.h"
#include "RSTGameplayAbility_Ranged_Spread.generated.h"

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTGameplayAbility_Ranged_Spread : public URSTGameplayAbility_Ranged_Refire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumShots;
    
    URSTGameplayAbility_Ranged_Spread();

};

