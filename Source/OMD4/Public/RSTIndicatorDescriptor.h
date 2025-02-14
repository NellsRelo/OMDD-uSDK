#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "ERSTActorCanvasProjectionMode.h"
#include "RSTIndicatorDescriptor.generated.h"

class URSTIndicatorManagerComponent;
class USceneComponent;
class UTexture;
class UUserWidget;

UCLASS(Blueprintable)
class OMD4_API URSTIndicatorDescriptor : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTIndicatorWasClampedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTIndicatorCenteredDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTIndicatorWasClampedDelegate WasClampedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTIndicatorCenteredDelegate CenteredInViewChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowClampToScreenArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideScreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRemoveWhenIndicatorComponentIsNull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasClamped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenteredInView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* IndicatorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndicatorPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTActorCanvasProjectionMode ProjectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundingBoxAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScreenSpaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> DataObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> IndicatorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSTIndicatorManagerComponent> ManagerPtr;
    
public:
    URSTIndicatorDescriptor();

    UFUNCTION(BlueprintCallable)
    void UnregisterIndicator();
    
    UFUNCTION(BlueprintCallable)
    void SetWorldPositionOffset(FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetWasClamped(bool bNewWasClamped);
    
    UFUNCTION(BlueprintCallable)
    void SetVAlign(TEnumAsByte<EVerticalAlignment> InVAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetShowClampToScreenArrow(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenSpaceOffset(FVector2D Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetSceneComponent(USceneComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectionMode(ERSTActorCanvasProjectionMode InProjectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 InPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatorClass(TSoftClassPtr<UUserWidget> InIndicatorWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void SetHAlign(TEnumAsByte<EHorizontalAlignment> InHAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredVisibility(bool InVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDataObject(UObject* InDataObject);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentSocketName(FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void SetClampToScreen(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCenteredInView(bool bNewCenteredInView);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundingBoxAnchor(FVector InBoundingBoxAnchor);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoRemoveWhenIndicatorComponentIsNull(bool CanAutomaticallyRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldPositionOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWasClamped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EVerticalAlignment> GetVAlign() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowClampToScreenArrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetScreenSpaceOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetSceneComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERSTActorCanvasProjectionMode GetProjectionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UUserWidget> GetIndicatorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EHorizontalAlignment> GetHAlign() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetDataObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetComponentSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClampToScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCenteredInView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBoundingBoxAnchor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoRemoveWhenIndicatorComponentIsNull() const;
    
};

