#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTDamageModEntry.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTPropertyModifiable.h"
#include "RSTDamageModifierComponent.generated.h"

class AActor;
class URSTDamageModifierComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTDamageModifierComponent : public UActorComponent, public IRSTPropertyModifiable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreferInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitDamageOnShieldBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTDamageModEntry> SourceDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTDamageModEntry> TargetDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTDamageModEntry> SourceHeadshotDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTDamageModEntry> TargetHeadshotDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTDamageModEntry> SourceCritChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTDamageModEntry> TargetCritChance;
    
public:
    URSTDamageModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTDamageModifierComponent* FindDamageModifierComponent(const AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

