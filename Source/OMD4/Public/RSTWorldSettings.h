#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "RSTWorldSettings.generated.h"

class URSTExperienceDefinition;

UCLASS(Blueprintable)
class OMD4_API ARSTWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTExperienceDefinition> DefaultGameplayExperience;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsHostOptimizedMinions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMapDataEnabled: 1;
    
    ARSTWorldSettings(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseReducedDeathFX() const;
    
};

