#include "RSTIndicatorDescriptor.h"

URSTIndicatorDescriptor::URSTIndicatorDescriptor() {
    this->bVisible = true;
    this->bClampToScreen = false;
    this->bShowClampToScreenArrow = false;
    this->bOverrideScreenPosition = false;
    this->bAutoRemoveWhenIndicatorComponentIsNull = true;
    this->bWasClamped = false;
    this->bCenteredInView = false;
    this->IndicatorTexture = NULL;
    this->IndicatorPlayerIndex = -1;
    this->ProjectionMode = ERSTActorCanvasProjectionMode::ComponentPoint;
    this->HAlignment = HAlign_Center;
    this->VAlignment = VAlign_Center;
    this->Priority = 0;
}

void URSTIndicatorDescriptor::UnregisterIndicator() {
}

void URSTIndicatorDescriptor::SetWorldPositionOffset(FVector Offset) {
}

void URSTIndicatorDescriptor::SetWasClamped(bool bNewWasClamped) {
}

void URSTIndicatorDescriptor::SetVAlign(TEnumAsByte<EVerticalAlignment> InVAlignment) {
}

void URSTIndicatorDescriptor::SetShowClampToScreenArrow(bool bValue) {
}

void URSTIndicatorDescriptor::SetScreenSpaceOffset(FVector2D Offset) {
}

void URSTIndicatorDescriptor::SetSceneComponent(USceneComponent* InComponent) {
}

void URSTIndicatorDescriptor::SetProjectionMode(ERSTActorCanvasProjectionMode InProjectionMode) {
}

void URSTIndicatorDescriptor::SetPriority(int32 InPriority) {
}

void URSTIndicatorDescriptor::SetIndicatorClass(TSoftClassPtr<UUserWidget> InIndicatorWidgetClass) {
}

void URSTIndicatorDescriptor::SetHAlign(TEnumAsByte<EHorizontalAlignment> InHAlignment) {
}

void URSTIndicatorDescriptor::SetDesiredVisibility(bool InVisible) {
}

void URSTIndicatorDescriptor::SetDataObject(UObject* InDataObject) {
}

void URSTIndicatorDescriptor::SetComponentSocketName(FName SocketName) {
}

void URSTIndicatorDescriptor::SetClampToScreen(bool bValue) {
}

void URSTIndicatorDescriptor::SetCenteredInView(bool bNewCenteredInView) {
}

void URSTIndicatorDescriptor::SetBoundingBoxAnchor(FVector InBoundingBoxAnchor) {
}

void URSTIndicatorDescriptor::SetAutoRemoveWhenIndicatorComponentIsNull(bool CanAutomaticallyRemove) {
}

FVector URSTIndicatorDescriptor::GetWorldPositionOffset() const {
    return FVector{};
}

bool URSTIndicatorDescriptor::GetWasClamped() const {
    return false;
}

TEnumAsByte<EVerticalAlignment> URSTIndicatorDescriptor::GetVAlign() const {
    return VAlign_Fill;
}

bool URSTIndicatorDescriptor::GetShowClampToScreenArrow() const {
    return false;
}

FVector2D URSTIndicatorDescriptor::GetScreenSpaceOffset() const {
    return FVector2D{};
}

USceneComponent* URSTIndicatorDescriptor::GetSceneComponent() const {
    return NULL;
}

ERSTActorCanvasProjectionMode URSTIndicatorDescriptor::GetProjectionMode() const {
    return ERSTActorCanvasProjectionMode::ComponentPoint;
}

int32 URSTIndicatorDescriptor::GetPriority() const {
    return 0;
}

bool URSTIndicatorDescriptor::GetIsVisible() const {
    return false;
}

TSoftClassPtr<UUserWidget> URSTIndicatorDescriptor::GetIndicatorClass() const {
    return NULL;
}

TEnumAsByte<EHorizontalAlignment> URSTIndicatorDescriptor::GetHAlign() const {
    return HAlign_Fill;
}

UObject* URSTIndicatorDescriptor::GetDataObject() const {
    return NULL;
}

FName URSTIndicatorDescriptor::GetComponentSocketName() const {
    return NAME_None;
}

bool URSTIndicatorDescriptor::GetClampToScreen() const {
    return false;
}

bool URSTIndicatorDescriptor::GetCenteredInView() const {
    return false;
}

FVector URSTIndicatorDescriptor::GetBoundingBoxAnchor() const {
    return FVector{};
}

bool URSTIndicatorDescriptor::GetAutoRemoveWhenIndicatorComponentIsNull() const {
    return false;
}


