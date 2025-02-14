#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "RSTPostGameHeroData.h"
#include "RSTPostGameLevelSequenceActor.generated.h"

class ALevelSequenceActor;
class ARSTPostGameLevelSequenceActor;
class ULevelSequence;

UCLASS(Blueprintable)
class OMD4_API ARSTPostGameLevelSequenceActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTProxyActorReadyDelegate, AActor*, ProxyActor, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTPostGameSequenceReady, ARSTPostGameLevelSequenceActor*, SequenceActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTPostGameSequenceCallback);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTProxyActorReadyDelegate OnProxyActorReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTPostGameHeroData> ProxyHeroData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPostGameSequenceReady OnSequenceReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPostGameSequenceCallback OnSequenceFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPostGameSequenceCallback OnSequencePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> FallbackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings SequenceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* CurrentSequenceActor;
    
public:
    ARSTPostGameLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SequencePlaying();
    
    UFUNCTION(BlueprintCallable)
    void SequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayLevelSequenceWhenReady();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayLevelSequenceDeferred(ARSTPostGameLevelSequenceActor* SequenceActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayLevelSequence();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ProxyActorReady(AActor* ProxyActor, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSequencePlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSequenceFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InitSpawnedProxyPawn(AActor* SpawnedProxy, int32 Index, bool bVictory);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitPostGameSequence(bool bVictory);
    
    UFUNCTION(BlueprintCallable)
    void CancelLevelSequence();
    
};

