#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTGameplayAbility_Placement.h"
#include "RSTGameplayAbility_DaggerUlt.generated.h"

class ARSTCharacter;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_DaggerUlt : public URSTGameplayAbility_Placement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavQueryExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalNavMeshSnapThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalNavMeshSnapThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceFromAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireInFrontOfAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARSTCharacter> SummonedActor;
    
public:
    URSTGameplayAbility_DaggerUlt();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActorDeathStarted(ARSTCharacter* OwningActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTCharacter* GetSummonedActor() const;
    
};

