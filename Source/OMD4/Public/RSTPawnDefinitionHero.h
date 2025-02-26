#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPawnDefinition.h"
#include "RSTPawnDefinitionAdditionalHUDElement.h"
#include "RSTPawnDefinitionHero.generated.h"

class UAnimMontage;
class URSTInventoryItemDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTPawnDefinitionHero : public URSTPawnDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> HeroTrapPlacementLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTInventoryItemDefinition*> UniqueItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxUltimateCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevivingAllyStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevivalStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDownedCharges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPawnDefinitionAdditionalHUDElement> AdditionalHUDElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ReviveMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> IntroSpawnMontages;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockMilestone;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresEntitlement;
    
    URSTPawnDefinitionHero();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsHeroEnabled(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsEntitlementRequired(const FGameplayTag& Tag) const;
    
};

