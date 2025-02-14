#include "RSTWidgetFactory.h"
#include "Templates/SubclassOf.h"

URSTWidgetFactory::URSTWidgetFactory() {
}

TSubclassOf<UUserWidget> URSTWidgetFactory::FindWidgetClassForData_Implementation(const UObject* Data) const {
    return NULL;
}


