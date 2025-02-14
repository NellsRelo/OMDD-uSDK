#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RSTAbilityCost.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class OMD4_API URSTAbilityCost : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyApplyCostOnHit;
    
public:
    URSTAbilityCost();

};

