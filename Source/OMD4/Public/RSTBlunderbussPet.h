#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "ERSTTeams.h"
#include "RSTActiveSubobject.h"
#include "RSTRangedCombatInterface.h"
#include "RSTTeamAgentInterface.h"
#include "RSTBlunderbussPet.generated.h"

class AActor;
class URSTRangedCombatComponent;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class OMD4_API ARSTBlunderbussPet : public ARSTActiveSubobject/*, public IRSTTeamAgentInterface, public IRSTRangedCombatInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTRangedCombatComponent* RangedCombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* PetMesh;
    
    ARSTBlunderbussPet(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETeamAttitude::Type GetTeamAttitudeTowardsActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ERSTTeams GetTeam() const;
    

    // Fix for true pure virtual functions not being implemented
};

