#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTSpawnGroupOnDeathParameters.h"
#include "RSTPropertyModifierValue_SpawnGroupOnDeath.generated.h"

class URSTPropertyCustomOperation_SpawnGroupOnDeath;
class URSTPropertyModifierCustomValue_SpawnGroupOnDeath;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_SpawnGroupOnDeath : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTSpawnGroupOnDeathParameters Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_SpawnGroupOnDeath* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_SpawnGroupOnDeath* CustomOperation;
    
    URSTPropertyModifierValue_SpawnGroupOnDeath();

};

