#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTCueData_MovePoints.h"
#include "RSTCueData_DaggerSpecial.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTCueData_DaggerSpecial : public URSTCueData_MovePoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FVector> ExplosionLocations;
    
    URSTCueData_DaggerSpecial();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

