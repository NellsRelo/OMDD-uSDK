#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "RSTSkinDefinition.generated.h"

class APawn;
class URSTSkinFragment;

UCLASS(Blueprintable, Const)
class OMD4_API URSTSkinDefinition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> PawnClass;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LinkedHero;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LinkedMilestone;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresEntitlement;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTSkinFragment*> Fragments;
    
    URSTSkinDefinition();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static bool ShouldHideWhenLocked(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static bool IsSkinEnabled(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static bool IsEntitlementRequired(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static FGameplayTag GetUnlockMilestone(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static FGameplayTag GetLinkedHero(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    URSTSkinFragment* GetFragmentByClass(TSubclassOf<URSTSkinFragment> FragmentClass, bool& bOutSuccess) const;
    
};

