#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern void NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46 (void);
// 0x00000002 System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
extern void NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A (void);
// 0x00000003 UnityEngine.AI.NavMeshPathStatus UnityEngine.AI.NavMeshAgent::get_pathStatus()
extern void NavMeshAgent_get_pathStatus_m86F0B08D0018E3230218F8ED3A7C522A3765B648 (void);
// 0x00000004 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
extern void NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA (void);
// 0x00000005 UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
extern void NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1 (void);
// 0x00000006 System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern void NavMesh_Internal_CallOnNavMeshPreUpdate_m80148CFDD0C6F1DDDE5B3DA67A8D9613043A4233 (void);
// 0x00000007 System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern void NavMesh_SamplePosition_m51497866E71DD5263425E8572F2232D496E8F65A (void);
// 0x00000008 System.Boolean UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern void NavMesh_SamplePosition_Injected_m59777E11E947B46F60E9BCDF8C7CCFFAA5529E0D (void);
// 0x00000009 System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern void OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA (void);
// 0x0000000A System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern void OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914 (void);
static Il2CppMethodPointer s_methodPointers[10] = 
{
	NavMeshAgent_SetDestination_mD5D960933827F1F14B29CF4A3B6F305C064EBF46,
	NavMeshAgent_get_remainingDistance_m051C1B408E2740A95B5A5577C5EC7222311AA73A,
	NavMeshAgent_get_pathStatus_m86F0B08D0018E3230218F8ED3A7C522A3765B648,
	NavMeshAgent_SetDestination_Injected_mC3EF405F5AAFF9F98C5D5AECAD641525CDF742EA,
	NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1,
	NavMesh_Internal_CallOnNavMeshPreUpdate_m80148CFDD0C6F1DDDE5B3DA67A8D9613043A4233,
	NavMesh_SamplePosition_m51497866E71DD5263425E8572F2232D496E8F65A,
	NavMesh_SamplePosition_Injected_m59777E11E947B46F60E9BCDF8C7CCFFAA5529E0D,
	OnNavMeshPreUpdate__ctor_m7142A3AA991BE50B637A16D946AB7604C64EF9BA,
	OnNavMeshPreUpdate_Invoke_mFB224B9BBF9C78B7F39AA91A047F175C69897914,
};
extern void NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000005, NavMeshHit_get_position_m09E8FF6DEF5BFA3F30B3C4BCA4642442FF1BCBF1_AdjustorThunk },
};
static const int32_t s_InvokerIndices[10] = 
{
	5273,
	8961,
	8851,
	4992,
	9040,
	15370,
	10354,
	10298,
	4093,
	9051,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule = 
{
	"UnityEngine.AIModule.dll",
	10,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
