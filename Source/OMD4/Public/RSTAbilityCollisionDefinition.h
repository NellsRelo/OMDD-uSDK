#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "Engine/DataAsset.h"
#include "RSTAbilityCollisionDefinition.generated.h"

class URSTAbilityCollisionTrigger;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityCollisionDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTAbilityCollisionTrigger*> Triggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName TraceProfile;
    
    URSTAbilityCollisionDefinition();

};

