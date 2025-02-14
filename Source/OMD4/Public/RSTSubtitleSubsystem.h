#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RSTSubtitleSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTSubtitleSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SubtitlesMinPosSinglePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SubtitlesMaxPosSinglePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SubtitlesMinPosMultiplayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SubtitlesMaxPosMultiplayer;
    
public:
    URSTSubtitleSubsystem();

    UFUNCTION(BlueprintCallable)
    void AddSubtitleSpeaker(const FString& Speaker, const FText& SpeakerName);
    
};

