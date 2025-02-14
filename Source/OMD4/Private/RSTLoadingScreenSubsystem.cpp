#include "RSTLoadingScreenSubsystem.h"
#include "Templates/SubclassOf.h"

URSTLoadingScreenSubsystem::URSTLoadingScreenSubsystem() {
    this->LoadingScreenWidgetClass = NULL;
}

void URSTLoadingScreenSubsystem::SetLoadingScreenContentWidget(TSubclassOf<UUserWidget> NewWidgetClass) {
}

TSubclassOf<UUserWidget> URSTLoadingScreenSubsystem::GetLoadingScreenContentWidget() const {
    return NULL;
}


