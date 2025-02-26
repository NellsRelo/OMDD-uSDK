#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Looping.h"
#include "RSTAttachmentCueData.h"
#include "RSTWeaponCueNotify_Looping.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTWeaponCueNotify_Looping : public AGameplayCueNotify_Looping {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttachmentCueData> ApplicationWeaponEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttachmentCueData> LoopingWeaponEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttachmentCueData> RecurringWeaponEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttachmentCueData> RemovalWeaponEvents;
    
public:
    // ARSTWeaponCueNotify_Looping(const FObjectInitializer& ObjectInitializer);

};

