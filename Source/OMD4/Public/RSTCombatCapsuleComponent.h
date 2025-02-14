#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "GameplayTagContainer.h"
#include "RSTCombatCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTCombatCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    URSTCombatCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

