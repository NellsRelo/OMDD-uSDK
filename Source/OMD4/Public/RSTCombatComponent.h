#pragma once
#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "Templates/SubclassOf.h"
#include "RSTCombatComponent.generated.h"

class URSTAbilitySystemComponent;
class URSTGameplayAbility_CombatBase;

UCLASS(Blueprintable, ClassGroup=Custom, Within=RSTCharacter, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTCombatComponent : public UPawnComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSTGameplayAbility_CombatBase> CurrentAbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentSwingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAerialAttack;
    
public:
    URSTCombatComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void InitializeWithAbilitySystem(URSTAbilitySystemComponent* InASC);
    
};

