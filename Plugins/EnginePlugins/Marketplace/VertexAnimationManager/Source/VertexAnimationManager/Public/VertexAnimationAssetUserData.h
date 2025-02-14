#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "VertexAnimationAssetUserData.generated.h"

class UVertexAnimationProfile;

UCLASS(Blueprintable, EditInlineNew)
class VERTEXANIMATIONMANAGER_API UVertexAnimationAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexAnimationProfile* Profile;
    
    UVertexAnimationAssetUserData();

};

