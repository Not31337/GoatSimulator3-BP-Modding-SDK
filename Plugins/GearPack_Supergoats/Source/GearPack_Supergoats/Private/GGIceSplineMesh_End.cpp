#include "GGIceSplineMesh_End.h"
#include "ESectionType.h"

UGGIceSplineMesh_End::UGGIceSplineMesh_End(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->SectionType = ESectionType::ST_End;
}


