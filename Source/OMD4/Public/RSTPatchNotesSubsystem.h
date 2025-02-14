#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RSTPatchNoteVersionURL.h"
#include "RSTPatchNotesSubsystem.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTPatchNotesSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTPatchNotesVersionReceived, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTPatchNotesReceived, bool, bSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPatchNotesVersionReceived OnPatchNotesVersionReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPatchNotesReceived OnPatchNotesReceived;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PatchNotesVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPatchNoteVersionURL> PatchNoteVersionURLs;
    
public:
    URSTPatchNotesSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestPatchNotes(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void CheckPatchNotesVersion();
    
};

