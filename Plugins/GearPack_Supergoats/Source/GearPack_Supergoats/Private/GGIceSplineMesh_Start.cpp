#include "GGIceSplineMesh_Start.h"
#include "ESectionType.h"

UGGIceSplineMesh_Start::UGGIceSplineMesh_Start(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->SectionType = ESectionType::ST_Start;
}


