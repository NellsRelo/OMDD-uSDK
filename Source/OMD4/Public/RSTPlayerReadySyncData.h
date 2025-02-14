#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "ERSTPlayerReadySyncBeginType.h"
#include "RSTPlayerReadySyncData.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTPlayerReadySyncData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerReadySyncTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUnready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUnreadyAfterShortTimerBegins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllUnreadyResetsCountdown;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTPlayerReadySyncBeginType BeginType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationLong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationShort;
    
    URSTPlayerReadySyncData();

};

