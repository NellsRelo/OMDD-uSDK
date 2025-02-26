#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "RSTChestSpawner.generated.h"

class ARSTChest;

UCLASS(Blueprintable)
class OMD4_API ARSTChestSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTChest> ChestClass;
    
    ARSTChestSpawner(const FObjectInitializer& ObjectInitializer);

};

