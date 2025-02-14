#include "VertexAnimationProfile.h"

UVertexAnimationProfile::UVertexAnimationProfile() {
    this->Mode = bone;
    this->InfluencesMaxBones = Influences1Max;
    this->InfluencesStorage = Mesh;
    this->UVChannel = 1;
    this->RotationMethode = Axis;
    this->bMergeDuplicateVertices = true;
    this->Precision = HighPrecision;
    this->MaxWidth = 4096;
    this->MaxHeight = 4096;
    this->bOverrideFrameRate = false;
    this->FrameRate = 30.00f;
    this->bNotifications = true;
    this->bNaniteSupport = false;
    this->NaniteTextureSize = 1024;
    this->bOverrideStaticMesh = true;
    this->bOverrideBonePosition = true;
    this->bOverrideBoneRotation = true;
    this->bOverrideBoneWeight = true;
    this->bOverrideVertexOffset = true;
    this->bOverrideVertexNormal = true;
    this->bOverrideNanite = true;
    this->Variations = NULL;
    this->bIsBaked = false;
    this->BoneColumnCount = 1;
    this->MaxBones = 0;
    this->MaxBoneLength = 0.00f;
    this->MaxVertices = 0;
    this->VerticesRowPerFrame = 0;
    this->TotalFrames = 0;
    this->MaxValue = 0.00f;
    this->bWedgeIndicesUnique = false;
}


