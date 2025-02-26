#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "ERSTAttackLocConfiguration.h"
#include "RSTAttackLocationsComponent.generated.h"

class AActor;
class URSTAttackLocationsComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTAttackLocationsComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ERSTAttackLocConfiguration AttackLocConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    FVector PerimeterBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    int32 AttackLocCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float AttackLocSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    bool bUseDoorOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<int32> BlockedIndices;
    
public:
    URSTAttackLocationsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseDoorOrientation(bool bNewOrientationSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetPerimeterBoxExtent(FVector InPerimeterBoxExtent);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackLocSpacing(float InSpacing);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackLocCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackLocConfiguration(ERSTAttackLocConfiguration InConfig);
    
    UFUNCTION(BlueprintCallable)
    bool RequestAttackTransform(FVector AttackerLoc, AActor* Attacker, float RangeToCheck, FTransform& OutTransform, bool bMustPath, bool bReserveSlot, bool bForceRecalc);
    
    UFUNCTION(BlueprintCallable)
    bool HasPendingAttackLoc();
    
    UFUNCTION(BlueprintCallable)
    ERSTAttackLocConfiguration GetAttackLocConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTAttackLocationsComponent* FindAttackLocationsComponent(const AActor* Actor);
    
};

