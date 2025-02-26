#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Burst.h"
#include "RSTAttachmentCueData.h"
#include "RSTWeaponCueNotify_Burst.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTWeaponCueNotify_Burst : public UGameplayCueNotify_Burst {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttachmentCueData> BurstWeaponEvents;
    
public:
    URSTWeaponCueNotify_Burst();

};

