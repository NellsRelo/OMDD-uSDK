#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityCollisionSpec.generated.h"

class UAbilitySystemComponent;
class URSTAbilityCollisionDefinition;

USTRUCT(BlueprintType)
struct OMD4_API FRSTAbilityCollisionSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTAbilityCollisionDefinition* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    FRSTAbilityCollisionSpec();
};

