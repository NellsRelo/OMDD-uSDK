#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "RSTMapWidgetStyle.h"
#include "RSTMapWidget.generated.h"

class URSTCommunicationDefinition;
class URSTMapData;

UCLASS(Blueprintable)
class OMD4_API URSTMapWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMapWidgetStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseWorldMapData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTCommunicationDefinition* MapCommunicationOption;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTMapData* mapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSlateBrush> GameplayTagToSlateBrushMap;
    
public:
    URSTMapWidget();

    UFUNCTION(BlueprintCallable)
    void SetMapData(URSTMapData* NewMapData);
    
    UFUNCTION(BlueprintCallable)
    void AddMapPing(const FVector2D& NormalizedPosition);
    
};

