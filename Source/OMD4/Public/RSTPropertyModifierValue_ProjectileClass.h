#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierValue_Class.h"
#include "Templates/SubclassOf.h"
#include "RSTPropertyModifierValue_ProjectileClass.generated.h"

class ARSTProjectile;
class URSTPropertyCustomOperation_ProjectileClass;
class URSTPropertyModifierCustomValue_ProjectileClass;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_ProjectileClass : public URSTPropertyModifierValue_Class {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTProjectile> Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_ProjectileClass* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_ProjectileClass* CustomOperation;
    
    URSTPropertyModifierValue_ProjectileClass();

};

