#include "GGNPCPatrolsSubsystem.h"

UGGNPCPatrolsSubsystem::UGGNPCPatrolsSubsystem() {
    this->PatrolLevelGroups.AddDefaulted(1);
    this->PatrolEntries.AddDefaulted(2);
    this->CurrentSettings = NULL;
}

void UGGNPCPatrolsSubsystem::PatrolClassesLoaded() {
}


