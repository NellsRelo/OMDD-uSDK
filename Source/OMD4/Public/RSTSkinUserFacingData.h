#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "RSTSkinUserFacingData.generated.h"

class ARSTHeroSelectProxyActor;
class URSTSkinUserFacingData;
class UTexture2D;

UCLASS(Blueprintable, Const)
class OMD4_API URSTSkinUserFacingData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SkinIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTHeroSelectProxyActor> HeroSelectProxyClass;
    
    URSTSkinUserFacingData();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SortSkinUserFacingArray(const TArray<URSTSkinUserFacingData*>& UserFacingArray, bool bAppendNullEntry, TArray<URSTSkinUserFacingData*>& OutUserFacingArray) const;
    
};

