#include "VARuntimeComponent.h"

UVARuntimeComponent::UVARuntimeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NotifyHandler = NULL;
    this->OuterSceneComponent = NULL;
    this->RootComponent = NULL;
    this->SkeletalMeshComponent = NULL;
    this->Profile = NULL;
    this->AnimClass = NULL;
    this->NotifyHandlerClass = NULL;
    this->bPlaying = true;
    this->bDebugBones = false;
    this->bFrameInterpolation = false;
    this->bAnimationTransition = false;
    this->AnimationTransitionDuration = 0.20f;
    this->bNotifications = false;
    this->bUseSyncGroup = true;
    this->AnimationPlayRate = 1.00f;
    this->RootMotionMode = RootMotionNone;
    this->bUpdateTransforms = false;
    this->bSync = false;
    this->SyncFrameRate = 0.00f;
    this->bLODEnabled = false;
}

void UVARuntimeComponent::UpdateAnimationBlueprint() {
}

void UVARuntimeComponent::Stop() {
}

void UVARuntimeComponent::SetTimePlayed(float TimePlayed) {
}

void UVARuntimeComponent::SetSkeletalMeshOn() {
}

void UVARuntimeComponent::SetSkeletalMeshOff() {
}

void UVARuntimeComponent::SetRagdollOn() {
}

void UVARuntimeComponent::SetRagdollOff() {
}

bool UVARuntimeComponent::SetPositionToSyncMarker(FName SyncMarkerName) {
    return false;
}

void UVARuntimeComponent::SetPosition(float Position) {
}

void UVARuntimeComponent::SetPlayRate(float Rate) {
}

bool UVARuntimeComponent::SetAnimationIndex(int32 InAnimationIndex) {
    return false;
}

bool UVARuntimeComponent::SetAnimationByName(FName InAnimationName) {
    return false;
}

void UVARuntimeComponent::ResumeWorld() {
}

void UVARuntimeComponent::Resume() {
}

void UVARuntimeComponent::Reset() {
}

bool UVARuntimeComponent::PlayAnimationByName(FName InAnimationName) {
    return false;
}

bool UVARuntimeComponent::PlayAnimation(int32 InAnimationIndex) {
    return false;
}

void UVARuntimeComponent::Play() {
}

void UVARuntimeComponent::PauseWorld() {
}

void UVARuntimeComponent::Pause() {
}

bool UVARuntimeComponent::IsPlaying() const {
    return false;
}

bool UVARuntimeComponent::IsPaused() const {
    return false;
}

TArray<FName> UVARuntimeComponent::GetVariationNames() const {
    return TArray<FName>();
}

float UVARuntimeComponent::GetTimePlayed() const {
    return 0.0f;
}

USceneComponent* UVARuntimeComponent::GetRootComponent() const {
    return NULL;
}

float UVARuntimeComponent::GetPosition() const {
    return 0.0f;
}

float UVARuntimeComponent::GetPlayRate() const {
    return 0.0f;
}

USceneComponent* UVARuntimeComponent::GetOuterSceneComponent() const {
    return NULL;
}

UAnimInstance* UVARuntimeComponent::GetAnimInstance() const {
    return NULL;
}

TArray<FName> UVARuntimeComponent::GetAnimationNames() const {
    return TArray<FName>();
}

void UVARuntimeComponent::CopyToPoseableMeshComponent(UPoseableMeshComponent* InComponent, TEnumAsByte<EBoneSpaces::Type> BoneSpace) const {
}


