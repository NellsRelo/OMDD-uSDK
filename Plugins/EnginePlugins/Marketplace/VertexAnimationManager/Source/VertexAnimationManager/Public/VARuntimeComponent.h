#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "EVARootMotionMode.h"
#include "Templates/SubclassOf.h"
#include "VADebugBoneSettings.h"
#include "VANotifyEvent.h"
#include "VARuntimeRootMotionSignatureDelegate.h"
#include "VertexAnimationLOD.h"
#include "VARuntimeComponent.generated.h"

class UAnimInstance;
class UPoseableMeshComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UVANotifyHandler;
class UVertexAnimationProfile;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VERTEXANIMATIONMANAGER_API UVARuntimeComponent : public UActorComponent {
    GENERATED_BODY()
// public:
//     UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//     FVARuntimeRootMotionSignature OnRootMotion;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVANotifyHandler* NotifyHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVANotifyEvent> EventCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* OuterSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVertexAnimationProfile* Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVertexAnimationProfile> ProfileAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVANotifyHandler> NotifyHandlerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrameInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimationTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSyncGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVARootMotionMode> RootMotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLODEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVADebugBoneSettings BoneSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexAnimationLOD LOD;
    
    UVARuntimeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAnimationBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetTimePlayed(float TimePlayed);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshOn();
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshOff();
    
    UFUNCTION(BlueprintCallable)
    void SetRagdollOn();
    
    UFUNCTION(BlueprintCallable)
    void SetRagdollOff();
    
    UFUNCTION(BlueprintCallable)
    bool SetPositionToSyncMarker(FName SyncMarkerName);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(float Position);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimationIndex(int32 InAnimationIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimationByName(FName InAnimationName);
    
    UFUNCTION(BlueprintCallable)
    void ResumeWorld();
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimationByName(FName InAnimationName);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimation(int32 InAnimationIndex);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void PauseWorld();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetVariationNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimePlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetRootComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetOuterSceneComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAnimationNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CopyToPoseableMeshComponent(UPoseableMeshComponent* InComponent, TEnumAsByte<EBoneSpaces::Type> BoneSpace) const;
    
};

