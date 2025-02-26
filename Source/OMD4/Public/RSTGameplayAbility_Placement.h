#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTPlacementCollisionResolutionMethod.h"
#include "RSTAttachmentTransactionHandle.h"
#include "RSTExternalInputAbility.h"
#include "RSTGameplayAbility.h"
#include "RSTLooseTagHandle.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility_Placement.generated.h"

class AActor;
class ARSTPlacementPreview;
class UAbilityTask_PlayMontageAndWait;
class UAbilityTask_WaitAbilityCommit;
class UAbilityTask_WaitDelay;
class UAbilityTask_WaitGameplayTagAdded;
class UAnimMontage;
class UGameplayAbility;
class URSTAbilityTask_MoveToLocationDynamic;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_Placement : public URSTGameplayAbility, public IRSTExternalInputAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PlaceableActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnLocalOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName LineOfSightTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DesiredRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTPlacementCollisionResolutionMethod CollisionResolutionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearCollisionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnSilenced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitGameplayTagAdded* SilencedListenTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlacementAttachGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlacementIgnoreGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlacementPendingFXCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlacementSpawnedFXCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlacementAvatarFXCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlacementActiveLocalTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlacementActiveReplicatedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOtherAbilitiesDuringPlacementPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaceFromNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlacementMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndAbilityWithMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMontageHasStartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlacementMontageStartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlacementMontageLoopSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlacementMontageEndSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FailedPlacementCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* MontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTAttachmentTransactionHandle AttachmentTransactionHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle PlacementActiveTagHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle PlacementActiveReplicatedTagHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlacementActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTPlacementPreview> PlacementPreviewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewUpdateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolatePreviewLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewUpdateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* PreviewTimerTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTAbilityTask_MoveToLocationDynamic* PreviewLocationUpdateTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTPlacementPreview* PlacementPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConfirmAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConfirmStatusTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitAbilityCommit* ConfirmationListenerTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCancellationValid;
    
public:
    URSTGameplayAbility_Placement();

protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ProcessSuccessfulPlacement(const FPredictionKey& Key, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnSilencedStatusAdded();
    
    UFUNCTION(BlueprintCallable)
    void OnPreviewTimerElapsed();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinishedNormally();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinishedAbnormally();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmationCommitted(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPreviewLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlacementFinished(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMontageFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeSpawnedActor(AActor* SpawnedPlaceableActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializePreviewActor(ARSTPlacementPreview* PreviewActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UClass* BP_GetPlaceableClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<AActor*> BP_GetIgnoreActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_FailedPlacement();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CheckValidPlacement(const FVector& TargetLocation, const FTransform& SourceTransform, bool& OutHasAdjustment, FVector& OutAdjustedLocation);
    

    // Fix for true pure virtual functions not being implemented
};

