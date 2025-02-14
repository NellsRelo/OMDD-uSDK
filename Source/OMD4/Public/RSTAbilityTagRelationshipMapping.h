#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RSTAbilityTagRelationship.h"
#include "RSTAbilityTagRelationshipMapping.generated.h"

UCLASS(Blueprintable)
class URSTAbilityTagRelationshipMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAbilityTagRelationship> AbilityTagRelationships;
    
public:
    URSTAbilityTagRelationshipMapping();

};

