#pragma once
#include "CoreMinimal.h"
#include "CommonUserTypes.h"
#include "CommonUserTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "RSTEntitlementSubsystem.generated.h"

class UCommonUserInfo;
class URSTEntitlementDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTEntitlementSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URSTEntitlementSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitledToSkin(FGameplayTag Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitledToHero(FGameplayTag Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEntitlement(FGameplayTag Identifier) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlerUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    URSTEntitlementDefinition* GetEntitlementForSkin(FGameplayTag Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    URSTEntitlementDefinition* GetEntitlementForHero(FGameplayTag Identifier) const;
    
};

