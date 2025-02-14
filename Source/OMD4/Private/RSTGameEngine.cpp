#include "RSTGameEngine.h"

URSTGameEngine::URSTGameEngine() {
    this->ShaderComplexityColors.AddDefaulted(9);
    this->QuadComplexityColors.AddDefaulted(11);
    this->LightComplexityColors.AddDefaulted(11);
    this->StationaryLightOverlapColors.AddDefaulted(9);
    this->LODColorationColors.AddDefaulted(8);
    this->HLODColorationColors.AddDefaulted(7);
    this->StreamingAccuracyColors.AddDefaulted(5);
    this->GPUSkinCacheVisualizationRayTracingLODOffsetColors.AddDefaulted(4);
    this->StatColorMappings.AddDefaulted(3);
    this->bSubtitlesEnabled = true;
    this->NetDriverDefinitions.AddDefaulted(2);
    this->IrisNetDriverConfigs.AddDefaulted(2);
}


