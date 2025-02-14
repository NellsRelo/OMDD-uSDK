#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MediaSubtitlesPlayer.generated.h"

class UMediaPlayer;
class UOverlays;

UCLASS(Blueprintable)
class GAMESUBTITLES_API UMediaSubtitlesPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOverlays* SourceSubtitles;
    
    UMediaSubtitlesPlayer();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitles(UOverlays* Subtitles);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void BindToMediaPlayer(UMediaPlayer* InMediaPlayer);
    
};

