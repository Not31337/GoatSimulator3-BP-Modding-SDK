#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "LSReplicatedMeshRPCs.generated.h"

class ILSReplicatedMeshRPCs;
class ULSReplicatedMeshRPCs;

UINTERFACE()
class GOAT2_API ULSReplicatedMeshRPCs : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API ILSReplicatedMeshRPCs : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(Reliable, Server)
    virtual void ServerUpdateRagdollOnTarget(const TScriptInterface<ILSReplicatedMeshRPCs>& Target, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation);// PURE_VIRTUAL(ServerUpdateRagdollOnTarget, );
    
    UFUNCTION(Server, Unreliable)
    virtual void ServerUpdateRagdoll(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize NewActorLocation);// PURE_VIRTUAL(ServerUpdateRagdoll, );
    
    UFUNCTION(Reliable, Server)
    virtual void ServerUpdateFloatingRagdollOnTarget(const TScriptInterface<ILSReplicatedMeshRPCs>& Target, FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation);// PURE_VIRTUAL(ServerUpdateFloatingRagdollOnTarget, );
    
    UFUNCTION(Server, Unreliable)
    virtual void ServerUpdateFloatingRagdoll(FVector_NetQuantize NewRagdollVelocity, FVector_NetQuantize100 NewRagdollAngularVelocity, FVector_NetQuantize NewActorLocation);// PURE_VIRTUAL(ServerUpdateFloatingRagdoll, );
    
    UFUNCTION(Reliable, Server)
    virtual void ServerTeleportRagdollFinished();// PURE_VIRTUAL(ServerTeleportRagdollFinished, );
    
    UFUNCTION(Reliable, Server)
    virtual void ServerTeleportRagdoll(FVector TeleportLocation);// PURE_VIRTUAL(ServerTeleportRagdoll, );
    
    UFUNCTION(NetMulticast, Reliable)
    virtual void MulticastTeleportRagdoll(FVector TeleportLocation, bool bFromServer);// PURE_VIRTUAL(MulticastTeleportRagdoll, );
    
};

