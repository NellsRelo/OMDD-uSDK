#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "NavPowerObstructionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVPOWER_API UNavPowerObstructionComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PassthroughFlags;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ObstructionFlags;
    
public:
    UNavPowerObstructionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveObstruction();
    
    UFUNCTION(BlueprintCallable)
    void CreateObstruction();
    
};

