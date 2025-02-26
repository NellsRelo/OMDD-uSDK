#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Extensions/UserWidgetExtension.h"
#include "RSTTickConditionWidgetExtension.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTTickConditionWidgetExtension : public UUserWidgetExtension {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTConditionalTickWidgetTick, const FGeometry&, MyGeometry, float, InDeltaTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTConditionalTickWidgetStatusChanged, bool, bNewTickStatus);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTConditionalTickWidgetTick OnTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTConditionalTickWidgetStatusChanged OnTickStatusChanged;
    
    URSTTickConditionWidgetExtension();

    UFUNCTION(BlueprintCallable)
    void SetShouldTick(bool bInShouldTick);
    
};

