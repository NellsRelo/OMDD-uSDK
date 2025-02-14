#pragma once
#include "CoreMinimal.h"
#include "CommonGameViewportClient.h"
#include "RSTGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTGameViewportClient : public UCommonGameViewportClient {
    GENERATED_BODY()
public:
    URSTGameViewportClient();

};

