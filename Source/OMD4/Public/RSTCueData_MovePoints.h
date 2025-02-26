#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTCueData.h"
#include "RSTVectorArray.h"
#include "RSTCueData_MovePoints.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTCueData_MovePoints : public URSTCueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FRSTVectorArray> Paths;
    
    URSTCueData_MovePoints();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartNewPath();
    
    UFUNCTION(BlueprintCallable)
    void ResetPath();
    
    UFUNCTION(BlueprintCallable)
    void AddPoint(const FVector& Point);
    
};

