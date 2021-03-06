﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Input.HandBounds
struct HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_tF069C36B0025C4942621750600D23B3DA9C14766;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_tB8E5C3B14A6E24F6ECA5F115DAA8A653CC2D7429;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t8AFAF6AF4E72A3D0D4ED60A77066D901C9CD0E90;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tAC5F0B9DCD31153CEDD94E415BB448DF001E003A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tA369D6CB41A54D397C9505B232F5CA1F2DE02DC9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_tE6606AA18177DE492A8C8296048C28178A56F450;
// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t8562208E3ABA2B447D30C4252957BCD393226EB7;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t97AFEE0639536C5D511A61231E045776F3855BB9;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider
struct BaseMixedRealityLineDataProvider_tEEB5D6D00EAFCAAF998AC4ED4D3920EC64ED7DA0;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_t52E07DAA80E44A227CC6C639222D790FAD690039;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder
struct ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__46
struct U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct InBetween_tC5B52898367EE8D90352914C344E59DC056134B2;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_tF29B752F5E31A119B45A3E42AE7676D07305D173;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2;
// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>[]
struct EntryU5BU5D_tCBEFC3B17567DF9BFCEC96E7AA9F0D3648A30816;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct KeyCollection_t536BE2DDD832A332D98D1EC37FFC03D0F501A587;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct ValueCollection_t36EAD17D65AF15774E32E2EDC731CC1803359195;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>
struct Dictionary_2_t3A5FD15F1CA4E8B8943DFFB112420B6B2B19D760;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_tDA95FCEEEBD8181022AEF848A6DC247F72E68F93;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerable_1_t64EE4D0116885A41B0257BC88A4756D2369D88B6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_tB465F1F5166C918A3FB703222959AE409C33123E;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>
struct IEqualityComparer_1_t5119B1B3509C580EE23A33AD53ED5686C29BC144;
// System.Collections.Generic.IList`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IList_1_tF526250CF4D4AD81A96D6A7710B73D73531296E2;
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IReadOnlyCollection_1_t1EF6E5BD26A259B7351B89C3367D91D120F3A6F8;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Gradient
struct Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityControllerVisualizer_t84214CF2461E1E815417B58C710DA3FA2A36D333_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityCursor_tB8E5C3B14A6E24F6ECA5F115DAA8A653CC2D7429_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityDataProviderAccess_t9324ABE13674A9152F8C12740CF8048326F19B76_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityHand_t5EFF4785392B457503DDF532E858F7D5DC844F45_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSource_tAC5F0B9DCD31153CEDD94E415BB448DF001E003A_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityPointer_tA369D6CB41A54D397C9505B232F5CA1F2DE02DC9_il2cpp_TypeInfo_var;
extern RuntimeClass* LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityRaycaster_tA29E28A1DC5DE3A3759A9A67BB07377B3FF55D4C_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3A8470CF56DD2F02DFDDA06EEF61875E5092940A;
extern String_t* _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E;
extern String_t* _stringLiteral8604633F91A5364A570785AE4355317FF69CAA79;
extern String_t* _stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B;
extern String_t* _stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE;
extern String_t* _stringLiteral9D08677538B56ECF9AED0A2EA9CEFADCE1634173;
extern String_t* _stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7;
extern String_t* _stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F;
extern String_t* _stringLiteralAEA2A24041B83C854AA97A8FFB2E549B15B679EF;
extern String_t* _stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9;
extern String_t* _stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE;
extern const RuntimeMethod* CollectionsExtensions_ToReadOnlyCollection_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m378489BD5A4ECAB74B080F889E377CA5F27BCFC6_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisHandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC_m8B060FB4A48474A67420AA0CB64BA0A611B4FC2E_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2_m8F111C6BBFAB5BCFE91E83FD61E1B4B89248821A_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponents_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m242E837E23DB912F0375CC06375C9461DF39C9F8_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m68BD69802EDDE0B7E496379E8517D1B922B9341F_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Intersect_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m263FB4F0F5ADCA007405AA95F18F91315CC429FA_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Union_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_mE730F185623512A7C0D51B48B7D728B392238DA3_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mB52649D6DF55E11EB2D5031B6B88A9F317A6D706_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mFF7396AB09EC0B1C5A33057C5E495B59CCBE47FF_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m77E21D82BDE56DFFBF2A159C987A9A76CFEF063E_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2_m4239EDD8BD0CFA30532871EF32838CACEA3B6F88_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_GetEnumerator_mC507457E4835B98FA6D1463ADC99C88C9CC3783E_RuntimeMethod_var;
extern const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B_mD8318245CB5697C6968F303DCCD89BD5189D1234_RuntimeMethod_var;
extern const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySourceStateHandler_t0A47B64C17DEC60D2575BA2F959068CA94312FAC_m56F56A398E3FB62D204DD46644001151D90A7056_RuntimeMethod_var;
extern const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySourceStateHandler_t0A47B64C17DEC60D2575BA2F959068CA94312FAC_m52D25F3D05FEB445B350835969EE51CB5726283A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m4D45AE562820838444B931A4C0764F36EBEA0274_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2B5463A3CA3A64C5964564E5116C7210C2F78F65_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AsReadOnly_m915BD3B89C4BE7D29E6D5B0C2BC5EB725657014C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m9FEA9AEA0BD0FCF012AE16CE908E787D86D7EDDE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m5C96734593D4EF6C6E530DEDA7E279C0B97682BE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m3B73CD4CB8BA876C55765D96C0DD67F23C740AC2_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mED74C71BB206E75A734C858BC58A7FE78EADCC60_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m656B3F1077970ACEBAF90C0F1FCBA2147787E077_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m68AEC3D24339BC8DBB40D553744DD5051AA8D608_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m0CE21981E4E789C6D2D29637F03BF806AAF3E229_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_mF2293692304E73FBCDC4DA51580B1650C6D28F38_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mECC937EB40B835110194782C9C5CE8BF92946966_RuntimeMethod_var;
extern const RuntimeMethod* PointerUtils_GetPointer_TisLinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11_m6866B5FE75B9F4FE3691B7835DE3ED4FFB039764_RuntimeMethod_var;
extern const RuntimeMethod* U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m936D25A8299138D1F5004E3CAB4EA37C62FF3635_RuntimeMethod_var;
extern const uint32_t ControllerFinder_AddControllerTransform_m77D05D74585973AAE6B4E79920C4B72B1BA8FA07_MetadataUsageId;
extern const uint32_t ControllerFinder_OnDisable_m7828956D5A66467CF7E8F6D25A36C4855329A655_MetadataUsageId;
extern const uint32_t ControllerFinder_OnEnable_m1BE60DF7BBD16FA15633450A6BCC1E4114F3A758_MetadataUsageId;
extern const uint32_t ControllerFinder_OnSourceDetected_m3B8E13607F901545A27E88929076D8A1DE281F19_MetadataUsageId;
extern const uint32_t ControllerFinder_OnSourceLost_m5CA99BE53A3835472D669C015A395572AA804CEE_MetadataUsageId;
extern const uint32_t ControllerFinder_RefreshControllerTransform_m7E4721F5F5C88C3C48F773E23F6B8E92DE19D099_MetadataUsageId;
extern const uint32_t ControllerFinder_RemoveControllerTransform_m804315B2080E494EA52B09DC922980471D017325_MetadataUsageId;
extern const uint32_t ControllerFinder_TryAndAddControllerTransform_m1E2BEADCD25227CD33CAA0B347457680E32AECFA_MetadataUsageId;
extern const uint32_t HandConstraintPalmUp_IsValidController_mFD7F53330B0E9B9B0E9E9EE1BFCAF89CAAAFA643_MetadataUsageId;
extern const uint32_t HandConstraint_CalculateGoalPosition_m1F920D14EDAD2A6C3497B9A7289A4D9BEB4434F7_MetadataUsageId;
extern const uint32_t HandConstraint_CalculateGoalRotation_m98B5D6EE1EF45FA04F5E273DFDC64D0D5B0A0DA5_MetadataUsageId;
extern const uint32_t HandConstraint_CalculateProjectedSafeZoneRay_mC9F9A4C3046F5C110C10158D4A6BA1FEC3ED157C_MetadataUsageId;
extern const uint32_t HandConstraint_GetController_m495712B457CC7186BF439E3846599B8D5C6EA9E1_MetadataUsageId;
extern const uint32_t HandConstraint_IsApplicableController_m644AFB4E353DDE8C84CD363961867CBE65677618_MetadataUsageId;
extern const uint32_t HandConstraint_IsOppositeHandNear_m9BD9D025C17CA2ECF970C22A774389FB2966440A_MetadataUsageId;
extern const uint32_t HandConstraint_IsPalmFacingCamera_mA8872F07D08860F2E9196FF015AAFC758D73DE95_MetadataUsageId;
extern const uint32_t HandConstraint_IsValidController_m2EE36F3A4FB06E1EFAEFCD12BCB26754C467C0C4_MetadataUsageId;
extern const uint32_t HandConstraint_OnEnable_m47344FC6A9DDF9C8ED60F78312F438B14813B5CC_MetadataUsageId;
extern const uint32_t HandConstraint_SolverUpdate_m268654B0D6484C4E2933DBC009B1177459F0A43D_MetadataUsageId;
extern const uint32_t HandConstraint_ToggleCursors_mCD542AD0B6F026FB811D0DF7D32C524F53F9E0C9_MetadataUsageId;
extern const uint32_t HandConstraint__ctor_mD37AEFAA4EE4C0D748E1D2BAC541263E5783A0E7_MetadataUsageId;
extern const uint32_t InBetween_AdjustPositionForOffset_m08257CB8CDB5348326411F428939079C28AFEC56_MetadataUsageId;
extern const uint32_t InBetween_SolverUpdate_m55B6FAA14D093A06C51B607FDDE7A78DBB2EB05D_MetadataUsageId;
extern const uint32_t InBetween_Start_m246875D7365CC0F9FAA45111E44C2AED18EF3FDF_MetadataUsageId;
extern const uint32_t InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2_MetadataUsageId;
extern const uint32_t InBetween_set_PartwayOffset_mDD64389E2908642022DBC5D0FA5959285E04A041_MetadataUsageId;
extern const uint32_t InBetween_set_SecondTransformOverride_mCAF21EFAB64D1C044672048F94BFC11E68E75458_MetadataUsageId;
extern const uint32_t Momentum_OnEnable_mB943CECE2FFD28AACDCE392D9BCC80232A06EDF8_MetadataUsageId;
extern const uint32_t Momentum_SnapTo_m94815257015DD9C43F19850EDD5EAE0969151F6C_MetadataUsageId;
extern const uint32_t Momentum_SolverUpdate_m6B3249B57543916CB86CE4B274D156CD23E4037A_MetadataUsageId;
extern const uint32_t Momentum_get_ReferencePosition_m260429F88ADAA8F78296416ADFE4E62F8F968515_MetadataUsageId;
extern const uint32_t Orbital_CalculateDesiredRotation_m58E428C2FCC8793EC68F6060D9079D1806EE1BEB_MetadataUsageId;
extern const uint32_t Orbital_SnapToTetherAngleSteps_m3564867BE63FF85139B7B6A03EE1B654E4B7E925_MetadataUsageId;
extern const uint32_t Orbital_SolverUpdate_mEA57E548D4BBE15F1F03C24097EDF83D72E045E1_MetadataUsageId;
extern const uint32_t Orbital__ctor_mA7E4C93DEADA958CAD089D25730716F772EE6D69_MetadataUsageId;
extern const uint32_t Orbital_set_TetherAngleSteps_mE75914F5EC48E901162D0EB9209E13A4FB235773_MetadataUsageId;
extern const uint32_t Overlap_SolverUpdate_m1A224A9AD6C470E0127BC98EEE7F74CAB0CA5EC4_MetadataUsageId;
extern const uint32_t RadialView_GetDesiredOrientation_DistanceOnly_m0C6CF1047CAB7B9B5CD347A65BC6A92AD04DFFE5_MetadataUsageId;
extern const uint32_t RadialView_GetDesiredOrientation_m8DBD521243B799C1AC00EB828CA6BFEF5A5DE90C_MetadataUsageId;
extern const uint32_t RadialView_SolverUpdate_m08C2EAC0A15F87F426F0A83F940EB8338D82450C_MetadataUsageId;
extern const uint32_t RadialView_get_ReferencePoint_mE43716CCC907FF1A7A42F27A0B324CE864918943_MetadataUsageId;
extern const uint32_t RadialView_get_SolverReferenceDirection_m7EFD18D79FF31A0503F3AF703A09875A324DDFA5_MetadataUsageId;
extern const uint32_t RadialView_get_UpReference_m07DDC1E573C3D1C717C8007B41547821D54F71C6_MetadataUsageId;
extern const uint32_t SolverHandler_AttachToNewTrackedObject_m0C42DF7F043A738657CCA4E71521BEB4DFCB4D14_MetadataUsageId;
extern const uint32_t SolverHandler_Awake_m106A6E4B9C8D35553E254BFA4E77F0D3B0CE0CA7_MetadataUsageId;
extern const uint32_t SolverHandler_DetachFromCurrentTrackedObject_m36B6FF7EB28AA5D06A2F50F1E60729A334F6C644_MetadataUsageId;
extern const uint32_t SolverHandler_GetControllerRay_mA41232CF22B467E3D1F9213DF1D0DCDA709BF75E_MetadataUsageId;
extern const uint32_t SolverHandler_IsInvalidTracking_m1E198FBF8DA32FE5D38E6926499A47914C62E146_MetadataUsageId;
extern const uint32_t SolverHandler_LateUpdate_m91085B779226C010E9105D1F3F7360F56A30656C_MetadataUsageId;
extern const uint32_t SolverHandler_RegisterSolver_m1DE44CB0AAB86F547D097AF8EF3BCB327FD4C4A9_MetadataUsageId;
extern const uint32_t SolverHandler_TrackTransform_mD4D3DA119B2FA86FB256BA23FFB6EBCA769D1440_MetadataUsageId;
extern const uint32_t SolverHandler_UnregisterSolver_m0B3E98FED22AE01201B87BDD21491217D5781476_MetadataUsageId;
extern const uint32_t SolverHandler__ctor_m5C1CC24827172A54FC7E4B0317CF4E30B20CAE3E_MetadataUsageId;
extern const uint32_t SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626_MetadataUsageId;
extern const uint32_t SolverHandler_get_Solvers_m4CA63E3247A4EF9CF68D496548CEBB35A200E77A_MetadataUsageId;
extern const uint32_t SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160_MetadataUsageId;
extern const uint32_t SolverHandler_set_AdditionalOffset_m051958EB1155133A2EA9E3DDFA80FC31CDB336E5_MetadataUsageId;
extern const uint32_t SolverHandler_set_AdditionalRotation_mA67CD2BE9BFC5D3BF89F131FF1EE03E82541CDB6_MetadataUsageId;
extern const uint32_t SolverHandler_set_Solvers_mA5AC288FA3050D31759EF93D5F7AD97D2845D452_MetadataUsageId;
extern const uint32_t SolverHandler_set_TransformOverride_mA89F43DB575BE35D2BE34B9EDCA25550136E7465_MetadataUsageId;
extern const uint32_t Solver_AddOffset_m9BCDE3679EB69F02E28B8132C4E7E68BCA4C02A2_MetadataUsageId;
extern const uint32_t Solver_Awake_mA20BF70A9C3882332EB0AFEFCAA752CB24305744_MetadataUsageId;
extern const uint32_t Solver_OnDestroy_m49600449C079E0C3C90DE6D7159CCC239A4FE80A_MetadataUsageId;
extern const uint32_t Solver_OnEnable_m46A8122E1DAA84489C8789D9BE71FF1168C94667_MetadataUsageId;
extern const uint32_t Solver_SmoothTo_m0467D33544193A9256767C9559C84B699AE00BDB_MetadataUsageId;
extern const uint32_t Solver_SmoothTo_m94E4E897CD5E8E44DBA629969701F8672CCD304A_MetadataUsageId;
extern const uint32_t Solver_Start_mDD65645E4B6947EAE1C13937656A4A0D0B7094E8_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_BoxRaycastStepUpdate_m00F3FE4065064FF707CA299A4D8D5BEC7A2A9D68_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_CalculateMagnetismOrientation_m51175EF1CF25AF8041EEEB8CDFCF87B7EFE8E989_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_FindPlacementPlane_mC55DCD94A1DEEA5DD57FA0FEA6D34500F62866A9_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_IsNormalVertical_m11558881BEBE9280171A9A9967E76AAE30A7FE68_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SimpleRaycastStepUpdate_mE9637B2D2DAFB64D5A1303C3F1C476FB299AE0FF_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SolverUpdate_m1366BDA6DA5193118B0E688E28460AA0732CC0DD_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SphereRaycastStepUpdate_mE15D0BC44F816F08924BEEE6608992CAF20BF400_MetadataUsageId;
extern const uint32_t SurfaceMagnetism__ctor_mC939EF334884C1D2D725087BAEB335F796806356_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastDirection_m2DDCC12330325E042CEA2A6C336B8DC157248E13_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastEndPoint_m5D6FAFB761BE4F6746BD62AB555ED328B1639614_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastOrigin_m23DB9CCF51CDA90AA4ED55DC205B18282AEBF682_MetadataUsageId;
extern const uint32_t TileGridObjectCollection_GetListPosition_mC12E8CDFB1F86564378EEC21E7B5012B72265E1B_MetadataUsageId;
extern const uint32_t TileGridObjectCollection_Update_mAF6C86CD9800600D3F3BF19E8AAA652A2949A52D_MetadataUsageId;
extern const uint32_t TileGridObjectCollection__ctor_mC52E8BC7805A5F03400F3E98DABA0B46F988981B_MetadataUsageId;
extern const uint32_t U3CToggleCursorsU3Ed__46_MoveNext_mC0012B59FE554D6CEC02EDE0778D7810ADB299A2_MetadataUsageId;
extern const uint32_t U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m936D25A8299138D1F5004E3CAB4EA37C62FF3635_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D;
struct SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CTOGGLECURSORSU3ED__46_T604C7F8252800EE263D73B88C14CDBF6C76F6622_H
#define U3CTOGGLECURSORSU3ED__46_T604C7F8252800EE263D73B88C14CDBF6C76F6622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46
struct  U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::controller
	RuntimeObject* ___controller_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::visible
	bool ___visible_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::frameDelay
	bool ___frameDelay_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>4__this
	HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * ___U3CU3E4__this_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>s__1
	IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* ___U3CU3Es__1_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>s__2
	int32_t ___U3CU3Es__2_7;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<pointer>5__3
	RuntimeObject* ___U3CpointerU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___controller_2)); }
	inline RuntimeObject* get_controller_2() const { return ___controller_2; }
	inline RuntimeObject** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(RuntimeObject* value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((&___controller_2), value);
	}

	inline static int32_t get_offset_of_visible_3() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___visible_3)); }
	inline bool get_visible_3() const { return ___visible_3; }
	inline bool* get_address_of_visible_3() { return &___visible_3; }
	inline void set_visible_3(bool value)
	{
		___visible_3 = value;
	}

	inline static int32_t get_offset_of_frameDelay_4() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___frameDelay_4)); }
	inline bool get_frameDelay_4() const { return ___frameDelay_4; }
	inline bool* get_address_of_frameDelay_4() { return &___frameDelay_4; }
	inline void set_frameDelay_4(bool value)
	{
		___frameDelay_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___U3CU3E4__this_5)); }
	inline HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___U3CU3Es__1_6)); }
	inline IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D** get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Es__1_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_7() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___U3CU3Es__2_7)); }
	inline int32_t get_U3CU3Es__2_7() const { return ___U3CU3Es__2_7; }
	inline int32_t* get_address_of_U3CU3Es__2_7() { return &___U3CU3Es__2_7; }
	inline void set_U3CU3Es__2_7(int32_t value)
	{
		___U3CU3Es__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622, ___U3CpointerU3E5__3_8)); }
	inline RuntimeObject* get_U3CpointerU3E5__3_8() const { return ___U3CpointerU3E5__3_8; }
	inline RuntimeObject** get_address_of_U3CpointerU3E5__3_8() { return &___U3CpointerU3E5__3_8; }
	inline void set_U3CpointerU3E5__3_8(RuntimeObject* value)
	{
		___U3CpointerU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerU3E5__3_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTOGGLECURSORSU3ED__46_T604C7F8252800EE263D73B88C14CDBF6C76F6622_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T5D27F64D301A4E347129B8E54158F74E72556596_H
#define DICTIONARY_2_T5D27F64D301A4E347129B8E54158F74E72556596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>
struct  Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCBEFC3B17567DF9BFCEC96E7AA9F0D3648A30816* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t536BE2DDD832A332D98D1EC37FFC03D0F501A587 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t36EAD17D65AF15774E32E2EDC731CC1803359195 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___entries_1)); }
	inline EntryU5BU5D_tCBEFC3B17567DF9BFCEC96E7AA9F0D3648A30816* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCBEFC3B17567DF9BFCEC96E7AA9F0D3648A30816** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCBEFC3B17567DF9BFCEC96E7AA9F0D3648A30816* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___keys_7)); }
	inline KeyCollection_t536BE2DDD832A332D98D1EC37FFC03D0F501A587 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t536BE2DDD832A332D98D1EC37FFC03D0F501A587 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t536BE2DDD832A332D98D1EC37FFC03D0F501A587 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ___values_8)); }
	inline ValueCollection_t36EAD17D65AF15774E32E2EDC731CC1803359195 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t36EAD17D65AF15774E32E2EDC731CC1803359195 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t36EAD17D65AF15774E32E2EDC731CC1803359195 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T5D27F64D301A4E347129B8E54158F74E72556596_H
#ifndef HASHSET_1_T1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4_H
#define HASHSET_1_T1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct  HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tDA95FCEEEBD8181022AEF848A6DC247F72E68F93* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4, ____slots_8)); }
	inline SlotU5BU5D_tDA95FCEEEBD8181022AEF848A6DC247F72E68F93* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tDA95FCEEEBD8181022AEF848A6DC247F72E68F93** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tDA95FCEEEBD8181022AEF848A6DC247F72E68F93* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4_H
#ifndef LIST_1_T8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25_H
#define LIST_1_T8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25, ____items_1)); }
	inline SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* get__items_1() const { return ____items_1; }
	inline SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25_StaticFields, ____emptyArray_5)); }
	inline SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25_H
#ifndef READONLYCOLLECTION_1_T9ED5454309543BCEA401CD6B505481CB8CB55A07_H
#define READONLYCOLLECTION_1_T9ED5454309543BCEA401CD6B505481CB8CB55A07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T9ED5454309543BCEA401CD6B505481CB8CB55A07_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#define UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUMERATOR_T762B04000FAA9F0533B9CD6B1F89F8B794E4626E_H
#define ENUMERATOR_T762B04000FAA9F0533B9CD6B1F89F8B794E4626E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1_Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct  Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E, ____set_0)); }
	inline HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((&____set_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T762B04000FAA9F0533B9CD6B1F89F8B794E4626E_H
#ifndef ENUMERATOR_T8434FF623060595DB1C2B2231A4DC225034F0A7A_H
#define ENUMERATOR_T8434FF623060595DB1C2B2231A4DC225034F0A7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1_Enumerator<System.Object>
struct  Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1_Enumerator::_set
	HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1_Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1_Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____set_0)); }
	inline HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((&____set_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((&____current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T8434FF623060595DB1C2B2231A4DC225034F0A7A_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#define UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#ifndef LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#define LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef RAYSTEP_TD600880A950E7AD2CC628F821E4C9936DEAA262B_H
#define RAYSTEP_TD600880A950E7AD2CC628F821E4C9936DEAA262B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct  RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B_StaticFields, ___dist_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dist_0() const { return ___dist_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B_StaticFields, ___dir_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dir_1() const { return ___dir_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B_StaticFields, ___pos_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_pos_2() const { return ___pos_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___pos_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYSTEP_TD600880A950E7AD2CC628F821E4C9936DEAA262B_H
#ifndef SCENEQUERYTYPE_T0BC9B81B3EE67866D6542EC05B92EC0F3FFD2BA5_H
#define SCENEQUERYTYPE_T0BC9B81B3EE67866D6542EC05B92EC0F3FFD2BA5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct  SceneQueryType_t0BC9B81B3EE67866D6542EC05B92EC0F3FFD2BA5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t0BC9B81B3EE67866D6542EC05B92EC0F3FFD2BA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEQUERYTYPE_T0BC9B81B3EE67866D6542EC05B92EC0F3FFD2BA5_H
#ifndef TRACKINGSTATE_TA8BF312775B443ABF9976299097170773F17B64C_H
#define TRACKINGSTATE_TA8BF312775B443ABF9976299097170773F17B64C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tA8BF312775B443ABF9976299097170773F17B64C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tA8BF312775B443ABF9976299097170773F17B64C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSTATE_TA8BF312775B443ABF9976299097170773F17B64C_H
#ifndef AXISTYPE_TBC98A816F11947D8F8C750865A90359794459654_H
#define AXISTYPE_TBC98A816F11947D8F8C750865A90359794459654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tBC98A816F11947D8F8C750865A90359794459654 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tBC98A816F11947D8F8C750865A90359794459654, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTYPE_TBC98A816F11947D8F8C750865A90359794459654_H
#ifndef HANDEDNESS_T08AAB76527953606BF62828E2A7E40AADB3EAFDB_H
#define HANDEDNESS_T08AAB76527953606BF62828E2A7E40AADB3EAFDB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_t08AAB76527953606BF62828E2A7E40AADB3EAFDB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t08AAB76527953606BF62828E2A7E40AADB3EAFDB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_T08AAB76527953606BF62828E2A7E40AADB3EAFDB_H
#ifndef MIXEDREALITYPOSE_T5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_H
#define MIXEDREALITYPOSE_T5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYPOSE_T5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8_H
#ifndef RADIALVIEWREFERENCEDIRECTION_T13C84CE72F05D544D4E553DF62D83414C93B97D9_H
#define RADIALVIEWREFERENCEDIRECTION_T13C84CE72F05D544D4E553DF62D83414C93B97D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection
struct  RadialViewReferenceDirection_t13C84CE72F05D544D4E553DF62D83414C93B97D9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RadialViewReferenceDirection_t13C84CE72F05D544D4E553DF62D83414C93B97D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RADIALVIEWREFERENCEDIRECTION_T13C84CE72F05D544D4E553DF62D83414C93B97D9_H
#ifndef SOLVERORIENTATIONTYPE_T271915C44CFC10E68200BB466901F279C35AA940_H
#define SOLVERORIENTATIONTYPE_T271915C44CFC10E68200BB466901F279C35AA940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType
struct  SolverOrientationType_t271915C44CFC10E68200BB466901F279C35AA940 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOrientationType_t271915C44CFC10E68200BB466901F279C35AA940, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERORIENTATIONTYPE_T271915C44CFC10E68200BB466901F279C35AA940_H
#ifndef SOLVERROTATIONBEHAVIOR_TA775F988019D139973B5A7C226E880B9CC5BC746_H
#define SOLVERROTATIONBEHAVIOR_TA775F988019D139973B5A7C226E880B9CC5BC746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior
struct  SolverRotationBehavior_tA775F988019D139973B5A7C226E880B9CC5BC746 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverRotationBehavior_tA775F988019D139973B5A7C226E880B9CC5BC746, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERROTATIONBEHAVIOR_TA775F988019D139973B5A7C226E880B9CC5BC746_H
#ifndef SOLVERSAFEZONE_T603A3FBA0AA75B24B44295DB1C9788F7178A289C_H
#define SOLVERSAFEZONE_T603A3FBA0AA75B24B44295DB1C9788F7178A289C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone
struct  SolverSafeZone_t603A3FBA0AA75B24B44295DB1C9788F7178A289C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverSafeZone_t603A3FBA0AA75B24B44295DB1C9788F7178A289C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERSAFEZONE_T603A3FBA0AA75B24B44295DB1C9788F7178A289C_H
#ifndef ORIENTATIONMODE_T29B7DA638E24DC3E3BEA71EACB9889A4434080A0_H
#define ORIENTATIONMODE_T29B7DA638E24DC3E3BEA71EACB9889A4434080A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode
struct  OrientationMode_t29B7DA638E24DC3E3BEA71EACB9889A4434080A0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationMode_t29B7DA638E24DC3E3BEA71EACB9889A4434080A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTATIONMODE_T29B7DA638E24DC3E3BEA71EACB9889A4434080A0_H
#ifndef RAYCASTDIRECTIONMODE_TAC61422F92AB9E331C8ACE91BF51616F6DAD3507_H
#define RAYCASTDIRECTIONMODE_TAC61422F92AB9E331C8ACE91BF51616F6DAD3507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode
struct  RaycastDirectionMode_tAC61422F92AB9E331C8ACE91BF51616F6DAD3507 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionMode_tAC61422F92AB9E331C8ACE91BF51616F6DAD3507, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTDIRECTIONMODE_TAC61422F92AB9E331C8ACE91BF51616F6DAD3507_H
#ifndef GRIDDIVISIONS_TBB4497312A1ECA6C5575F7CC3B007C9126D214A3_H
#define GRIDDIVISIONS_TBB4497312A1ECA6C5575F7CC3B007C9126D214A3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions
struct  GridDivisions_tBB4497312A1ECA6C5575F7CC3B007C9126D214A3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridDivisions_tBB4497312A1ECA6C5575F7CC3B007C9126D214A3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDDIVISIONS_TBB4497312A1ECA6C5575F7CC3B007C9126D214A3_H
#ifndef TRACKEDHANDJOINT_T176970888553432D46070ECFF0B02AD1B8BA2B77_H
#define TRACKEDHANDJOINT_T176970888553432D46070ECFF0B02AD1B8BA2B77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_t176970888553432D46070ECFF0B02AD1B8BA2B77 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t176970888553432D46070ECFF0B02AD1B8BA2B77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDHANDJOINT_T176970888553432D46070ECFF0B02AD1B8BA2B77_H
#ifndef TRACKEDOBJECTTYPE_T78038782636A9A95AB47DECCFEB965B8E9592887_H
#define TRACKEDOBJECTTYPE_T78038782636A9A95AB47DECCFEB965B8E9592887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType
struct  TrackedObjectType_t78038782636A9A95AB47DECCFEB965B8E9592887 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t78038782636A9A95AB47DECCFEB965B8E9592887, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDOBJECTTYPE_T78038782636A9A95AB47DECCFEB965B8E9592887_H
#ifndef VECTOR3SMOOTHED_T56C0FC4A86F576E2914EE6A780E1FEFFE21309C5_H
#define VECTOR3SMOOTHED_T56C0FC4A86F576E2914EE6A780E1FEFFE21309C5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed
struct  Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3SMOOTHED_T56C0FC4A86F576E2914EE6A780E1FEFFE21309C5_H
#ifndef BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#define BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ByteEnum
struct  ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENUM_T406C975039F6312CDE58A265A6ECFD861F8C06CD_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#define BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#define HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
#define PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#define RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifndef MIXEDREALITYINPUTACTION_T7ACD606B450B908E03401BB3CC5742FBB6810001_H
#define MIXEDREALITYINPUTACTION_T7ACD606B450B908E03401BB3CC5742FBB6810001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_T7ACD606B450B908E03401BB3CC5742FBB6810001_H
#ifndef NULLABLE_1_T6CF061795784BAECC42FB0CC0552D78D82A028F8_H
#define NULLABLE_1_T6CF061795784BAECC42FB0CC0552D78D82A028F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>
struct  Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T6CF061795784BAECC42FB0CC0552D78D82A028F8_H
#ifndef NULLABLE_1_TAD3D374B25057F9C5F22F267FE9A4F0EE5F82152_H
#define NULLABLE_1_TAD3D374B25057F9C5F22F267FE9A4F0EE5F82152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.ByteEnum>
struct  Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_TAD3D374B25057F9C5F22F267FE9A4F0EE5F82152_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef BASEINPUTEVENTDATA_TC4D9FC1657620CC4A89787F18C99F2904C366CEB_H
#define BASEINPUTEVENTDATA_TC4D9FC1657620CC4A89787F18C99F2904C366CEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct  BaseInputEventData_tC4D9FC1657620CC4A89787F18C99F2904C366CEB  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___U3CMixedRealityInputActionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_tC4D9FC1657620CC4A89787F18C99F2904C366CEB, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_tC4D9FC1657620CC4A89787F18C99F2904C366CEB, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_tC4D9FC1657620CC4A89787F18C99F2904C366CEB, ___U3CSourceIdU3Ek__BackingField_4)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_4() const { return ___U3CSourceIdU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_4() { return &___U3CSourceIdU3Ek__BackingField_4; }
	inline void set_U3CSourceIdU3Ek__BackingField_4(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseInputEventData_tC4D9FC1657620CC4A89787F18C99F2904C366CEB, ___U3CMixedRealityInputActionU3Ek__BackingField_5)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_U3CMixedRealityInputActionU3Ek__BackingField_5() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_5() { return &___U3CMixedRealityInputActionU3Ek__BackingField_5; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_5(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTEVENTDATA_TC4D9FC1657620CC4A89787F18C99F2904C366CEB_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef SOURCESTATEEVENTDATA_T16ECCDFFE1814B1AC194D6F993989B07935CF5EA_H
#define SOURCESTATEEVENTDATA_T16ECCDFFE1814B1AC194D6F993989B07935CF5EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct  SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA  : public BaseInputEventData_tC4D9FC1657620CC4A89787F18C99F2904C366CEB
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA, ___U3CControllerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_6() const { return ___U3CControllerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_6() { return &___U3CControllerU3Ek__BackingField_6; }
	inline void set_U3CControllerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControllerU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCESTATEEVENTDATA_T16ECCDFFE1814B1AC194D6F993989B07935CF5EA_H
#ifndef BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#define BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef HANDBOUNDS_T7A745238739B7041F7B13B6383565C36F4B287DC_H
#define HANDBOUNDS_T7A745238739B7041F7B13B6383565C36F4B287DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.HandBounds
struct  HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds> Microsoft.MixedReality.Toolkit.Input.HandBounds::<Bounds>k__BackingField
	Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 * ___U3CBoundsU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandBounds::drawBoundsGizmo
	bool ___drawBoundsGizmo_5;

public:
	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC, ___U3CBoundsU3Ek__BackingField_4)); }
	inline Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 * get_U3CBoundsU3Ek__BackingField_4() const { return ___U3CBoundsU3Ek__BackingField_4; }
	inline Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 ** get_address_of_U3CBoundsU3Ek__BackingField_4() { return &___U3CBoundsU3Ek__BackingField_4; }
	inline void set_U3CBoundsU3Ek__BackingField_4(Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 * value)
	{
		___U3CBoundsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBoundsU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_drawBoundsGizmo_5() { return static_cast<int32_t>(offsetof(HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC, ___drawBoundsGizmo_5)); }
	inline bool get_drawBoundsGizmo_5() const { return ___drawBoundsGizmo_5; }
	inline bool* get_address_of_drawBoundsGizmo_5() { return &___drawBoundsGizmo_5; }
	inline void set_drawBoundsGizmo_5(bool value)
	{
		___drawBoundsGizmo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDBOUNDS_T7A745238739B7041F7B13B6383565C36F4B287DC_H
#ifndef INPUTSYSTEMGLOBALHANDLERLISTENER_TB6FC719C6106F01C78762E179F99378F4A2B1504_H
#define INPUTSYSTEMGLOBALHANDLERLISTENER_TB6FC719C6106F01C78762E179F99378F4A2B1504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct  InputSystemGlobalHandlerListener_tB6FC719C6106F01C78762E179F99378F4A2B1504  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_tB6FC719C6106F01C78762E179F99378F4A2B1504, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSYSTEMGLOBALHANDLERLISTENER_TB6FC719C6106F01C78762E179F99378F4A2B1504_H
#ifndef CONTROLLERFINDER_TA3DA2984D7C78CC98A1259581CAF83CBECB48B0E_H
#define CONTROLLERFINDER_TA3DA2984D7C78CC98A1259581CAF83CBECB48B0E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder
struct  ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::handedness
	uint8_t ___handedness_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::ControllerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___ControllerTransform_5;

public:
	inline static int32_t get_offset_of_handedness_4() { return static_cast<int32_t>(offsetof(ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E, ___handedness_4)); }
	inline uint8_t get_handedness_4() const { return ___handedness_4; }
	inline uint8_t* get_address_of_handedness_4() { return &___handedness_4; }
	inline void set_handedness_4(uint8_t value)
	{
		___handedness_4 = value;
	}

	inline static int32_t get_offset_of_ControllerTransform_5() { return static_cast<int32_t>(offsetof(ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E, ___ControllerTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_ControllerTransform_5() const { return ___ControllerTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_ControllerTransform_5() { return &___ControllerTransform_5; }
	inline void set_ControllerTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___ControllerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___ControllerTransform_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERFINDER_TA3DA2984D7C78CC98A1259581CAF83CBECB48B0E_H
#ifndef SOLVER_TDBEB3FF9DDDBBC02214325E78DBE839294AE4948_H
#define SOLVER_TDBEB3FF9DDDBBC02214325E78DBE839294AE4948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct  Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScale
	bool ___maintainScale_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * ___SolverHandler_12;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScale_8() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___maintainScale_8)); }
	inline bool get_maintainScale_8() const { return ___maintainScale_8; }
	inline bool* get_address_of_maintainScale_8() { return &___maintainScale_8; }
	inline void set_maintainScale_8(bool value)
	{
		___maintainScale_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948, ___SolverHandler_12)); }
	inline SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___SolverHandler_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVER_TDBEB3FF9DDDBBC02214325E78DBE839294AE4948_H
#ifndef SOLVERHANDLER_T44F0C43151D592FE202920B24C466CDA96FF40C2_H
#define SOLVERHANDLER_T44F0C43151D592FE202920B24C466CDA96FF40C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct  SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandness
	uint8_t ___trackedHandness_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformOverride_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::solvers
	List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * ___solvers_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolversList
	bool ___updateSolversList_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  ___U3CAltScaleU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::currentTrackedHandedness
	uint8_t ___currentTrackedHandedness_18;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::preferredTrackedHandedness
	uint8_t ___preferredTrackedHandedness_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackingTarget
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingTarget_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_21;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::handJointService
	RuntimeObject* ___handJointService_22;

public:
	inline static int32_t get_offset_of_trackedTargetType_4() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___trackedTargetType_4)); }
	inline int32_t get_trackedTargetType_4() const { return ___trackedTargetType_4; }
	inline int32_t* get_address_of_trackedTargetType_4() { return &___trackedTargetType_4; }
	inline void set_trackedTargetType_4(int32_t value)
	{
		___trackedTargetType_4 = value;
	}

	inline static int32_t get_offset_of_trackedHandness_5() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___trackedHandness_5)); }
	inline uint8_t get_trackedHandness_5() const { return ___trackedHandness_5; }
	inline uint8_t* get_address_of_trackedHandness_5() { return &___trackedHandness_5; }
	inline void set_trackedHandness_5(uint8_t value)
	{
		___trackedHandness_5 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_6() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___trackedHandJoint_6)); }
	inline int32_t get_trackedHandJoint_6() const { return ___trackedHandJoint_6; }
	inline int32_t* get_address_of_trackedHandJoint_6() { return &___trackedHandJoint_6; }
	inline void set_trackedHandJoint_6(int32_t value)
	{
		___trackedHandJoint_6 = value;
	}

	inline static int32_t get_offset_of_transformOverride_7() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___transformOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformOverride_7() const { return ___transformOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformOverride_7() { return &___transformOverride_7; }
	inline void set_transformOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformOverride_7 = value;
		Il2CppCodeGenWriteBarrier((&___transformOverride_7), value);
	}

	inline static int32_t get_offset_of_additionalOffset_8() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___additionalOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_8() const { return ___additionalOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_8() { return &___additionalOffset_8; }
	inline void set_additionalOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_8 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_9() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___additionalRotation_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_9() const { return ___additionalRotation_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_9() { return &___additionalRotation_9; }
	inline void set_additionalRotation_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_9 = value;
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_solvers_11() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___solvers_11)); }
	inline List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * get_solvers_11() const { return ___solvers_11; }
	inline List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 ** get_address_of_solvers_11() { return &___solvers_11; }
	inline void set_solvers_11(List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * value)
	{
		___solvers_11 = value;
		Il2CppCodeGenWriteBarrier((&___solvers_11), value);
	}

	inline static int32_t get_offset_of_updateSolversList_12() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___updateSolversList_12)); }
	inline bool get_updateSolversList_12() const { return ___updateSolversList_12; }
	inline bool* get_address_of_updateSolversList_12() { return &___updateSolversList_12; }
	inline void set_updateSolversList_12(bool value)
	{
		___updateSolversList_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___U3CGoalPositionU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_13() const { return ___U3CGoalPositionU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_13() { return &___U3CGoalPositionU3Ek__BackingField_13; }
	inline void set_U3CGoalPositionU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___U3CGoalRotationU3Ek__BackingField_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_14() const { return ___U3CGoalRotationU3Ek__BackingField_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_14() { return &___U3CGoalRotationU3Ek__BackingField_14; }
	inline void set_U3CGoalRotationU3Ek__BackingField_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___U3CGoalScaleU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_15() const { return ___U3CGoalScaleU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_15() { return &___U3CGoalScaleU3Ek__BackingField_15; }
	inline void set_U3CGoalScaleU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___U3CAltScaleU3Ek__BackingField_16)); }
	inline Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  get_U3CAltScaleU3Ek__BackingField_16() const { return ___U3CAltScaleU3Ek__BackingField_16; }
	inline Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5 * get_address_of_U3CAltScaleU3Ek__BackingField_16() { return &___U3CAltScaleU3Ek__BackingField_16; }
	inline void set_U3CAltScaleU3Ek__BackingField_16(Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  value)
	{
		___U3CAltScaleU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___U3CDeltaTimeU3Ek__BackingField_17)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_17() const { return ___U3CDeltaTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_17() { return &___U3CDeltaTimeU3Ek__BackingField_17; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_17(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_currentTrackedHandedness_18() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___currentTrackedHandedness_18)); }
	inline uint8_t get_currentTrackedHandedness_18() const { return ___currentTrackedHandedness_18; }
	inline uint8_t* get_address_of_currentTrackedHandedness_18() { return &___currentTrackedHandedness_18; }
	inline void set_currentTrackedHandedness_18(uint8_t value)
	{
		___currentTrackedHandedness_18 = value;
	}

	inline static int32_t get_offset_of_preferredTrackedHandedness_19() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___preferredTrackedHandedness_19)); }
	inline uint8_t get_preferredTrackedHandedness_19() const { return ___preferredTrackedHandedness_19; }
	inline uint8_t* get_address_of_preferredTrackedHandedness_19() { return &___preferredTrackedHandedness_19; }
	inline void set_preferredTrackedHandedness_19(uint8_t value)
	{
		___preferredTrackedHandedness_19 = value;
	}

	inline static int32_t get_offset_of_trackingTarget_20() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___trackingTarget_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingTarget_20() const { return ___trackingTarget_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingTarget_20() { return &___trackingTarget_20; }
	inline void set_trackingTarget_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingTarget_20 = value;
		Il2CppCodeGenWriteBarrier((&___trackingTarget_20), value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_21() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___lastUpdateTime_21)); }
	inline float get_lastUpdateTime_21() const { return ___lastUpdateTime_21; }
	inline float* get_address_of_lastUpdateTime_21() { return &___lastUpdateTime_21; }
	inline void set_lastUpdateTime_21(float value)
	{
		___lastUpdateTime_21 = value;
	}

	inline static int32_t get_offset_of_handJointService_22() { return static_cast<int32_t>(offsetof(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2, ___handJointService_22)); }
	inline RuntimeObject* get_handJointService_22() const { return ___handJointService_22; }
	inline RuntimeObject** get_address_of_handJointService_22() { return &___handJointService_22; }
	inline void set_handJointService_22(RuntimeObject* value)
	{
		___handJointService_22 = value;
		Il2CppCodeGenWriteBarrier((&___handJointService_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERHANDLER_T44F0C43151D592FE202920B24C466CDA96FF40C2_H
#ifndef TILEGRIDOBJECTCOLLECTION_TEE0174AD585A66713BEA454E011F8402896BFC20_H
#define TILEGRIDOBJECTCOLLECTION_TEE0174AD585A66713BEA454E011F8402896BFC20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct  TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Columns
	int32_t ___Columns_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::TileSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TileSize_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Gutters
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Gutters_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::LayoutDireciton
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LayoutDireciton_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::StartPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___StartPosition_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Centered
	bool ___Centered_9;
	// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::DepthCalculatedBy
	int32_t ___DepthCalculatedBy_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnlyInEditMode
	bool ___OnlyInEditMode_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::offSet
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offSet_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::editorUpdated
	bool ___editorUpdated_13;

public:
	inline static int32_t get_offset_of_Columns_4() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___Columns_4)); }
	inline int32_t get_Columns_4() const { return ___Columns_4; }
	inline int32_t* get_address_of_Columns_4() { return &___Columns_4; }
	inline void set_Columns_4(int32_t value)
	{
		___Columns_4 = value;
	}

	inline static int32_t get_offset_of_TileSize_5() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___TileSize_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TileSize_5() const { return ___TileSize_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TileSize_5() { return &___TileSize_5; }
	inline void set_TileSize_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TileSize_5 = value;
	}

	inline static int32_t get_offset_of_Gutters_6() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___Gutters_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Gutters_6() const { return ___Gutters_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Gutters_6() { return &___Gutters_6; }
	inline void set_Gutters_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Gutters_6 = value;
	}

	inline static int32_t get_offset_of_LayoutDireciton_7() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___LayoutDireciton_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LayoutDireciton_7() const { return ___LayoutDireciton_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LayoutDireciton_7() { return &___LayoutDireciton_7; }
	inline void set_LayoutDireciton_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LayoutDireciton_7 = value;
	}

	inline static int32_t get_offset_of_StartPosition_8() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___StartPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_StartPosition_8() const { return ___StartPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_StartPosition_8() { return &___StartPosition_8; }
	inline void set_StartPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___StartPosition_8 = value;
	}

	inline static int32_t get_offset_of_Centered_9() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___Centered_9)); }
	inline bool get_Centered_9() const { return ___Centered_9; }
	inline bool* get_address_of_Centered_9() { return &___Centered_9; }
	inline void set_Centered_9(bool value)
	{
		___Centered_9 = value;
	}

	inline static int32_t get_offset_of_DepthCalculatedBy_10() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___DepthCalculatedBy_10)); }
	inline int32_t get_DepthCalculatedBy_10() const { return ___DepthCalculatedBy_10; }
	inline int32_t* get_address_of_DepthCalculatedBy_10() { return &___DepthCalculatedBy_10; }
	inline void set_DepthCalculatedBy_10(int32_t value)
	{
		___DepthCalculatedBy_10 = value;
	}

	inline static int32_t get_offset_of_OnlyInEditMode_11() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___OnlyInEditMode_11)); }
	inline bool get_OnlyInEditMode_11() const { return ___OnlyInEditMode_11; }
	inline bool* get_address_of_OnlyInEditMode_11() { return &___OnlyInEditMode_11; }
	inline void set_OnlyInEditMode_11(bool value)
	{
		___OnlyInEditMode_11 = value;
	}

	inline static int32_t get_offset_of_offSet_12() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___offSet_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offSet_12() const { return ___offSet_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offSet_12() { return &___offSet_12; }
	inline void set_offSet_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offSet_12 = value;
	}

	inline static int32_t get_offset_of_editorUpdated_13() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20, ___editorUpdated_13)); }
	inline bool get_editorUpdated_13() const { return ___editorUpdated_13; }
	inline bool* get_address_of_editorUpdated_13() { return &___editorUpdated_13; }
	inline void set_editorUpdated_13(bool value)
	{
		___editorUpdated_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEGRIDOBJECTCOLLECTION_TEE0174AD585A66713BEA454E011F8402896BFC20_H
#ifndef CONTROLLERPOSESYNCHRONIZER_T9F7931E41F7AACAF73487BBED1181442D7B36EF0_H
#define CONTROLLERPOSESYNCHRONIZER_T9F7931E41F7AACAF73487BBED1181442D7B36EF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct  ControllerPoseSynchronizer_t9F7931E41F7AACAF73487BBED1181442D7B36EF0  : public InputSystemGlobalHandlerListener_tB6FC719C6106F01C78762E179F99378F4A2B1504
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::handedness
	uint8_t ___handedness_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::destroyOnSourceLost
	bool ___destroyOnSourceLost_6;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::TrackingState
	int32_t ___TrackingState_7;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::controller
	RuntimeObject* ___controller_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseData
	bool ___useSourcePoseData_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseAction
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___poseAction_10;

public:
	inline static int32_t get_offset_of_handedness_5() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t9F7931E41F7AACAF73487BBED1181442D7B36EF0, ___handedness_5)); }
	inline uint8_t get_handedness_5() const { return ___handedness_5; }
	inline uint8_t* get_address_of_handedness_5() { return &___handedness_5; }
	inline void set_handedness_5(uint8_t value)
	{
		___handedness_5 = value;
	}

	inline static int32_t get_offset_of_destroyOnSourceLost_6() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t9F7931E41F7AACAF73487BBED1181442D7B36EF0, ___destroyOnSourceLost_6)); }
	inline bool get_destroyOnSourceLost_6() const { return ___destroyOnSourceLost_6; }
	inline bool* get_address_of_destroyOnSourceLost_6() { return &___destroyOnSourceLost_6; }
	inline void set_destroyOnSourceLost_6(bool value)
	{
		___destroyOnSourceLost_6 = value;
	}

	inline static int32_t get_offset_of_TrackingState_7() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t9F7931E41F7AACAF73487BBED1181442D7B36EF0, ___TrackingState_7)); }
	inline int32_t get_TrackingState_7() const { return ___TrackingState_7; }
	inline int32_t* get_address_of_TrackingState_7() { return &___TrackingState_7; }
	inline void set_TrackingState_7(int32_t value)
	{
		___TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_controller_8() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t9F7931E41F7AACAF73487BBED1181442D7B36EF0, ___controller_8)); }
	inline RuntimeObject* get_controller_8() const { return ___controller_8; }
	inline RuntimeObject** get_address_of_controller_8() { return &___controller_8; }
	inline void set_controller_8(RuntimeObject* value)
	{
		___controller_8 = value;
		Il2CppCodeGenWriteBarrier((&___controller_8), value);
	}

	inline static int32_t get_offset_of_useSourcePoseData_9() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t9F7931E41F7AACAF73487BBED1181442D7B36EF0, ___useSourcePoseData_9)); }
	inline bool get_useSourcePoseData_9() const { return ___useSourcePoseData_9; }
	inline bool* get_address_of_useSourcePoseData_9() { return &___useSourcePoseData_9; }
	inline void set_useSourcePoseData_9(bool value)
	{
		___useSourcePoseData_9 = value;
	}

	inline static int32_t get_offset_of_poseAction_10() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t9F7931E41F7AACAF73487BBED1181442D7B36EF0, ___poseAction_10)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_poseAction_10() const { return ___poseAction_10; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_poseAction_10() { return &___poseAction_10; }
	inline void set_poseAction_10(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___poseAction_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERPOSESYNCHRONIZER_T9F7931E41F7AACAF73487BBED1181442D7B36EF0_H
#ifndef HANDCONSTRAINT_T3100E17669E5DFC78EB05BBA2443415D8290E8E7_H
#define HANDCONSTRAINT_T3100E17669E5DFC78EB05BBA2443415D8290E8E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct  HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7  : public Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::safeZone
	int32_t ___safeZone_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::safeZoneBuffer
	float ___safeZoneBuffer_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::updateWhenOppositeHandNear
	bool ___updateWhenOppositeHandNear_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::hideHandCursorsOnActivate
	bool ___hideHandCursorsOnActivate_16;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::rotationBehavior
	int32_t ___rotationBehavior_17;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onHandActivate
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onHandActivate_18;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onHandDeactivate
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onHandDeactivate_19;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onFirstHandDetected
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onFirstHandDetected_20;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onLastHandLost
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onLastHandLost_21;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::previousHandedness
	uint8_t ___previousHandedness_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::trackedController
	RuntimeObject* ___trackedController_23;
	// Microsoft.MixedReality.Toolkit.Input.HandBounds Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::handBounds
	HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * ___handBounds_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::handToWorldRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___handToWorldRotation_25;

public:
	inline static int32_t get_offset_of_safeZone_13() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___safeZone_13)); }
	inline int32_t get_safeZone_13() const { return ___safeZone_13; }
	inline int32_t* get_address_of_safeZone_13() { return &___safeZone_13; }
	inline void set_safeZone_13(int32_t value)
	{
		___safeZone_13 = value;
	}

	inline static int32_t get_offset_of_safeZoneBuffer_14() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___safeZoneBuffer_14)); }
	inline float get_safeZoneBuffer_14() const { return ___safeZoneBuffer_14; }
	inline float* get_address_of_safeZoneBuffer_14() { return &___safeZoneBuffer_14; }
	inline void set_safeZoneBuffer_14(float value)
	{
		___safeZoneBuffer_14 = value;
	}

	inline static int32_t get_offset_of_updateWhenOppositeHandNear_15() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___updateWhenOppositeHandNear_15)); }
	inline bool get_updateWhenOppositeHandNear_15() const { return ___updateWhenOppositeHandNear_15; }
	inline bool* get_address_of_updateWhenOppositeHandNear_15() { return &___updateWhenOppositeHandNear_15; }
	inline void set_updateWhenOppositeHandNear_15(bool value)
	{
		___updateWhenOppositeHandNear_15 = value;
	}

	inline static int32_t get_offset_of_hideHandCursorsOnActivate_16() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___hideHandCursorsOnActivate_16)); }
	inline bool get_hideHandCursorsOnActivate_16() const { return ___hideHandCursorsOnActivate_16; }
	inline bool* get_address_of_hideHandCursorsOnActivate_16() { return &___hideHandCursorsOnActivate_16; }
	inline void set_hideHandCursorsOnActivate_16(bool value)
	{
		___hideHandCursorsOnActivate_16 = value;
	}

	inline static int32_t get_offset_of_rotationBehavior_17() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___rotationBehavior_17)); }
	inline int32_t get_rotationBehavior_17() const { return ___rotationBehavior_17; }
	inline int32_t* get_address_of_rotationBehavior_17() { return &___rotationBehavior_17; }
	inline void set_rotationBehavior_17(int32_t value)
	{
		___rotationBehavior_17 = value;
	}

	inline static int32_t get_offset_of_onHandActivate_18() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___onHandActivate_18)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onHandActivate_18() const { return ___onHandActivate_18; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onHandActivate_18() { return &___onHandActivate_18; }
	inline void set_onHandActivate_18(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onHandActivate_18 = value;
		Il2CppCodeGenWriteBarrier((&___onHandActivate_18), value);
	}

	inline static int32_t get_offset_of_onHandDeactivate_19() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___onHandDeactivate_19)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onHandDeactivate_19() const { return ___onHandDeactivate_19; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onHandDeactivate_19() { return &___onHandDeactivate_19; }
	inline void set_onHandDeactivate_19(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onHandDeactivate_19 = value;
		Il2CppCodeGenWriteBarrier((&___onHandDeactivate_19), value);
	}

	inline static int32_t get_offset_of_onFirstHandDetected_20() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___onFirstHandDetected_20)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onFirstHandDetected_20() const { return ___onFirstHandDetected_20; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onFirstHandDetected_20() { return &___onFirstHandDetected_20; }
	inline void set_onFirstHandDetected_20(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onFirstHandDetected_20 = value;
		Il2CppCodeGenWriteBarrier((&___onFirstHandDetected_20), value);
	}

	inline static int32_t get_offset_of_onLastHandLost_21() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___onLastHandLost_21)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onLastHandLost_21() const { return ___onLastHandLost_21; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onLastHandLost_21() { return &___onLastHandLost_21; }
	inline void set_onLastHandLost_21(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onLastHandLost_21 = value;
		Il2CppCodeGenWriteBarrier((&___onLastHandLost_21), value);
	}

	inline static int32_t get_offset_of_previousHandedness_22() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___previousHandedness_22)); }
	inline uint8_t get_previousHandedness_22() const { return ___previousHandedness_22; }
	inline uint8_t* get_address_of_previousHandedness_22() { return &___previousHandedness_22; }
	inline void set_previousHandedness_22(uint8_t value)
	{
		___previousHandedness_22 = value;
	}

	inline static int32_t get_offset_of_trackedController_23() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___trackedController_23)); }
	inline RuntimeObject* get_trackedController_23() const { return ___trackedController_23; }
	inline RuntimeObject** get_address_of_trackedController_23() { return &___trackedController_23; }
	inline void set_trackedController_23(RuntimeObject* value)
	{
		___trackedController_23 = value;
		Il2CppCodeGenWriteBarrier((&___trackedController_23), value);
	}

	inline static int32_t get_offset_of_handBounds_24() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___handBounds_24)); }
	inline HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * get_handBounds_24() const { return ___handBounds_24; }
	inline HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC ** get_address_of_handBounds_24() { return &___handBounds_24; }
	inline void set_handBounds_24(HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * value)
	{
		___handBounds_24 = value;
		Il2CppCodeGenWriteBarrier((&___handBounds_24), value);
	}

	inline static int32_t get_offset_of_handToWorldRotation_25() { return static_cast<int32_t>(offsetof(HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7, ___handToWorldRotation_25)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_handToWorldRotation_25() const { return ___handToWorldRotation_25; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_handToWorldRotation_25() { return &___handToWorldRotation_25; }
	inline void set_handToWorldRotation_25(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___handToWorldRotation_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDCONSTRAINT_T3100E17669E5DFC78EB05BBA2443415D8290E8E7_H
#ifndef INBETWEEN_TC5B52898367EE8D90352914C344E59DC056134B2_H
#define INBETWEEN_TC5B52898367EE8D90352914C344E59DC056134B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct  InBetween_tC5B52898367EE8D90352914C344E59DC056134B2  : public Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::partwayOffset
	float ___partwayOffset_13;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTrackedObjectType
	int32_t ___secondTrackedObjectType_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTransformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransformOverride_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondSolverHandler
	SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * ___secondSolverHandler_16;

public:
	inline static int32_t get_offset_of_partwayOffset_13() { return static_cast<int32_t>(offsetof(InBetween_tC5B52898367EE8D90352914C344E59DC056134B2, ___partwayOffset_13)); }
	inline float get_partwayOffset_13() const { return ___partwayOffset_13; }
	inline float* get_address_of_partwayOffset_13() { return &___partwayOffset_13; }
	inline void set_partwayOffset_13(float value)
	{
		___partwayOffset_13 = value;
	}

	inline static int32_t get_offset_of_secondTrackedObjectType_14() { return static_cast<int32_t>(offsetof(InBetween_tC5B52898367EE8D90352914C344E59DC056134B2, ___secondTrackedObjectType_14)); }
	inline int32_t get_secondTrackedObjectType_14() const { return ___secondTrackedObjectType_14; }
	inline int32_t* get_address_of_secondTrackedObjectType_14() { return &___secondTrackedObjectType_14; }
	inline void set_secondTrackedObjectType_14(int32_t value)
	{
		___secondTrackedObjectType_14 = value;
	}

	inline static int32_t get_offset_of_secondTransformOverride_15() { return static_cast<int32_t>(offsetof(InBetween_tC5B52898367EE8D90352914C344E59DC056134B2, ___secondTransformOverride_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_secondTransformOverride_15() const { return ___secondTransformOverride_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_secondTransformOverride_15() { return &___secondTransformOverride_15; }
	inline void set_secondTransformOverride_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___secondTransformOverride_15 = value;
		Il2CppCodeGenWriteBarrier((&___secondTransformOverride_15), value);
	}

	inline static int32_t get_offset_of_secondSolverHandler_16() { return static_cast<int32_t>(offsetof(InBetween_tC5B52898367EE8D90352914C344E59DC056134B2, ___secondSolverHandler_16)); }
	inline SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * get_secondSolverHandler_16() const { return ___secondSolverHandler_16; }
	inline SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 ** get_address_of_secondSolverHandler_16() { return &___secondSolverHandler_16; }
	inline void set_secondSolverHandler_16(SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * value)
	{
		___secondSolverHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___secondSolverHandler_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INBETWEEN_TC5B52898367EE8D90352914C344E59DC056134B2_H
#ifndef MOMENTUM_T6A897753B0C0744FB874D39CF7B6EFF2B992EEE4_H
#define MOMENTUM_T6A897753B0C0744FB874D39CF7B6EFF2B992EEE4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct  Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4  : public Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistance
	float ___resistance_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistanceVelocityPower
	float ___resistanceVelocityPower_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::accelerationRate
	float ___accelerationRate_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::springiness
	float ___springiness_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::snapZ
	bool ___snapZ_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity_18;

public:
	inline static int32_t get_offset_of_resistance_13() { return static_cast<int32_t>(offsetof(Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4, ___resistance_13)); }
	inline float get_resistance_13() const { return ___resistance_13; }
	inline float* get_address_of_resistance_13() { return &___resistance_13; }
	inline void set_resistance_13(float value)
	{
		___resistance_13 = value;
	}

	inline static int32_t get_offset_of_resistanceVelocityPower_14() { return static_cast<int32_t>(offsetof(Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4, ___resistanceVelocityPower_14)); }
	inline float get_resistanceVelocityPower_14() const { return ___resistanceVelocityPower_14; }
	inline float* get_address_of_resistanceVelocityPower_14() { return &___resistanceVelocityPower_14; }
	inline void set_resistanceVelocityPower_14(float value)
	{
		___resistanceVelocityPower_14 = value;
	}

	inline static int32_t get_offset_of_accelerationRate_15() { return static_cast<int32_t>(offsetof(Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4, ___accelerationRate_15)); }
	inline float get_accelerationRate_15() const { return ___accelerationRate_15; }
	inline float* get_address_of_accelerationRate_15() { return &___accelerationRate_15; }
	inline void set_accelerationRate_15(float value)
	{
		___accelerationRate_15 = value;
	}

	inline static int32_t get_offset_of_springiness_16() { return static_cast<int32_t>(offsetof(Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4, ___springiness_16)); }
	inline float get_springiness_16() const { return ___springiness_16; }
	inline float* get_address_of_springiness_16() { return &___springiness_16; }
	inline void set_springiness_16(float value)
	{
		___springiness_16 = value;
	}

	inline static int32_t get_offset_of_snapZ_17() { return static_cast<int32_t>(offsetof(Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4, ___snapZ_17)); }
	inline bool get_snapZ_17() const { return ___snapZ_17; }
	inline bool* get_address_of_snapZ_17() { return &___snapZ_17; }
	inline void set_snapZ_17(bool value)
	{
		___snapZ_17 = value;
	}

	inline static int32_t get_offset_of_velocity_18() { return static_cast<int32_t>(offsetof(Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4, ___velocity_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocity_18() const { return ___velocity_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocity_18() { return &___velocity_18; }
	inline void set_velocity_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocity_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOMENTUM_T6A897753B0C0744FB874D39CF7B6EFF2B992EEE4_H
#ifndef ORBITAL_T4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80_H
#define ORBITAL_T4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct  Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80  : public Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::orientationType
	int32_t ___orientationType_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::localOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localOffset_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::worldOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldOffset_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::useAngleStepping
	bool ___useAngleStepping_16;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::tetherAngleSteps
	int32_t ___tetherAngleSteps_17;

public:
	inline static int32_t get_offset_of_orientationType_13() { return static_cast<int32_t>(offsetof(Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80, ___orientationType_13)); }
	inline int32_t get_orientationType_13() const { return ___orientationType_13; }
	inline int32_t* get_address_of_orientationType_13() { return &___orientationType_13; }
	inline void set_orientationType_13(int32_t value)
	{
		___orientationType_13 = value;
	}

	inline static int32_t get_offset_of_localOffset_14() { return static_cast<int32_t>(offsetof(Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80, ___localOffset_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localOffset_14() const { return ___localOffset_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localOffset_14() { return &___localOffset_14; }
	inline void set_localOffset_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localOffset_14 = value;
	}

	inline static int32_t get_offset_of_worldOffset_15() { return static_cast<int32_t>(offsetof(Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80, ___worldOffset_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldOffset_15() const { return ___worldOffset_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldOffset_15() { return &___worldOffset_15; }
	inline void set_worldOffset_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldOffset_15 = value;
	}

	inline static int32_t get_offset_of_useAngleStepping_16() { return static_cast<int32_t>(offsetof(Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80, ___useAngleStepping_16)); }
	inline bool get_useAngleStepping_16() const { return ___useAngleStepping_16; }
	inline bool* get_address_of_useAngleStepping_16() { return &___useAngleStepping_16; }
	inline void set_useAngleStepping_16(bool value)
	{
		___useAngleStepping_16 = value;
	}

	inline static int32_t get_offset_of_tetherAngleSteps_17() { return static_cast<int32_t>(offsetof(Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80, ___tetherAngleSteps_17)); }
	inline int32_t get_tetherAngleSteps_17() const { return ___tetherAngleSteps_17; }
	inline int32_t* get_address_of_tetherAngleSteps_17() { return &___tetherAngleSteps_17; }
	inline void set_tetherAngleSteps_17(int32_t value)
	{
		___tetherAngleSteps_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORBITAL_T4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80_H
#ifndef OVERLAP_TF29B752F5E31A119B45A3E42AE7676D07305D173_H
#define OVERLAP_TF29B752F5E31A119B45A3E42AE7676D07305D173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct  Overlap_tF29B752F5E31A119B45A3E42AE7676D07305D173  : public Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERLAP_TF29B752F5E31A119B45A3E42AE7676D07305D173_H
#ifndef RADIALVIEW_T3EEF2187A59D049F18F3FBBCED19D2D82E549F87_H
#define RADIALVIEW_T3EEF2187A59D049F18F3FBBCED19D2D82E549F87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct  RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87  : public Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::referenceDirection
	int32_t ___referenceDirection_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minDistance
	float ___minDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxDistance
	float ___maxDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minViewDegrees
	float ___minViewDegrees_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxViewDegrees
	float ___maxViewDegrees_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::aspectV
	float ___aspectV_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::useFixedVerticalPosition
	bool ___useFixedVerticalPosition_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::fixedVerticalPosition
	float ___fixedVerticalPosition_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_23;

public:
	inline static int32_t get_offset_of_referenceDirection_13() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___referenceDirection_13)); }
	inline int32_t get_referenceDirection_13() const { return ___referenceDirection_13; }
	inline int32_t* get_address_of_referenceDirection_13() { return &___referenceDirection_13; }
	inline void set_referenceDirection_13(int32_t value)
	{
		___referenceDirection_13 = value;
	}

	inline static int32_t get_offset_of_minDistance_14() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___minDistance_14)); }
	inline float get_minDistance_14() const { return ___minDistance_14; }
	inline float* get_address_of_minDistance_14() { return &___minDistance_14; }
	inline void set_minDistance_14(float value)
	{
		___minDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxDistance_15() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___maxDistance_15)); }
	inline float get_maxDistance_15() const { return ___maxDistance_15; }
	inline float* get_address_of_maxDistance_15() { return &___maxDistance_15; }
	inline void set_maxDistance_15(float value)
	{
		___maxDistance_15 = value;
	}

	inline static int32_t get_offset_of_minViewDegrees_16() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___minViewDegrees_16)); }
	inline float get_minViewDegrees_16() const { return ___minViewDegrees_16; }
	inline float* get_address_of_minViewDegrees_16() { return &___minViewDegrees_16; }
	inline void set_minViewDegrees_16(float value)
	{
		___minViewDegrees_16 = value;
	}

	inline static int32_t get_offset_of_maxViewDegrees_17() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___maxViewDegrees_17)); }
	inline float get_maxViewDegrees_17() const { return ___maxViewDegrees_17; }
	inline float* get_address_of_maxViewDegrees_17() { return &___maxViewDegrees_17; }
	inline void set_maxViewDegrees_17(float value)
	{
		___maxViewDegrees_17 = value;
	}

	inline static int32_t get_offset_of_aspectV_18() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___aspectV_18)); }
	inline float get_aspectV_18() const { return ___aspectV_18; }
	inline float* get_address_of_aspectV_18() { return &___aspectV_18; }
	inline void set_aspectV_18(float value)
	{
		___aspectV_18 = value;
	}

	inline static int32_t get_offset_of_ignoreAngleClamp_19() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___ignoreAngleClamp_19)); }
	inline bool get_ignoreAngleClamp_19() const { return ___ignoreAngleClamp_19; }
	inline bool* get_address_of_ignoreAngleClamp_19() { return &___ignoreAngleClamp_19; }
	inline void set_ignoreAngleClamp_19(bool value)
	{
		___ignoreAngleClamp_19 = value;
	}

	inline static int32_t get_offset_of_ignoreDistanceClamp_20() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___ignoreDistanceClamp_20)); }
	inline bool get_ignoreDistanceClamp_20() const { return ___ignoreDistanceClamp_20; }
	inline bool* get_address_of_ignoreDistanceClamp_20() { return &___ignoreDistanceClamp_20; }
	inline void set_ignoreDistanceClamp_20(bool value)
	{
		___ignoreDistanceClamp_20 = value;
	}

	inline static int32_t get_offset_of_useFixedVerticalPosition_21() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___useFixedVerticalPosition_21)); }
	inline bool get_useFixedVerticalPosition_21() const { return ___useFixedVerticalPosition_21; }
	inline bool* get_address_of_useFixedVerticalPosition_21() { return &___useFixedVerticalPosition_21; }
	inline void set_useFixedVerticalPosition_21(bool value)
	{
		___useFixedVerticalPosition_21 = value;
	}

	inline static int32_t get_offset_of_fixedVerticalPosition_22() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___fixedVerticalPosition_22)); }
	inline float get_fixedVerticalPosition_22() const { return ___fixedVerticalPosition_22; }
	inline float* get_address_of_fixedVerticalPosition_22() { return &___fixedVerticalPosition_22; }
	inline void set_fixedVerticalPosition_22(float value)
	{
		___fixedVerticalPosition_22 = value;
	}

	inline static int32_t get_offset_of_orientToReferenceDirection_23() { return static_cast<int32_t>(offsetof(RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87, ___orientToReferenceDirection_23)); }
	inline bool get_orientToReferenceDirection_23() const { return ___orientToReferenceDirection_23; }
	inline bool* get_address_of_orientToReferenceDirection_23() { return &___orientToReferenceDirection_23; }
	inline void set_orientToReferenceDirection_23(bool value)
	{
		___orientToReferenceDirection_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RADIALVIEW_T3EEF2187A59D049F18F3FBBCED19D2D82E549F87_H
#ifndef SURFACEMAGNETISM_T9D480E94F0BD3A6180662674AC813ECE1C975AD2_H
#define SURFACEMAGNETISM_T9D480E94F0BD3A6180662674AC813ECE1C975AD2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct  SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2  : public Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948
{
public:
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::closestDistance
	float ___closestDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_17;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::sphereSize
	float ___sphereSize_22;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_24;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_26;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_30;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRayStep
	RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  ___currentRayStep_32;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_33;

public:
	inline static int32_t get_offset_of_magneticSurfaces_13() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___magneticSurfaces_13)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_13() const { return ___magneticSurfaces_13; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_13() { return &___magneticSurfaces_13; }
	inline void set_magneticSurfaces_13(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_13 = value;
		Il2CppCodeGenWriteBarrier((&___magneticSurfaces_13), value);
	}

	inline static int32_t get_offset_of_maxRaycastDistance_14() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___maxRaycastDistance_14)); }
	inline float get_maxRaycastDistance_14() const { return ___maxRaycastDistance_14; }
	inline float* get_address_of_maxRaycastDistance_14() { return &___maxRaycastDistance_14; }
	inline void set_maxRaycastDistance_14(float value)
	{
		___maxRaycastDistance_14 = value;
	}

	inline static int32_t get_offset_of_closestDistance_15() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___closestDistance_15)); }
	inline float get_closestDistance_15() const { return ___closestDistance_15; }
	inline float* get_address_of_closestDistance_15() { return &___closestDistance_15; }
	inline void set_closestDistance_15(float value)
	{
		___closestDistance_15 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_16() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___surfaceNormalOffset_16)); }
	inline float get_surfaceNormalOffset_16() const { return ___surfaceNormalOffset_16; }
	inline float* get_address_of_surfaceNormalOffset_16() { return &___surfaceNormalOffset_16; }
	inline void set_surfaceNormalOffset_16(float value)
	{
		___surfaceNormalOffset_16 = value;
	}

	inline static int32_t get_offset_of_surfaceRayOffset_17() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___surfaceRayOffset_17)); }
	inline float get_surfaceRayOffset_17() const { return ___surfaceRayOffset_17; }
	inline float* get_address_of_surfaceRayOffset_17() { return &___surfaceRayOffset_17; }
	inline void set_surfaceRayOffset_17(float value)
	{
		___surfaceRayOffset_17 = value;
	}

	inline static int32_t get_offset_of_raycastMode_18() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___raycastMode_18)); }
	inline int32_t get_raycastMode_18() const { return ___raycastMode_18; }
	inline int32_t* get_address_of_raycastMode_18() { return &___raycastMode_18; }
	inline void set_raycastMode_18(int32_t value)
	{
		___raycastMode_18 = value;
	}

	inline static int32_t get_offset_of_boxRaysPerEdge_19() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___boxRaysPerEdge_19)); }
	inline int32_t get_boxRaysPerEdge_19() const { return ___boxRaysPerEdge_19; }
	inline int32_t* get_address_of_boxRaysPerEdge_19() { return &___boxRaysPerEdge_19; }
	inline void set_boxRaysPerEdge_19(int32_t value)
	{
		___boxRaysPerEdge_19 = value;
	}

	inline static int32_t get_offset_of_orthographicBoxCast_20() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___orthographicBoxCast_20)); }
	inline bool get_orthographicBoxCast_20() const { return ___orthographicBoxCast_20; }
	inline bool* get_address_of_orthographicBoxCast_20() { return &___orthographicBoxCast_20; }
	inline void set_orthographicBoxCast_20(bool value)
	{
		___orthographicBoxCast_20 = value;
	}

	inline static int32_t get_offset_of_maximumNormalVariance_21() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___maximumNormalVariance_21)); }
	inline float get_maximumNormalVariance_21() const { return ___maximumNormalVariance_21; }
	inline float* get_address_of_maximumNormalVariance_21() { return &___maximumNormalVariance_21; }
	inline void set_maximumNormalVariance_21(float value)
	{
		___maximumNormalVariance_21 = value;
	}

	inline static int32_t get_offset_of_sphereSize_22() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___sphereSize_22)); }
	inline float get_sphereSize_22() const { return ___sphereSize_22; }
	inline float* get_address_of_sphereSize_22() { return &___sphereSize_22; }
	inline void set_sphereSize_22(float value)
	{
		___sphereSize_22 = value;
	}

	inline static int32_t get_offset_of_volumeCastSizeOverride_23() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___volumeCastSizeOverride_23)); }
	inline float get_volumeCastSizeOverride_23() const { return ___volumeCastSizeOverride_23; }
	inline float* get_address_of_volumeCastSizeOverride_23() { return &___volumeCastSizeOverride_23; }
	inline void set_volumeCastSizeOverride_23(float value)
	{
		___volumeCastSizeOverride_23 = value;
	}

	inline static int32_t get_offset_of_useLinkedAltScaleOverride_24() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___useLinkedAltScaleOverride_24)); }
	inline bool get_useLinkedAltScaleOverride_24() const { return ___useLinkedAltScaleOverride_24; }
	inline bool* get_address_of_useLinkedAltScaleOverride_24() { return &___useLinkedAltScaleOverride_24; }
	inline void set_useLinkedAltScaleOverride_24(bool value)
	{
		___useLinkedAltScaleOverride_24 = value;
	}

	inline static int32_t get_offset_of_currentRaycastDirectionMode_25() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___currentRaycastDirectionMode_25)); }
	inline int32_t get_currentRaycastDirectionMode_25() const { return ___currentRaycastDirectionMode_25; }
	inline int32_t* get_address_of_currentRaycastDirectionMode_25() { return &___currentRaycastDirectionMode_25; }
	inline void set_currentRaycastDirectionMode_25(int32_t value)
	{
		___currentRaycastDirectionMode_25 = value;
	}

	inline static int32_t get_offset_of_orientationMode_26() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___orientationMode_26)); }
	inline int32_t get_orientationMode_26() const { return ___orientationMode_26; }
	inline int32_t* get_address_of_orientationMode_26() { return &___orientationMode_26; }
	inline void set_orientationMode_26(int32_t value)
	{
		___orientationMode_26 = value;
	}

	inline static int32_t get_offset_of_orientationBlend_27() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___orientationBlend_27)); }
	inline float get_orientationBlend_27() const { return ___orientationBlend_27; }
	inline float* get_address_of_orientationBlend_27() { return &___orientationBlend_27; }
	inline void set_orientationBlend_27(float value)
	{
		___orientationBlend_27 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_28() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___keepOrientationVertical_28)); }
	inline bool get_keepOrientationVertical_28() const { return ___keepOrientationVertical_28; }
	inline bool* get_address_of_keepOrientationVertical_28() { return &___keepOrientationVertical_28; }
	inline void set_keepOrientationVertical_28(bool value)
	{
		___keepOrientationVertical_28 = value;
	}

	inline static int32_t get_offset_of_debugEnabled_29() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___debugEnabled_29)); }
	inline bool get_debugEnabled_29() const { return ___debugEnabled_29; }
	inline bool* get_address_of_debugEnabled_29() { return &___debugEnabled_29; }
	inline void set_debugEnabled_29(bool value)
	{
		___debugEnabled_29 = value;
	}

	inline static int32_t get_offset_of_U3COnSurfaceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___U3COnSurfaceU3Ek__BackingField_30)); }
	inline bool get_U3COnSurfaceU3Ek__BackingField_30() const { return ___U3COnSurfaceU3Ek__BackingField_30; }
	inline bool* get_address_of_U3COnSurfaceU3Ek__BackingField_30() { return &___U3COnSurfaceU3Ek__BackingField_30; }
	inline void set_U3COnSurfaceU3Ek__BackingField_30(bool value)
	{
		___U3COnSurfaceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_currentRayStep_32() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___currentRayStep_32)); }
	inline RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  get_currentRayStep_32() const { return ___currentRayStep_32; }
	inline RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * get_address_of_currentRayStep_32() { return &___currentRayStep_32; }
	inline void set_currentRayStep_32(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  value)
	{
		___currentRayStep_32 = value;
	}

	inline static int32_t get_offset_of_boxCollider_33() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2, ___boxCollider_33)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_33() const { return ___boxCollider_33; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_33() { return &___boxCollider_33; }
	inline void set_boxCollider_33(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_33 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEMAGNETISM_T9D480E94F0BD3A6180662674AC813ECE1C975AD2_H
#ifndef BASECONTROLLERPOINTER_T7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F_H
#define BASECONTROLLERPOINTER_T7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer
struct  BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F  : public ControllerPoseSynchronizer_t9F7931E41F7AACAF73487BBED1181442D7B36EF0
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorPrefab_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::disableCursorOnStart
	bool ___disableCursorOnStart_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::setCursorVisibilityOnSourceDetected
	bool ___setCursorVisibilityOnSourceDetected_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorInstance
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorInstance_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::raycastOrigin
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___raycastOrigin_15;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::activeHoldAction
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___activeHoldAction_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerAction
	MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  ___pointerAction_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresHoldAction
	bool ___requiresHoldAction_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresActionBeforeEnabling
	bool ___requiresActionBeforeEnabling_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsSelectPressed
	bool ___IsSelectPressed_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::HasSelectPressedOnce
	bool ___HasSelectPressedOnce_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsHoldPressed
	bool ___IsHoldPressed_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::isCursorInstantiatedFromPrefab
	bool ___isCursorInstantiatedFromPrefab_23;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerId
	uint32_t ___pointerId_24;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerName
	String_t* ___pointerName_25;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::overrideGlobalPointerExtent
	bool ___overrideGlobalPointerExtent_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerExtent
	float ___pointerExtent_33;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::defaultPointerExtent
	float ___defaultPointerExtent_34;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Rays>k__BackingField
	RayStepU5BU5D_t97AFEE0639536C5D511A61231E045776F3855BB9* ___U3CRaysU3Ek__BackingField_35;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_37;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_38;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_39;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_40;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::sphereCastRadius
	float ___sphereCastRadius_41;

public:
	inline static int32_t get_offset_of_cursorPrefab_11() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___cursorPrefab_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorPrefab_11() const { return ___cursorPrefab_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorPrefab_11() { return &___cursorPrefab_11; }
	inline void set_cursorPrefab_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((&___cursorPrefab_11), value);
	}

	inline static int32_t get_offset_of_disableCursorOnStart_12() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___disableCursorOnStart_12)); }
	inline bool get_disableCursorOnStart_12() const { return ___disableCursorOnStart_12; }
	inline bool* get_address_of_disableCursorOnStart_12() { return &___disableCursorOnStart_12; }
	inline void set_disableCursorOnStart_12(bool value)
	{
		___disableCursorOnStart_12 = value;
	}

	inline static int32_t get_offset_of_setCursorVisibilityOnSourceDetected_13() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___setCursorVisibilityOnSourceDetected_13)); }
	inline bool get_setCursorVisibilityOnSourceDetected_13() const { return ___setCursorVisibilityOnSourceDetected_13; }
	inline bool* get_address_of_setCursorVisibilityOnSourceDetected_13() { return &___setCursorVisibilityOnSourceDetected_13; }
	inline void set_setCursorVisibilityOnSourceDetected_13(bool value)
	{
		___setCursorVisibilityOnSourceDetected_13 = value;
	}

	inline static int32_t get_offset_of_cursorInstance_14() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___cursorInstance_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorInstance_14() const { return ___cursorInstance_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorInstance_14() { return &___cursorInstance_14; }
	inline void set_cursorInstance_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorInstance_14 = value;
		Il2CppCodeGenWriteBarrier((&___cursorInstance_14), value);
	}

	inline static int32_t get_offset_of_raycastOrigin_15() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___raycastOrigin_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_raycastOrigin_15() const { return ___raycastOrigin_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_raycastOrigin_15() { return &___raycastOrigin_15; }
	inline void set_raycastOrigin_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___raycastOrigin_15 = value;
		Il2CppCodeGenWriteBarrier((&___raycastOrigin_15), value);
	}

	inline static int32_t get_offset_of_activeHoldAction_16() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___activeHoldAction_16)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_activeHoldAction_16() const { return ___activeHoldAction_16; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_activeHoldAction_16() { return &___activeHoldAction_16; }
	inline void set_activeHoldAction_16(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___activeHoldAction_16 = value;
	}

	inline static int32_t get_offset_of_pointerAction_17() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___pointerAction_17)); }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  get_pointerAction_17() const { return ___pointerAction_17; }
	inline MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001 * get_address_of_pointerAction_17() { return &___pointerAction_17; }
	inline void set_pointerAction_17(MixedRealityInputAction_t7ACD606B450B908E03401BB3CC5742FBB6810001  value)
	{
		___pointerAction_17 = value;
	}

	inline static int32_t get_offset_of_requiresHoldAction_18() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___requiresHoldAction_18)); }
	inline bool get_requiresHoldAction_18() const { return ___requiresHoldAction_18; }
	inline bool* get_address_of_requiresHoldAction_18() { return &___requiresHoldAction_18; }
	inline void set_requiresHoldAction_18(bool value)
	{
		___requiresHoldAction_18 = value;
	}

	inline static int32_t get_offset_of_requiresActionBeforeEnabling_19() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___requiresActionBeforeEnabling_19)); }
	inline bool get_requiresActionBeforeEnabling_19() const { return ___requiresActionBeforeEnabling_19; }
	inline bool* get_address_of_requiresActionBeforeEnabling_19() { return &___requiresActionBeforeEnabling_19; }
	inline void set_requiresActionBeforeEnabling_19(bool value)
	{
		___requiresActionBeforeEnabling_19 = value;
	}

	inline static int32_t get_offset_of_IsSelectPressed_20() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___IsSelectPressed_20)); }
	inline bool get_IsSelectPressed_20() const { return ___IsSelectPressed_20; }
	inline bool* get_address_of_IsSelectPressed_20() { return &___IsSelectPressed_20; }
	inline void set_IsSelectPressed_20(bool value)
	{
		___IsSelectPressed_20 = value;
	}

	inline static int32_t get_offset_of_HasSelectPressedOnce_21() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___HasSelectPressedOnce_21)); }
	inline bool get_HasSelectPressedOnce_21() const { return ___HasSelectPressedOnce_21; }
	inline bool* get_address_of_HasSelectPressedOnce_21() { return &___HasSelectPressedOnce_21; }
	inline void set_HasSelectPressedOnce_21(bool value)
	{
		___HasSelectPressedOnce_21 = value;
	}

	inline static int32_t get_offset_of_IsHoldPressed_22() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___IsHoldPressed_22)); }
	inline bool get_IsHoldPressed_22() const { return ___IsHoldPressed_22; }
	inline bool* get_address_of_IsHoldPressed_22() { return &___IsHoldPressed_22; }
	inline void set_IsHoldPressed_22(bool value)
	{
		___IsHoldPressed_22 = value;
	}

	inline static int32_t get_offset_of_isCursorInstantiatedFromPrefab_23() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___isCursorInstantiatedFromPrefab_23)); }
	inline bool get_isCursorInstantiatedFromPrefab_23() const { return ___isCursorInstantiatedFromPrefab_23; }
	inline bool* get_address_of_isCursorInstantiatedFromPrefab_23() { return &___isCursorInstantiatedFromPrefab_23; }
	inline void set_isCursorInstantiatedFromPrefab_23(bool value)
	{
		___isCursorInstantiatedFromPrefab_23 = value;
	}

	inline static int32_t get_offset_of_pointerId_24() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___pointerId_24)); }
	inline uint32_t get_pointerId_24() const { return ___pointerId_24; }
	inline uint32_t* get_address_of_pointerId_24() { return &___pointerId_24; }
	inline void set_pointerId_24(uint32_t value)
	{
		___pointerId_24 = value;
	}

	inline static int32_t get_offset_of_pointerName_25() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___pointerName_25)); }
	inline String_t* get_pointerName_25() const { return ___pointerName_25; }
	inline String_t** get_address_of_pointerName_25() { return &___pointerName_25; }
	inline void set_pointerName_25(String_t* value)
	{
		___pointerName_25 = value;
		Il2CppCodeGenWriteBarrier((&___pointerName_25), value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CInputSourceParentU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_26() const { return ___U3CInputSourceParentU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_26() { return &___U3CInputSourceParentU3Ek__BackingField_26; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceParentU3Ek__BackingField_26), value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CBaseCursorU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_27() const { return ___U3CBaseCursorU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_27() { return &___U3CBaseCursorU3Ek__BackingField_27; }
	inline void set_U3CBaseCursorU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBaseCursorU3Ek__BackingField_27), value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CCursorModifierU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_28() const { return ___U3CCursorModifierU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_28() { return &___U3CCursorModifierU3Ek__BackingField_28; }
	inline void set_U3CCursorModifierU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCursorModifierU3Ek__BackingField_28), value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CIsActiveU3Ek__BackingField_29)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_29() const { return ___U3CIsActiveU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_29() { return &___U3CIsActiveU3Ek__BackingField_29; }
	inline void set_U3CIsActiveU3Ek__BackingField_29(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CIsFocusLockedU3Ek__BackingField_30)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_30() const { return ___U3CIsFocusLockedU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_30() { return &___U3CIsFocusLockedU3Ek__BackingField_30; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_30(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_overrideGlobalPointerExtent_32() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___overrideGlobalPointerExtent_32)); }
	inline bool get_overrideGlobalPointerExtent_32() const { return ___overrideGlobalPointerExtent_32; }
	inline bool* get_address_of_overrideGlobalPointerExtent_32() { return &___overrideGlobalPointerExtent_32; }
	inline void set_overrideGlobalPointerExtent_32(bool value)
	{
		___overrideGlobalPointerExtent_32 = value;
	}

	inline static int32_t get_offset_of_pointerExtent_33() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___pointerExtent_33)); }
	inline float get_pointerExtent_33() const { return ___pointerExtent_33; }
	inline float* get_address_of_pointerExtent_33() { return &___pointerExtent_33; }
	inline void set_pointerExtent_33(float value)
	{
		___pointerExtent_33 = value;
	}

	inline static int32_t get_offset_of_defaultPointerExtent_34() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___defaultPointerExtent_34)); }
	inline float get_defaultPointerExtent_34() const { return ___defaultPointerExtent_34; }
	inline float* get_address_of_defaultPointerExtent_34() { return &___defaultPointerExtent_34; }
	inline void set_defaultPointerExtent_34(float value)
	{
		___defaultPointerExtent_34 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CRaysU3Ek__BackingField_35)); }
	inline RayStepU5BU5D_t97AFEE0639536C5D511A61231E045776F3855BB9* get_U3CRaysU3Ek__BackingField_35() const { return ___U3CRaysU3Ek__BackingField_35; }
	inline RayStepU5BU5D_t97AFEE0639536C5D511A61231E045776F3855BB9** get_address_of_U3CRaysU3Ek__BackingField_35() { return &___U3CRaysU3Ek__BackingField_35; }
	inline void set_U3CRaysU3Ek__BackingField_35(RayStepU5BU5D_t97AFEE0639536C5D511A61231E045776F3855BB9* value)
	{
		___U3CRaysU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRaysU3Ek__BackingField_35), value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36), value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CFocusTargetU3Ek__BackingField_37)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_37() const { return ___U3CFocusTargetU3Ek__BackingField_37; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_37() { return &___U3CFocusTargetU3Ek__BackingField_37; }
	inline void set_U3CFocusTargetU3Ek__BackingField_37(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFocusTargetU3Ek__BackingField_37), value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CResultU3Ek__BackingField_38)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_38() const { return ___U3CResultU3Ek__BackingField_38; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_38() { return &___U3CResultU3Ek__BackingField_38; }
	inline void set_U3CResultU3Ek__BackingField_38(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultU3Ek__BackingField_38), value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CRayStabilizerU3Ek__BackingField_39)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_39() const { return ___U3CRayStabilizerU3Ek__BackingField_39; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_39() { return &___U3CRayStabilizerU3Ek__BackingField_39; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_39(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRayStabilizerU3Ek__BackingField_39), value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___U3CSceneQueryTypeU3Ek__BackingField_40)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_40() const { return ___U3CSceneQueryTypeU3Ek__BackingField_40; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_40() { return &___U3CSceneQueryTypeU3Ek__BackingField_40; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_40(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_41() { return static_cast<int32_t>(offsetof(BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F, ___sphereCastRadius_41)); }
	inline float get_sphereCastRadius_41() const { return ___sphereCastRadius_41; }
	inline float* get_address_of_sphereCastRadius_41() { return &___sphereCastRadius_41; }
	inline void set_sphereCastRadius_41(float value)
	{
		___sphereCastRadius_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROLLERPOINTER_T7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F_H
#ifndef HANDCONSTRAINTPALMUP_T22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB_H
#define HANDCONSTRAINTPALMUP_T22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct  HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB  : public HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::facingThreshold
	float ___facingThreshold_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::requireFlatHand
	bool ___requireFlatHand_27;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::flatHandThreshold
	float ___flatHandThreshold_28;

public:
	inline static int32_t get_offset_of_facingThreshold_26() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB, ___facingThreshold_26)); }
	inline float get_facingThreshold_26() const { return ___facingThreshold_26; }
	inline float* get_address_of_facingThreshold_26() { return &___facingThreshold_26; }
	inline void set_facingThreshold_26(float value)
	{
		___facingThreshold_26 = value;
	}

	inline static int32_t get_offset_of_requireFlatHand_27() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB, ___requireFlatHand_27)); }
	inline bool get_requireFlatHand_27() const { return ___requireFlatHand_27; }
	inline bool* get_address_of_requireFlatHand_27() { return &___requireFlatHand_27; }
	inline void set_requireFlatHand_27(bool value)
	{
		___requireFlatHand_27 = value;
	}

	inline static int32_t get_offset_of_flatHandThreshold_28() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB, ___flatHandThreshold_28)); }
	inline float get_flatHandThreshold_28() const { return ___flatHandThreshold_28; }
	inline float* get_address_of_flatHandThreshold_28() { return &___flatHandThreshold_28; }
	inline void set_flatHandThreshold_28(float value)
	{
		___flatHandThreshold_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDCONSTRAINTPALMUP_T22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB_H
#ifndef LINEPOINTER_TD3BF98862CBA94EE3030D15EF48507854D00EF11_H
#define LINEPOINTER_TD3BF98862CBA94EE3030D15EF48507854D00EF11_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct  LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11  : public BaseControllerPointer_t7749D2B6FF7FFE7DFD19AE6097E2E9F26D4FB80F
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.LinePointer::LineCastResolution
	int32_t ___LineCastResolution_42;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorSelected
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorSelected_43;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorValid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorValid_44;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorInvalid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorInvalid_45;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorNoTarget
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorNoTarget_46;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorLockFocus
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorLockFocus_47;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.Input.LinePointer::lineBase
	BaseMixedRealityLineDataProvider_tEEB5D6D00EAFCAAF998AC4ED4D3920EC64ED7DA0 * ___lineBase_48;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.Input.LinePointer::lineRenderers
	BaseMixedRealityLineRendererU5BU5D_t52E07DAA80E44A227CC6C639222D790FAD690039* ___lineRenderers_49;

public:
	inline static int32_t get_offset_of_LineCastResolution_42() { return static_cast<int32_t>(offsetof(LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11, ___LineCastResolution_42)); }
	inline int32_t get_LineCastResolution_42() const { return ___LineCastResolution_42; }
	inline int32_t* get_address_of_LineCastResolution_42() { return &___LineCastResolution_42; }
	inline void set_LineCastResolution_42(int32_t value)
	{
		___LineCastResolution_42 = value;
	}

	inline static int32_t get_offset_of_LineColorSelected_43() { return static_cast<int32_t>(offsetof(LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11, ___LineColorSelected_43)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorSelected_43() const { return ___LineColorSelected_43; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorSelected_43() { return &___LineColorSelected_43; }
	inline void set_LineColorSelected_43(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorSelected_43 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorSelected_43), value);
	}

	inline static int32_t get_offset_of_LineColorValid_44() { return static_cast<int32_t>(offsetof(LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11, ___LineColorValid_44)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorValid_44() const { return ___LineColorValid_44; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorValid_44() { return &___LineColorValid_44; }
	inline void set_LineColorValid_44(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorValid_44 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorValid_44), value);
	}

	inline static int32_t get_offset_of_LineColorInvalid_45() { return static_cast<int32_t>(offsetof(LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11, ___LineColorInvalid_45)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorInvalid_45() const { return ___LineColorInvalid_45; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorInvalid_45() { return &___LineColorInvalid_45; }
	inline void set_LineColorInvalid_45(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorInvalid_45 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorInvalid_45), value);
	}

	inline static int32_t get_offset_of_LineColorNoTarget_46() { return static_cast<int32_t>(offsetof(LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11, ___LineColorNoTarget_46)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorNoTarget_46() const { return ___LineColorNoTarget_46; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorNoTarget_46() { return &___LineColorNoTarget_46; }
	inline void set_LineColorNoTarget_46(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorNoTarget_46 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorNoTarget_46), value);
	}

	inline static int32_t get_offset_of_LineColorLockFocus_47() { return static_cast<int32_t>(offsetof(LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11, ___LineColorLockFocus_47)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorLockFocus_47() const { return ___LineColorLockFocus_47; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorLockFocus_47() { return &___LineColorLockFocus_47; }
	inline void set_LineColorLockFocus_47(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorLockFocus_47 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorLockFocus_47), value);
	}

	inline static int32_t get_offset_of_lineBase_48() { return static_cast<int32_t>(offsetof(LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11, ___lineBase_48)); }
	inline BaseMixedRealityLineDataProvider_tEEB5D6D00EAFCAAF998AC4ED4D3920EC64ED7DA0 * get_lineBase_48() const { return ___lineBase_48; }
	inline BaseMixedRealityLineDataProvider_tEEB5D6D00EAFCAAF998AC4ED4D3920EC64ED7DA0 ** get_address_of_lineBase_48() { return &___lineBase_48; }
	inline void set_lineBase_48(BaseMixedRealityLineDataProvider_tEEB5D6D00EAFCAAF998AC4ED4D3920EC64ED7DA0 * value)
	{
		___lineBase_48 = value;
		Il2CppCodeGenWriteBarrier((&___lineBase_48), value);
	}

	inline static int32_t get_offset_of_lineRenderers_49() { return static_cast<int32_t>(offsetof(LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11, ___lineRenderers_49)); }
	inline BaseMixedRealityLineRendererU5BU5D_t52E07DAA80E44A227CC6C639222D790FAD690039* get_lineRenderers_49() const { return ___lineRenderers_49; }
	inline BaseMixedRealityLineRendererU5BU5D_t52E07DAA80E44A227CC6C639222D790FAD690039** get_address_of_lineRenderers_49() { return &___lineRenderers_49; }
	inline void set_lineRenderers_49(BaseMixedRealityLineRendererU5BU5D_t52E07DAA80E44A227CC6C639222D790FAD690039* value)
	{
		___lineRenderers_49 = value;
		Il2CppCodeGenWriteBarrier((&___lineRenderers_49), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEPOINTER_TD3BF98862CBA94EE3030D15EF48507854D00EF11_H
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * m_Items[1];

public:
	inline Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  m_Items[1];

public:
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Nullable`1<System.ByteEnum>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_mA37A97B81445268412FC4754069FD1AD7ED89B8E_gshared (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, uint8_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.ByteEnum>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR uint8_t Nullable_1_GetValueOrDefault_m0F69127464EA2230329E51E650FC4FBAD21960EB_gshared (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.ByteEnum>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m395EA5F248148274CEE1ED1C59FC628330033A4F_gshared (Nullable_1_tAD3D374B25057F9C5F22F267FE9A4F0EE5F82152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A  HashSet_1_GetEnumerator_m263AF8F8486FF5B6747A4B4C20B314EC6BB388BF_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA66925E71356820C9239CA8E620442745C88E07F_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD1758E7826FDA8D185FC2C218F9D32B9ADA4FE0D_gshared (Enumerator_t8434FF623060595DB1C2B2231A4DC225034F0A7A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,UnityEngine.Bounds>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A921D41F0B350F77239ABCCE69572F83309B3E4_gshared (Dictionary_2_t3A5FD15F1CA4E8B8943DFFB112420B6B2B19D760 * __this, uint8_t p0, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * List_1_AsReadOnly_mA3A95833512F80018CC1A0B37766AEF91A1FD34B_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Intersect_TisRuntimeObject_m4D7F0556812B095D1D2C66EF2AF1EF98D6201333_gshared (RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisRuntimeObject_m176BEF1318CEDA82CAC53F47013E273574719157_gshared (RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_m7CE644ED0ED2B907711FB1049C4D67D3876760FC_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<System.Object>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PointerUtils_GetPointer_TisRuntimeObject_mAF20E9FEBD00DEBF577C7982BA71A7C0AF6AA580_gshared (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.SourceStateEventData::get_Controller()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SourceStateEventData_get_Controller_m0E587BE1EF0ED7D58FC8798A21393969FDBDB2F8 (SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::.ctor(!0)
inline void Nullable_1__ctor_mF2293692304E73FBCDC4DA51580B1650C6D28F38 (Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 * __this, uint8_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 *, uint8_t, const RuntimeMethod*))Nullable_1__ctor_mA37A97B81445268412FC4754069FD1AD7ED89B8E_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::GetValueOrDefault()
inline uint8_t Nullable_1_GetValueOrDefault_m0CE21981E4E789C6D2D29637F03BF806AAF3E229 (Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 * __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m0F69127464EA2230329E51E650FC4FBAD21960EB_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Microsoft.MixedReality.Toolkit.Utilities.Handedness>::get_HasValue()
inline bool Nullable_1_get_HasValue_mECC937EB40B835110194782C9C5CE8BF92946966 (Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 *, const RuntimeMethod*))Nullable_1_get_HasValue_m395EA5F248148274CEE1ED1C59FC628330033A4F_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E  HashSet_1_GetEnumerator_mC507457E4835B98FA6D1463ADC99C88C9CC3783E (HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E  (*) (HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m263AF8F8486FF5B6747A4B4C20B314EC6BB388BF_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m77E21D82BDE56DFFBF2A159C987A9A76CFEF063E (Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *, const RuntimeMethod*))Enumerator_get_Current_m4C430D4730AABE78C2EDBC5324F1E82FEC21CDED_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_mFF7396AB09EC0B1C5A33057C5E495B59CCBE47FF (Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *, const RuntimeMethod*))Enumerator_MoveNext_mA66925E71356820C9239CA8E620442745C88E07F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_mB52649D6DF55E11EB2D5031B6B88A9F317A6D706 (Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *, const RuntimeMethod*))Enumerator_Dispose_mD1758E7826FDA8D185FC2C218F9D32B9ADA4FE0D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m6067E18E11252F6F91880B06D6334ECEE7A84A9B (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::GetController(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HandConstraint_GetController_m495712B457CC7186BF439E3846599B8D5C6EA9E1 (uint8_t ___handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.HandednessExtensions::GetOppositeHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR uint8_t HandednessExtensions_GetOppositeHandedness_m4BF5CD0EB9975DCB1A015BA40670894D035E23A5 (uint8_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_m1F1B5022525327F522CEB931B02A741D47A1167F (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsNone(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool HandednessExtensions_IsNone_mA715F0CDC8F1641E01EC141AC0FFDE4AC142DAC9 (uint8_t p0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnFirstHandDetected()
extern "C" IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnFirstHandDetected_mBA19BF572A1C713A96B683B54FCB12B003A8E400 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnHandActivate()
extern "C" IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandActivate_mB1C51292CB86DC58E10B5D09A10C5712D6F7A570 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnLastHandLost()
extern "C" IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnLastHandLost_m46D40EB807A0FF87E9E1C146BEFCAB69C0352554 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnHandDeactivate()
extern "C" IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandDeactivate_m30BEFCEE86F4BFFD60A45F7004A2B37DB88DF3D0 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m4A9794908E33DE50C4DE0A45E25FC2D3EC9BBAC5 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m246B9DD9ABE98D836E02E7275103B3E147BC1B1C (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds> Microsoft.MixedReality.Toolkit.Input.HandBounds::get_Bounds()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 * HandBounds_get_Bounds_mFB45A771E9DC955CF391E1E901C4371EDAED084C (HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Bounds>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m68BD69802EDDE0B7E496379E8517D1B922B9341F (Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 * __this, uint8_t p0, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 *, uint8_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A921D41F0B350F77239ABCCE69572F83309B3E4_gshared)(__this, p0, p1, method);
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateProjectedSafeZoneRay(UnityEngine.Vector3,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/SolverSafeZone)
extern "C" IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  HandConstraint_CalculateProjectedSafeZoneRay_mC9F9A4C3046F5C110C10158D4A6BA1FEC3ED157C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, RuntimeObject* ___hand1, int32_t ___handSafeZone2, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::Expand(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Bounds_Expand_m3FB9436F88DFE0FB57ECF6B1C4B2EDF9589346DA (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Bounds_IntersectRay_m11E700B1AE0EAE3568379B999D1FBFEDEEB56EC7 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  p0, float* p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m5B3F02DF9582B32A89FA5758BA1DF7077D2BAE62 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsRight(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool HandednessExtensions_IsRight_mD846198B03AE619D946B29A031D45D8567DC2487 (uint8_t p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__46::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46__ctor_m24F8E8CF3913432ED6487981B8EF310724A453CA (U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Bounds_Expand_mB181AD8DCDE6A018DFC196528CC5002CA7EBCF0A (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR bool Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsPalmFacingCamera(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_IsPalmFacingCamera_mA8872F07D08860F2E9196FF015AAFC758D73DE95 (RuntimeObject* ___hand0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsLeft(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool HandednessExtensions_IsLeft_mFB576AC9DA67076D5AC5791AF1C657AEE47A9B01 (uint8_t p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Up_m82E82352169111AD3C37DE7264AE5959E45A32BD (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsMatch(Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool HandednessExtensions_IsMatch_mC60E5029B9C735499B7F95867C9CCAABF0F0BAE8 (uint8_t p0, uint8_t p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnEnable_m46A8122E1DAA84489C8789D9BE71FF1168C94667 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Input.HandBounds>()
inline HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * Component_GetComponent_TisHandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC_m8B060FB4A48474A67420AA0CB64BA0A611B4FC2E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_IsValidController_m2EE36F3A4FB06E1EFAEFCD12BCB26754C467C0C4 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mF558364148A015EF88E081BB4947F1EB60CEED20 (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HandConstraint__ctor_mD37AEFAA4EE4C0D748E1D2BAC541263E5783A0E7 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
extern "C" IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
extern "C" IL2CPP_METHOD_ATTR void Solver_Start_mDD65645E4B6947EAE1C13937656A4A0D0B7094E8 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * GameObject_AddComponent_TisSolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2_m4239EDD8BD0CFA30532871EF32838CACEA3B6F88 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_mBC103252673E2FB706BD947C6FF005ED42626C25 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_m08257CB8CDB5348326411F428939079C28AFEC56 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m2E549E8EF910D19C2336329006BFF2F14C7AABBA (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_mA89F43DB575BE35D2BE34B9EDCA25550136E7465 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
extern "C" IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_m2B4FFD9D5F42750684297D1D00BB3AF3CFE9D947 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_m260429F88ADAA8F78296416ADFE4E62F8F968515 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m8F400C43CDA714C94FD3EB49256E391D7C0B0681 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
extern "C" IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m5B22FB5F71966F41537A88D0D5811EBFFD58C126 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_Springiness_mD3F65423B80B37F376BCB05287147E46377782EF (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_m072D452FB8CD165FE1003ECE3D70094CB35ECD4B (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m2BDCB48E59E8590CA3F5EB4D6691047DB346BC83 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapTo_m6A533354F01C3A83837F5EA8AE4FAE5E284B08E0 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_m3564867BE63FF85139B7B6A03EE1B654E4B7E925 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_mD8CC3329FE12853A05331ACFFEA3918D157AC443 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_m574EF8A8FD24AC57A3B3DBCDA19703336D20F9B4 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m58E428C2FCC8793EC68F6060D9079D1806EE1BEB (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
extern "C" IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m8E7CBC8233497DE771F690F3C15BA2D5C52A699B (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_mD0D76D0227A2A7428D0D85272201D1DB3DCEFF99 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m0C6CF1047CAB7B9B5CD347A65BC6A92AD04DFFE5 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m8DBD521243B799C1AC00EB828CA6BFEF5A5DE90C (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_m07DDC1E573C3D1C717C8007B41547821D54F71C6 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_m7EFD18D79FF31A0503F3AF703A09875A324DDFA5 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_mE43716CCC907FF1A7A42F27A0B324CE864918943 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_m202FD531D8F43BCF134175B7E4D4A2D5FAA17930 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m4B0E54D47D8C8720787B40BDF829AE13AC21D32C (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m287B7AF664412938033992014AE2BDE835AADA19 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_mE7F8998BDFE718E683595AF522725BD46F1E2176 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m078F7DC01BB3942FE1C26203BBBA07EF0BDCDBD8 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_mF5671F8770505EF221CEAF604FDB97D2C06B814E (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mC073ED82C4E7CFED818EACE1BF37BC145DC90970 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_m80F6160C025BF48D0BEF80532C54551373243A2B (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m5762CFAA82A59DF94F9DE0CE5CF2AB35F519FA52 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalScale_mE29FA0AEABBADC45C1C5E10B5309E8871225229F (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * Component_GetComponent_TisSolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2_m8F111C6BBFAB5BCFE91E83FD61E1B4B89248821A (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m1DE44CB0AAB86F547D097AF8EF3BCB327FD4C4A9 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * ___solver0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m0B3E98FED22AE01201B87BDD21491217D5781476 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * ___solver0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m6F956862B3B477452AAF4A9AE82EC61B32719D29 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m305130065AB436BBEA6292D00BBA4FC4565F48F7 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m73C85D43FCAF64DA61AF353FB9E3435D4B6DBF2B (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_mD9F122BCDEA0C4015811B238D778AF46C12668E4 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m94E4E897CD5E8E44DBA629969701F8672CCD304A (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_m0467D33544193A9256767C9559C84B699AE00BDB (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_mA6DFD69B7F004AEB124792A54A57F913B10C7F38 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m48DA7A8FF260891A9E53E0F23D9222C5EE1A21C0 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m6A6F0C8A0971383DC32836F2E5AA07FCF8BF314A (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m4DB14A92F5210C8BA3F2D3CD98A74BF2A9AF9404 (int32_t ___type0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mB3744585340991CD53CF056560AFC9A737B9BA49 (uint8_t ___hand0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AsReadOnly()
inline ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07 * List_1_AsReadOnly_m915BD3B89C4BE7D29E6D5B0C2BC5EB725657014C (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07 * (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, const RuntimeMethod*))List_1_AsReadOnly_mA3A95833512F80018CC1A0B37766AEF91A1FD34B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Clear()
inline void List_1_Clear_m9FEA9AEA0BD0FCF012AE16CE908E787D86D7EDDE (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m4D45AE562820838444B931A4C0764F36EBEA0274 (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, p0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m1E198FBF8DA32FE5D38E6926499A47914C62E146 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_mD2F2AA17D014F8D21988759F5EE7E8211427AC2F (Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m5B9E94712F4FE8F1FE6916CC1509A33111DA8D6A (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mD5C6BABF076FF496FEA8F21AA1012CD636A4B4D9 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_mCBA140C3ABEA2A4DAAF952703B34A3B7D4A76845 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, uint8_t ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>()
inline SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* Component_GetComponents_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m242E837E23DB912F0375CC06375C9461DF39C9F8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Intersect_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m263FB4F0F5ADCA007405AA95F18F91315CC429FA (RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_m4D7F0556812B095D1D2C66EF2AF1EF98D6201333_gshared)(p0, p1, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_m4CA63E3247A4EF9CF68D496548CEBB35A200E77A (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_mE730F185623512A7C0D51B48B7D728B392238DA3 (RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m176BEF1318CEDA82CAC53F47013E273574719157_gshared)(p0, p1, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07 * CollectionsExtensions_ToReadOnlyCollection_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m378489BD5A4ECAB74B080F889E377CA5F27BCFC6 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07 * (*) (RuntimeObject*, const RuntimeMethod*))CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_m7CE644ED0ED2B907711FB1049C4D67D3876760FC_gshared)(p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_mA5AC288FA3050D31759EF93D5F7AD97D2845D452 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mF6A2D3AE3471F39B8321F2BDF052075EE73430EB (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Item(System.Int32)
inline Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * List_1_get_Item_m68AEC3D24339BC8DBB40D553744DD5051AA8D608 (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
extern "C" IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_mD3D1C1AD3EF7D5CB8195B37064162852883D8BE6 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Count()
inline int32_t List_1_get_Count_m656B3F1077970ACEBAF90C0F1FCBA2147787E077 (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Contains(!0)
inline bool List_1_Contains_m5C96734593D4EF6C6E530DEDA7E279C0B97682BE (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Add(!0)
inline void List_1_Add_m2B5463A3CA3A64C5964564E5116C7210C2F78F65 (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Remove(!0)
inline bool List_1_Remove_m3B73CD4CB8BA876C55765D96C0DD67F23C740AC2 (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m8B253A1962367FC5EB62AFC42B4467646A0E2F61 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_mCE1FD3903672519D31BCD36109220237B60B8CF4 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::GetControllerRay(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_GetControllerRay_mA41232CF22B467E3D1F9213DF1D0DCDA709BF75E (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m619D7B2B8DDA606042C00E5C8BE7B5E47DE9E04C (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_mD4D3DA119B2FA86FB256BA23FFB6EBCA769D1440 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m52BD540E6A2E5DEC82C8E2039599D7FA0F2CAB89 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<Microsoft.MixedReality.Toolkit.Input.LinePointer>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
inline LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11 * PointerUtils_GetPointer_TisLinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11_m6866B5FE75B9F4FE3691B7835DE3ED4FFB039764 (uint8_t ___handedness0, const RuntimeMethod* method)
{
	return ((  LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11 * (*) (uint8_t, const RuntimeMethod*))PointerUtils_GetPointer_TisRuntimeObject_mAF20E9FEBD00DEBF577C7982BA71A7C0AF6AA580_gshared)(___handedness0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::.ctor()
inline void List_1__ctor_mED74C71BB206E75A734C858BC58A7FE78EADCC60 (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m23DB9CCF51CDA90AA4ED55DC205B18282AEBF682 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m88A630C98C183E60E73B588F73734FE798A368E3 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_m5D6FAFB761BE4F6746BD62AB555ED328B1639614 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
extern "C" IL2CPP_METHOD_ATTR Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  SolverHandler_get_AltScale_mDE27E890F468BC95A4983042E9A12A0B17A3D121 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::get_Current()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m668B7F80833566678BB9DB411EA46AC9615D5090 (Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_mB4AD8DC98D58567FF790A551EA3FE435488997BD (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m5F0A78261F7AA1533712760ED9E8895E31AD097A (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_mA05E209CC6E9A2D50AAF62FA298672AC33C709B9 (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1 (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m81FDE057373C16F0C93E495357AA3D0D11B575A5 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_mEE117A71F230B4F0EB15E986FFA5E86849E8C8A1 (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_m9141E374864032919BE53466E9BE8E907CF3BEB3 (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mADDAA1452D0FCC4C48C2290871B00B91DA4F4718 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_mE9637B2D2DAFB64D5A1303C3F1C476FB299AE0FF (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m00F3FE4065064FF707CA299A4D8D5BEC7A2A9D68 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mE15D0BC44F816F08924BEEE6608992CAF20BF400 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * ___rayStep0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_m294D3D182E4CC5B8604FF97A5428DC81E11996AE (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  p0, float p1, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p2, bool p3, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mC77EEB98AFED38E4DB777C7BBF7742F2CD2CE1F4 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m51175EF1CF25AF8041EEEB8CDFCF87B7EFE8E989 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m2830F3BA4EA9991AB8276C7875C1BA6EF8BAF544 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_m4FA07E6B4EF75FF903D02D7639661A3482B17064 (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  p0, float p1, float p2, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p3, bool p4, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p5, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC (bool p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_mA8878A7D659C2851AD72731CE3298A01EC259EEE (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  p3, float p4, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p5, int32_t p6, bool p7, bool p8, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** p9, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** p10, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** p11, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mC55DCD94A1DEEA5DD57FA0FEA6D34500F62866A9 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m11558881BEBE9280171A9A9967E76AAE30A7FE68 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  p0, float* p1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B (float p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::get_Handedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t ControllerFinder_get_Handedness_mE5F8A4B7431C6AD5CE4012670ADF396F48607937 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return handedness; }
		uint8_t L_0 = __this->get_handedness_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return handedness; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::set_Handedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_set_Handedness_m20A49D66BA442C94070A68D21F00901262365900 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (handedness != value)
		uint8_t L_0 = __this->get_handedness_4();
		uint8_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// handedness = value;
		uint8_t L_3 = ___value0;
		__this->set_handedness_4(L_3);
		// RefreshControllerTransform();
		VirtActionInvoker0::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform() */, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnEnable_m1BE60DF7BBD16FA15633450A6BCC1E4114F3A758 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnEnable_m1BE60DF7BBD16FA15633450A6BCC1E4114F3A758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealitySourceStateHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealitySourceStateHandler_t0A47B64C17DEC60D2575BA2F959068CA94312FAC_m56F56A398E3FB62D204DD46644001151D90A7056_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0013:
	{
		// RefreshControllerTransform();
		VirtActionInvoker0::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnDisable_m7828956D5A66467CF7E8F6D25A36C4855329A655 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnDisable_m7828956D5A66467CF7E8F6D25A36C4855329A655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealitySourceStateHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealitySourceStateHandler_t0A47B64C17DEC60D2575BA2F959068CA94312FAC_m52D25F3D05FEB445B350835969EE51CB5726283A_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnSourceDetected(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnSourceDetected_m3B8E13607F901545A27E88929076D8A1DE281F19 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnSourceDetected_m3B8E13607F901545A27E88929076D8A1DE281F19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  V_1;
	memset(&V_1, 0, sizeof(V_1));
	uint8_t V_2 = 0;
	Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  V_3;
	memset(&V_3, 0, sizeof(V_3));
	bool V_4 = false;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// if (eventData.Controller?.ControllerHandedness == handedness)
		SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = SourceStateEventData_get_Controller_m0E587BE1EF0ED7D58FC8798A21393969FDBDB2F8(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 ));
		Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  L_3 = V_3;
		G_B3_0 = L_3;
		goto IL_0020;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		uint8_t L_4 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, G_B2_0);
		Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Nullable_1__ctor_mF2293692304E73FBCDC4DA51580B1650C6D28F38((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mF2293692304E73FBCDC4DA51580B1650C6D28F38_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_0020:
	{
		V_1 = G_B3_0;
		uint8_t L_6 = __this->get_handedness_4();
		V_2 = L_6;
		uint8_t L_7 = Nullable_1_GetValueOrDefault_m0CE21981E4E789C6D2D29637F03BF806AAF3E229((Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m0CE21981E4E789C6D2D29637F03BF806AAF3E229_RuntimeMethod_var);
		uint8_t L_8 = V_2;
		bool L_9 = Nullable_1_get_HasValue_mECC937EB40B835110194782C9C5CE8BF92946966((Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mECC937EB40B835110194782C9C5CE8BF92946966_RuntimeMethod_var);
		V_0 = (bool)((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		// if (eventData.Controller is IMixedRealityHand)
		SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA * L_11 = ___eventData0;
		NullCheck(L_11);
		RuntimeObject* L_12 = SourceStateEventData_get_Controller_m0E587BE1EF0ED7D58FC8798A21393969FDBDB2F8(L_11, /*hidden argument*/NULL);
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_12, IMixedRealityHand_t5EFF4785392B457503DDF532E858F7D5DC844F45_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		goto IL_0066;
	}

IL_0057:
	{
		// AddControllerTransform(eventData.Controller);
		SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA * L_14 = ___eventData0;
		NullCheck(L_14);
		RuntimeObject* L_15 = SourceStateEventData_get_Controller_m0E587BE1EF0ED7D58FC8798A21393969FDBDB2F8(L_14, /*hidden argument*/NULL);
		VirtActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_15);
	}

IL_0066:
	{
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnSourceLost(Microsoft.MixedReality.Toolkit.Input.SourceStateEventData)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnSourceLost_m5CA99BE53A3835472D669C015A395572AA804CEE (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_OnSourceLost_m5CA99BE53A3835472D669C015A395572AA804CEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  V_1;
	memset(&V_1, 0, sizeof(V_1));
	uint8_t V_2 = 0;
	Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// if (eventData.Controller?.ControllerHandedness == handedness)
		SourceStateEventData_t16ECCDFFE1814B1AC194D6F993989B07935CF5EA * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1 = SourceStateEventData_get_Controller_m0E587BE1EF0ED7D58FC8798A21393969FDBDB2F8(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 ));
		Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  L_3 = V_3;
		G_B3_0 = L_3;
		goto IL_0020;
	}

IL_0016:
	{
		NullCheck(G_B2_0);
		uint8_t L_4 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, G_B2_0);
		Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Nullable_1__ctor_mF2293692304E73FBCDC4DA51580B1650C6D28F38((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mF2293692304E73FBCDC4DA51580B1650C6D28F38_RuntimeMethod_var);
		G_B3_0 = L_5;
	}

IL_0020:
	{
		V_1 = G_B3_0;
		uint8_t L_6 = __this->get_handedness_4();
		V_2 = L_6;
		uint8_t L_7 = Nullable_1_GetValueOrDefault_m0CE21981E4E789C6D2D29637F03BF806AAF3E229((Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m0CE21981E4E789C6D2D29637F03BF806AAF3E229_RuntimeMethod_var);
		uint8_t L_8 = V_2;
		bool L_9 = Nullable_1_get_HasValue_mECC937EB40B835110194782C9C5CE8BF92946966((Nullable_1_t6CF061795784BAECC42FB0CC0552D78D82A028F8 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_mECC937EB40B835110194782C9C5CE8BF92946966_RuntimeMethod_var);
		V_0 = (bool)((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		// RemoveControllerTransform();
		VirtActionInvoker0::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform() */, __this);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::TryAndAddControllerTransform()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_TryAndAddControllerTransform_m1E2BEADCD25227CD33CAA0B347457680E32AECFA (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_TryAndAddControllerTransform_m1E2BEADCD25227CD33CAA0B347457680E32AECFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (CoreServices.InputSystem == null)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0064;
	}

IL_0010:
	{
		// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		NullCheck(L_2);
		HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 * L_3 = InterfaceFuncInvoker0< HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E  L_4 = HashSet_1_GetEnumerator_mC507457E4835B98FA6D1463ADC99C88C9CC3783E(L_3, /*hidden argument*/HashSet_1_GetEnumerator_mC507457E4835B98FA6D1463ADC99C88C9CC3783E_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0023:
		{
			// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
			RuntimeObject* L_5 = Enumerator_get_Current_m77E21D82BDE56DFFBF2A159C987A9A76CFEF063E((Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *)(&V_1), /*hidden argument*/Enumerator_get_Current_m77E21D82BDE56DFFBF2A159C987A9A76CFEF063E_RuntimeMethod_var);
			V_2 = L_5;
			// if (controller.ControllerHandedness == handedness)
			RuntimeObject* L_6 = V_2;
			NullCheck(L_6);
			uint8_t L_7 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_6);
			uint8_t L_8 = __this->get_handedness_4();
			V_3 = (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0049;
			}
		}

IL_003e:
		{
			// AddControllerTransform(controller);
			RuntimeObject* L_10 = V_2;
			VirtActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_10);
			// return;
			IL2CPP_LEAVE(0x64, FINALLY_0055);
		}

IL_0049:
		{
		}

IL_004a:
		{
			// foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
			bool L_11 = Enumerator_MoveNext_mFF7396AB09EC0B1C5A33057C5E495B59CCBE47FF((Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mFF7396AB09EC0B1C5A33057C5E495B59CCBE47FF_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0023;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB52649D6DF55E11EB2D5031B6B88A9F317A6D706((Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mB52649D6DF55E11EB2D5031B6B88A9F317A6D706_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::AddControllerTransform(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_AddControllerTransform_m77D05D74585973AAE6B4E79920C4B72B1BA8FA07 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, RuntimeObject* ___newController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_AddControllerTransform_m77D05D74585973AAE6B4E79920C4B72B1BA8FA07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (newController == null ||
		//     newController.Visualizer == null ||
		//     newController.Visualizer.GameObjectProxy == null ||
		//     newController.Visualizer.GameObjectProxy.transform == null)
		RuntimeObject* L_0 = ___newController0;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_1 = ___newController0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_3 = ___newController0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t84214CF2461E1E815417B58C710DA3FA2A36D333_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_7 = ___newController0;
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t84214CF2461E1E815417B58C710DA3FA2A36D333_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 1;
	}

IL_0038:
	{
		V_0 = (bool)G_B5_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		// return;
		goto IL_0091;
	}

IL_003f:
	{
		// if (newController.ControllerHandedness == handedness &&
		//     !newController.Visualizer.GameObjectProxy.transform.Equals(ControllerTransform))
		RuntimeObject* L_13 = ___newController0;
		NullCheck(L_13);
		uint8_t L_14 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_13);
		uint8_t L_15 = __this->get_handedness_4();
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_16 = ___newController0;
		NullCheck(L_16);
		RuntimeObject* L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t84214CF2461E1E815417B58C710DA3FA2A36D333_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get_ControllerTransform_5();
		NullCheck(L_19);
		bool L_21 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_19, L_20);
		G_B10_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B10_0 = 0;
	}

IL_006e:
	{
		V_1 = (bool)G_B10_0;
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		// ControllerTransform = newController.Visualizer.GameObjectProxy.transform;
		RuntimeObject* L_23 = ___newController0;
		NullCheck(L_23);
		RuntimeObject* L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Visualizer() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = InterfaceFuncInvoker0< GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * >::Invoke(0 /* UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer::get_GameObjectProxy() */, IMixedRealityControllerVisualizer_t84214CF2461E1E815417B58C710DA3FA2A36D333_il2cpp_TypeInfo_var, L_24);
		NullCheck(L_25);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_25, /*hidden argument*/NULL);
		__this->set_ControllerTransform_5(L_26);
		// OnControllerFound();
		VirtActionInvoker0::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerFound() */, __this);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_RemoveControllerTransform_m804315B2080E494EA52B09DC922980471D017325 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_RemoveControllerTransform_m804315B2080E494EA52B09DC922980471D017325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (ControllerTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ControllerTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// OnControllerLost();
		VirtActionInvoker0::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerLost() */, __this);
		// ControllerTransform = null;
		__this->set_ControllerTransform_5((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RefreshControllerTransform()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_RefreshControllerTransform_m7E4721F5F5C88C3C48F773E23F6B8E92DE19D099 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerFinder_RefreshControllerTransform_m7E4721F5F5C88C3C48F773E23F6B8E92DE19D099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (ControllerTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_ControllerTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// RemoveControllerTransform();
		VirtActionInvoker0::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::RemoveControllerTransform() */, __this);
	}

IL_001a:
	{
		// TryAndAddControllerTransform();
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::TryAndAddControllerTransform() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerFound()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnControllerFound_m287D115DED068E8A02B951E8559F214CAB88B89A (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void OnControllerFound() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::OnControllerLost()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder_OnControllerLost_m6D5E38D15CFE781517352AA12A1AC461614A0C0A (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	{
		// protected virtual void OnControllerLost() { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.ControllerFinder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ControllerFinder__ctor_m8A9BACAB16F739A65C27CDE2A659B680939548D5 (ControllerFinder_tA3DA2984D7C78CC98A1259581CAF83CBECB48B0E * __this, const RuntimeMethod* method)
{
	{
		// private Handedness handedness = Handedness.None;
		__this->set_handedness_4(0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_SafeZone()
extern "C" IL2CPP_METHOD_ATTR int32_t HandConstraint_get_SafeZone_m33A49D9B73598E2548AEF33B49A51988A95308B5 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return safeZone; }
		int32_t L_0 = __this->get_safeZone_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return safeZone; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_SafeZone(Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_SafeZone_m174F6FB5255DD8C7DB598C01FE379D1C76A89496 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { safeZone = value; }
		int32_t L_0 = ___value0;
		__this->set_safeZone_13(L_0);
		// set { safeZone = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_SafeZoneBuffer()
extern "C" IL2CPP_METHOD_ATTR float HandConstraint_get_SafeZoneBuffer_m6A253E9076277EC87502C01074515D1E8DCF4E0E (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return safeZoneBuffer; }
		float L_0 = __this->get_safeZoneBuffer_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return safeZoneBuffer; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_SafeZoneBuffer(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_SafeZoneBuffer_mACF8708817F7D17192E39EF569ECF0BBB2AF4E9E (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { safeZoneBuffer = value; }
		float L_0 = ___value0;
		__this->set_safeZoneBuffer_14(L_0);
		// set { safeZoneBuffer = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_UpdateWhenOppositeHandNear()
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_get_UpdateWhenOppositeHandNear_m37F9805F3FF8819147760766DBE4697DC067DC47 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return updateWhenOppositeHandNear; }
		bool L_0 = __this->get_updateWhenOppositeHandNear_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return updateWhenOppositeHandNear; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_UpdateWhenOppositeHandNear(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_UpdateWhenOppositeHandNear_mB71BD20C2567F93216B77A4E176201748D5515AD (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { updateWhenOppositeHandNear = value; }
		bool L_0 = ___value0;
		__this->set_updateWhenOppositeHandNear_15(L_0);
		// set { updateWhenOppositeHandNear = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_HideHandCursorsOnActivate()
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_get_HideHandCursorsOnActivate_mB28D0D5D7FA7D4158B712179F5F7CFC5A75B2FFD (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return hideHandCursorsOnActivate; }
		bool L_0 = __this->get_hideHandCursorsOnActivate_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return hideHandCursorsOnActivate; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_HideHandCursorsOnActivate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_HideHandCursorsOnActivate_m0D6CFCDEDA3B28F8111DE568291C3138C25EFF67 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { hideHandCursorsOnActivate = value; }
		bool L_0 = ___value0;
		__this->set_hideHandCursorsOnActivate_16(L_0);
		// set { hideHandCursorsOnActivate = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_RotationBehavior()
extern "C" IL2CPP_METHOD_ATTR int32_t HandConstraint_get_RotationBehavior_mF0FC3E209E8468AF3762D93DB4A95C05AD4475BB (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return rotationBehavior; }
		int32_t L_0 = __this->get_rotationBehavior_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return rotationBehavior; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_RotationBehavior(Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_RotationBehavior_m0F9443D3D32A9DD711291ACC1203EB01D82F52E6 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { rotationBehavior = value; }
		int32_t L_0 = ___value0;
		__this->set_rotationBehavior_17(L_0);
		// set { rotationBehavior = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnHandActivate()
extern "C" IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandActivate_mB1C51292CB86DC58E10B5D09A10C5712D6F7A570 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * V_0 = NULL;
	{
		// get { return onHandActivate; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onHandActivate_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return onHandActivate; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OnHandActivate(UnityEngine.Events.UnityEvent)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_OnHandActivate_mA54A5AF33F76C4DDAC98BBAB51FF6D131665F5D0 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set { onHandActivate = value; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onHandActivate_18(L_0);
		// set { onHandActivate = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnHandDeactivate()
extern "C" IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnHandDeactivate_m30BEFCEE86F4BFFD60A45F7004A2B37DB88DF3D0 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * V_0 = NULL;
	{
		// get { return onHandDeactivate; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onHandDeactivate_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return onHandDeactivate; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OnHandDeactivate(UnityEngine.Events.UnityEvent)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_OnHandDeactivate_m86CB616692AA83AEE96A1BA9EA650A305CC3F321 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set { onHandDeactivate = value; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onHandDeactivate_19(L_0);
		// set { onHandDeactivate = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnFirstHandDetected()
extern "C" IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnFirstHandDetected_mBA19BF572A1C713A96B683B54FCB12B003A8E400 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * V_0 = NULL;
	{
		// get { return onFirstHandDetected; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onFirstHandDetected_20();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return onFirstHandDetected; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OnFirstHandDetected(UnityEngine.Events.UnityEvent)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_OnFirstHandDetected_m8BD0904DF29103AB1355794089ACDC55DAF34304 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set { onFirstHandDetected = value; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onFirstHandDetected_20(L_0);
		// set { onFirstHandDetected = value; }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::get_OnLastHandLost()
extern "C" IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * HandConstraint_get_OnLastHandLost_m46D40EB807A0FF87E9E1C146BEFCAB69C0352554 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * V_0 = NULL;
	{
		// get { return onLastHandLost; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onLastHandLost_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return onLastHandLost; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::set_OnLastHandLost(UnityEngine.Events.UnityEvent)
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_set_OnLastHandLost_mA16971D47A96F1AEEE360B9A3CE5DD6F9B82BEB8 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set { onLastHandLost = value; }
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onLastHandLost_21(L_0);
		// set { onLastHandLost = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_SolverUpdate_m268654B0D6484C4E2933DBC009B1177459F0A43D (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_SolverUpdate_m268654B0D6484C4E2933DBC009B1177459F0A43D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint8_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B33_0 = 0;
	{
		// if (SolverHandler.TrackedTargetType != TrackedObjectType.HandJoint &&
		//     SolverHandler.TrackedTargetType != TrackedObjectType.ControllerRay)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		int32_t L_1 = SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0022;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_2 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		int32_t L_3 = SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// Debug.LogWarning("Solver HandConstraint requires TrackedObjectType of type HandJoint or ControllerRay");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralAEA2A24041B83C854AA97A8FFB2E549B15B679EF, /*hidden argument*/NULL);
		// return;
		goto IL_0266;
	}

IL_0038:
	{
		// var prevTrackedController = trackedController;
		RuntimeObject* L_5 = __this->get_trackedController_23();
		V_0 = L_5;
		// if (SolverHandler.CurrentTrackedHandedness != Handedness.None)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_6 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		uint8_t L_7 = SolverHandler_get_CurrentTrackedHandedness_m6067E18E11252F6F91880B06D6334ECEE7A84A9B(L_6, /*hidden argument*/NULL);
		V_3 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0145;
		}
	}
	{
		// trackedController = GetController(SolverHandler.CurrentTrackedHandedness);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_9 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_9);
		uint8_t L_10 = SolverHandler_get_CurrentTrackedHandedness_m6067E18E11252F6F91880B06D6334ECEE7A84A9B(L_9, /*hidden argument*/NULL);
		RuntimeObject* L_11 = HandConstraint_GetController_m495712B457CC7186BF439E3846599B8D5C6EA9E1(L_10, /*hidden argument*/NULL);
		__this->set_trackedController_23(L_11);
		// bool isValidController = IsValidController(trackedController);
		RuntimeObject* L_12 = __this->get_trackedController_23();
		bool L_13 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(14 /* System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_12);
		V_4 = L_13;
		// if (!isValidController)
		bool L_14 = V_4;
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00e6;
		}
	}
	{
		// SolverHandler.PreferredTrackedHandedness = SolverHandler.CurrentTrackedHandedness.GetOppositeHandedness();
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_16 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_17 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		uint8_t L_18 = SolverHandler_get_CurrentTrackedHandedness_m6067E18E11252F6F91880B06D6334ECEE7A84A9B(L_17, /*hidden argument*/NULL);
		uint8_t L_19 = HandednessExtensions_GetOppositeHandedness_m4BF5CD0EB9975DCB1A015BA40670894D035E23A5(L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		SolverHandler_set_PreferredTrackedHandedness_m1F1B5022525327F522CEB931B02A741D47A1167F(L_16, L_19, /*hidden argument*/NULL);
		// SolverHandler.RefreshTrackedObject();
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_20 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_20);
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(L_20, /*hidden argument*/NULL);
		// trackedController = GetController(SolverHandler.CurrentTrackedHandedness);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_21 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_21);
		uint8_t L_22 = SolverHandler_get_CurrentTrackedHandedness_m6067E18E11252F6F91880B06D6334ECEE7A84A9B(L_21, /*hidden argument*/NULL);
		RuntimeObject* L_23 = HandConstraint_GetController_m495712B457CC7186BF439E3846599B8D5C6EA9E1(L_22, /*hidden argument*/NULL);
		__this->set_trackedController_23(L_23);
		// isValidController = IsValidController(trackedController);
		RuntimeObject* L_24 = __this->get_trackedController_23();
		bool L_25 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(14 /* System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_24);
		V_4 = L_25;
		// if (!isValidController)
		bool L_26 = V_4;
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00e5;
		}
	}
	{
		// trackedController = null;
		__this->set_trackedController_23((RuntimeObject*)NULL);
	}

IL_00e5:
	{
	}

IL_00e6:
	{
		// if (isValidController && SolverHandler.TransformTarget != null)
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_00fd;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_29 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_31 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_30, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_31));
		goto IL_00fe;
	}

IL_00fd:
	{
		G_B13_0 = 0;
	}

IL_00fe:
	{
		V_7 = (bool)G_B13_0;
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_0142;
		}
	}
	{
		// if (updateWhenOppositeHandNear || !IsOppositeHandNear(trackedController))
		bool L_33 = __this->get_updateWhenOppositeHandNear_15();
		if (L_33)
		{
			goto IL_011e;
		}
	}
	{
		RuntimeObject* L_34 = __this->get_trackedController_23();
		bool L_35 = VirtFuncInvoker1< bool, RuntimeObject* >::Invoke(18 /* System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsOppositeHandNear(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, __this, L_34);
		G_B17_0 = ((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		goto IL_011f;
	}

IL_011e:
	{
		G_B17_0 = 1;
	}

IL_011f:
	{
		V_8 = (bool)G_B17_0;
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_0141;
		}
	}
	{
		// GoalPosition = CalculateGoalPosition();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = VirtFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(15 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateGoalPosition() */, __this);
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_37, /*hidden argument*/NULL);
		// GoalRotation = CalculateGoalRotation();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38 = VirtFuncInvoker0< Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(16 /* UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateGoalRotation() */, __this);
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_38, /*hidden argument*/NULL);
	}

IL_0141:
	{
	}

IL_0142:
	{
		goto IL_014e;
	}

IL_0145:
	{
		// trackedController = null;
		__this->set_trackedController_23((RuntimeObject*)NULL);
	}

IL_014e:
	{
		// var newHandedness = trackedController == null ? Handedness.None : trackedController.ControllerHandedness;
		RuntimeObject* L_39 = __this->get_trackedController_23();
		if (!L_39)
		{
			goto IL_0163;
		}
	}
	{
		RuntimeObject* L_40 = __this->get_trackedController_23();
		NullCheck(L_40);
		uint8_t L_41 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_40);
		G_B25_0 = ((int32_t)(L_41));
		goto IL_0164;
	}

IL_0163:
	{
		G_B25_0 = 0;
	}

IL_0164:
	{
		V_1 = G_B25_0;
		// if (previousHandedness.IsNone() && !newHandedness.IsNone())
		uint8_t L_42 = __this->get_previousHandedness_22();
		bool L_43 = HandednessExtensions_IsNone_mA715F0CDC8F1641E01EC141AC0FFDE4AC142DAC9(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_017d;
		}
	}
	{
		uint8_t L_44 = V_1;
		bool L_45 = HandednessExtensions_IsNone_mA715F0CDC8F1641E01EC141AC0FFDE4AC142DAC9(L_44, /*hidden argument*/NULL);
		G_B28_0 = ((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		goto IL_017e;
	}

IL_017d:
	{
		G_B28_0 = 0;
	}

IL_017e:
	{
		V_9 = (bool)G_B28_0;
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_01b8;
		}
	}
	{
		// StartCoroutine(ToggleCursors(trackedController, false, true));
		RuntimeObject* L_47 = __this->get_trackedController_23();
		RuntimeObject* L_48 = VirtFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(17 /* System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean) */, __this, L_47, (bool)0, (bool)1);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_48, /*hidden argument*/NULL);
		// OnFirstHandDetected.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_49 = HandConstraint_get_OnFirstHandDetected_mBA19BF572A1C713A96B683B54FCB12B003A8E400(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_49, /*hidden argument*/NULL);
		// OnHandActivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_50 = HandConstraint_get_OnHandActivate_mB1C51292CB86DC58E10B5D09A10C5712D6F7A570(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_50, /*hidden argument*/NULL);
		goto IL_0251;
	}

IL_01b8:
	{
		// else if (!previousHandedness.IsNone() && newHandedness.IsNone())
		uint8_t L_51 = __this->get_previousHandedness_22();
		bool L_52 = HandednessExtensions_IsNone_mA715F0CDC8F1641E01EC141AC0FFDE4AC142DAC9(L_51, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_01cd;
		}
	}
	{
		uint8_t L_53 = V_1;
		bool L_54 = HandednessExtensions_IsNone_mA715F0CDC8F1641E01EC141AC0FFDE4AC142DAC9(L_53, /*hidden argument*/NULL);
		G_B33_0 = ((int32_t)(L_54));
		goto IL_01ce;
	}

IL_01cd:
	{
		G_B33_0 = 0;
	}

IL_01ce:
	{
		V_10 = (bool)G_B33_0;
		bool L_55 = V_10;
		if (!L_55)
		{
			goto IL_0200;
		}
	}
	{
		// StartCoroutine(ToggleCursors(prevTrackedController, true));
		RuntimeObject* L_56 = V_0;
		RuntimeObject* L_57 = VirtFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(17 /* System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean) */, __this, L_56, (bool)1, (bool)0);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_57, /*hidden argument*/NULL);
		// OnLastHandLost.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_58 = HandConstraint_get_OnLastHandLost_m46D40EB807A0FF87E9E1C146BEFCAB69C0352554(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_58, /*hidden argument*/NULL);
		// OnHandDeactivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_59 = HandConstraint_get_OnHandDeactivate_m30BEFCEE86F4BFFD60A45F7004A2B37DB88DF3D0(__this, /*hidden argument*/NULL);
		NullCheck(L_59);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_59, /*hidden argument*/NULL);
		goto IL_0251;
	}

IL_0200:
	{
		// else if (previousHandedness != newHandedness)
		uint8_t L_60 = __this->get_previousHandedness_22();
		uint8_t L_61 = V_1;
		V_11 = (bool)((((int32_t)((((int32_t)L_60) == ((int32_t)L_61))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_62 = V_11;
		if (!L_62)
		{
			goto IL_0251;
		}
	}
	{
		// StartCoroutine(ToggleCursors(prevTrackedController, true));
		RuntimeObject* L_63 = V_0;
		RuntimeObject* L_64 = VirtFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(17 /* System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean) */, __this, L_63, (bool)1, (bool)0);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_64, /*hidden argument*/NULL);
		// StartCoroutine(ToggleCursors(trackedController, false, true));
		RuntimeObject* L_65 = __this->get_trackedController_23();
		RuntimeObject* L_66 = VirtFuncInvoker3< RuntimeObject*, RuntimeObject*, bool, bool >::Invoke(17 /* System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean) */, __this, L_65, (bool)0, (bool)1);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_66, /*hidden argument*/NULL);
		// OnHandDeactivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_67 = HandConstraint_get_OnHandDeactivate_m30BEFCEE86F4BFFD60A45F7004A2B37DB88DF3D0(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_67, /*hidden argument*/NULL);
		// OnHandActivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_68 = HandConstraint_get_OnHandActivate_mB1C51292CB86DC58E10B5D09A10C5712D6F7A570(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_68, /*hidden argument*/NULL);
	}

IL_0251:
	{
		// previousHandedness = newHandedness;
		uint8_t L_69 = V_1;
		__this->set_previousHandedness_22(L_69);
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m4A9794908E33DE50C4DE0A45E25FC2D3EC9BBAC5(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m246B9DD9ABE98D836E02E7275103B3E147BC1B1C(__this, /*hidden argument*/NULL);
	}

IL_0266:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_IsValidController_m2EE36F3A4FB06E1EFAEFCD12BCB26754C467C0C4 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_IsValidController_m2EE36F3A4FB06E1EFAEFCD12BCB26754C467C0C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	{
		// if (controller == null)
		RuntimeObject* L_0 = ___controller0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0046;
	}

IL_000e:
	{
		// foreach (var pointer in controller.InputSource.Pointers)
		RuntimeObject* L_2 = ___controller0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* L_4 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tAC5F0B9DCD31153CEDD94E415BB448DF001E003A_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_003c;
	}

IL_001f:
	{
		// foreach (var pointer in controller.InputSource.Pointers)
		IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// if (pointer.IsFocusLocked)
		RuntimeObject* L_9 = V_4;
		NullCheck(L_9);
		bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(13 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_IsFocusLocked() */, IMixedRealityPointer_tA369D6CB41A54D397C9505B232F5CA1F2DE02DC9_il2cpp_TypeInfo_var, L_9);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0037;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0046;
	}

IL_0037:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003c:
	{
		// foreach (var pointer in controller.InputSource.Pointers)
		int32_t L_13 = V_3;
		IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		bool L_15 = V_1;
		return L_15;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateGoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  HandConstraint_CalculateGoalPosition_m1F920D14EDAD2A6C3497B9A7289A4D9BEB4434F7 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_CalculateGoalPosition_m1F920D14EDAD2A6C3497B9A7289A4D9BEB4434F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	float V_3 = 0.0f;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	{
		// var goalPosition = SolverHandler.TransformTarget.position;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (trackedController != null &&
		//     handBounds.Bounds.TryGetValue(trackedController.ControllerHandedness, out trackedHandBounds))
		RuntimeObject* L_3 = __this->get_trackedController_23();
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * L_4 = __this->get_handBounds_24();
		NullCheck(L_4);
		Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 * L_5 = HandBounds_get_Bounds_mFB45A771E9DC955CF391E1E901C4371EDAED084C(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6 = __this->get_trackedController_23();
		NullCheck(L_6);
		uint8_t L_7 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		bool L_8 = Dictionary_2_TryGetValue_m68BD69802EDDE0B7E496379E8517D1B922B9341F(L_5, L_7, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m68BD69802EDDE0B7E496379E8517D1B922B9341F_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_8));
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 0;
	}

IL_003a:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		// Ray ray = CalculateProjectedSafeZoneRay(goalPosition, trackedController, safeZone);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		RuntimeObject* L_11 = __this->get_trackedController_23();
		int32_t L_12 = __this->get_safeZone_13();
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_13 = HandConstraint_CalculateProjectedSafeZoneRay_mC9F9A4C3046F5C110C10158D4A6BA1FEC3ED157C(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		// trackedHandBounds.Expand(safeZoneBuffer);
		float L_14 = __this->get_safeZoneBuffer_14();
		Bounds_Expand_m3FB9436F88DFE0FB57ECF6B1C4B2EDF9589346DA((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), L_14, /*hidden argument*/NULL);
		// if (trackedHandBounds.IntersectRay(ray, out distance))
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_15 = V_4;
		bool L_16 = Bounds_IntersectRay_m11E700B1AE0EAE3568379B999D1FBFEDEEB56EC7((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), L_15, (float*)(&V_3), /*hidden argument*/NULL);
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_008e;
		}
	}
	{
		// goalPosition = ray.origin + ray.direction * distance;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_4), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_4), /*hidden argument*/NULL);
		float L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
	}

IL_008e:
	{
	}

IL_008f:
	{
		// return goalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		V_6 = L_23;
		goto IL_0094;
	}

IL_0094:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_6;
		return L_24;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateGoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  HandConstraint_CalculateGoalRotation_m98B5D6EE1EF45FA04F5E273DFDC64D0D5B0A0DA5 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_CalculateGoalRotation_m98B5D6EE1EF45FA04F5E273DFDC64D0D5B0A0DA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	bool V_4 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		// var goalRotation = SolverHandler.TransformTarget.rotation;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// switch (rotationBehavior)
		int32_t L_3 = __this->get_rotationBehavior_17();
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_005a;
	}

IL_0025:
	{
		// goalRotation = Quaternion.LookRotation(GoalPosition - CameraCache.Main.transform.position);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_005a;
	}

IL_0049:
	{
		// goalRotation *= handToWorldRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = __this->get_handToWorldRotation_25();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// break;
		goto IL_005a;
	}

IL_005a:
	{
		// if (rotationBehavior != SolverRotationBehavior.None)
		int32_t L_15 = __this->get_rotationBehavior_17();
		V_2 = (bool)((!(((uint32_t)L_15) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00bb;
		}
	}
	{
		// var additionalRotation = SolverHandler.AdditionalRotation;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_17 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = SolverHandler_get_AdditionalRotation_m5B3F02DF9582B32A89FA5758BA1DF7077D2BAE62(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// if (trackedController.ControllerHandedness.IsRight())
		RuntimeObject* L_19 = __this->get_trackedController_23();
		NullCheck(L_19);
		uint8_t L_20 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_19);
		bool L_21 = HandednessExtensions_IsRight_mD846198B03AE619D946B29A031D45D8567DC2487(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_009c;
		}
	}
	{
		// additionalRotation.y *= -1.0f;
		float* L_23 = (&V_3)->get_address_of_y_3();
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		*((float*)L_24) = (float)((float)il2cpp_codegen_multiply((float)L_25, (float)(-1.0f)));
	}

IL_009c:
	{
		// goalRotation *= Quaternion.Euler(additionalRotation.x, additionalRotation.y, additionalRotation.z);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_3;
		float L_28 = L_27.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_3;
		float L_30 = L_29.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_3;
		float L_32 = L_31.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_28, L_30, L_32, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_26, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
	}

IL_00bb:
	{
		// return goalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = V_0;
		V_5 = L_35;
		goto IL_00c0;
	}

IL_00c0:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = V_5;
		return L_36;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::ToggleCursors(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HandConstraint_ToggleCursors_mCD542AD0B6F026FB811D0DF7D32C524F53F9E0C9 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, RuntimeObject* ___controller0, bool ___visible1, bool ___frameDelay2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_ToggleCursors_mCD542AD0B6F026FB811D0DF7D32C524F53F9E0C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * L_0 = (U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 *)il2cpp_codegen_object_new(U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622_il2cpp_TypeInfo_var);
		U3CToggleCursorsU3Ed__46__ctor_m24F8E8CF3913432ED6487981B8EF310724A453CA(L_0, 0, /*hidden argument*/NULL);
		U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * L_2 = L_1;
		RuntimeObject* L_3 = ___controller0;
		NullCheck(L_2);
		L_2->set_controller_2(L_3);
		U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * L_4 = L_2;
		bool L_5 = ___visible1;
		NullCheck(L_4);
		L_4->set_visible_3(L_5);
		U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * L_6 = L_4;
		bool L_7 = ___frameDelay2;
		NullCheck(L_6);
		L_6->set_frameDelay_4(L_7);
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsOppositeHandNear(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_IsOppositeHandNear_m9BD9D025C17CA2ECF970C22A774389FB2966440A (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_IsOppositeHandNear_m9BD9D025C17CA2ECF970C22A774389FB2966440A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// if (controller != null)
		RuntimeObject* L_0 = ___controller0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		// if (handBounds.Bounds.TryGetValue(controller.ControllerHandedness.GetOppositeHandedness(), out Bounds oppositeHandBounds) &&
		//     handBounds.Bounds.TryGetValue(controller.ControllerHandedness, out Bounds trackedHandBounds))
		HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * L_2 = __this->get_handBounds_24();
		NullCheck(L_2);
		Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 * L_3 = HandBounds_get_Bounds_mFB45A771E9DC955CF391E1E901C4371EDAED084C(L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___controller0;
		NullCheck(L_4);
		uint8_t L_5 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_4);
		uint8_t L_6 = HandednessExtensions_GetOppositeHandedness_m4BF5CD0EB9975DCB1A015BA40670894D035E23A5(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_7 = Dictionary_2_TryGetValue_m68BD69802EDDE0B7E496379E8517D1B922B9341F(L_3, L_6, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m68BD69802EDDE0B7E496379E8517D1B922B9341F_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * L_8 = __this->get_handBounds_24();
		NullCheck(L_8);
		Dictionary_2_t5D27F64D301A4E347129B8E54158F74E72556596 * L_9 = HandBounds_get_Bounds_mFB45A771E9DC955CF391E1E901C4371EDAED084C(L_8, /*hidden argument*/NULL);
		RuntimeObject* L_10 = ___controller0;
		NullCheck(L_10);
		uint8_t L_11 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		bool L_12 = Dictionary_2_TryGetValue_m68BD69802EDDE0B7E496379E8517D1B922B9341F(L_9, L_11, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m68BD69802EDDE0B7E496379E8517D1B922B9341F_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_12));
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 0;
	}

IL_0044:
	{
		V_3 = (bool)G_B4_0;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_007c;
		}
	}
	{
		// trackedHandBounds.Expand(trackedHandBounds.extents);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), /*hidden argument*/NULL);
		Bounds_Expand_mB181AD8DCDE6A018DFC196528CC5002CA7EBCF0A((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), L_14, /*hidden argument*/NULL);
		// oppositeHandBounds.Expand(oppositeHandBounds.extents);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		Bounds_Expand_mB181AD8DCDE6A018DFC196528CC5002CA7EBCF0A((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), L_15, /*hidden argument*/NULL);
		// if (trackedHandBounds.Intersects(oppositeHandBounds))
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_16 = V_1;
		bool L_17 = Bounds_Intersects_m7B1398FDAC8ECA19677D0956E67FF92EB0BADA9E((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_2), L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// return true;
		V_5 = (bool)1;
		goto IL_0082;
	}

IL_007b:
	{
	}

IL_007c:
	{
	}

IL_007d:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_0082;
	}

IL_0082:
	{
		// }
		bool L_19 = V_5;
		return L_19;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::CalculateProjectedSafeZoneRay(UnityEngine.Vector3,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone)
extern "C" IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  HandConstraint_CalculateProjectedSafeZoneRay_mC9F9A4C3046F5C110C10158D4A6BA1FEC3ED157C (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, RuntimeObject* ___hand1, int32_t ___handSafeZone2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_CalculateProjectedSafeZoneRay_mC9F9A4C3046F5C110C10158D4A6BA1FEC3ED157C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	{
		// switch (handSafeZone)
		int32_t L_0 = ___handSafeZone2;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_00a9;
			}
			case 3:
			{
				goto IL_00bd;
			}
		}
	}
	{
		goto IL_001b;
	}

IL_001b:
	{
		// direction = Vector3.Cross(CameraCache.Main.transform.forward, Vector3.up);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// direction = IsPalmFacingCamera(hand) ? direction : -direction;
		RuntimeObject* L_7 = ___hand1;
		bool L_8 = HandConstraint_IsPalmFacingCamera_mA8872F07D08860F2E9196FF015AAFC758D73DE95(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_9, /*hidden argument*/NULL);
		G_B5_0 = L_10;
		goto IL_0047;
	}

IL_0046:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		G_B5_0 = L_11;
	}

IL_0047:
	{
		V_0 = G_B5_0;
		// if (hand.ControllerHandedness.IsLeft())
		RuntimeObject* L_12 = ___hand1;
		NullCheck(L_12);
		uint8_t L_13 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_12);
		bool L_14 = HandednessExtensions_IsLeft_mFB576AC9DA67076D5AC5791AF1C657AEE47A9B01(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		// direction = -direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0060:
	{
		// break;
		goto IL_00d6;
	}

IL_0063:
	{
		// direction = Vector3.Cross(CameraCache.Main.transform.forward, Vector3.up);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// direction = IsPalmFacingCamera(hand) ? direction : -direction;
		RuntimeObject* L_23 = ___hand1;
		bool L_24 = HandConstraint_IsPalmFacingCamera_mA8872F07D08860F2E9196FF015AAFC758D73DE95(L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_008e;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_25, /*hidden argument*/NULL);
		G_B11_0 = L_26;
		goto IL_008f;
	}

IL_008e:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		G_B11_0 = L_27;
	}

IL_008f:
	{
		V_0 = G_B11_0;
		// if (hand.ControllerHandedness == Handedness.Right)
		RuntimeObject* L_28 = ___hand1;
		NullCheck(L_28);
		uint8_t L_29 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_28);
		V_3 = (bool)((((int32_t)L_29) == ((int32_t)2))? 1 : 0);
		bool L_30 = V_3;
		if (!L_30)
		{
			goto IL_00a6;
		}
	}
	{
		// direction = -direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_31, /*hidden argument*/NULL);
		V_0 = L_32;
	}

IL_00a6:
	{
		// break;
		goto IL_00d6;
	}

IL_00a9:
	{
		// direction = CameraCache.Main.transform.up;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_33 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		// break;
		goto IL_00d6;
	}

IL_00bd:
	{
		// direction = -CameraCache.Main.transform.up;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_36 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		// break;
		goto IL_00d6;
	}

IL_00d6:
	{
		// return new Ray(origin + direction, -direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_40, L_41, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_43, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_45), L_42, L_44, /*hidden argument*/NULL);
		V_4 = L_45;
		goto IL_00ec;
	}

IL_00ec:
	{
		// }
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_46 = V_4;
		return L_46;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsPalmFacingCamera(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_IsPalmFacingCamera_mA8872F07D08860F2E9196FF015AAFC758D73DE95 (RuntimeObject* ___hand0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_IsPalmFacingCamera_mA8872F07D08860F2E9196FF015AAFC758D73DE95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// var jointedHand = hand as IMixedRealityHand;
		RuntimeObject* L_0 = ___hand0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityHand_t5EFF4785392B457503DDF532E858F7D5DC844F45_il2cpp_TypeInfo_var));
		// if ((jointedHand != null) && jointedHand.TryGetJoint(TrackedHandJoint.Palm, out palmPose))
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t5EFF4785392B457503DDF532E858F7D5DC844F45_il2cpp_TypeInfo_var, L_2, 2, (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_0));
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// return (Vector3.Dot(palmPose.Up, CameraCache.Main.transform.forward) > 0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = MixedRealityPose_get_Up_m82E82352169111AD3C37DE7264AE5959E45A32BD((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_0), /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_9 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_5, L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		goto IL_0045;
	}

IL_0041:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		bool L_10 = V_3;
		return L_10;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsApplicableController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_IsApplicableController_m644AFB4E353DDE8C84CD363961867CBE65677618 (RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_IsApplicableController_m644AFB4E353DDE8C84CD363961867CBE65677618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return controller.ControllerHandedness != Handedness.None;
		RuntimeObject* L_0 = ___controller0;
		NullCheck(L_0);
		uint8_t L_1 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::GetController(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HandConstraint_GetController_m495712B457CC7186BF439E3846599B8D5C6EA9E1 (uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_GetController_m495712B457CC7186BF439E3846599B8D5C6EA9E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (IMixedRealityController c in CoreServices.InputSystem.DetectedControllers)
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		NullCheck(L_0);
		HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 * L_1 = InterfaceFuncInvoker0< HashSet_1_t1D8C2DF20A0F70B7591B7AB01568F4E468BB5AF4 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_tE6C9D11EE55767D2C8E8FAFC56B57A0CAB4422E5_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E  L_2 = HashSet_1_GetEnumerator_mC507457E4835B98FA6D1463ADC99C88C9CC3783E(L_1, /*hidden argument*/HashSet_1_GetEnumerator_mC507457E4835B98FA6D1463ADC99C88C9CC3783E_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0014:
		{
			// foreach (IMixedRealityController c in CoreServices.InputSystem.DetectedControllers)
			RuntimeObject* L_3 = Enumerator_get_Current_m77E21D82BDE56DFFBF2A159C987A9A76CFEF063E((Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *)(&V_0), /*hidden argument*/Enumerator_get_Current_m77E21D82BDE56DFFBF2A159C987A9A76CFEF063E_RuntimeMethod_var);
			V_1 = L_3;
			// if (c.ControllerHandedness.IsMatch(handedness))
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			uint8_t L_5 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_4);
			uint8_t L_6 = ___handedness0;
			bool L_7 = HandednessExtensions_IsMatch_mC60E5029B9C735499B7F95867C9CCAABF0F0BAE8(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0032;
			}
		}

IL_002d:
		{
			// return c;
			RuntimeObject* L_9 = V_1;
			V_3 = L_9;
			IL2CPP_LEAVE(0x51, FINALLY_003e);
		}

IL_0032:
		{
		}

IL_0033:
		{
			// foreach (IMixedRealityController c in CoreServices.InputSystem.DetectedControllers)
			bool L_10 = Enumerator_MoveNext_mFF7396AB09EC0B1C5A33057C5E495B59CCBE47FF((Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mFF7396AB09EC0B1C5A33057C5E495B59CCBE47FF_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0014;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB52649D6DF55E11EB2D5031B6B88A9F317A6D706((Enumerator_t762B04000FAA9F0533B9CD6B1F89F8B794E4626E *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB52649D6DF55E11EB2D5031B6B88A9F317A6D706_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		// return null;
		V_3 = (RuntimeObject*)NULL;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		RuntimeObject* L_11 = V_3;
		return L_11;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void HandConstraint_OnEnable_m47344FC6A9DDF9C8ED60F78312F438B14813B5CC (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint_OnEnable_m47344FC6A9DDF9C8ED60F78312F438B14813B5CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Solver_OnEnable_m46A8122E1DAA84489C8789D9BE71FF1168C94667(__this, /*hidden argument*/NULL);
		// handBounds = GetComponent<HandBounds>();
		HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC * L_0 = Component_GetComponent_TisHandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC_m8B060FB4A48474A67420AA0CB64BA0A611B4FC2E(__this, /*hidden argument*/Component_GetComponent_TisHandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC_m8B060FB4A48474A67420AA0CB64BA0A611B4FC2E_RuntimeMethod_var);
		__this->set_handBounds_24(L_0);
		// trackedController = null;
		__this->set_trackedController_23((RuntimeObject*)NULL);
		// OnLastHandLost.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = HandConstraint_get_OnLastHandLost_m46D40EB807A0FF87E9E1C146BEFCAB69C0352554(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_1, /*hidden argument*/NULL);
		// OnHandDeactivate.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_2 = HandConstraint_get_OnHandDeactivate_m30BEFCEE86F4BFFD60A45F7004A2B37DB88DF3D0(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HandConstraint__ctor_mD37AEFAA4EE4C0D748E1D2BAC541263E5783A0E7 (HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraint__ctor_mD37AEFAA4EE4C0D748E1D2BAC541263E5783A0E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SolverSafeZone safeZone = SolverSafeZone.UlnarSide;
		__this->set_safeZone_13(0);
		// private float safeZoneBuffer = 0.15f;
		__this->set_safeZoneBuffer_14((0.15f));
		// private bool updateWhenOppositeHandNear = false;
		__this->set_updateWhenOppositeHandNear_15((bool)0);
		// private bool hideHandCursorsOnActivate = true;
		__this->set_hideHandCursorsOnActivate_16((bool)1);
		// private SolverRotationBehavior rotationBehavior = SolverRotationBehavior.LookAtMainCamera;
		__this->set_rotationBehavior_17(2);
		// private UnityEvent onHandActivate = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_0, /*hidden argument*/NULL);
		__this->set_onHandActivate_18(L_0);
		// private UnityEvent onHandDeactivate = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_1, /*hidden argument*/NULL);
		__this->set_onHandDeactivate_19(L_1);
		// private UnityEvent onFirstHandDetected = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_2 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_2, /*hidden argument*/NULL);
		__this->set_onFirstHandDetected_20(L_2);
		// private UnityEvent onLastHandLost = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_3 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_3, /*hidden argument*/NULL);
		__this->set_onLastHandLost_21(L_3);
		// private Handedness previousHandedness = Handedness.None;
		__this->set_previousHandedness_22(0);
		// protected IMixedRealityController trackedController = null;
		__this->set_trackedController_23((RuntimeObject*)NULL);
		// protected HandBounds handBounds = null;
		__this->set_handBounds_24((HandBounds_t7A745238739B7041F7B13B6383565C36F4B287DC *)NULL);
		// private readonly Quaternion handToWorldRotation = Quaternion.Euler(-90.0f, 0.0f, 180.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((-90.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		__this->set_handToWorldRotation_25(L_4);
		Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46__ctor_m24F8E8CF3913432ED6487981B8EF310724A453CA (U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46_System_IDisposable_Dispose_m4FFB00F0DB146E795D4969C2D460B947734A1D13 (U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CToggleCursorsU3Ed__46_MoveNext_mC0012B59FE554D6CEC02EDE0778D7810ADB299A2 (U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CToggleCursorsU3Ed__46_MoveNext_mC0012B59FE554D6CEC02EDE0778D7810ADB299A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* G_B15_0 = NULL;
	U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * G_B15_1 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * G_B14_1 = NULL;
	IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* G_B16_0 = NULL;
	U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * G_B16_1 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005e;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (controller == null)
		RuntimeObject* L_3 = __this->get_controller_2();
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0030:
	{
		// if (hideHandCursorsOnActivate)
		HandConstraint_t3100E17669E5DFC78EB05BBA2443415D8290E8E7 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_5);
		bool L_6 = L_5->get_hideHandCursorsOnActivate_16();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00f2;
		}
	}
	{
		// if (frameDelay)
		bool L_8 = __this->get_frameDelay_4();
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0066:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		RuntimeObject* L_10 = __this->get_controller_2();
		RuntimeObject* L_11 = L_10;
		G_B14_0 = L_11;
		G_B14_1 = __this;
		if (L_11)
		{
			G_B15_0 = L_11;
			G_B15_1 = __this;
			goto IL_0075;
		}
	}
	{
		G_B16_0 = ((IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D*)(NULL));
		G_B16_1 = G_B14_1;
		goto IL_007f;
	}

IL_0075:
	{
		NullCheck(G_B15_0);
		RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, G_B15_0);
		NullCheck(L_12);
		IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* L_13 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tAC5F0B9DCD31153CEDD94E415BB448DF001E003A_il2cpp_TypeInfo_var, L_12);
		G_B16_0 = L_13;
		G_B16_1 = G_B15_1;
	}

IL_007f:
	{
		NullCheck(G_B16_1);
		G_B16_1->set_U3CU3Es__1_6(G_B16_0);
		__this->set_U3CU3Es__2_7(0);
		goto IL_00da;
	}

IL_008d:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* L_14 = __this->get_U3CU3Es__1_6();
		int32_t L_15 = __this->get_U3CU3Es__2_7();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->set_U3CpointerU3E5__3_8(L_17);
		// pointer?.BaseCursor?.SetVisibility(visible);
		RuntimeObject* L_18 = __this->get_U3CpointerU3E5__3_8();
		RuntimeObject* L_19 = L_18;
		G_B18_0 = L_19;
		if (L_19)
		{
			G_B19_0 = L_19;
			goto IL_00ad;
		}
	}
	{
		goto IL_00c4;
	}

IL_00ad:
	{
		NullCheck(G_B19_0);
		RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_tA369D6CB41A54D397C9505B232F5CA1F2DE02DC9_il2cpp_TypeInfo_var, G_B19_0);
		RuntimeObject* L_21 = L_20;
		G_B20_0 = L_21;
		if (L_21)
		{
			G_B21_0 = L_21;
			goto IL_00b8;
		}
	}
	{
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_22 = __this->get_visible_3();
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_tB8E5C3B14A6E24F6ECA5F115DAA8A653CC2D7429_il2cpp_TypeInfo_var, G_B21_0, L_22);
	}

IL_00c4:
	{
		__this->set_U3CpointerU3E5__3_8((RuntimeObject*)NULL);
		int32_t L_23 = __this->get_U3CU3Es__2_7();
		__this->set_U3CU3Es__2_7(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_00da:
	{
		// foreach (var pointer in controller?.InputSource.Pointers)
		int32_t L_24 = __this->get_U3CU3Es__2_7();
		IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D* L_25 = __this->get_U3CU3Es__1_6();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_008d;
		}
	}
	{
		__this->set_U3CU3Es__1_6((IMixedRealityPointerU5BU5D_t6BA1FD691E59F6222A863D30225925C4BEDB783D*)NULL);
	}

IL_00f2:
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CToggleCursorsU3Ed__46_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m88C6131F82E4FE568CDA26C8B0012FCA9933B18D (U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m936D25A8299138D1F5004E3CAB4EA37C62FF3635 (U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m936D25A8299138D1F5004E3CAB4EA37C62FF3635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m936D25A8299138D1F5004E3CAB4EA37C62FF3635_RuntimeMethod_var);
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_get_Current_m45A0CCF5C08F41D817A137F1FFAFB2860398CCD3 (U3CToggleCursorsU3Ed__46_t604C7F8252800EE263D73B88C14CDBF6C76F6622 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FacingThreshold()
extern "C" IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FacingThreshold_m36BBF51A1AA097D57B6A44EA2050508EAA7169E9 (HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return facingThreshold; }
		float L_0 = __this->get_facingThreshold_26();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return facingThreshold; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FacingThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FacingThreshold_mEDD559AABB8CDBD7E88BC37714F6BB84AB64CA19 (HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { facingThreshold = value; }
		float L_0 = ___value0;
		__this->set_facingThreshold_26(L_0);
		// set { facingThreshold = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_RequireFlatHand()
extern "C" IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_get_RequireFlatHand_m9A4FF85CF592EE405917EDCEE270F4CE12B9160F (HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return requireFlatHand; }
		bool L_0 = __this->get_requireFlatHand_27();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return requireFlatHand; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_RequireFlatHand(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_RequireFlatHand_mB9623B27609559AA4899BA79187C2F00CF232D25 (HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { requireFlatHand = value; }
		bool L_0 = ___value0;
		__this->set_requireFlatHand_27(L_0);
		// set { requireFlatHand = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FlatHandThreshold()
extern "C" IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FlatHandThreshold_m508D48C88FDD25807BC81EA3489F9DA4067F2625 (HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return flatHandThreshold; }
		float L_0 = __this->get_flatHandThreshold_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return flatHandThreshold; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FlatHandThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FlatHandThreshold_m034535F7FC61DAC025F38B62F6282CC14A9F0601 (HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { flatHandThreshold = value; }
		float L_0 = ___value0;
		__this->set_flatHandThreshold_28(L_0);
		// set { flatHandThreshold = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsValidController_mFD7F53330B0E9B9B0E9E9EE1BFCAF89CAAAFA643 (HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_IsValidController_mFD7F53330B0E9B9B0E9E9EE1BFCAF89CAAAFA643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  V_7;
	memset(&V_7, 0, sizeof(V_7));
	MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8  V_8;
	memset(&V_8, 0, sizeof(V_8));
	bool V_9 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_11;
	memset(&V_11, 0, sizeof(V_11));
	bool V_12 = false;
	int32_t G_B8_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	float G_B12_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B12_1;
	memset(&G_B12_1, 0, sizeof(G_B12_1));
	{
		// if (!base.IsValidController(controller))
		RuntimeObject* L_0 = ___controller0;
		bool L_1 = HandConstraint_IsValidController_m2EE36F3A4FB06E1EFAEFCD12BCB26754C467C0C4(__this, L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0120;
	}

IL_0017:
	{
		// var jointedHand = controller as IMixedRealityHand;
		RuntimeObject* L_3 = ___controller0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityHand_t5EFF4785392B457503DDF532E858F7D5DC844F45_il2cpp_TypeInfo_var));
		// if (jointedHand != null)
		RuntimeObject* L_4 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_011c;
		}
	}
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.Palm, out palmPose))
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t5EFF4785392B457503DDF532E858F7D5DC844F45_il2cpp_TypeInfo_var, L_6, 2, (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_0));
		V_5 = L_7;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_00e9;
		}
	}
	{
		// if (requireFlatHand)
		bool L_9 = __this->get_requireFlatHand_27();
		V_6 = L_9;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_00e6;
		}
	}
	{
		// if (jointedHand.TryGetJoint(TrackedHandJoint.IndexTip, out indexTipPose) &&
		//     jointedHand.TryGetJoint(TrackedHandJoint.RingTip, out ringTipPose))
		RuntimeObject* L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t5EFF4785392B457503DDF532E858F7D5DC844F45_il2cpp_TypeInfo_var, L_11, ((int32_t)11), (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_7));
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_t5EFF4785392B457503DDF532E858F7D5DC844F45_il2cpp_TypeInfo_var, L_13, ((int32_t)21), (MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_8));
		G_B8_0 = ((int32_t)(L_14));
		goto IL_0068;
	}

IL_0067:
	{
		G_B8_0 = 0;
	}

IL_0068:
	{
		V_9 = (bool)G_B8_0;
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_00e5;
		}
	}
	{
		// var handNormal = Vector3.Cross(indexTipPose.Position - palmPose.Position,
		//                                ringTipPose.Position - indexTipPose.Position).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = MixedRealityPose_get_Position_mF558364148A015EF88E081BB4947F1EB60CEED20((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_7), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = MixedRealityPose_get_Position_mF558364148A015EF88E081BB4947F1EB60CEED20((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = MixedRealityPose_get_Position_mF558364148A015EF88E081BB4947F1EB60CEED20((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_8), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = MixedRealityPose_get_Position_mF558364148A015EF88E081BB4947F1EB60CEED20((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_7), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_18, L_21, /*hidden argument*/NULL);
		V_11 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_11), /*hidden argument*/NULL);
		V_10 = L_23;
		// handNormal *= (jointedHand.ControllerHandedness == Handedness.Right) ? 1.0f : -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_10;
		RuntimeObject* L_25 = V_1;
		NullCheck(L_25);
		uint8_t L_26 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_tFA8E3017D33C9FF594DB4CAC28854137EB3559FA_il2cpp_TypeInfo_var, L_25);
		G_B10_0 = L_24;
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			G_B11_0 = L_24;
			goto IL_00b7;
		}
	}
	{
		G_B12_0 = (-1.0f);
		G_B12_1 = G_B10_0;
		goto IL_00bc;
	}

IL_00b7:
	{
		G_B12_0 = (1.0f);
		G_B12_1 = G_B11_0;
	}

IL_00bc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		V_10 = L_27;
		// if (Vector3.Angle(palmPose.Up, handNormal) > flatHandThreshold)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = MixedRealityPose_get_Up_m82E82352169111AD3C37DE7264AE5959E45A32BD((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_10;
		float L_30 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_28, L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_flatHandThreshold_28();
		V_12 = (bool)((((float)L_30) > ((float)L_31))? 1 : 0);
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_00e4;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0120;
	}

IL_00e4:
	{
	}

IL_00e5:
	{
	}

IL_00e6:
	{
		goto IL_00f6;
	}

IL_00e9:
	{
		// Debug.LogError("HandConstraintPalmUp requires controllers of type IMixedRealityHand to perform hand activation tests.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9D08677538B56ECF9AED0A2EA9CEFADCE1634173, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// return Vector3.Angle(palmPose.Up, CameraCache.Main.transform.forward) < facingThreshold;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = MixedRealityPose_get_Up_m82E82352169111AD3C37DE7264AE5959E45A32BD((MixedRealityPose_t5F81F81CD99FCC1AD1AC2CC9EC5515A8BD8BA3E8 *)(&V_0), /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_34 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_37 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_33, L_36, /*hidden argument*/NULL);
		float L_38 = __this->get_facingThreshold_26();
		V_3 = (bool)((((float)L_37) < ((float)L_38))? 1 : 0);
		goto IL_0120;
	}

IL_011c:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_0120;
	}

IL_0120:
	{
		// }
		bool L_39 = V_3;
		return L_39;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HandConstraintPalmUp__ctor_m5A0396E8CD83B769959EE2A8D8B4D4B52490C2CA (HandConstraintPalmUp_t22723E63BEF9CC8E9B0FDB7FB60DBE8A4FF300AB * __this, const RuntimeMethod* method)
{
	{
		// private float facingThreshold = 80.0f;
		__this->set_facingThreshold_26((80.0f));
		// private bool requireFlatHand = false;
		__this->set_requireFlatHand_27((bool)0);
		// private float flatHandThreshold = 45.0f;
		__this->set_flatHandThreshold_28((45.0f));
		HandConstraint__ctor_mD37AEFAA4EE4C0D748E1D2BAC541263E5783A0E7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_PartwayOffset()
extern "C" IL2CPP_METHOD_ATTR float InBetween_get_PartwayOffset_m4EEFD489F6CE44327FB3E8FD603BAD2E50BC9562 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return partwayOffset; }
		float L_0 = __this->get_partwayOffset_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return partwayOffset; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_PartwayOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_PartwayOffset_mDD64389E2908642022DBC5D0FA5959285E04A041 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_PartwayOffset_mDD64389E2908642022DBC5D0FA5959285E04A041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { partwayOffset = Mathf.Clamp(value, 0.0f, 1.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_partwayOffset_13(L_1);
		// set { partwayOffset = Mathf.Clamp(value, 0.0f, 1.0f); }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_SecondTrackedObjectType()
extern "C" IL2CPP_METHOD_ATTR int32_t InBetween_get_SecondTrackedObjectType_mC7B6DEC255D99D03E342D68C0FF66E8D1DFD206A (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return secondTrackedObjectType; }
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return secondTrackedObjectType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_SecondTrackedObjectType_m3F88F893A543AF4C881554B6F9D3D9C506710C16 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (secondTrackedObjectType != value)
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// secondTrackedObjectType = value;
		int32_t L_3 = ___value0;
		__this->set_secondTrackedObjectType_14(L_3);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_TrackedObjectForSecondTransform()
extern "C" IL2CPP_METHOD_ATTR int32_t InBetween_get_TrackedObjectForSecondTransform_m0B35B83B31208DC87A47822F9A47EC0A8C447E98 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return secondTrackedObjectType; }
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return secondTrackedObjectType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_TrackedObjectForSecondTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_TrackedObjectForSecondTransform_m8A15CB97F082D585221575901FEDEC47BADC37F3 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (secondTrackedObjectType != value)
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// secondTrackedObjectType = value;
		int32_t L_3 = ___value0;
		__this->set_secondTrackedObjectType_14(L_3);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_SecondTransformOverride()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * InBetween_get_SecondTransformOverride_mF1B4923600C9E4A20EA3ACE0F73808D098F43A6D (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// get { return secondTransformOverride; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_secondTransformOverride_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return secondTransformOverride; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTransformOverride(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_SecondTransformOverride_mCAF21EFAB64D1C044672048F94BFC11E68E75458 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_SecondTransformOverride_mCAF21EFAB64D1C044672048F94BFC11E68E75458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (secondTransformOverride != value)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_secondTransformOverride_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// secondTransformOverride = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___value0;
		__this->set_secondTransformOverride_15(L_4);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void InBetween_OnValidate_mB4ABBFD785628B28FD474409444385EA6FB92DC2 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	{
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::Start()
extern "C" IL2CPP_METHOD_ATTR void InBetween_Start_m246875D7365CC0F9FAA45111E44C2AED18EF3FDF (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_Start_m246875D7365CC0F9FAA45111E44C2AED18EF3FDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		Solver_Start_mDD65645E4B6947EAE1C13937656A4A0D0B7094E8(__this, /*hidden argument*/NULL);
		// secondSolverHandler = gameObject.AddComponent<SolverHandler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_1 = GameObject_AddComponent_TisSolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2_m4239EDD8BD0CFA30532871EF32838CACEA3B6F88(L_0, /*hidden argument*/GameObject_AddComponent_TisSolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2_m4239EDD8BD0CFA30532871EF32838CACEA3B6F88_RuntimeMethod_var);
		__this->set_secondSolverHandler_16(L_1);
		// secondSolverHandler.UpdateSolvers = false;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_2 = __this->get_secondSolverHandler_16();
		NullCheck(L_2);
		SolverHandler_set_UpdateSolvers_mBC103252673E2FB706BD947C6FF005ED42626C25(L_2, (bool)0, /*hidden argument*/NULL);
		// UpdateSecondSolverHandler();
		InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void InBetween_SolverUpdate_m55B6FAA14D093A06C51B607FDDE7A78DBB2EB05D (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_SolverUpdate_m55B6FAA14D093A06C51B607FDDE7A78DBB2EB05D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (SolverHandler != null && secondSolverHandler != null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_2 = __this->get_secondSolverHandler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null && secondSolverHandler.TransformTarget != null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_5 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_8 = __this->get_secondSolverHandler_16();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B7_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		// AdjustPositionForOffset(SolverHandler.TransformTarget, secondSolverHandler.TransformTarget);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_12 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_12, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_14 = __this->get_secondSolverHandler_16();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_14, /*hidden argument*/NULL);
		InBetween_AdjustPositionForOffset_m08257CB8CDB5348326411F428939079C28AFEC56(__this, L_13, L_15, /*hidden argument*/NULL);
	}

IL_006d:
	{
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_m08257CB8CDB5348326411F428939079C28AFEC56 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_AdjustPositionForOffset_m08257CB8CDB5348326411F428939079C28AFEC56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// if (targetTransform != null && secondTransform != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___targetTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___secondTransform1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// Vector3 centerline = targetTransform.position - secondTransform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___targetTransform0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___secondTransform1;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// GoalPosition = secondTransform.position + (centerline * partwayOffset);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ___secondTransform1;
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_1;
		float L_13 = __this->get_partwayOffset_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_14, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_15, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
extern "C" IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_UpdateSecondSolverHandler_m1ACFA82655283D4B5EC173BC568D4BF437F894B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (secondSolverHandler != null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_secondSolverHandler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// secondSolverHandler.TrackedTargetType = secondTrackedObjectType;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = __this->get_secondSolverHandler_16();
		int32_t L_4 = __this->get_secondTrackedObjectType_14();
		NullCheck(L_3);
		SolverHandler_set_TrackedTargetType_m2E549E8EF910D19C2336329006BFF2F14C7AABBA(L_3, L_4, /*hidden argument*/NULL);
		// if (secondTrackedObjectType == TrackedObjectType.CustomOverride && secondTransformOverride != null)
		int32_t L_5 = __this->get_secondTrackedObjectType_14();
		if ((!(((uint32_t)L_5) == ((uint32_t)7))))
		{
			goto IL_003b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_secondTransformOverride_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_003c;
	}

IL_003b:
	{
		G_B4_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B4_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// secondSolverHandler.TransformOverride = secondTransformOverride;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_9 = __this->get_secondSolverHandler_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_secondTransformOverride_15();
		NullCheck(L_9);
		SolverHandler_set_TransformOverride_mA89F43DB575BE35D2BE34B9EDCA25550136E7465(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InBetween__ctor_mE71C5B25FE737E346554650D979978D07CD155F9 (InBetween_tC5B52898367EE8D90352914C344E59DC056134B2 * __this, const RuntimeMethod* method)
{
	{
		// private float partwayOffset = 0.5f;
		__this->set_partwayOffset_13((0.5f));
		// private TrackedObjectType secondTrackedObjectType = TrackedObjectType.Head;
		__this->set_secondTrackedObjectType_14(0);
		// private Transform secondTransformOverride = null;
		__this->set_secondTransformOverride_15((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL);
		Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m2BDCB48E59E8590CA3F5EB4D6691047DB346BC83 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return resistance; }
		float L_0 = __this->get_resistance_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return resistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Resistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_Resistance_mA7692CC555A18CEAEC142230A6E8213D70BBFD13 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { resistance = value; }
		float L_0 = ___value0;
		__this->set_resistance_13(L_0);
		// set { resistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_m072D452FB8CD165FE1003ECE3D70094CB35ECD4B (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return resistanceVelocityPower; }
		float L_0 = __this->get_resistanceVelocityPower_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return resistanceVelocityPower; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_ResistanceVelocityPower(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_ResistanceVelocityPower_m87A9FA4203FF2E0B35792896174882760CD8DDD8 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { resistanceVelocityPower = value; }
		float L_0 = ___value0;
		__this->set_resistanceVelocityPower_14(L_0);
		// set { resistanceVelocityPower = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m5B22FB5F71966F41537A88D0D5811EBFFD58C126 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return accelerationRate; }
		float L_0 = __this->get_accelerationRate_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return accelerationRate; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_AccelerationRate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_AccelerationRate_m0E535E75DDB2BD60C510C6CBE4B2BC8DE67AEC10 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { accelerationRate = value; }
		float L_0 = ___value0;
		__this->set_accelerationRate_15(L_0);
		// set { accelerationRate = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_Springiness_mD3F65423B80B37F376BCB05287147E46377782EF (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return springiness; }
		float L_0 = __this->get_springiness_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return springiness; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Springiness(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_Springiness_mA05A5373FF45B49CA30FC6C40D173A67AAAF5646 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { springiness = value; }
		float L_0 = ___value0;
		__this->set_springiness_16(L_0);
		// set { springiness = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
extern "C" IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_m2B4FFD9D5F42750684297D1D00BB3AF3CFE9D947 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return snapZ; }
		bool L_0 = __this->get_snapZ_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return snapZ; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_SnapZ(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_SnapZ_mA419E44C7BB4B054515DC53AD14B72A8980B471F (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { snapZ = value; }
		bool L_0 = ___value0;
		__this->set_snapZ_17(L_0);
		// set { snapZ = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_m260429F88ADAA8F78296416ADFE4E62F8F968515 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_get_ReferencePosition_m260429F88ADAA8F78296416ADFE4E62F8F968515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// private Vector3 ReferencePosition => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Momentum_OnEnable_mB943CECE2FFD28AACDCE392D9BCC80232A06EDF8 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_OnEnable_mB943CECE2FFD28AACDCE392D9BCC80232A06EDF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Solver_OnEnable_m46A8122E1DAA84489C8789D9BE71FF1168C94667(__this, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Momentum_SolverUpdate_m6B3249B57543916CB86CE4B274D156CD23E4037A (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SolverUpdate_m6B3249B57543916CB86CE4B274D156CD23E4037A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	bool V_9 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset(&V_10, 0, sizeof(V_10));
	bool V_11 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset(&V_12, 0, sizeof(V_12));
	bool V_13 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_14;
	memset(&V_14, 0, sizeof(V_14));
	float V_15 = 0.0f;
	bool V_16 = false;
	float G_B10_0 = 0.0f;
	{
		// if (SnapZ)
		bool L_0 = Momentum_get_SnapZ_m2B4FFD9D5F42750684297D1D00BB3AF3CFE9D947(__this, /*hidden argument*/NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		// var referencePosition = ReferencePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Momentum_get_ReferencePosition_m260429F88ADAA8F78296416ADFE4E62F8F968515(__this, /*hidden argument*/NULL);
		V_4 = L_2;
		// float goalDepth = (SolverHandler.GoalPosition - referencePosition).magnitude;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SolverHandler_get_GoalPosition_m8F400C43CDA714C94FD3EB49256E391D7C0B0681(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		V_8 = L_6;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), /*hidden argument*/NULL);
		V_5 = L_7;
		// Vector3 currentDelta = transform.position - referencePosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
		V_6 = L_11;
		// float currentDeltaMagnitude = currentDelta.magnitude;
		float L_12 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		V_7 = L_12;
		// if (!Mathf.Approximately(currentDeltaMagnitude, 0))
		float L_13 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_13, (0.0f), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		// Vector3 currentDeltaNorm = currentDelta / currentDeltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_6;
		float L_17 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_16, L_17, /*hidden argument*/NULL);
		V_10 = L_18;
		// transform.position += currentDeltaNorm * (goalDepth - currentDeltaMagnitude);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = L_19;
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_10;
		float L_23 = V_5;
		float L_24 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_22, ((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_20, L_26, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	{
		// Vector3 delta = SolverHandler.GoalPosition - transform.position;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_27 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = SolverHandler_get_GoalPosition_m8F400C43CDA714C94FD3EB49256E391D7C0B0681(L_27, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_28, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		// float deltaMagnitude = delta.magnitude;
		float L_32 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_32;
		// if (deltaMagnitude > 0.01f)
		float L_33 = V_1;
		V_11 = (bool)((((float)L_33) > ((float)(0.01f)))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0107;
		}
	}
	{
		// Vector3 deltaNorm = delta / deltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_0;
		float L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_35, L_36, /*hidden argument*/NULL);
		V_12 = L_37;
		// velocity += deltaNorm * (SolverHandler.DeltaTime * (AccelerationRate + Springiness * deltaMagnitude));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_12;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_40 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_40);
		float L_41 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_40, /*hidden argument*/NULL);
		float L_42 = Momentum_get_AccelerationRate_m5B22FB5F71966F41537A88D0D5811EBFFD58C126(__this, /*hidden argument*/NULL);
		float L_43 = Momentum_get_Springiness_mD3F65423B80B37F376BCB05287147E46377782EF(__this, /*hidden argument*/NULL);
		float L_44 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_39, ((float)il2cpp_codegen_multiply((float)L_41, (float)((float)il2cpp_codegen_add((float)L_42, (float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)))))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_38, L_45, /*hidden argument*/NULL);
		__this->set_velocity_18(L_46);
	}

IL_0107:
	{
		// float velocityMagnitude = velocity.magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_47 = __this->get_address_of_velocity_18();
		float L_48 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		// if (!Mathf.Approximately(velocityMagnitude, 0))
		float L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_50 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_49, (0.0f), /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_13;
		if (!L_51)
		{
			goto IL_017d;
		}
	}
	{
		// Vector3 velocityNormal = velocity / velocityMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = __this->get_velocity_18();
		float L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_52, L_53, /*hidden argument*/NULL);
		V_14 = L_54;
		// float powFactor = velocityMagnitude > 1f ? Mathf.Pow(velocityMagnitude, ResistanceVelocityPower) : velocityMagnitude;
		float L_55 = V_2;
		if ((((float)L_55) > ((float)(1.0f))))
		{
			goto IL_0141;
		}
	}
	{
		float L_56 = V_2;
		G_B10_0 = L_56;
		goto IL_014d;
	}

IL_0141:
	{
		float L_57 = V_2;
		float L_58 = Momentum_get_ResistanceVelocityPower_m072D452FB8CD165FE1003ECE3D70094CB35ECD4B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_59 = powf(L_57, L_58);
		G_B10_0 = L_59;
	}

IL_014d:
	{
		V_15 = G_B10_0;
		// velocity -= velocityNormal * (powFactor * Resistance * SolverHandler.DeltaTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = V_14;
		float L_62 = V_15;
		float L_63 = Momentum_get_Resistance_m2BDCB48E59E8590CA3F5EB4D6691047DB346BC83(__this, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_64 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_64);
		float L_65 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_61, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)), (float)L_65)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_60, L_66, /*hidden argument*/NULL);
		__this->set_velocity_18(L_67);
	}

IL_017d:
	{
		// if (velocity.sqrMagnitude < 0.001f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = __this->get_address_of_velocity_18();
		float L_69 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68, /*hidden argument*/NULL);
		V_16 = (bool)((((float)L_69) < ((float)(0.001f)))? 1 : 0);
		bool L_70 = V_16;
		if (!L_70)
		{
			goto IL_01a2;
		}
	}
	{
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_71);
	}

IL_01a2:
	{
		// transform.position += velocity * SolverHandler.DeltaTime;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_72 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_73 = L_72;
		NullCheck(L_73);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_73, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = __this->get_velocity_18();
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_76 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_76);
		float L_77 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_75, L_77, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_74, L_78, /*hidden argument*/NULL);
		NullCheck(L_73);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_73, L_79, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Momentum_SnapTo_m94815257015DD9C43F19850EDD5EAE0969151F6C (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SnapTo_m94815257015DD9C43F19850EDD5EAE0969151F6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.SnapTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_SnapTo_m6A533354F01C3A83837F5EA8AE4FAE5E284B08E0(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Momentum__ctor_mA1FB641AD8EF3EC4F52927526555561A413B87B2 (Momentum_t6A897753B0C0744FB874D39CF7B6EFF2B992EEE4 * __this, const RuntimeMethod* method)
{
	{
		// private float resistance = 0.99f;
		__this->set_resistance_13((0.99f));
		// private float resistanceVelocityPower = 1.5f;
		__this->set_resistanceVelocityPower_14((1.5f));
		// private float accelerationRate = 10f;
		__this->set_accelerationRate_15((10.0f));
		// private float springiness = 0;
		__this->set_springiness_16((0.0f));
		// private bool snapZ = true;
		__this->set_snapZ_17((bool)1);
		Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_OrientationType()
extern "C" IL2CPP_METHOD_ATTR int32_t Orbital_get_OrientationType_m4A4CFFEF385990B41554ED48F4491606CAF6D1B3 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return orientationType; }
		int32_t L_0 = __this->get_orientationType_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return orientationType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_OrientationType(Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_OrientationType_mAF932FC0B4DBCFA87DBD2B74EBAC7B2C3304C7EC (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationType = value; }
		int32_t L_0 = ___value0;
		__this->set_orientationType_13(L_0);
		// set { orientationType = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_mD8CC3329FE12853A05331ACFFEA3918D157AC443 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localOffset_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_LocalOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_LocalOffset_mCA9B0E276B8157E219DF17624407FD05C5A6B221 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { localOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_localOffset_14(L_0);
		// set { localOffset = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_m574EF8A8FD24AC57A3B3DBCDA19703336D20F9B4 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_worldOffset_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_WorldOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_WorldOffset_m9DECCFC2C23F672069EAC7154DCC778177A7B44E (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { worldOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_worldOffset_15(L_0);
		// set { worldOffset = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
extern "C" IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m8E7CBC8233497DE771F690F3C15BA2D5C52A699B (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return useAngleStepping; }
		bool L_0 = __this->get_useAngleStepping_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return useAngleStepping; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_UseAngleStepping(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_UseAngleStepping_m6D581420958A47B6A728D0702B89CBE8FE8712AA (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useAngleStepping = value; }
		bool L_0 = ___value0;
		__this->set_useAngleStepping_16(L_0);
		// set { useAngleStepping = value; }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_TetherAngleSteps()
extern "C" IL2CPP_METHOD_ATTR int32_t Orbital_get_TetherAngleSteps_m6FE092DD6ED7DAD16BC88E1A1E3F0DAE0EDBC8BE (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return tetherAngleSteps; }
		int32_t L_0 = __this->get_tetherAngleSteps_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return tetherAngleSteps; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_TetherAngleSteps(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_TetherAngleSteps_mE75914F5EC48E901162D0EB9209E13A4FB235773 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_set_TetherAngleSteps_mE75914F5EC48E901162D0EB9209E13A4FB235773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tetherAngleSteps =  Mathf.Clamp(value, 2, 24);
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_0, 2, ((int32_t)24), /*hidden argument*/NULL);
		__this->set_tetherAngleSteps_17(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Orbital_SolverUpdate_mEA57E548D4BBE15F1F03C24097EDF83D72E045E1 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SolverUpdate_mEA57E548D4BBE15F1F03C24097EDF83D72E045E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	{
		// Vector3 desiredPos = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002b;
	}

IL_001b:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_4 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002b:
	{
		V_0 = G_B3_0;
		// Quaternion targetRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.Euler(0, 1, 0);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_7 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		goto IL_0065;
	}

IL_0055:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_11 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		// Quaternion yawOnlyRot = Quaternion.Euler(0, targetRot.eulerAngles.y, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		V_2 = L_16;
		// desiredPos = desiredPos + (SnapToTetherAngleSteps(targetRot) * LocalOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Orbital_SnapToTetherAngleSteps_m3564867BE63FF85139B7B6A03EE1B654E4B7E925(__this, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Orbital_get_LocalOffset_mD8CC3329FE12853A05331ACFFEA3918D157AC443(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// desiredPos = desiredPos + (SnapToTetherAngleSteps(yawOnlyRot) * WorldOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Orbital_SnapToTetherAngleSteps_m3564867BE63FF85139B7B6A03EE1B654E4B7E925(__this, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Orbital_get_WorldOffset_m574EF8A8FD24AC57A3B3DBCDA19703336D20F9B4(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// Quaternion desiredRot = CalculateDesiredRotation(desiredPos);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Orbital_CalculateDesiredRotation_m58E428C2FCC8793EC68F6060D9079D1806EE1BEB(__this, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// GoalPosition = desiredPos;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_31, /*hidden argument*/NULL);
		// GoalRotation = desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = V_3;
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_m3564867BE63FF85139B7B6A03EE1B654E4B7E925 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SnapToTetherAngleSteps_m3564867BE63FF85139B7B6A03EE1B654E4B7E925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	{
		// if (!UseAngleStepping || SolverHandler.TransformTarget == null)
		bool L_0 = Orbital_get_UseAngleStepping_m8E7CBC8233497DE771F690F3C15BA2D5C52A699B(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_1 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_3 = (bool)G_B3_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return rotationToSnap;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = ___rotationToSnap0;
		V_4 = L_5;
		goto IL_007e;
	}

IL_0027:
	{
		// float stepAngle = 360f / tetherAngleSteps;
		int32_t L_6 = __this->get_tetherAngleSteps_17();
		V_0 = ((float)((float)(360.0f)/(float)(((float)((float)L_6)))));
		// int numberOfSteps = Mathf.RoundToInt(SolverHandler.TransformTarget.transform.eulerAngles.y / stepAngle);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_7 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_13 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_1 = L_13;
		// float newAngle = stepAngle * numberOfSteps;
		float L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_14, (float)(((float)((float)L_15)))));
		// return Quaternion.Euler(rotationToSnap.eulerAngles.x, newAngle, rotationToSnap.eulerAngles.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		float L_18 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_17, L_18, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m58E428C2FCC8793EC68F6060D9079D1806EE1BEB (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_CalculateDesiredRotation_m58E428C2FCC8793EC68F6060D9079D1806EE1BEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float G_B5_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B15_0;
	memset(&G_B15_0, 0, sizeof(G_B15_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B19_0;
	memset(&G_B19_0, 0, sizeof(G_B19_0));
	{
		// Quaternion desiredRot = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (orientationType)
		int32_t L_1 = __this->get_orientationType_13();
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_010f;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_00d8;
			}
			case 5:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_013c;
	}

IL_0031:
	{
		// float targetYRotation = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.eulerAngles.y : 0.0f;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_0060;
	}

IL_004b:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_6 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		G_B5_0 = L_9;
	}

IL_0060:
	{
		V_2 = G_B5_0;
		// desiredRot = Quaternion.Euler(0f, targetYRotation, 0f);
		float L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_0159;
	}

IL_0077:
	{
		// desiredRot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// break;
		goto IL_0159;
	}

IL_0088:
	{
		// desiredRot = CameraCache.Main.transform.rotation;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// break;
		goto IL_0159;
	}

IL_009d:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(SolverHandler.TransformTarget.position - desiredPos) : Quaternion.identity;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_17 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B11_0 = L_20;
		goto IL_00d2;
	}

IL_00b7:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_21 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_25, /*hidden argument*/NULL);
		G_B11_0 = L_26;
	}

IL_00d2:
	{
		V_0 = G_B11_0;
		// break;
		goto IL_0159;
	}

IL_00d8:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(CameraCache.Main.transform.position - desiredPos) : Quaternion.identity;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_27 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_28, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B15_0 = L_30;
		goto IL_010c;
	}

IL_00f2:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_31 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_35, /*hidden argument*/NULL);
		G_B15_0 = L_36;
	}

IL_010c:
	{
		V_0 = G_B15_0;
		// break;
		goto IL_0159;
	}

IL_010f:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.identity;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_37 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_38, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0129;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B19_0 = L_40;
		goto IL_0139;
	}

IL_0129:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_41 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_42, /*hidden argument*/NULL);
		G_B19_0 = L_43;
	}

IL_0139:
	{
		V_0 = G_B19_0;
		// break;
		goto IL_0159;
	}

IL_013c:
	{
		// Debug.LogError($"Invalid OrientationType for Orbital Solver on {gameObject.name}");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_44, /*hidden argument*/NULL);
		String_t* L_46 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_46, /*hidden argument*/NULL);
		// break;
		goto IL_0159;
	}

IL_0159:
	{
		// if (UseAngleStepping)
		bool L_47 = Orbital_get_UseAngleStepping_m8E7CBC8233497DE771F690F3C15BA2D5C52A699B(__this, /*hidden argument*/NULL);
		V_3 = L_47;
		bool L_48 = V_3;
		if (!L_48)
		{
			goto IL_016d;
		}
	}
	{
		// desiredRot = SnapToTetherAngleSteps(desiredRot);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Orbital_SnapToTetherAngleSteps_m3564867BE63FF85139B7B6A03EE1B654E4B7E925(__this, L_49, /*hidden argument*/NULL);
		V_0 = L_50;
	}

IL_016d:
	{
		// return desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_51 = V_0;
		V_4 = L_51;
		goto IL_0172;
	}

IL_0172:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = V_4;
		return L_52;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Orbital__ctor_mA7E4C93DEADA958CAD089D25730716F772EE6D69 (Orbital_t4B7B27F806BFAF397FCCB9FABF6554B13D0AEC80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital__ctor_mA7E4C93DEADA958CAD089D25730716F772EE6D69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SolverOrientationType orientationType = SolverOrientationType.FollowTrackedObject;
		__this->set_orientationType_13(0);
		// private Vector3 localOffset = new Vector3(0, -1, 1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_localOffset_14(L_0);
		// private Vector3 worldOffset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_worldOffset_15(L_1);
		// private bool useAngleStepping = false;
		__this->set_useAngleStepping_16((bool)0);
		// private int tetherAngleSteps = 6;
		__this->set_tetherAngleSteps_17(6);
		Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Overlap_SolverUpdate_m1A224A9AD6C470E0127BC98EEE7F74CAB0CA5EC4 (Overlap_tF29B752F5E31A119B45A3E42AE7676D07305D173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Overlap_SolverUpdate_m1A224A9AD6C470E0127BC98EEE7F74CAB0CA5EC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	{
		// var target = SolverHandler.TransformTarget;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (target != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// GoalPosition = target.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_6, /*hidden argument*/NULL);
		// GoalRotation = target.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck(L_7);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_7, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Overlap__ctor_m3AEF2178BB4DC220E677DE341057D04D9FD3975F (Overlap_tF29B752F5E31A119B45A3E42AE7676D07305D173 * __this, const RuntimeMethod* method)
{
	{
		Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_m16D8C8411884789218A6B6BD5625F14558034276 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return referenceDirection; }
		int32_t L_0 = __this->get_referenceDirection_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return referenceDirection; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_ReferenceDirection(Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_m0A705A0380FE1BB58DEB35B561EDCE8687850CBF (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { referenceDirection = value; }
		int32_t L_0 = ___value0;
		__this->set_referenceDirection_13(L_0);
		// set { referenceDirection = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinDistance()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_m9FC943D64937D63AD3757995276DEB4A5146BABD (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return minDistance; }
		float L_0 = __this->get_minDistance_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return minDistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_m3E2E1B0C4802F4CA1F683419D86443D092178939 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minDistance = value; }
		float L_0 = ___value0;
		__this->set_minDistance_14(L_0);
		// set { minDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxDistance()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_mFA7B24F0D5A03A8FE75790B24C147D81E4B4C1EC (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return maxDistance; }
		float L_0 = __this->get_maxDistance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return maxDistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_mC40499AE6FCF00C0E7A67DB42443FB1B5C5EC604 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxDistance = value; }
		float L_0 = ___value0;
		__this->set_maxDistance_15(L_0);
		// set { maxDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinViewDegrees()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_m12E0E01ECB5810E080E7378EAAD3F8780FD473AA (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return minViewDegrees; }
		float L_0 = __this->get_minViewDegrees_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return minViewDegrees; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinViewDegrees(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_m6567A5043F84C6FA1A0A6175160E94622E8214E1 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minViewDegrees = value; }
		float L_0 = ___value0;
		__this->set_minViewDegrees_16(L_0);
		// set { minViewDegrees = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxViewDegrees()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_mF20E9F4B782E48B87B23059300D4265B19A52A41 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return maxViewDegrees; }
		float L_0 = __this->get_maxViewDegrees_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return maxViewDegrees; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxViewDegrees(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_m8850FB7D3E341D2B5E32D6C9DF50B585828EDAC8 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxViewDegrees = value; }
		float L_0 = ___value0;
		__this->set_maxViewDegrees_17(L_0);
		// set { maxViewDegrees = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_AspectV()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_AspectV_mE6EEE81BCE3364E9076A01B70059E28621A49571 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return aspectV; }
		float L_0 = __this->get_aspectV_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return aspectV; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_AspectV(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_AspectV_mD39D63D4587D96712E28301C2F8004350ED8D5D3 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { aspectV = value; }
		float L_0 = ___value0;
		__this->set_aspectV_18(L_0);
		// set { aspectV = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreAngleClamp()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_mB6948AF5C6DC39EC025EF4C7AB4E6FFFF1A66FA5 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return ignoreAngleClamp; }
		bool L_0 = __this->get_ignoreAngleClamp_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return ignoreAngleClamp; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreAngleClamp(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_m5E7705A7D10B48080C0618E7B17519E9AA7E2C98 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { ignoreAngleClamp = value; }
		bool L_0 = ___value0;
		__this->set_ignoreAngleClamp_19(L_0);
		// set { ignoreAngleClamp = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreDistanceClamp()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_mF1B801BE5C4E79E63F7D414776564F3A7FE8D52F (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return ignoreDistanceClamp; }
		bool L_0 = __this->get_ignoreDistanceClamp_20();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return ignoreDistanceClamp; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreDistanceClamp(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_m3BF757A1EA4B080762F1C5DE97E45700E660B3EE (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { ignoreDistanceClamp = value; }
		bool L_0 = ___value0;
		__this->set_ignoreDistanceClamp_20(L_0);
		// set { ignoreDistanceClamp = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_m202FD531D8F43BCF134175B7E4D4A2D5FAA17930 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return useFixedVerticalPosition; }
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return useFixedVerticalPosition; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_UseFixedVerticalPosition(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_UseFixedVerticalPosition_m65CB2AAEBE4FFA56346A0D5D938D60B6F8915F75 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useFixedVerticalPosition = value; }
		bool L_0 = ___value0;
		__this->set_useFixedVerticalPosition_21(L_0);
		// set { useFixedVerticalPosition = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_m4B0E54D47D8C8720787B40BDF829AE13AC21D32C (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return fixedVerticalPosition; }
		float L_0 = __this->get_fixedVerticalPosition_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return fixedVerticalPosition; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_FixedVerticalPosition(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_FixedVerticalPosition_mF7AC72004349E19904DC0082DA6B8F2D08802DFA (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { fixedVerticalPosition = value; }
		float L_0 = ___value0;
		__this->set_fixedVerticalPosition_22(L_0);
		// set { fixedVerticalPosition = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_OrientToReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_m1A2A76FB7F99A1B924BB1465D1FD1F7D8605C26B (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return orientToReferenceDirection; }
		bool L_0 = __this->get_orientToReferenceDirection_23();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return orientToReferenceDirection; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_OrientToReferenceDirection(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_m14F07BAF450D1419A83CEEE3291DE8AAD47C8E33 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { orientToReferenceDirection = value; }
		bool L_0 = ___value0;
		__this->set_orientToReferenceDirection_23(L_0);
		// set { orientToReferenceDirection = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_m7EFD18D79FF31A0503F3AF703A09875A324DDFA5 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_SolverReferenceDirection_m7EFD18D79FF31A0503F3AF703A09875A324DDFA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// private Vector3 SolverReferenceDirection => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.forward : Vector3.forward;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_4 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_m07DDC1E573C3D1C717C8007B41547821D54F71C6 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_UpReference_m07DDC1E573C3D1C717C8007B41547821D54F71C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	{
		// Vector3 upReference = Vector3.up;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (referenceDirection == RadialViewReferenceDirection.ObjectOriented)
		int32_t L_1 = __this->get_referenceDirection_13();
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// upReference = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.up : Vector3.up;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B4_0 = L_6;
		goto IL_003f;
	}

IL_002f:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_7 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_003f:
	{
		V_0 = G_B4_0;
	}

IL_0041:
	{
		// return upReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		V_2 = L_10;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_mE43716CCC907FF1A7A42F27A0B324CE864918943 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_ReferencePoint_mE43716CCC907FF1A7A42F27A0B324CE864918943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// private Vector3 ReferencePoint => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_4 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_m08C2EAC0A15F87F426F0A83F940EB8338D82450C (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_SolverUpdate_m08C2EAC0A15F87F426F0A83F940EB8338D82450C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	{
		// Vector3 goalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_mD0D76D0227A2A7428D0D85272201D1DB3DCEFF99(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (ignoreAngleClamp)
		bool L_1 = __this->get_ignoreAngleClamp_19();
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// if (ignoreDistanceClamp)
		bool L_3 = __this->get_ignoreDistanceClamp_20();
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// goalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_003a;
	}

IL_002f:
	{
		// GetDesiredOrientation_DistanceOnly(ref goalPosition);
		RadialView_GetDesiredOrientation_DistanceOnly_m0C6CF1047CAB7B9B5CD347A65BC6A92AD04DFFE5(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_003a:
	{
		goto IL_0048;
	}

IL_003d:
	{
		// GetDesiredOrientation(ref goalPosition);
		RadialView_GetDesiredOrientation_m8DBD521243B799C1AC00EB828CA6BFEF5A5DE90C(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0048:
	{
		// Vector3 refDirUp = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = RadialView_get_UpReference_m07DDC1E573C3D1C717C8007B41547821D54F71C6(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		// if (orientToReferenceDirection)
		bool L_8 = __this->get_orientToReferenceDirection_23();
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// goalRotation = Quaternion.LookRotation(SolverReferenceDirection, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RadialView_get_SolverReferenceDirection_m7EFD18D79FF31A0503F3AF703A09875A324DDFA5(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0081;
	}

IL_006c:
	{
		// goalRotation = Quaternion.LookRotation(goalPosition - ReferencePoint, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RadialView_get_ReferencePoint_mE43716CCC907FF1A7A42F27A0B324CE864918943(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_0081:
	{
		// if (referenceDirection == RadialViewReferenceDirection.GravityAligned)
		int32_t L_18 = __this->get_referenceDirection_13();
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		// goalRotation.x = goalRotation.z = 0f;
		float L_20 = (0.0f);
		V_7 = L_20;
		(&V_2)->set_z_2(L_20);
		float L_21 = V_7;
		(&V_2)->set_x_0(L_21);
	}

IL_00aa:
	{
		// if (UseFixedVerticalPosition)
		bool L_22 = RadialView_get_UseFixedVerticalPosition_m202FD531D8F43BCF134175B7E4D4A2D5FAA17930(__this, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00d1;
		}
	}
	{
		// goalPosition.y = ReferencePoint.y + FixedVerticalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RadialView_get_ReferencePoint_mE43716CCC907FF1A7A42F27A0B324CE864918943(__this, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		float L_26 = RadialView_get_FixedVerticalPosition_m4B0E54D47D8C8720787B40BDF829AE13AC21D32C(__this, /*hidden argument*/NULL);
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
	}

IL_00d1:
	{
		// GoalPosition = goalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_27, /*hidden argument*/NULL);
		// GoalRotation = goalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_2;
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m0C6CF1047CAB7B9B5CD347A65BC6A92AD04DFFE5 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_DistanceOnly_m0C6CF1047CAB7B9B5CD347A65BC6A92AD04DFFE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// Vector3 refPoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_ReferencePoint_mE43716CCC907FF1A7A42F27A0B324CE864918943(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// Vector3 elementDelta = elementPoint - refPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// float elementDist = elementDelta.magnitude;
		float L_6 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_7 = V_3;
		if ((((float)L_7) > ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_8;
		goto IL_003a;
	}

IL_0033:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		float L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_9, L_10, /*hidden argument*/NULL);
		G_B3_0 = L_11;
	}

IL_003a:
	{
		V_4 = G_B3_0;
		// float clampedDistance = Mathf.Clamp(elementDist, minDistance, maxDistance);
		float L_12 = V_3;
		float L_13 = __this->get_minDistance_14();
		float L_14 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		// if (!clampedDistance.Equals(elementDist))
		float L_16 = V_3;
		bool L_17 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_5), L_16, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		// desiredPos = refPoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_19 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_23, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_19 = L_24;
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m8DBD521243B799C1AC00EB828CA6BFEF5A5DE90C (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_m8DBD521243B799C1AC00EB828CA6BFEF5A5DE90C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	bool V_13 = false;
	float V_14 = 0.0f;
	bool V_15 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	float G_B6_0 = 0.0f;
	{
		// Vector3 direction = SolverReferenceDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_SolverReferenceDirection_m7EFD18D79FF31A0503F3AF703A09875A324DDFA5(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 upDirection = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RadialView_get_UpReference_m07DDC1E573C3D1C717C8007B41547821D54F71C6(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 referencePoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = RadialView_get_ReferencePoint_mE43716CCC907FF1A7A42F27A0B324CE864918943(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		// Vector3 elementDelta = elementPoint - referencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		// float elementDist = elementDelta.magnitude;
		float L_8 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_8;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_9 = V_5;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_10;
		goto IL_004d;
	}

IL_0044:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_4;
		float L_12 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_11, L_12, /*hidden argument*/NULL);
		G_B3_0 = L_13;
	}

IL_004d:
	{
		V_6 = G_B3_0;
		// Vector3 perpendicularDirection = (elementDir - direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		// perpendicularDirection -= direction * Vector3.Dot(perpendicularDirection, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_17, L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		// perpendicularDirection.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		// float heightToViewAngle = Vector3.Angle(perpendicularDirection, upDirection);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_1;
		float L_26 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_24, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		// float verticalAspectScale = Mathf.Lerp(aspectV, 1f, Mathf.Abs(Mathf.Sin(heightToViewAngle * Mathf.Deg2Rad)));
		float L_27 = __this->get_aspectV_18();
		float L_28 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_29 = sinf(((float)il2cpp_codegen_multiply((float)L_28, (float)(0.0174532924f))));
		float L_30 = fabsf(L_29);
		float L_31 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_27, (1.0f), L_30, /*hidden argument*/NULL);
		V_9 = L_31;
		// float currentAngle = Vector3.Angle(elementDir, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_0;
		float L_34 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_32, L_33, /*hidden argument*/NULL);
		V_10 = L_34;
		// float currentAngleClamped = Mathf.Clamp(currentAngle, minViewDegrees * verticalAspectScale, maxViewDegrees * verticalAspectScale);
		float L_35 = V_10;
		float L_36 = __this->get_minViewDegrees_16();
		float L_37 = V_9;
		float L_38 = __this->get_maxViewDegrees_17();
		float L_39 = V_9;
		float L_40 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_35, ((float)il2cpp_codegen_multiply((float)L_36, (float)L_37)), ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		V_11 = L_40;
		// float clampedDistance = ignoreDistanceClamp ? elementDist : Mathf.Clamp(elementDist, minDistance, maxDistance);
		bool L_41 = __this->get_ignoreDistanceClamp_20();
		if (L_41)
		{
			goto IL_00e8;
		}
	}
	{
		float L_42 = V_5;
		float L_43 = __this->get_minDistance_14();
		float L_44 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_42, L_43, L_44, /*hidden argument*/NULL);
		G_B6_0 = L_45;
		goto IL_00ea;
	}

IL_00e8:
	{
		float L_46 = V_5;
		G_B6_0 = L_46;
	}

IL_00ea:
	{
		V_12 = G_B6_0;
		// if (currentAngle != currentAngleClamped)
		float L_47 = V_10;
		float L_48 = V_11;
		V_13 = (bool)((((int32_t)((((float)L_47) == ((float)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_013c;
		}
	}
	{
		// float angRad = currentAngleClamped * Mathf.Deg2Rad;
		float L_50 = V_11;
		V_14 = ((float)il2cpp_codegen_multiply((float)L_50, (float)(0.0174532924f)));
		// desiredPos = referencePoint + clampedDistance * (direction * Mathf.Cos(angRad) + perpendicularDirection * Mathf.Sin(angRad));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_51 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_2;
		float L_53 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_0;
		float L_55 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_56 = cosf(L_55);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_54, L_56, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_7;
		float L_59 = V_14;
		float L_60 = sinf(L_59);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_58, L_60, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_57, L_61, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_53, L_62, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_52, L_63, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_51 = L_64;
		goto IL_0165;
	}

IL_013c:
	{
		// else if (!clampedDistance.Equals(elementDist))
		float L_65 = V_5;
		bool L_66 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_12), L_65, /*hidden argument*/NULL);
		V_15 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_15;
		if (!L_67)
		{
			goto IL_0165;
		}
	}
	{
		// desiredPos = referencePoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = V_2;
		float L_70 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_70, L_71, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_69, L_72, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68 = L_73;
	}

IL_0165:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RadialView__ctor_m52EDD264E91C13D843E2389650F088FA14893D92 (RadialView_t3EEF2187A59D049F18F3FBBCED19D2D82E549F87 * __this, const RuntimeMethod* method)
{
	{
		// private RadialViewReferenceDirection referenceDirection = RadialViewReferenceDirection.FacingWorldUp;
		__this->set_referenceDirection_13(1);
		// private float minDistance = 1f;
		__this->set_minDistance_14((1.0f));
		// private float maxDistance = 2f;
		__this->set_maxDistance_15((2.0f));
		// private float minViewDegrees = 0f;
		__this->set_minViewDegrees_16((0.0f));
		// private float maxViewDegrees = 30f;
		__this->set_maxViewDegrees_17((30.0f));
		// private float aspectV = 1f;
		__this->set_aspectV_18((1.0f));
		// private bool ignoreAngleClamp = false;
		__this->set_ignoreAngleClamp_19((bool)0);
		// private bool ignoreDistanceClamp = false;
		__this->set_ignoreDistanceClamp_20((bool)0);
		// private bool useFixedVerticalPosition = false;
		__this->set_useFixedVerticalPosition_21((bool)0);
		// private float fixedVerticalPosition = -0.4f;
		__this->set_fixedVerticalPosition_22((-0.4f));
		// private bool orientToReferenceDirection = false;
		__this->set_orientToReferenceDirection_23((bool)0);
		Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_UpdateLinkedTransform()
extern "C" IL2CPP_METHOD_ATTR bool Solver_get_UpdateLinkedTransform_m2FB10E150C9344AA2399CBD89182C13EA957B59D (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	{
		// get => updateLinkedTransform;
		bool L_0 = __this->get_updateLinkedTransform_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_UpdateLinkedTransform(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_UpdateLinkedTransform_m02DA25AE8B9BB0E88AE05856F70226E5E9E0606D (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateLinkedTransform = value;
		bool L_0 = ___value0;
		__this->set_updateLinkedTransform_4(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_MoveLerpTime()
extern "C" IL2CPP_METHOD_ATTR float Solver_get_MoveLerpTime_mF2B24012617438CC5FB521FF0665AEBD463C0863 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	{
		// get => moveLerpTime;
		float L_0 = __this->get_moveLerpTime_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_MoveLerpTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_MoveLerpTime_m4204ED5BBFCACE1DCDFE644A3518F4B05EC9323C (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => moveLerpTime = value;
		float L_0 = ___value0;
		__this->set_moveLerpTime_5(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_RotateLerpTime()
extern "C" IL2CPP_METHOD_ATTR float Solver_get_RotateLerpTime_m909B9FF97683D5488F523FA11E746EAEAE5C63BE (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	{
		// get => rotateLerpTime;
		float L_0 = __this->get_rotateLerpTime_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_RotateLerpTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_RotateLerpTime_m52555B073D59A9E1F2590FC5848A936A2CD44585 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateLerpTime = value;
		float L_0 = ___value0;
		__this->set_rotateLerpTime_6(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_ScaleLerpTime()
extern "C" IL2CPP_METHOD_ATTR float Solver_get_ScaleLerpTime_mA1AEFF9073F134A16E58CAFA8C3F0B547FA61415 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	{
		// get => scaleLerpTime;
		float L_0 = __this->get_scaleLerpTime_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_ScaleLerpTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_ScaleLerpTime_mCB49E673D0E6DC05EEBB846D9E034DF8C99DDD67 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => scaleLerpTime = value;
		float L_0 = ___value0;
		__this->set_scaleLerpTime_7(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_Smoothing()
extern "C" IL2CPP_METHOD_ATTR bool Solver_get_Smoothing_mC1CBAA7BE9D68B7A5A4C4A818D14C5C032FD92CB (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	{
		// get => smoothing;
		bool L_0 = __this->get_smoothing_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_Smoothing(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_Smoothing_m07CEAAAF7535C8EB817B79E2904C88062C05B88C (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => smoothing = value;
		bool L_0 = ___value0;
		__this->set_smoothing_9(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalPosition; }
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalPosition_m8F400C43CDA714C94FD3EB49256E391D7C0B0681(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalPosition; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalPosition = value; }
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalPosition_m287B7AF664412938033992014AE2BDE835AADA19(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_m80F6160C025BF48D0BEF80532C54551373243A2B (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalRotation; }
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = SolverHandler_get_GoalRotation_mE7F8998BDFE718E683595AF522725BD46F1E2176(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalRotation; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalRotation = value; }
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalRotation_m078F7DC01BB3942FE1C26203BBBA07EF0BDCDBD8(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalRotation = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m5762CFAA82A59DF94F9DE0CE5CF2AB35F519FA52 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalScale; }
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalScale_mF5671F8770505EF221CEAF604FDB97D2C06B814E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalScale; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalScale_mE29FA0AEABBADC45C1C5E10B5309E8871225229F (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalScale = value; }
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalScale_mC073ED82C4E7CFED818EACE1BF37BC145DC90970(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalScale = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_mD0D76D0227A2A7428D0D85272201D1DB3DCEFF99 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalPosition : transform.position;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m305130065AB436BBEA6292D00BBA4FC4565F48F7 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalPosition = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.position = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m48DA7A8FF260891A9E53E0F23D9222C5EE1A21C0 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalRotation : transform.rotation;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_m80F6160C025BF48D0BEF80532C54551373243A2B(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m73C85D43FCAF64DA61AF353FB9E3435D4B6DBF2B (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalRotation = value;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___value0;
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.rotation = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m6A6F0C8A0971383DC32836F2E5AA07FCF8BF314A (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalScale : transform.localScale;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m5762CFAA82A59DF94F9DE0CE5CF2AB35F519FA52(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_mD9F122BCDEA0C4015811B238D778AF46C12668E4 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalScale = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		Solver_set_GoalScale_mE29FA0AEABBADC45C1C5E10B5309E8871225229F(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.localScale = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Awake()
extern "C" IL2CPP_METHOD_ATTR void Solver_Awake_mA20BF70A9C3882332EB0AFEFCAA752CB24305744 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Awake_mA20BF70A9C3882332EB0AFEFCAA752CB24305744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B9_0 = NULL;
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B8_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B10_1 = NULL;
	{
		// if (SolverHandler == null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// SolverHandler = GetComponent<SolverHandler>();
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = Component_GetComponent_TisSolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2_m8F111C6BBFAB5BCFE91E83FD61E1B4B89248821A(__this, /*hidden argument*/Component_GetComponent_TisSolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2_m8F111C6BBFAB5BCFE91E83FD61E1B4B89248821A_RuntimeMethod_var);
		__this->set_SolverHandler_12(L_3);
	}

IL_001f:
	{
		// if (updateLinkedTransform && SolverHandler == null)
		bool L_4 = __this->get_updateLinkedTransform_4();
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_5 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// Debug.LogError("No SolverHandler component found on " + name + " when UpdateLinkedTransform was set to true! Disabling UpdateLinkedTransform.");
		String_t* L_8 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B, L_8, _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_9, /*hidden argument*/NULL);
		// updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
	}

IL_005e:
	{
		// GoalScale = maintainScale ? transform.localScale : Vector3.one;
		bool L_10 = __this->get_maintainScale_8();
		G_B8_0 = __this;
		if (L_10)
		{
			G_B9_0 = __this;
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B10_0 = L_11;
		G_B10_1 = G_B8_0;
		goto IL_0079;
	}

IL_006e:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_12, /*hidden argument*/NULL);
		G_B10_0 = L_13;
		G_B10_1 = G_B9_0;
	}

IL_0079:
	{
		NullCheck(G_B10_1);
		Solver_set_GoalScale_mE29FA0AEABBADC45C1C5E10B5309E8871225229F(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnEnable_m46A8122E1DAA84489C8789D9BE71FF1168C94667 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnEnable_m46A8122E1DAA84489C8789D9BE71FF1168C94667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// SnapGoalTo(GoalPosition, GoalRotation, GoalScale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Solver_get_GoalRotation_m80F6160C025BF48D0BEF80532C54551373243A2B(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Solver_get_GoalScale_m5762CFAA82A59DF94F9DE0CE5CF2AB35F519FA52(__this, /*hidden argument*/NULL);
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_3, L_4, L_5);
	}

IL_002c:
	{
		// currentLifetime = 0;
		__this->set_currentLifetime_11((0.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
extern "C" IL2CPP_METHOD_ATTR void Solver_Start_mDD65645E4B6947EAE1C13937656A4A0D0B7094E8 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Start_mDD65645E4B6947EAE1C13937656A4A0D0B7094E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// SolverHandler.RegisterSolver(this);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_RegisterSolver_m1DE44CB0AAB86F547D097AF8EF3BCB327FD4C4A9(L_3, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnDestroy_m49600449C079E0C3C90DE6D7159CCC239A4FE80A (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnDestroy_m49600449C079E0C3C90DE6D7159CCC239A4FE80A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// SolverHandler.UnregisterSolver(this);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_UnregisterSolver_m0B3E98FED22AE01201B87BDD21491217D5781476(L_3, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
extern "C" IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_mD3D1C1AD3EF7D5CB8195B37064162852883D8BE6 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// currentLifetime += SolverHandler.DeltaTime;
		float L_0 = __this->get_currentLifetime_11();
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_1 = __this->get_SolverHandler_12();
		NullCheck(L_1);
		float L_2 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_1, /*hidden argument*/NULL);
		__this->set_currentLifetime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// if (lifetime > 0 && currentLifetime >= lifetime)
		float L_3 = __this->get_lifetime_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		float L_4 = __this->get_currentLifetime_11();
		float L_5 = __this->get_lifetime_10();
		G_B3_0 = ((((int32_t)((!(((float)L_4) >= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 0;
	}

IL_003a:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		goto IL_0057;
	}

IL_0049:
	{
		// SolverUpdate();
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdate() */, __this);
		// UpdateWorkingToGoal();
		Solver_UpdateWorkingToGoal_m6F956862B3B477452AAF4A9AE82EC61B32719D29(__this, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapTo_m6A533354F01C3A83837F5EA8AE4FAE5E284B08E0 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_0, L_1, L_2);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position0;
		Solver_set_WorkingPosition_m305130065AB436BBEA6292D00BBA4FC4565F48F7(__this, L_3, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation1;
		Solver_set_WorkingRotation_m73C85D43FCAF64DA61AF353FB9E3435D4B6DBF2B(__this, L_4, /*hidden argument*/NULL);
		// WorkingScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___scale2;
		Solver_set_WorkingScale_mD9F122BCDEA0C4015811B238D778AF46C12668E4(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_mB5BC3058002B73A7CFF686441BFDEFF4E8091AB7 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_1, /*hidden argument*/NULL);
		// GoalScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_set_GoalScale_mE29FA0AEABBADC45C1C5E10B5309E8871225229F(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapTo_m034731157F433221B365D8A2D4EAA79AE1D84660 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_0, L_1);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		Solver_set_WorkingPosition_m305130065AB436BBEA6292D00BBA4FC4565F48F7(__this, L_2, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation1;
		Solver_set_WorkingRotation_m73C85D43FCAF64DA61AF353FB9E3435D4B6DBF2B(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m783CB7B5AE8D12CDF43C763B52525D53A3B7F8E6 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_AddOffset_m9BCDE3679EB69F02E28B8132C4E7E68BCA4C02A2 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_AddOffset_m9BCDE3679EB69F02E28B8132C4E7E68BCA4C02A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalPosition += offset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_1, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m94E4E897CD5E8E44DBA629969701F8672CCD304A (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m94E4E897CD5E8E44DBA629969701F8672CCD304A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_1;
	memset(&G_B2_1, 0, sizeof(G_B2_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_1;
	memset(&G_B1_1, 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_2;
	memset(&G_B3_2, 0, sizeof(G_B3_2));
	{
		// return Vector3.Lerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___source0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_m0467D33544193A9256767C9559C84B699AE00BDB (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m0467D33544193A9256767C9559C84B699AE00BDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_1;
	memset(&G_B2_1, 0, sizeof(G_B2_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_1;
	memset(&G_B1_1, 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_2;
	memset(&G_B3_2, 0, sizeof(G_B3_2));
	{
		// return Quaternion.Slerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___source0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = V_0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateTransformToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_m6F97509AFACCADD41B188BD91E1A06AECE5AE4D3 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		// if (smoothing)
		bool L_0 = __this->get_smoothing_9();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Quaternion rot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// Vector3 scale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// pos = SmoothTo(pos, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF(__this, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_10 = __this->get_SolverHandler_12();
		NullCheck(L_10);
		float L_11 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Solver_SmoothTo_m94E4E897CD5E8E44DBA629969701F8672CCD304A(L_8, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// rot = SmoothTo(rot, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Solver_get_GoalRotation_m80F6160C025BF48D0BEF80532C54551373243A2B(__this, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_16 = __this->get_SolverHandler_12();
		NullCheck(L_16);
		float L_17 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Solver_SmoothTo_m0467D33544193A9256767C9559C84B699AE00BDB(L_14, L_15, L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// scale = SmoothTo(scale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Solver_get_GoalScale_m5762CFAA82A59DF94F9DE0CE5CF2AB35F519FA52(__this, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_22 = __this->get_SolverHandler_12();
		NullCheck(L_22);
		float L_23 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Solver_SmoothTo_m94E4E897CD5E8E44DBA629969701F8672CCD304A(L_20, L_21, L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// transform.position = pos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_1;
		NullCheck(L_26);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_26, L_27, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = V_2;
		NullCheck(L_28);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_28, L_29, /*hidden argument*/NULL);
		// transform.localScale = scale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_3;
		NullCheck(L_30);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_30, L_31, /*hidden argument*/NULL);
		goto IL_00ef;
	}

IL_00b7:
	{
		// transform.position = GoalPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_32, L_33, /*hidden argument*/NULL);
		// transform.rotation = GoalRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Solver_get_GoalRotation_m80F6160C025BF48D0BEF80532C54551373243A2B(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_34, L_35, /*hidden argument*/NULL);
		// transform.localScale = GoalScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Solver_get_GoalScale_m5762CFAA82A59DF94F9DE0CE5CF2AB35F519FA52(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_36, L_37, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m6F956862B3B477452AAF4A9AE82EC61B32719D29 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	{
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_m4A9794908E33DE50C4DE0A45E25FC2D3EC9BBAC5(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_m246B9DD9ABE98D836E02E7275103B3E147BC1B1C(__this, /*hidden argument*/NULL);
		// UpdateWorkingScaleToGoal();
		Solver_UpdateWorkingScaleToGoal_mA6DFD69B7F004AEB124792A54A57F913B10C7F38(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m4A9794908E33DE50C4DE0A45E25FC2D3EC9BBAC5 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B2_0 = NULL;
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B3_1 = NULL;
	{
		// WorkingPosition = smoothing ? SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime) : GoalPosition;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingPosition_mD0D76D0227A2A7428D0D85272201D1DB3DCEFF99(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m6E84CE8FC5DF119AAA923C83BB3084D87AE293EF(__this, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m94E4E897CD5E8E44DBA629969701F8672CCD304A(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_m305130065AB436BBEA6292D00BBA4FC4565F48F7(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_m246B9DD9ABE98D836E02E7275103B3E147BC1B1C (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B2_0 = NULL;
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B1_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B3_1 = NULL;
	{
		// WorkingRotation = smoothing ? SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime) : GoalRotation;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_GoalRotation_m80F6160C025BF48D0BEF80532C54551373243A2B(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Solver_get_WorkingRotation_m48DA7A8FF260891A9E53E0F23D9222C5EE1A21C0(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_m80F6160C025BF48D0BEF80532C54551373243A2B(__this, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Solver_SmoothTo_m0467D33544193A9256767C9559C84B699AE00BDB(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_m73C85D43FCAF64DA61AF353FB9E3435D4B6DBF2B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_mA6DFD69B7F004AEB124792A54A57F913B10C7F38 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B2_0 = NULL;
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * G_B3_1 = NULL;
	{
		// WorkingScale = smoothing ? SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime) : GoalScale;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalScale_m5762CFAA82A59DF94F9DE0CE5CF2AB35F519FA52(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingScale_m6A6F0C8A0971383DC32836F2E5AA07FCF8BF314A(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m5762CFAA82A59DF94F9DE0CE5CF2AB35F519FA52(__this, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m94E4E897CD5E8E44DBA629969701F8672CCD304A(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_mD9F122BCDEA0C4015811B238D778AF46C12668E4(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05 (Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * __this, const RuntimeMethod* method)
{
	{
		// private bool updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
		// private float moveLerpTime = 0.1f;
		__this->set_moveLerpTime_5((0.1f));
		// private float rotateLerpTime = 0.1f;
		__this->set_rotateLerpTime_6((0.1f));
		// private float scaleLerpTime = 0;
		__this->set_scaleLerpTime_7((0.0f));
		// private bool maintainScale = true;
		__this->set_maintainScale_8((bool)1);
		// private bool smoothing = true;
		__this->set_smoothing_9((bool)1);
		// private float lifetime = 0;
		__this->set_lifetime_10((0.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return trackedTargetType; }
		int32_t L_0 = __this->get_trackedTargetType_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return trackedTargetType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m2E549E8EF910D19C2336329006BFF2F14C7AABBA (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (trackedTargetType != value && IsValidTrackedObjectType(value))
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidTrackedObjectType_m4DB14A92F5210C8BA3F2D3CD98A74BF2A9AF9404(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_5 = ___value0;
		__this->set_trackedTargetType_4(L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedObjectToReference()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedObjectToReference_m85D9CA30DD203F75C3F851B50CA376C937D8F2A9 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return trackedTargetType; }
		int32_t L_0 = __this->get_trackedTargetType_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return trackedTargetType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_m2BF57804DD2F93994F65108538F0FFFB57C7B3C4 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (trackedTargetType != value)
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_3 = ___value0;
		__this->set_trackedTargetType_4(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m8B253A1962367FC5EB62AFC42B4467646A0E2F61 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return trackedHandness; }
		uint8_t L_0 = __this->get_trackedHandness_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return trackedHandness; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_mCBA140C3ABEA2A4DAAF952703B34A3B7D4A76845 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (trackedHandness != value && IsValidHandedness(value))
		uint8_t L_0 = __this->get_trackedHandness_5();
		uint8_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidHandedness_mB3744585340991CD53CF056560AFC9A737B9BA49(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// trackedHandness = value;
		uint8_t L_5 = ___value0;
		__this->set_trackedHandness_5(L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m619D7B2B8DDA606042C00E5C8BE7B5E47DE9E04C (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return trackedHandJoint; }
		int32_t L_0 = __this->get_trackedHandJoint_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return trackedHandJoint; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_m574573F356DE72FC407E8084F07FFBB134C25642 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (trackedHandJoint != value)
		int32_t L_0 = __this->get_trackedHandJoint_6();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// trackedHandJoint = value;
		int32_t L_3 = ___value0;
		__this->set_trackedHandJoint_6(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_mA89F43DB575BE35D2BE34B9EDCA25550136E7465 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_TransformOverride_mA89F43DB575BE35D2BE34B9EDCA25550136E7465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (value != null && transformOverride != value)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_transformOverride_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// transformOverride = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___value0;
		__this->set_transformOverride_7(L_6);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m52BD540E6A2E5DEC82C8E2039599D7FA0F2CAB89 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// get { return additionalOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return additionalOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_m051958EB1155133A2EA9E3DDFA80FC31CDB336E5 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalOffset_m051958EB1155133A2EA9E3DDFA80FC31CDB336E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (additionalOffset != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// additionalOffset = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		__this->set_additionalOffset_8(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m5B3F02DF9582B32A89FA5758BA1DF7077D2BAE62 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// get { return additionalRotation; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return additionalRotation; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_mA67CD2BE9BFC5D3BF89F131FF1EE03E82541CDB6 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalRotation_mA67CD2BE9BFC5D3BF89F131FF1EE03E82541CDB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (additionalRotation != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// additionalRotation = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		__this->set_additionalRotation_9(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mF6A2D3AE3471F39B8321F2BDF052075EE73430EB (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return updateSolvers; }
		bool L_0 = __this->get_updateSolvers_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return updateSolvers; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_mBC103252673E2FB706BD947C6FF005ED42626C25 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { updateSolvers = value; }
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		// set { updateSolvers = value; }
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_m4CA63E3247A4EF9CF68D496548CEBB35A200E77A (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_Solvers_m4CA63E3247A4EF9CF68D496548CEBB35A200E77A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return solvers.AsReadOnly();
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_0 = __this->get_solvers_11();
		NullCheck(L_0);
		ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07 * L_1 = List_1_AsReadOnly_m915BD3B89C4BE7D29E6D5B0C2BC5EB725657014C(L_0, /*hidden argument*/List_1_AsReadOnly_m915BD3B89C4BE7D29E6D5B0C2BC5EB725657014C_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_mA5AC288FA3050D31759EF93D5F7AD97D2845D452 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_Solvers_mA5AC288FA3050D31759EF93D5F7AD97D2845D452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// this.solvers.Clear();
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_2 = __this->get_solvers_11();
		NullCheck(L_2);
		List_1_Clear_m9FEA9AEA0BD0FCF012AE16CE908E787D86D7EDDE(L_2, /*hidden argument*/List_1_Clear_m9FEA9AEA0BD0FCF012AE16CE908E787D86D7EDDE_RuntimeMethod_var);
		// this.solvers.AddRange(value);
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_3 = __this->get_solvers_11();
		RuntimeObject* L_4 = ___value0;
		NullCheck(L_3);
		List_1_AddRange_m4D45AE562820838444B931A4C0764F36EBEA0274(L_3, L_4, /*hidden argument*/List_1_AddRange_m4D45AE562820838444B931A4C0764F36EBEA0274_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_m8F400C43CDA714C94FD3EB49256E391D7C0B0681 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m287B7AF664412938033992014AE2BDE835AADA19 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_mE7F8998BDFE718E683595AF522725BD46F1E2176 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m078F7DC01BB3942FE1C26203BBBA07EF0BDCDBD8 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_mF5671F8770505EF221CEAF604FDB97D2C06B814E (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mC073ED82C4E7CFED818EACE1BF37BC145DC90970 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
extern "C" IL2CPP_METHOD_ATTR Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  SolverHandler_get_AltScale_mDE27E890F468BC95A4983042E9A12A0B17A3D121 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m5B9E94712F4FE8F1FE6916CC1509A33111DA8D6A (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
extern "C" IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m35E46F12F946A7BBA9DE6CC66DA36BF077AB0768 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mD5C6BABF076FF496FEA8F21AA1012CD636A4B4D9 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m1E198FBF8DA32FE5D38E6926499A47914C62E146(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// return (trackingTarget != null) ? trackingTarget.transform : null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		G_B5_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		goto IL_0030;
	}

IL_0025:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_trackingTarget_20();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		G_B5_0 = L_5;
	}

IL_0030:
	{
		V_1 = G_B5_0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_1;
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m6067E18E11252F6F91880B06D6334ECEE7A84A9B (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// return currentTrackedHandedness;
		uint8_t L_0 = __this->get_currentTrackedHandedness_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_mCE1FD3903672519D31BCD36109220237B60B8CF4 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_m1F1B5022525327F522CEB931B02A741D47A1167F (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if ((value.IsLeft() || value.IsRight())
		//     && preferredTrackedHandedness != value)
		uint8_t L_0 = ___value0;
		bool L_1 = HandednessExtensions_IsLeft_mFB576AC9DA67076D5AC5791AF1C657AEE47A9B01(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = HandednessExtensions_IsRight_mD846198B03AE619D946B29A031D45D8567DC2487(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_0011:
	{
		uint8_t L_4 = __this->get_preferredTrackedHandedness_19();
		uint8_t L_5 = ___value0;
		G_B4_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// preferredTrackedHandedness = value;
		uint8_t L_7 = ___value0;
		__this->set_preferredTrackedHandedness_19(L_7);
	}

IL_002d:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * G_B4_1 = NULL;
	{
		// private IMixedRealityHandJointService HandJointService => handJointService ?? (handJointService = (CoreServices.InputSystem as IMixedRealityDataProviderAccess)?.GetDataProvider<IMixedRealityHandJointService>());
		RuntimeObject* L_0 = __this->get_handJointService_22();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B5_0 = L_1;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3FCE4FB94A0AE1E489017E199F7C965F987A1C89_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m2FB4378C67C596364BFD118DF45CB0A810106FA1(/*hidden argument*/NULL);
		RuntimeObject* L_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityDataProviderAccess_t9324ABE13674A9152F8C12740CF8048326F19B76_il2cpp_TypeInfo_var));
		G_B2_0 = L_3;
		G_B2_1 = __this;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = __this;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0022;
	}

IL_001c:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_4 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B_mD8318245CB5697C6968F303DCCD89BD5189D1234_RuntimeMethod_var, G_B3_0, (String_t*)NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
	}

IL_0022:
	{
		RuntimeObject* L_5 = G_B4_0;
		V_0 = L_5;
		NullCheck(G_B4_1);
		G_B4_1->set_handJointService_22(L_5);
		RuntimeObject* L_6 = V_0;
		G_B5_0 = L_6;
	}

IL_002a:
	{
		return G_B5_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Awake_m106A6E4B9C8D35553E254BFA4E77F0D3B0CE0CA7 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_Awake_m106A6E4B9C8D35553E254BFA4E77F0D3B0CE0CA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// GoalScale = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mC073ED82C4E7CFED818EACE1BF37BC145DC90970(__this, L_0, /*hidden argument*/NULL);
		// AltScale = new Vector3Smoothed(Vector3.one, 0.1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3Smoothed__ctor_mD2F2AA17D014F8D21988759F5EE7E8211427AC2F((&L_2), L_1, (0.1f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_m5B9E94712F4FE8F1FE6916CC1509A33111DA8D6A(__this, L_2, /*hidden argument*/NULL);
		// DeltaTime = Time.deltaTime;
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		SolverHandler_set_DeltaTime_mD5C6BABF076FF496FEA8F21AA1012CD636A4B4D9(__this, L_3, /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_21(L_4);
		// if (!IsValidHandedness(trackedHandness))
		uint8_t L_5 = __this->get_trackedHandness_5();
		bool L_6 = SolverHandler_IsValidHandedness_mB3744585340991CD53CF056560AFC9A737B9BA49(L_5, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// Debug.LogError("Using invalid SolverHandler.TrackedHandness value. Defaulting to Handedness.Both");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE, /*hidden argument*/NULL);
		// TrackedHandness = Handedness.Both;
		SolverHandler_set_TrackedHandness_mCBA140C3ABEA2A4DAAF952703B34A3B7D4A76845(__this, 3, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if (!IsValidTrackedObjectType(trackedTargetType))
		int32_t L_8 = __this->get_trackedTargetType_4();
		bool L_9 = SolverHandler_IsValidTrackedObjectType_m4DB14A92F5210C8BA3F2D3CD98A74BF2A9AF9404(L_8, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		// Debug.LogError("Using Obsolete SolverHandler.TrackedTargetType. Defaulting to type Head");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7, /*hidden argument*/NULL);
		// TrackedTargetType = TrackedObjectType.Head;
		SolverHandler_set_TrackedTargetType_m2E549E8EF910D19C2336329006BFF2F14C7AABBA(__this, 0, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Start_mF2B3D0F269F5C335A965641D619A566C5AEC48B5 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Update_m5BA087F8B2DC7E94BC8096CF7E67C3874EBBC9B8 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m1E198FBF8DA32FE5D38E6926499A47914C62E146(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// DeltaTime = Time.realtimeSinceStartup - lastUpdateTime;
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_3 = __this->get_lastUpdateTime_21();
		SolverHandler_set_DeltaTime_mD5C6BABF076FF496FEA8F21AA1012CD636A4B4D9(__this, ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_21(L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_m91085B779226C010E9105D1F3F7360F56A30656C (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_LateUpdate_m91085B779226C010E9105D1F3F7360F56A30656C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		// if (updateSolversList)
		bool L_0 = __this->get_updateSolversList_12();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// IEnumerable<Solver> inspectorOrderedSolvers = GetComponents<Solver>().Intersect(solvers);
		SolverU5BU5D_t318D8B119894F7EC00A506BA038AF7A81086C4F1* L_2 = Component_GetComponents_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m242E837E23DB912F0375CC06375C9461DF39C9F8(__this, /*hidden argument*/Component_GetComponents_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m242E837E23DB912F0375CC06375C9461DF39C9F8_RuntimeMethod_var);
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_3 = __this->get_solvers_11();
		RuntimeObject* L_4 = Enumerable_Intersect_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m263FB4F0F5ADCA007405AA95F18F91315CC429FA((RuntimeObject*)(RuntimeObject*)L_2, L_3, /*hidden argument*/Enumerable_Intersect_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m263FB4F0F5ADCA007405AA95F18F91315CC429FA_RuntimeMethod_var);
		V_1 = L_4;
		// Solvers = inspectorOrderedSolvers.Union(Solvers).ToReadOnlyCollection();
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = SolverHandler_get_Solvers_m4CA63E3247A4EF9CF68D496548CEBB35A200E77A(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = Enumerable_Union_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_mE730F185623512A7C0D51B48B7D728B392238DA3(L_5, L_6, /*hidden argument*/Enumerable_Union_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_mE730F185623512A7C0D51B48B7D728B392238DA3_RuntimeMethod_var);
		ReadOnlyCollection_1_t9ED5454309543BCEA401CD6B505481CB8CB55A07 * L_8 = CollectionsExtensions_ToReadOnlyCollection_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m378489BD5A4ECAB74B080F889E377CA5F27BCFC6(L_7, /*hidden argument*/CollectionsExtensions_ToReadOnlyCollection_TisSolver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948_m378489BD5A4ECAB74B080F889E377CA5F27BCFC6_RuntimeMethod_var);
		SolverHandler_set_Solvers_mA5AC288FA3050D31759EF93D5F7AD97D2845D452(__this, L_8, /*hidden argument*/NULL);
		// updateSolversList = false;
		__this->set_updateSolversList_12((bool)0);
	}

IL_003e:
	{
		// if (UpdateSolvers)
		bool L_9 = SolverHandler_get_UpdateSolvers_mF6A2D3AE3471F39B8321F2BDF052075EE73430EB(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00d3;
		}
	}
	{
		// GoalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_set_GoalPosition_m287B7AF664412938033992014AE2BDE835AADA19(__this, L_12, /*hidden argument*/NULL);
		// GoalRotation = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		SolverHandler_set_GoalRotation_m078F7DC01BB3942FE1C26203BBBA07EF0BDCDBD8(__this, L_14, /*hidden argument*/NULL);
		// GoalScale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_15, /*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mC073ED82C4E7CFED818EACE1BF37BC145DC90970(__this, L_16, /*hidden argument*/NULL);
		// for (int i = 0; i < solvers.Count; ++i)
		V_3 = 0;
		goto IL_00be;
	}

IL_0086:
	{
		// Solver solver = solvers[i];
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_17 = __this->get_solvers_11();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * L_19 = List_1_get_Item_m68AEC3D24339BC8DBB40D553744DD5051AA8D608(L_17, L_18, /*hidden argument*/List_1_get_Item_m68AEC3D24339BC8DBB40D553744DD5051AA8D608_RuntimeMethod_var);
		V_4 = L_19;
		// if (solver != null && solver.enabled)
		Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * L_22 = V_4;
		NullCheck(L_22);
		bool L_23 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_22, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B7_0 = 0;
	}

IL_00a9:
	{
		V_5 = (bool)G_B7_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b9;
		}
	}
	{
		// solver.SolverUpdateEntry();
		Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * L_25 = V_4;
		NullCheck(L_25);
		Solver_SolverUpdateEntry_mD3D1C1AD3EF7D5CB8195B37064162852883D8BE6(L_25, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00be:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_27 = V_3;
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_28 = __this->get_solvers_11();
		NullCheck(L_28);
		int32_t L_29 = List_1_get_Count_m656B3F1077970ACEBAF90C0F1FCBA2147787E077(L_28, /*hidden argument*/List_1_get_Count_m656B3F1077970ACEBAF90C0F1FCBA2147787E077_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (L_30)
		{
			goto IL_0086;
		}
	}
	{
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_mC4995390404F34126B7506044B0E41FFF1157ACA (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mFB58F2B595EFCB71552C7B1026A9C4157F9AD605 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// AttachToNewTrackedObject();
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m1DE44CB0AAB86F547D097AF8EF3BCB327FD4C4A9 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_RegisterSolver_m1DE44CB0AAB86F547D097AF8EF3BCB327FD4C4A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!solvers.Contains(solver))
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_0 = __this->get_solvers_11();
		Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m5C96734593D4EF6C6E530DEDA7E279C0B97682BE(L_0, L_1, /*hidden argument*/List_1_Contains_m5C96734593D4EF6C6E530DEDA7E279C0B97682BE_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// solvers.Add(solver);
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_4 = __this->get_solvers_11();
		Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * L_5 = ___solver0;
		NullCheck(L_4);
		List_1_Add_m2B5463A3CA3A64C5964564E5116C7210C2F78F65(L_4, L_5, /*hidden argument*/List_1_Add_m2B5463A3CA3A64C5964564E5116C7210C2F78F65_RuntimeMethod_var);
		// updateSolversList = true;
		__this->set_updateSolversList_12((bool)1);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m0B3E98FED22AE01201B87BDD21491217D5781476 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_UnregisterSolver_m0B3E98FED22AE01201B87BDD21491217D5781476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// solvers.Remove(solver);
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_0 = __this->get_solvers_11();
		Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 * L_1 = ___solver0;
		NullCheck(L_0);
		List_1_Remove_m3B73CD4CB8BA876C55765D96C0DD67F23C740AC2(L_0, L_1, /*hidden argument*/List_1_Remove_m3B73CD4CB8BA876C55765D96C0DD67F23C740AC2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_m36B6FF7EB28AA5D06A2F50F1E60729A334F6C644 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_DetachFromCurrentTrackedObject_m36B6FF7EB28AA5D06A2F50F1E60729A334F6C644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (trackingTarget != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(trackingTarget);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
		// trackingTarget = null;
		__this->set_trackingTarget_20((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_m0C42DF7F043A738657CCA4E71521BEB4DFCB4D14 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_AttachToNewTrackedObject_m0C42DF7F043A738657CCA4E71521BEB4DFCB4D14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// Transform target = null;
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
		// if (TrackedTargetType == TrackedObjectType.Head)
		int32_t L_0 = SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// target = CameraCache.Main.transform;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m22D5314F919250E67508DC50E917E631CCBAA2FA(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_01a0;
	}

IL_0029:
	{
		// else if (TrackedTargetType == TrackedObjectType.ControllerRay)
		int32_t L_4 = SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)5))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00c8;
		}
	}
	{
		// if (TrackedHandness == Handedness.Both)
		uint8_t L_6 = SolverHandler_get_TrackedHandness_m8B253A1962367FC5EB62AFC42B4467646A0E2F61(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00a7;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_8 = SolverHandler_get_PreferredTrackedHandedness_mCE1FD3903672519D31BCD36109220237B60B8CF4(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_8);
		// target = GetControllerRay(currentTrackedHandedness);
		uint8_t L_9 = __this->get_currentTrackedHandedness_18();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = SolverHandler_GetControllerRay_mA41232CF22B467E3D1F9213DF1D0DCDA709BF75E(__this, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// if (target == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00a4;
		}
	}
	{
		// currentTrackedHandedness = currentTrackedHandedness.GetOppositeHandedness();
		uint8_t L_14 = __this->get_currentTrackedHandedness_18();
		uint8_t L_15 = HandednessExtensions_GetOppositeHandedness_m4BF5CD0EB9975DCB1A015BA40670894D035E23A5(L_14, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_15);
		// target = GetControllerRay(currentTrackedHandedness);
		uint8_t L_16 = __this->get_currentTrackedHandedness_18();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = SolverHandler_GetControllerRay_mA41232CF22B467E3D1F9213DF1D0DCDA709BF75E(__this, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// if (target == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00a3;
		}
	}
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
	}

IL_00a3:
	{
	}

IL_00a4:
	{
		goto IL_00c2;
	}

IL_00a7:
	{
		// currentTrackedHandedness = TrackedHandness;
		uint8_t L_21 = SolverHandler_get_TrackedHandness_m8B253A1962367FC5EB62AFC42B4467646A0E2F61(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_21);
		// target = GetControllerRay(TrackedHandness);
		uint8_t L_22 = SolverHandler_get_TrackedHandness_m8B253A1962367FC5EB62AFC42B4467646A0E2F61(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = SolverHandler_GetControllerRay_mA41232CF22B467E3D1F9213DF1D0DCDA709BF75E(__this, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_00c2:
	{
		goto IL_01a0;
	}

IL_00c8:
	{
		// else if (TrackedTargetType == TrackedObjectType.HandJoint)
		int32_t L_24 = SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_24) == ((int32_t)6))? 1 : 0);
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_0188;
		}
	}
	{
		// if (HandJointService != null)
		RuntimeObject* L_26 = SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626(__this, /*hidden argument*/NULL);
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_0185;
		}
	}
	{
		// currentTrackedHandedness = TrackedHandness;
		uint8_t L_28 = SolverHandler_get_TrackedHandness_m8B253A1962367FC5EB62AFC42B4467646A0E2F61(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_28);
		// if (currentTrackedHandedness == Handedness.Both)
		uint8_t L_29 = __this->get_currentTrackedHandedness_18();
		V_8 = (bool)((((int32_t)L_29) == ((int32_t)3))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_016c;
		}
	}
	{
		// if (HandJointService.IsHandTracked(PreferredTrackedHandedness))
		RuntimeObject* L_31 = SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626(__this, /*hidden argument*/NULL);
		uint8_t L_32 = SolverHandler_get_PreferredTrackedHandedness_mCE1FD3903672519D31BCD36109220237B60B8CF4(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		bool L_33 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B_il2cpp_TypeInfo_var, L_31, L_32);
		V_9 = L_33;
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_0131;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_35 = SolverHandler_get_PreferredTrackedHandedness_mCE1FD3903672519D31BCD36109220237B60B8CF4(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_35);
		goto IL_016b;
	}

IL_0131:
	{
		// else if (HandJointService.IsHandTracked(PreferredTrackedHandedness.GetOppositeHandedness()))
		RuntimeObject* L_36 = SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626(__this, /*hidden argument*/NULL);
		uint8_t L_37 = SolverHandler_get_PreferredTrackedHandedness_mCE1FD3903672519D31BCD36109220237B60B8CF4(__this, /*hidden argument*/NULL);
		uint8_t L_38 = HandednessExtensions_GetOppositeHandedness_m4BF5CD0EB9975DCB1A015BA40670894D035E23A5(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		bool L_39 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B_il2cpp_TypeInfo_var, L_36, L_38);
		V_10 = L_39;
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_0162;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness.GetOppositeHandedness();
		uint8_t L_41 = SolverHandler_get_PreferredTrackedHandedness_mCE1FD3903672519D31BCD36109220237B60B8CF4(__this, /*hidden argument*/NULL);
		uint8_t L_42 = HandednessExtensions_GetOppositeHandedness_m4BF5CD0EB9975DCB1A015BA40670894D035E23A5(L_41, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_42);
		goto IL_016b;
	}

IL_0162:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
	}

IL_016b:
	{
	}

IL_016c:
	{
		// target = HandJointService.RequestJointTransform(this.TrackedHandJoint, currentTrackedHandedness);
		RuntimeObject* L_43 = SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626(__this, /*hidden argument*/NULL);
		int32_t L_44 = SolverHandler_get_TrackedHandJoint_m619D7B2B8DDA606042C00E5C8BE7B5E47DE9E04C(__this, /*hidden argument*/NULL);
		uint8_t L_45 = __this->get_currentTrackedHandedness_18();
		NullCheck(L_43);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = InterfaceFuncInvoker2< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B_il2cpp_TypeInfo_var, L_43, L_44, L_45);
		V_0 = L_46;
	}

IL_0185:
	{
		goto IL_01a0;
	}

IL_0188:
	{
		// else if (TrackedTargetType == TrackedObjectType.CustomOverride)
		int32_t L_47 = SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_47) == ((int32_t)7))? 1 : 0);
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_01a0;
		}
	}
	{
		// target = this.transformOverride;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = __this->get_transformOverride_7();
		V_0 = L_49;
	}

IL_01a0:
	{
		// TrackTransform(target);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = V_0;
		SolverHandler_TrackTransform_mD4D3DA119B2FA86FB256BA23FFB6EBCA769D1440(__this, L_50, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_mD4D3DA119B2FA86FB256BA23FFB6EBCA769D1440 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_TrackTransform_mD4D3DA119B2FA86FB256BA23FFB6EBCA769D1440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (trackingTarget != null || target == null) return;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (trackingTarget != null || target == null) return;
		goto IL_00c1;
	}

IL_0022:
	{
		// string name = string.Format("SolverHandler Target on {0} with offset {1}, {2}", target.gameObject.name, AdditionalOffset, AdditionalRotation);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___target0;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = SolverHandler_get_AdditionalOffset_m52BD540E6A2E5DEC82C8E2039599D7FA0F2CAB89(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = L_8;
		RuntimeObject * L_10 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SolverHandler_get_AdditionalRotation_m5B3F02DF9582B32A89FA5758BA1DF7077D2BAE62(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = L_11;
		RuntimeObject * L_13 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral8604633F91A5364A570785AE4355317FF69CAA79, L_7, L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// trackingTarget = new GameObject(name);
		String_t* L_15 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_16, L_15, /*hidden argument*/NULL);
		__this->set_trackingTarget_20(L_16);
		// trackingTarget.hideFlags = HideFlags.HideInHierarchy;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_trackingTarget_20();
		NullCheck(L_17);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_17, 1, /*hidden argument*/NULL);
		// trackingTarget.transform.parent = target;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_trackingTarget_20();
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = ___target0;
		NullCheck(L_19);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_19, L_20, /*hidden argument*/NULL);
		// trackingTarget.transform.localPosition = Vector3.Scale(AdditionalOffset, trackingTarget.transform.localScale);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_trackingTarget_20();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = SolverHandler_get_AdditionalOffset_m52BD540E6A2E5DEC82C8E2039599D7FA0F2CAB89(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_trackingTarget_20();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_23, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_22, L_27, /*hidden argument*/NULL);
		// trackingTarget.transform.localRotation = Quaternion.Euler(AdditionalRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_trackingTarget_20();
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = SolverHandler_get_AdditionalRotation_m5B3F02DF9582B32A89FA5758BA1DF7077D2BAE62(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_29, L_31, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::GetControllerRay(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_GetControllerRay_mA41232CF22B467E3D1F9213DF1D0DCDA709BF75E (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_GetControllerRay_mA41232CF22B467E3D1F9213DF1D0DCDA709BF75E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11 * V_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B3_0 = NULL;
	{
		// var pointer = PointerUtils.GetPointer<LinePointer>(handedness);
		uint8_t L_0 = ___handedness0;
		LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11 * L_1 = PointerUtils_GetPointer_TisLinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11_m6866B5FE75B9F4FE3691B7835DE3ED4FFB039764(L_0, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11_m6866B5FE75B9F4FE3691B7835DE3ED4FFB039764_RuntimeMethod_var);
		V_0 = L_1;
		// return pointer?.transform;
		LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		goto IL_0014;
	}

IL_000e:
	{
		LinePointer_tD3BF98862CBA94EE3030D15EF48507854D00EF11 * L_3 = V_0;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0014:
	{
		V_1 = G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m1E198FBF8DA32FE5D38E6926499A47914C62E146 (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_IsInvalidTracking_m1E198FBF8DA32FE5D38E6926499A47914C62E146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (trackingTarget == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_007f;
	}

IL_0016:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint && !currentTrackedHandedness.IsNone())
		int32_t L_3 = SolverHandler_get_TrackedTargetType_m29145E83A64141A2863C2A8FE178B7ACABBEAFE8(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)6))))
		{
			goto IL_002f;
		}
	}
	{
		uint8_t L_4 = __this->get_currentTrackedHandedness_18();
		bool L_5 = HandednessExtensions_IsNone_mA715F0CDC8F1641E01EC141AC0FFDE4AC142DAC9(L_4, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B5_0 = 0;
	}

IL_0030:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		// bool trackingLeft = HandJointService.IsHandTracked(Handedness.Left);
		RuntimeObject* L_7 = SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B_il2cpp_TypeInfo_var, L_7, 1);
		V_3 = L_8;
		// bool trackingRight = HandJointService.IsHandTracked(Handedness.Right);
		RuntimeObject* L_9 = SolverHandler_get_HandJointService_mAECC2F8F1B4FF260F5EBFA708C0C3CB3EB6B5626(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t5E6921829BF893A90D03B2ADC6C971CFFE39C22B_il2cpp_TypeInfo_var, L_9, 2);
		V_4 = L_10;
		// return (currentTrackedHandedness.IsLeft() && !trackingLeft) ||
		//        (currentTrackedHandedness.IsRight() && !trackingRight);
		uint8_t L_11 = __this->get_currentTrackedHandedness_18();
		bool L_12 = HandednessExtensions_IsLeft_mFB576AC9DA67076D5AC5791AF1C657AEE47A9B01(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0077;
		}
	}

IL_0060:
	{
		uint8_t L_14 = __this->get_currentTrackedHandedness_18();
		bool L_15 = HandednessExtensions_IsRight_mD846198B03AE619D946B29A031D45D8567DC2487(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		bool L_16 = V_4;
		G_B11_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		goto IL_0075;
	}

IL_0074:
	{
		G_B11_0 = 0;
	}

IL_0075:
	{
		G_B13_0 = G_B11_0;
		goto IL_0078;
	}

IL_0077:
	{
		G_B13_0 = 1;
	}

IL_0078:
	{
		V_1 = (bool)G_B13_0;
		goto IL_007f;
	}

IL_007b:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_007f;
	}

IL_007f:
	{
		// }
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mB3744585340991CD53CF056560AFC9A737B9BA49 (uint8_t ___hand0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return hand <= Handedness.Both;
		uint8_t L_0 = ___hand0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m4DB14A92F5210C8BA3F2D3CD98A74BF2A9AF9404 (int32_t ___type0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return type == TrackedObjectType.Head || type >= TrackedObjectType.ControllerRay;
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___type0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler__ctor_m5C1CC24827172A54FC7E4B0317CF4E30B20CAE3E (SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler__ctor_m5C1CC24827172A54FC7E4B0317CF4E30B20CAE3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TrackedObjectType trackedTargetType = TrackedObjectType.Head;
		__this->set_trackedTargetType_4(0);
		// private Handedness trackedHandness = Handedness.Both;
		__this->set_trackedHandness_5(3);
		// private TrackedHandJoint trackedHandJoint = TrackedHandJoint.Palm;
		__this->set_trackedHandJoint_6(2);
		// private bool updateSolvers = true;
		__this->set_updateSolvers_10((bool)1);
		// protected readonly List<Solver> solvers = new List<Solver>();
		List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 * L_0 = (List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25 *)il2cpp_codegen_object_new(List_1_t8567B7136D6912D33CB22E2DFA5B6E8A87CA2F25_il2cpp_TypeInfo_var);
		List_1__ctor_mED74C71BB206E75A734C858BC58A7FE78EADCC60(L_0, /*hidden argument*/List_1__ctor_mED74C71BB206E75A734C858BC58A7FE78EADCC60_RuntimeMethod_var);
		__this->set_solvers_11(L_0);
		// private bool updateSolversList = false;
		__this->set_updateSolversList_12((bool)0);
		// protected Handedness currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// protected Handedness preferredTrackedHandedness = Handedness.Left;
		__this->set_preferredTrackedHandedness_19(1);
		// private IMixedRealityHandJointService handJointService = null;
		__this->set_handJointService_22((RuntimeObject*)NULL);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MagneticSurfaces()
extern "C" IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* SurfaceMagnetism_get_MagneticSurfaces_m05B52B51F74CE871079B397A8158654936AF01FD (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* V_0 = NULL;
	{
		// get { return magneticSurfaces; }
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return magneticSurfaces; }
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_m44D9416EDA5F2D27BCA5EDCA9BD36BCF55187946 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		// set { magneticSurfaces = value; }
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_13(L_0);
		// set { magneticSurfaces = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxRaycastDistance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_mE1FF1AC2C6C8AF5632935CD642B79CCD27001401 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return maxRaycastDistance; }
		float L_0 = __this->get_maxRaycastDistance_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return maxRaycastDistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_mC83234353309BB10FF682ABF20FC207D4015A5D5 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxRaycastDistance = value; }
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		// set { maxRaycastDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxDistance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxDistance_mFE43A21244BACE5038CE88AB721A96248B5A5B30 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return maxRaycastDistance; }
		float L_0 = __this->get_maxRaycastDistance_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return maxRaycastDistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxDistance_m9A9F8DCFE5C5E2ABFF09BDC144C9F3A0163713DB (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxRaycastDistance = value; }
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		// set { maxRaycastDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ClosestDistance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_m04A85DFF06B170628C5C692B8CA4247317D26198 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return closestDistance; }
		float L_0 = __this->get_closestDistance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return closestDistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_ClosestDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_mD303EF2CD96662B4A8138775D996F021CCF5A415 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { closestDistance = value; }
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		// set { closestDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CloseDistance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_CloseDistance_m3A897C999B316ACA731EF59B3B642EB92759175F (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return closestDistance; }
		float L_0 = __this->get_closestDistance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return closestDistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CloseDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CloseDistance_m5369E55CF5DE5CC10A4EAF6C45C227F4747DB84E (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { closestDistance = value; }
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		// set { closestDistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceNormalOffset()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_mC90840BAD35CA52C831EA3F725010F37F365BA5A (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return surfaceNormalOffset; }
		float L_0 = __this->get_surfaceNormalOffset_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return surfaceNormalOffset; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_mA336B4588711D5A9990AA7A03FA28E798F7783F0 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { surfaceNormalOffset = value; }
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_16(L_0);
		// set { surfaceNormalOffset = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceRayOffset()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_mBE348BF4828D6A0A124753F5D708CA5E9BFE37B4 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return surfaceRayOffset; }
		float L_0 = __this->get_surfaceRayOffset_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return surfaceRayOffset; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_m327827489BD4D7808DAF74B61DBA02AFFB8A0E14 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { surfaceRayOffset = value; }
		float L_0 = ___value0;
		__this->set_surfaceRayOffset_17(L_0);
		// set { surfaceRayOffset = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mADDAA1452D0FCC4C48C2290871B00B91DA4F4718 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return raycastMode; }
		int32_t L_0 = __this->get_raycastMode_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return raycastMode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_RaycastMode(Microsoft.MixedReality.Toolkit.Physics.SceneQueryType)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_mC2C95B7847D028380D47EE6FCE85DB4D0F2E8875 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { raycastMode = value; }
		int32_t L_0 = ___value0;
		__this->set_raycastMode_18(L_0);
		// set { raycastMode = value; }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_BoxRaysPerEdge()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_m7272947F7F094534F17F537C32CDABB28C0B0CF2 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return boxRaysPerEdge; }
		int32_t L_0 = __this->get_boxRaysPerEdge_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return boxRaysPerEdge; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_mD28406D07F3F4442D97A9149B419DD508815D06B (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { boxRaysPerEdge = value; }
		int32_t L_0 = ___value0;
		__this->set_boxRaysPerEdge_19(L_0);
		// set { boxRaysPerEdge = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrthographicBoxCast()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_m3BF3F2D451D2D38CB1144AF043D3D62EC71EF7B7 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return orthographicBoxCast; }
		bool L_0 = __this->get_orthographicBoxCast_20();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return orthographicBoxCast; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_m051BA28C1677809D422356A4C941C9F45AA8BD33 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { orthographicBoxCast = value; }
		bool L_0 = ___value0;
		__this->set_orthographicBoxCast_20(L_0);
		// set { orthographicBoxCast = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaximumNormalVariance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_m6836555B4609571C962868779E682BA5C7DEE930 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return maximumNormalVariance; }
		float L_0 = __this->get_maximumNormalVariance_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return maximumNormalVariance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_m8228A1767A91558366B9065DFDCDA2763CF38F9E (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maximumNormalVariance = value; }
		float L_0 = ___value0;
		__this->set_maximumNormalVariance_21(L_0);
		// set { maximumNormalVariance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SphereSize()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_m8E4342B73593B393F66F4D81B854C9C886F2628A (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return sphereSize; }
		float L_0 = __this->get_sphereSize_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return sphereSize; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SphereSize(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_m149670A73691A70A187246AA82B4BC99C213988F (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { sphereSize = value; }
		float L_0 = ___value0;
		__this->set_sphereSize_22(L_0);
		// set { sphereSize = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_VolumeCastSizeOverride()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_m1F61D90682A94D513180632E77318950A1F07764 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return volumeCastSizeOverride; }
		float L_0 = __this->get_volumeCastSizeOverride_23();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return volumeCastSizeOverride; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_m6CF0039B8A6905124C6F4D5152B4C34B91D0A161 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { volumeCastSizeOverride = value; }
		float L_0 = ___value0;
		__this->set_volumeCastSizeOverride_23(L_0);
		// set { volumeCastSizeOverride = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_m78F43AA341F29CA718151429D8E11ED58AC7967B (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return useLinkedAltScaleOverride; }
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return useLinkedAltScaleOverride; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_m6EF482B9DAF0E83ECF48FD8CB3CE47ADD22AA245 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useLinkedAltScaleOverride = value; }
		bool L_0 = ___value0;
		__this->set_useLinkedAltScaleOverride_24(L_0);
		// set { useLinkedAltScaleOverride = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m88A630C98C183E60E73B588F73734FE798A368E3 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return currentRaycastDirectionMode; }
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return currentRaycastDirectionMode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentRaycastDirectionMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_m263F065F1341344B7D1510701C5D62B3975C9021 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { currentRaycastDirectionMode = value; }
		int32_t L_0 = ___value0;
		__this->set_currentRaycastDirectionMode_25(L_0);
		// set { currentRaycastDirectionMode = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m5F0A78261F7AA1533712760ED9E8895E31AD097A (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return orientationMode; }
		int32_t L_0 = __this->get_orientationMode_26();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return orientationMode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentOrientationMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_m6B23882D69572981B7C2C6CA1AF9A71E12A2B7B2 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationMode = value; }
		int32_t L_0 = ___value0;
		__this->set_orientationMode_26(L_0);
		// set { orientationMode = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrientationBlend()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_mC6C28192FBCB39C4AC003106AD5396BE05A6770B (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return orientationBlend; }
		float L_0 = __this->get_orientationBlend_27();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return orientationBlend; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrientationBlend(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_mEE8E5B2BE8474D329E5D24F62E31E5547E8E5505 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationBlend = value; }
		float L_0 = ___value0;
		__this->set_orientationBlend_27(L_0);
		// set { orientationBlend = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_mB4AD8DC98D58567FF790A551EA3FE435488997BD (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return keepOrientationVertical; }
		bool L_0 = __this->get_keepOrientationVertical_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return keepOrientationVertical; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_m46F892A4A132D1FFF00C6C32073BFAACBAF68B09 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { keepOrientationVertical = value; }
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_28(L_0);
		// set { keepOrientationVertical = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m81FDE057373C16F0C93E495357AA3D0D11B575A5 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return debugEnabled; }
		bool L_0 = __this->get_debugEnabled_29();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return debugEnabled; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_m867EB15C33BA7BE3C816841679FE7ECB9ABA5926 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { debugEnabled = value; }
		bool L_0 = ___value0;
		__this->set_debugEnabled_29(L_0);
		// set { debugEnabled = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OnSurface()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m6C3BDD6FD8C795F9A6327FA88867B654868FB67F (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_mC77EEB98AFED38E4DB777C7BBF7742F2CD2CE1F4 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m23DB9CCF51CDA90AA4ED55DC205B18282AEBF682 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastOrigin_m23DB9CCF51CDA90AA4ED55DC205B18282AEBF682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_0 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_m5D6FAFB761BE4F6746BD62AB555ED328B1639614 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastEndPoint_m5D6FAFB761BE4F6746BD62AB555ED328B1639614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t G_B5_0 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = SurfaceMagnetism_get_RaycastOrigin_m23DB9CCF51CDA90AA4ED55DC205B18282AEBF682(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 endPoint = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_1 = L_1;
		// switch (CurrentRaycastDirectionMode)
		int32_t L_2 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m88A630C98C183E60E73B588F73734FE798A368E3(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0029:
	{
		// if (SolverHandler != null && SolverHandler.TransformTarget != null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_4 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_6 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 0;
	}

IL_004b:
	{
		V_3 = (bool)G_B5_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_10 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_13 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0077:
	{
		// break;
		goto IL_0095;
	}

IL_0079:
	{
		// endPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// break;
		goto IL_0095;
	}

IL_0087:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_19 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = SolverHandler_get_GoalPosition_m8F400C43CDA714C94FD3EB49256E391D7C0B0681(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// break;
		goto IL_0095;
	}

IL_0095:
	{
		// return endPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_1;
		V_4 = L_21;
		goto IL_009a;
	}

IL_009a:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastDirection_m2DDCC12330325E042CEA2A6C336B8DC157248E13 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastDirection_m2DDCC12330325E042CEA2A6C336B8DC157248E13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		// Vector3 direction = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (CurrentRaycastDirectionMode == RaycastDirectionMode.TrackedTargetForward)
		int32_t L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m88A630C98C183E60E73B588F73734FE798A368E3(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_3 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_7 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m25D9B8C0B6A83157196B2D14894853D1D7E34160(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_003d:
	{
		goto IL_005c;
	}

IL_0040:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = SurfaceMagnetism_get_RaycastEndPoint_m5D6FAFB761BE4F6746BD62AB555ED328B1639614(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SurfaceMagnetism_get_RaycastOrigin_m23DB9CCF51CDA90AA4ED55DC205B18282AEBF682(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_005c:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		V_4 = L_14;
		goto IL_0061;
	}

IL_0061:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_4;
		return L_15;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m2830F3BA4EA9991AB8276C7875C1BA6EF8BAF544 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float G_B3_0 = 0.0f;
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = __this->get_volumeCastSizeOverride_23();
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_0010:
	{
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_2 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5  L_3 = SolverHandler_get_AltScale_mDE27E890F468BC95A4983042E9A12A0B17A3D121(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3Smoothed_get_Current_m668B7F80833566678BB9DB411EA46AC9615D5090((Vector3Smoothed_t56C0FC4A86F576E2914EE6A780E1FEFFE21309C5 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m51175EF1CF25AF8041EEEB8CDFCF87B7EFE8E989 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_CalculateMagnetismOrientation_m51175EF1CF25AF8041EEEB8CDFCF87B7EFE8E989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		// if (KeepOrientationVertical)
		bool L_0 = SurfaceMagnetism_get_KeepOrientationVertical_mB4AD8DC98D58567FF790A551EA3FE435488997BD(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// direction.y = 0;
		(&___direction0)->set_y_3((0.0f));
		// surfaceNormal.y = 0;
		(&___surfaceNormal1)->set_y_3((0.0f));
	}

IL_0025:
	{
		// var trackedReferenceRotation = Quaternion.LookRotation(-direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// var surfaceReferenceRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___surfaceNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// switch (CurrentOrientationMode)
		int32_t L_10 = SurfaceMagnetism_get_CurrentOrientationMode_m5F0A78261F7AA1533712760ED9E8895E31AD097A(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_007a;
			}
			case 3:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_0066:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_12 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = SolverHandler_get_GoalRotation_mE7F8998BDFE718E683595AF522725BD46F1E2176(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		goto IL_0099;
	}

IL_0075:
	{
		// return trackedReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_0;
		V_4 = L_14;
		goto IL_0099;
	}

IL_007a:
	{
		// return surfaceReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = V_1;
		V_4 = L_15;
		goto IL_0099;
	}

IL_007f:
	{
		// return Quaternion.Slerp(trackedReferenceRotation, surfaceReferenceRotation, orientationBlend);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_1;
		float L_18 = __this->get_orientationBlend_27();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		goto IL_0099;
	}

IL_0090:
	{
		// return Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_4 = L_20;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = V_4;
		return L_21;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_m1366BDA6DA5193118B0E688E28460AA0732CC0DD (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SolverUpdate_m1366BDA6DA5193118B0E688E28460AA0732CC0DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// GoalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_mD0D76D0227A2A7428D0D85272201D1DB3DCEFF99(__this, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = WorkingRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_WorkingRotation_m48DA7A8FF260891A9E53E0F23D9222C5EE1A21C0(__this, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_1, /*hidden argument*/NULL);
		// Vector3 origin = RaycastOrigin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SurfaceMagnetism_get_RaycastOrigin_m23DB9CCF51CDA90AA4ED55DC205B18282AEBF682(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 endpoint = RaycastEndPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SurfaceMagnetism_get_RaycastEndPoint_m5D6FAFB761BE4F6746BD62AB555ED328B1639614(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		// currentRayStep.UpdateRayStep(ref origin, ref endpoint);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_4 = __this->get_address_of_currentRayStep_32();
		RayStep_UpdateRayStep_mA05E209CC6E9A2D50AAF62FA298672AC33C709B9((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		// if (currentRayStep.Direction == Vector3.zero)
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_5 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_8 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// return;
		goto IL_00ed;
	}

IL_0058:
	{
		// if (DebugEnabled)
		bool L_10 = SurfaceMagnetism_get_DebugEnabled_m81FDE057373C16F0C93E495357AA3D0D11B575A5(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// Debug.DrawLine(currentRayStep.Origin, currentRayStep.Terminus, Color.magenta);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_12 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RayStep_get_Origin_mEE117A71F230B4F0EB15E986FFA5E86849E8C8A1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_12, /*hidden argument*/NULL);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_14 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Terminus_m9141E374864032919BE53466E9BE8E907CF3BEB3((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_14, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// switch (RaycastMode)
		int32_t L_17 = SurfaceMagnetism_get_RaycastMode_mADDAA1452D0FCC4C48C2290871B00B91DA4F4718(__this, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		switch (L_18)
		{
			case 0:
			{
				goto IL_00a6;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_00c4;
			}
			case 3:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00ed;
	}

IL_00a6:
	{
		// SimpleRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_19 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SimpleRaycastStepUpdate_mE9637B2D2DAFB64D5A1303C3F1C476FB299AE0FF(__this, (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_19, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00b5:
	{
		// BoxRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_20 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_BoxRaycastStepUpdate_m00F3FE4065064FF707CA299A4D8D5BEC7A2A9D68(__this, (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_20, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00c4:
	{
		// SphereRaycastStepUpdate(ref this.currentRayStep);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_21 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SphereRaycastStepUpdate_mE15D0BC44F816F08924BEEE6608992CAF20BF400(__this, (RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_21, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00d3:
	{
		// Debug.LogError("Raycast mode set to SphereOverlap which is not valid for SurfaceMagnetism component. Disabling update solvers...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_t44F0C43151D592FE202920B24C466CDA96FF40C2 * L_22 = ((Solver_tDBEB3FF9DDDBBC02214325E78DBE839294AE4948 *)__this)->get_SolverHandler_12();
		NullCheck(L_22);
		SolverHandler_set_UpdateSolvers_mBC103252673E2FB706BD947C6FF005ED42626C25(L_22, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStepU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_mE9637B2D2DAFB64D5A1303C3F1C476FB299AE0FF (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SimpleRaycastStepUpdate_mE9637B2D2DAFB64D5A1303C3F1C476FB299AE0FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	{
		// isHit = MixedRealityRaycaster.RaycastSimplePhysicsStep(rayStep, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_0 = ___rayStep0;
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  L_1 = (*(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_0);
		float L_2 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_3 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tA29E28A1DC5DE3A3759A9A67BB07377B3FF55D4C_il2cpp_TypeInfo_var);
		bool L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m294D3D182E4CC5B8604FF97A5428DC81E11996AE(L_1, L_2, L_3, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// OnSurface = isHit;
		bool L_5 = V_0;
		SurfaceMagnetism_set_OnSurface_mC77EEB98AFED38E4DB777C7BBF7742F2CD2CE1F4(__this, L_5, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_7 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = RayStep_get_Origin_mEE117A71F230B4F0EB15E986FFA5E86849E8C8A1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// float length = hitDelta.magnitude;
		float L_10 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		// if (length < closestDistance)
		float L_11 = V_3;
		float L_12 = __this->get_closestDistance_15();
		V_4 = (bool)((((float)L_11) < ((float)L_12))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_mEE117A71F230B4F0EB15E986FFA5E86849E8C8A1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_14, /*hidden argument*/NULL);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_16 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_15, L_19, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_20, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// if (isHit)
		bool L_21 = V_0;
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_24 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_surfaceRayOffset_17();
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_29 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_28, L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_31, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_32, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_33 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = SurfaceMagnetism_CalculateMagnetismOrientation_m51175EF1CF25AF8041EEEB8CDFCF87B7EFE8E989(__this, L_34, L_35, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_36, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStepU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mE15D0BC44F816F08924BEEE6608992CAF20BF400 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SphereRaycastStepUpdate_mE15D0BC44F816F08924BEEE6608992CAF20BF400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	float G_B3_0 = 0.0f;
	{
		// float size = ScaleOverride > 0 ? ScaleOverride : transform.lossyScale.x * sphereSize;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m2830F3BA4EA9991AB8276C7875C1BA6EF8BAF544(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0027;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_sphereSize_22();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		goto IL_002d;
	}

IL_0027:
	{
		float L_5 = SurfaceMagnetism_get_ScaleOverride_m2830F3BA4EA9991AB8276C7875C1BA6EF8BAF544(__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_2 = G_B3_0;
		// isHit = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_6 = ___rayStep0;
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  L_7 = (*(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_6);
		float L_8 = V_2;
		float L_9 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_10 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tA29E28A1DC5DE3A3759A9A67BB07377B3FF55D4C_il2cpp_TypeInfo_var);
		bool L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_m4FA07E6B4EF75FF903D02D7639661A3482B17064(L_7, L_8, L_9, L_10, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		// OnSurface = isHit;
		bool L_12 = V_0;
		SurfaceMagnetism_set_OnSurface_mC77EEB98AFED38E4DB777C7BBF7742F2CD2CE1F4(__this, L_12, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_mEE117A71F230B4F0EB15E986FFA5E86849E8C8A1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// float length = hitDelta.magnitude;
		float L_17 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_17;
		// if (length < closestDistance)
		float L_18 = V_4;
		float L_19 = __this->get_closestDistance_15();
		V_5 = (bool)((((float)L_18) < ((float)L_19))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_21 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RayStep_get_Origin_mEE117A71F230B4F0EB15E986FFA5E86849E8C8A1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_21, /*hidden argument*/NULL);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_23 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_26, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_27, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// if (isHit)
		bool L_28 = V_0;
		V_6 = L_28;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0102;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_31 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_31, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_30, L_33, /*hidden argument*/NULL);
		float L_35 = __this->get_surfaceRayOffset_17();
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_36 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_35, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_34, L_38, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_39, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_40 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = SurfaceMagnetism_CalculateMagnetismOrientation_m51175EF1CF25AF8041EEEB8CDFCF87B7EFE8E989(__this, L_41, L_42, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_43, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStepU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m00F3FE4065064FF707CA299A4D8D5BEC7A2A9D68 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_BoxRaycastStepUpdate_m00F3FE4065064FF707CA299A4D8D5BEC7A2A9D68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_4 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_6 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	bool V_14 = false;
	float V_15 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	int32_t G_B12_0 = 0;
	{
		// Vector3 scale = ScaleOverride > 0 ? transform.lossyScale.normalized * ScaleOverride : transform.lossyScale;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m2830F3BA4EA9991AB8276C7875C1BA6EF8BAF544(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_003a;
	}

IL_001b:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		float L_6 = SurfaceMagnetism_get_ScaleOverride_m2830F3BA4EA9991AB8276C7875C1BA6EF8BAF544(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B3_0;
		// Quaternion orientation = orientationMode == OrientationMode.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_8 = __this->get_orientationMode_26();
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_9 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_m51175EF1CF25AF8041EEEB8CDFCF87B7EFE8E989(__this, L_10, L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		goto IL_0066;
	}

IL_0056:
	{
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_13 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_14, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
	}

IL_0066:
	{
		V_1 = G_B6_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// if (this.boxCollider == null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_21 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		// this.boxCollider = GetComponent<BoxCollider>();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_24 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		__this->set_boxCollider_33(L_24);
	}

IL_0094:
	{
		// Debug.Assert(boxCollider != null, $"Missing a box collider for Surface Magnetism on {gameObject}");
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_25 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_25, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		String_t* L_28 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral3A8470CF56DD2F02DFDDA06EEF61875E5092940A, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC(L_26, L_28, /*hidden argument*/NULL);
		// Vector3 extents = boxCollider.size;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_29 = __this->get_boxCollider_33();
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxRaycastDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, false, out positions, out normals, out hits))
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_31 = ___rayStep0;
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B  L_32 = (*(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_36 = V_2;
		float L_37 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_38 = __this->get_magneticSurfaces_13();
		int32_t L_39 = __this->get_boxRaysPerEdge_19();
		bool L_40 = __this->get_orthographicBoxCast_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tA29E28A1DC5DE3A3759A9A67BB07377B3FF55D4C_il2cpp_TypeInfo_var);
		bool L_41 = MixedRealityRaycaster_RaycastBoxPhysicsStep_mA8878A7D659C2851AD72731CE3298A01EC259EEE(L_32, L_33, L_35, L_36, L_37, L_38, L_39, L_40, (bool)0, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_4), (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_5), (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040**)(&V_6), /*hidden argument*/NULL);
		V_9 = L_41;
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_0277;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions, normals, hits, boxCollider.size.x, maximumNormalVariance, false, orientationMode == OrientationMode.None, out plane, out distance);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_43 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = RayStep_get_Origin_mEE117A71F230B4F0EB15E986FFA5E86849E8C8A1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_43, /*hidden argument*/NULL);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_45 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_45, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_47 = V_4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_48 = V_5;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_49 = V_6;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_50 = __this->get_boxCollider_33();
		NullCheck(L_50);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_2();
		float L_53 = __this->get_maximumNormalVariance_21();
		int32_t L_54 = __this->get_orientationMode_26();
		SurfaceMagnetism_FindPlacementPlane_mC55DCD94A1DEEA5DD57FA0FEA6D34500F62866A9(__this, L_44, L_46, L_47, L_48, L_49, L_52, L_53, (bool)0, (bool)((((int32_t)L_54) == ((int32_t)0))? 1 : 0), (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), (float*)(&V_11), /*hidden argument*/NULL);
		// float verticalCorrectionOffset = 0;
		V_12 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		bool L_56 = SurfaceMagnetism_IsNormalVertical_m11558881BEBE9280171A9A9967E76AAE30A7FE68(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_016f;
		}
	}
	{
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_57 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_60 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_59, (0.0f), /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
		goto IL_0170;
	}

IL_016f:
	{
		G_B12_0 = 0;
	}

IL_0170:
	{
		V_14 = (bool)G_B12_0;
		bool L_61 = V_14;
		if (!L_61)
		{
			goto IL_01ce;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = V_3;
		float L_63 = L_62.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64;
		memset(&L_64, 0, sizeof(L_64));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_64), (0.0f), ((float)il2cpp_codegen_multiply((float)L_63, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_64, /*hidden argument*/NULL);
		V_7 = L_65;
		float L_66 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_15 = L_66;
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		float L_67 = V_15;
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_68 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_68, /*hidden argument*/NULL);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_70 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_69, L_72, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_67, L_73, /*hidden argument*/NULL);
		V_16 = L_74;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_75 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_12 = ((-L_75));
	}

IL_01ce:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = V_3;
		float L_77 = L_76.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78;
		memset(&L_78, 0, sizeof(L_78));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_78), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_77, (float)(0.5f))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_78, /*hidden argument*/NULL);
		V_7 = L_79;
		float L_80 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_13 = L_80;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closestDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_81 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = RayStep_get_Origin_mEE117A71F230B4F0EB15E986FFA5E86849E8C8A1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_81, /*hidden argument*/NULL);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_83 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_83, /*hidden argument*/NULL);
		float L_85 = __this->get_closestDistance_15();
		float L_86 = V_11;
		float L_87 = __this->get_surfaceRayOffset_17();
		float L_88 = V_13;
		float L_89 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_90 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_85, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_86, (float)L_87)), (float)L_88)), (float)L_89)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_84, L_90, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_82, L_91, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		float L_94 = V_13;
		float L_95 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_93, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_94)), (float)L_95)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_92, L_96, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m67C74577F80178171092A23D35F8704C892F590B(__this, L_97, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_98 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = RayStep_get_Direction_m63FC4E16067FE5019B97FF27C3469FA63A7DFBA1((RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B *)L_98, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_101 = SurfaceMagnetism_CalculateMagnetismOrientation_m51175EF1CF25AF8041EEEB8CDFCF87B7EFE8E989(__this, L_99, L_100, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m04792AC44D99D0C61495B94EC6C9014AC5641C09(__this, L_101, /*hidden argument*/NULL);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_mC77EEB98AFED38E4DB777C7BBF7742F2CD2CE1F4(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0281;
	}

IL_0277:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_mC77EEB98AFED38E4DB777C7BBF7742F2CD2CE1F4(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0281:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.PlaneU26,System.SingleU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mC55DCD94A1DEEA5DD57FA0FEA6D34500F62866A9 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_FindPlacementPlane_mC55DCD94A1DEEA5DD57FA0FEA6D34500F62866A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset(&V_12, 0, sizeof(V_12));
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	bool V_21 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_22;
	memset(&V_22, 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	int32_t V_25 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_26;
	memset(&V_26, 0, sizeof(V_26));
	float V_27 = 0.0f;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	int32_t V_34 = 0;
	float V_35 = 0.0f;
	float V_36 = 0.0f;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_45;
	memset(&V_45, 0, sizeof(V_45));
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	float V_50 = 0.0f;
	bool V_51 = false;
	int32_t G_B19_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B45_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B64_0;
	memset(&G_B64_0, 0, sizeof(G_B64_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B63_0;
	memset(&G_B63_0, 0, sizeof(G_B63_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B65_0;
	memset(&G_B65_0, 0, sizeof(G_B65_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B65_1;
	memset(&G_B65_1, 0, sizeof(G_B65_1));
	int32_t G_B77_0 = 0;
	int32_t G_B81_0 = 0;
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		// Vector3 originalDirection = direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___direction1;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___constrainVertical7;
		V_13 = L_2;
		bool L_3 = V_13;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// direction.y = 0.0f;
		(&___direction1)->set_y_3((0.0f));
		// direction = direction.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___direction1), /*hidden argument*/NULL);
		___direction1 = L_4;
	}

IL_0026:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_5 = ___closestDistance10;
		*((float*)L_5) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPointIdx = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_5 = L_6;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_14 = 0;
		goto IL_00af;
	}

IL_0045:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_7 = ___hits4;
		int32_t L_8 = V_14;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (uint8_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_15 = (bool)L_10;
		bool L_11 = V_15;
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = ___positions2;
		int32_t L_14 = V_14;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___origin0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_12, L_18, /*hidden argument*/NULL);
		V_16 = L_19;
		// if (distance < closestDistance)
		float L_20 = V_16;
		float* L_21 = ___closestDistance10;
		float L_22 = *((float*)L_21);
		V_17 = (bool)((((float)L_20) < ((float)L_22))? 1 : 0);
		bool L_23 = V_17;
		if (!L_23)
		{
			goto IL_007f;
		}
	}
	{
		// closestPointIdx = hitIndex;
		int32_t L_24 = V_14;
		V_3 = L_24;
		// closestDistance = distance;
		float* L_25 = ___closestDistance10;
		float L_26 = V_16;
		*((float*)L_25) = (float)L_26;
	}

IL_007f:
	{
		// if (distance > farthestDistance)
		float L_27 = V_16;
		float L_28 = V_4;
		V_18 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_18;
		if (!L_29)
		{
			goto IL_0091;
		}
	}
	{
		// farthestDistance = distance;
		float L_30 = V_16;
		V_4 = L_30;
	}

IL_0091:
	{
		// averageNormal += normals[hitIndex];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_32 = ___normals3;
		int32_t L_33 = V_14;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		// ++numHits;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00a8:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_38 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00af:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_39 = V_14;
		int32_t L_40 = V_0;
		V_19 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_19;
		if (L_41)
		{
			goto IL_0045;
		}
	}
	{
		// Vector3 closestPoint = positions[closestPointIdx];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_42 = ___positions2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = L_45;
		// averageNormal /= numHits;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = V_5;
		int32_t L_47 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_46, (((float)((float)L_47))), /*hidden argument*/NULL);
		V_5 = L_48;
		// float variance = 0;
		V_7 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_20 = 0;
		goto IL_010d;
	}

IL_00da:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_49 = ___hits4;
		int32_t L_50 = V_20;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (uint8_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_21 = (bool)L_52;
		bool L_53 = V_21;
		if (!L_53)
		{
			goto IL_0106;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_54 = V_7;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_55 = ___normals3;
		int32_t L_56 = V_20;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_58, L_59, /*hidden argument*/NULL);
		V_22 = L_60;
		float L_61 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_54, (float)L_61));
	}

IL_0106:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_62 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_010d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_63 = V_20;
		int32_t L_64 = V_0;
		V_23 = (bool)((((int32_t)L_63) < ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_23;
		if (L_65)
		{
			goto IL_00da;
		}
	}
	{
		// variance /= numHits;
		float L_66 = V_7;
		int32_t L_67 = V_2;
		V_7 = ((float)((float)L_66/(float)(((float)((float)L_67)))));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_68 = V_7;
		float L_69 = ___maxNormalVariance6;
		if ((((float)L_68) > ((float)L_69)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_70 = V_2;
		int32_t L_71 = V_0;
		G_B19_0 = ((((float)(((float)((float)L_70)))) < ((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_71))), (float)(0.25f)))))? 1 : 0);
		goto IL_0134;
	}

IL_0133:
	{
		G_B19_0 = 1;
	}

IL_0134:
	{
		V_24 = (bool)G_B19_0;
		bool L_72 = V_24;
		if (!L_72)
		{
			goto IL_0154;
		}
	}
	{
		// plane = new Plane(-direction, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_73 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_74, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_77;
		memset(&L_77, 0, sizeof(L_77));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_77), L_75, L_76, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_73 = L_77;
		// return;
		goto IL_04ce;
	}

IL_0154:
	{
		// var lowAngle = float.PositiveInfinity;
		V_8 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_9 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_10 = (-1);
		// int highIndex = -1;
		V_11 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_25 = 0;
		goto IL_01fc;
	}

IL_0170:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_78 = ___hits4;
		int32_t L_79 = V_25;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint8_t L_81 = (uint8_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if (!L_81)
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_82 = V_25;
		int32_t L_83 = V_3;
		G_B25_0 = ((((int32_t)L_82) == ((int32_t)L_83))? 1 : 0);
		goto IL_0180;
	}

IL_017f:
	{
		G_B25_0 = 1;
	}

IL_0180:
	{
		V_28 = (bool)G_B25_0;
		bool L_84 = V_28;
		if (!L_84)
		{
			goto IL_0189;
		}
	}
	{
		// continue;
		goto IL_01f6;
	}

IL_0189:
	{
		// Vector3 difference = positions[hitIndex] - closestPoint;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_85 = ___positions2;
		int32_t L_86 = V_25;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_88, L_89, /*hidden argument*/NULL);
		V_26 = L_90;
		// if (constrainVertical)
		bool L_91 = ___constrainVertical7;
		V_29 = L_91;
		bool L_92 = V_29;
		if (!L_92)
		{
			goto IL_01cd;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_26)->set_y_3((0.0f));
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_26), /*hidden argument*/NULL);
		// if (difference == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_95 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_93, L_94, /*hidden argument*/NULL);
		V_30 = L_95;
		bool L_96 = V_30;
		if (!L_96)
		{
			goto IL_01cc;
		}
	}
	{
		// continue;
		goto IL_01f6;
	}

IL_01cc:
	{
	}

IL_01cd:
	{
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_26), /*hidden argument*/NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_99 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_97, L_98, /*hidden argument*/NULL);
		V_27 = L_99;
		// if (angle < lowAngle)
		float L_100 = V_27;
		float L_101 = V_8;
		V_31 = (bool)((((float)L_100) < ((float)L_101))? 1 : 0);
		bool L_102 = V_31;
		if (!L_102)
		{
			goto IL_01f5;
		}
	}
	{
		// lowAngle = angle;
		float L_103 = V_27;
		V_8 = L_103;
		// lowIndex = hitIndex;
		int32_t L_104 = V_25;
		V_10 = L_104;
	}

IL_01f5:
	{
	}

IL_01f6:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_105 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_01fc:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_106 = V_25;
		int32_t L_107 = V_0;
		V_32 = (bool)((((int32_t)L_106) < ((int32_t)L_107))? 1 : 0);
		bool L_108 = V_32;
		if (L_108)
		{
			goto IL_0170;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_109 = ___constrainVertical7;
		if (L_109)
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_110 = V_10;
		G_B39_0 = ((((int32_t)((((int32_t)L_110) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0219;
	}

IL_0218:
	{
		G_B39_0 = 0;
	}

IL_0219:
	{
		V_33 = (bool)G_B39_0;
		bool L_111 = V_33;
		if (!L_111)
		{
			goto IL_0300;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_34 = 0;
		goto IL_02f1;
	}

IL_022b:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx || hitIndex == lowIndex)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_112 = ___hits4;
		int32_t L_113 = V_34;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		uint8_t L_115 = (uint8_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		if (!L_115)
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_116 = V_34;
		int32_t L_117 = V_3;
		if ((((int32_t)L_116) == ((int32_t)L_117)))
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_118 = V_34;
		int32_t L_119 = V_10;
		G_B45_0 = ((((int32_t)L_118) == ((int32_t)L_119))? 1 : 0);
		goto IL_0241;
	}

IL_0240:
	{
		G_B45_0 = 1;
	}

IL_0241:
	{
		V_37 = (bool)G_B45_0;
		bool L_120 = V_37;
		if (!L_120)
		{
			goto IL_024d;
		}
	}
	{
		// continue;
		goto IL_02eb;
	}

IL_024d:
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - closestPoint).normalized, (positions[lowIndex] - closestPoint).normalized));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_121 = ___positions2;
		int32_t L_122 = V_34;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_125 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_126 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_124, L_125, /*hidden argument*/NULL);
		V_22 = L_126;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_128 = ___positions2;
		int32_t L_129 = V_10;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_132 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_133 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_131, L_132, /*hidden argument*/NULL);
		V_22 = L_133;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_134 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		float L_135 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_127, L_134, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_136 = fabsf(L_135);
		V_35 = L_136;
		// if (dot > MaxDot)
		float L_137 = V_35;
		V_38 = (bool)((((float)L_137) > ((float)(0.97f)))? 1 : 0);
		bool L_138 = V_38;
		if (!L_138)
		{
			goto IL_029b;
		}
	}
	{
		// continue;
		goto IL_02eb;
	}

IL_029b:
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - closestPoint, positions[hitIndex] - closestPoint).normalized));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_140 = ___positions2;
		int32_t L_141 = V_10;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_145 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_143, L_144, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_146 = ___positions2;
		int32_t L_147 = V_34;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_150 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_151 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_149, L_150, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_145, L_151, /*hidden argument*/NULL);
		V_22 = L_152;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_153 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		float L_154 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_139, L_153, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_155 = fabsf(L_154);
		V_36 = L_155;
		// if (nextAngle > highAngle)
		float L_156 = V_36;
		float L_157 = V_9;
		V_39 = (bool)((((float)L_156) > ((float)L_157))? 1 : 0);
		bool L_158 = V_39;
		if (!L_158)
		{
			goto IL_02ea;
		}
	}
	{
		// highAngle = nextAngle;
		float L_159 = V_36;
		V_9 = L_159;
		// highIndex = hitIndex;
		int32_t L_160 = V_34;
		V_11 = L_160;
	}

IL_02ea:
	{
	}

IL_02eb:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_161 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)1));
	}

IL_02f1:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_162 = V_34;
		int32_t L_163 = V_0;
		V_40 = (bool)((((int32_t)L_162) < ((int32_t)L_163))? 1 : 0);
		bool L_164 = V_40;
		if (L_164)
		{
			goto IL_022b;
		}
	}
	{
	}

IL_0300:
	{
		// if (lowIndex != -1)
		int32_t L_165 = V_10;
		V_41 = (bool)((((int32_t)((((int32_t)L_165) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_166 = V_41;
		if (!L_166)
		{
			goto IL_0404;
		}
	}
	{
		// if (debugEnabled)
		bool L_167 = __this->get_debugEnabled_29();
		V_42 = L_167;
		bool L_168 = V_42;
		if (!L_168)
		{
			goto IL_0335;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[lowIndex], Color.red);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_169 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_170 = ___positions2;
		int32_t L_171 = V_10;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_174 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_169, L_173, L_174, /*hidden argument*/NULL);
	}

IL_0335:
	{
		// if (highIndex != -1)
		int32_t L_175 = V_11;
		V_43 = (bool)((((int32_t)((((int32_t)L_175) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_176 = V_43;
		if (!L_176)
		{
			goto IL_0398;
		}
	}
	{
		// if (debugEnabled)
		bool L_177 = __this->get_debugEnabled_29();
		V_44 = L_177;
		bool L_178 = V_44;
		if (!L_178)
		{
			goto IL_0367;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[highIndex], Color.green);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_179 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_180 = ___positions2;
		int32_t L_181 = V_11;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_184 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_179, L_183, L_184, /*hidden argument*/NULL);
	}

IL_0367:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, positions[highIndex] - closestPoint).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_185 = ___positions2;
		int32_t L_186 = V_10;
		NullCheck(L_185);
		int32_t L_187 = L_186;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_188 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_190 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_188, L_189, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_191 = ___positions2;
		int32_t L_192 = V_11;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_195 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_196 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_194, L_195, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_197 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_190, L_196, /*hidden argument*/NULL);
		V_22 = L_197;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_198 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_12 = L_198;
		goto IL_03dd;
	}

IL_0398:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - closestPoint, direction);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_199 = ___positions2;
		int32_t L_200 = V_10;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_202 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_203 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_204 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_202, L_203, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_205 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_206 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_204, L_205, /*hidden argument*/NULL);
		V_45 = L_206;
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_207 = ___positions2;
		int32_t L_208 = V_10;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_211 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_212 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_210, L_211, /*hidden argument*/NULL);
		bool L_213 = ___constrainVertical7;
		G_B63_0 = L_212;
		if (L_213)
		{
			G_B64_0 = L_212;
			goto IL_03c7;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_214 = V_45;
		G_B65_0 = L_214;
		G_B65_1 = G_B63_0;
		goto IL_03cc;
	}

IL_03c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_215 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B65_0 = L_215;
		G_B65_1 = G_B64_0;
	}

IL_03cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_216 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(G_B65_1, G_B65_0, /*hidden argument*/NULL);
		V_22 = L_216;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_217 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_12 = L_217;
	}

IL_03dd:
	{
		// if (debugEnabled)
		bool L_218 = __this->get_debugEnabled_29();
		V_46 = L_218;
		bool L_219 = V_46;
		if (!L_219)
		{
			goto IL_0401;
		}
	}
	{
		// Debug.DrawLine(closestPoint, closestPoint + placementNormal, Color.blue);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_220 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_221 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_222 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_223 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_221, L_222, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_224 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_220, L_223, L_224, /*hidden argument*/NULL);
	}

IL_0401:
	{
		goto IL_0413;
	}

IL_0404:
	{
		// placementNormal = direction * -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_225 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_226 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_225, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_226;
	}

IL_0413:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_227 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_228 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_229 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_227, L_228, /*hidden argument*/NULL);
		V_47 = (bool)((((float)L_229) > ((float)(0.0f)))? 1 : 0);
		bool L_230 = V_47;
		if (!L_230)
		{
			goto IL_0438;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_231 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_232 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_231, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_232;
	}

IL_0438:
	{
		// plane = new Plane(placementNormal, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_233 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_234 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_235 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_236;
		memset(&L_236, 0, sizeof(L_236));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_236), L_234, L_235, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_233 = L_236;
		// if (debugEnabled)
		bool L_237 = __this->get_debugEnabled_29();
		V_48 = L_237;
		bool L_238 = V_48;
		if (!L_238)
		{
			goto IL_0465;
		}
	}
	{
		// Debug.DrawRay(closestPoint, placementNormal, Color.cyan);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_239 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_240 = V_12;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_241 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_239, L_240, L_241, /*hidden argument*/NULL);
	}

IL_0465:
	{
		// if (!useClosestDistance && closestPointIdx >= 0)
		bool L_242 = ___useClosestDistance8;
		if (L_242)
		{
			goto IL_0472;
		}
	}
	{
		int32_t L_243 = V_3;
		G_B77_0 = ((((int32_t)((((int32_t)L_243) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0473;
	}

IL_0472:
	{
		G_B77_0 = 0;
	}

IL_0473:
	{
		V_49 = (bool)G_B77_0;
		bool L_244 = V_49;
		if (!L_244)
		{
			goto IL_04ce;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_245 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_246 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_247 = V_1;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_248;
		memset(&L_248, 0, sizeof(L_248));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_248), L_246, L_247, /*hidden argument*/NULL);
		bool L_249 = Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_245, L_248, (float*)(&V_50), /*hidden argument*/NULL);
		if (L_249)
		{
			goto IL_049d;
		}
	}
	{
		bool L_250 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_50), (0.0f), /*hidden argument*/NULL);
		G_B81_0 = ((((int32_t)L_250) == ((int32_t)0))? 1 : 0);
		goto IL_049e;
	}

IL_049d:
	{
		G_B81_0 = 1;
	}

IL_049e:
	{
		V_51 = (bool)G_B81_0;
		bool L_251 = V_51;
		if (!L_251)
		{
			goto IL_04c0;
		}
	}
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_252 = ___closestDistance10;
		float L_253 = V_50;
		float* L_254 = ___closestDistance10;
		float L_255 = *((float*)L_254);
		float L_256 = V_4;
		float L_257 = ___assetWidth5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_258 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_253, L_255, ((float)il2cpp_codegen_add((float)L_256, (float)((float)il2cpp_codegen_multiply((float)L_257, (float)(0.5f))))), /*hidden argument*/NULL);
		*((float*)L_252) = (float)L_258;
		goto IL_04cd;
	}

IL_04c0:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F, /*hidden argument*/NULL);
	}

IL_04cd:
	{
	}

IL_04ce:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m11558881BEBE9280171A9A9967E76AAE30A7FE68 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_IsNormalVertical_m11558881BEBE9280171A9A9967E76AAE30A7FE68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___normal0;
		float L_1 = L_0.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2))) < ((float)(0.01f)))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_mC939EF334884C1D2D725087BAEB335F796806356 (SurfaceMagnetism_t9D480E94F0BD3A6180662674AC813ECE1C975AD2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism__ctor_mC939EF334884C1D2D725087BAEB335F796806356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_13(L_1);
		// private float maxRaycastDistance = 50.0f;
		__this->set_maxRaycastDistance_14((50.0f));
		// private float closestDistance = 0.5f;
		__this->set_closestDistance_15((0.5f));
		// private float surfaceNormalOffset = 0.5f;
		__this->set_surfaceNormalOffset_16((0.5f));
		// private float surfaceRayOffset = 0;
		__this->set_surfaceRayOffset_17((0.0f));
		// private SceneQueryType raycastMode = SceneQueryType.SimpleRaycast;
		__this->set_raycastMode_18(0);
		// private int boxRaysPerEdge = 3;
		__this->set_boxRaysPerEdge_19(3);
		// private bool orthographicBoxCast = false;
		__this->set_orthographicBoxCast_20((bool)0);
		// private float maximumNormalVariance = 0.5f;
		__this->set_maximumNormalVariance_21((0.5f));
		// private float sphereSize = 1.0f;
		__this->set_sphereSize_22((1.0f));
		// private float volumeCastSizeOverride = 0;
		__this->set_volumeCastSizeOverride_23((0.0f));
		// private bool useLinkedAltScaleOverride = false;
		__this->set_useLinkedAltScaleOverride_24((bool)0);
		// private RaycastDirectionMode currentRaycastDirectionMode = RaycastDirectionMode.TrackedTargetForward;
		__this->set_currentRaycastDirectionMode_25(0);
		// private OrientationMode orientationMode = OrientationMode.TrackedTarget;
		__this->set_orientationMode_26(1);
		// private float orientationBlend = 0.65f;
		__this->set_orientationBlend_27((0.65f));
		// private bool keepOrientationVertical = true;
		__this->set_keepOrientationVertical_28((bool)1);
		// private bool debugEnabled = false;
		__this->set_debugEnabled_29((bool)0);
		// private RayStep currentRayStep = new RayStep();
		RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B * L_3 = __this->get_address_of_currentRayStep_32();
		il2cpp_codegen_initobj(L_3, sizeof(RayStep_tD600880A950E7AD2CC628F821E4C9936DEAA262B ));
		Solver__ctor_m300B2601EDF50414855E5C7F9B3D05E34033EE05(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::ConfigureGrid(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_ConfigureGrid_mC6EC72642D8E4D0F5AAA719DA71C1206091CEAD9 (TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20 * __this, int32_t ___columns0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tileSize1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___gutters2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___layouDirection3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition4, bool ___centered5, const RuntimeMethod* method)
{
	{
		// Columns = columns;
		int32_t L_0 = ___columns0;
		__this->set_Columns_4(L_0);
		// TileSize = tileSize;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___tileSize1;
		__this->set_TileSize_5(L_1);
		// Gutters = gutters;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___gutters2;
		__this->set_Gutters_6(L_2);
		// LayoutDireciton = layouDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___layouDirection3;
		__this->set_LayoutDireciton_7(L_3);
		// StartPosition = startPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___startPosition4;
		__this->set_StartPosition_8(L_4);
		// Centered = centered;
		bool L_5 = ___centered5;
		__this->set_Centered_9(L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_OnValidate_mD7D0790B214E2F4902E1061E16BE94D71988AC67 (TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20 * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Start()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_Start_m8A908A0DEE83A2E17889085946AC6EC6F8DFA06A (TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20 * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TileGridObjectCollection_GetListPosition_mC12E8CDFB1F86564378EEC21E7B5012B72265E1B (TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_GetListPosition_mC12E8CDFB1F86564378EEC21E7B5012B72265E1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	float G_B6_0 = 0.0f;
	{
		// int column = index % Columns;
		int32_t L_0 = ___index0;
		int32_t L_1 = __this->get_Columns_4();
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)L_1));
		// int row = Columns > 0 ? Mathf.FloorToInt(index / Columns) : index;
		int32_t L_2 = __this->get_Columns_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___index0;
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_0016:
	{
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C((((float)((float)((int32_t)((int32_t)L_4/(int32_t)L_5))))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0024:
	{
		V_1 = G_B3_0;
		// Vector3 size = Vector3.Scale(TileSize + Gutters, LayoutDireciton);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_Gutters_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float xPos = size.x * column;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_2;
		float L_13 = L_12.get_x_2();
		int32_t L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		// float yPos = size.y * row;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		float L_16 = L_15.get_y_3();
		int32_t L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(((float)((float)L_17)))));
		// float zPos = DepthCalculatedBy == GridDivisions.Rows ? size.z * row : size.z * column;
		int32_t L_18 = __this->get_DepthCalculatedBy_10();
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		float L_20 = L_19.get_z_4();
		int32_t L_21 = V_0;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(((float)((float)L_21)))));
		goto IL_0073;
	}

IL_006a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		float L_23 = L_22.get_z_4();
		int32_t L_24 = V_1;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)(((float)((float)L_24)))));
	}

IL_0073:
	{
		V_5 = G_B6_0;
		// return new Vector3(xPos, yPos, zPos);
		float L_25 = V_3;
		float L_26 = V_4;
		float L_27 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), L_25, L_26, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_6;
		return L_29;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Update()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_Update_mAF6C86CD9800600D3F3BF19E8AAA652A2949A52D (TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_Update_mAF6C86CD9800600D3F3BF19E8AAA652A2949A52D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_4 = NULL;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// if ((Application.isPlaying || !OnlyInEditMode) || editorUpdated)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_OnlyInEditMode_11();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_editorUpdated_13();
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0104;
		}
	}
	{
		// int childCount = transform.childCount;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (Centered)
		bool L_6 = __this->get_Centered_9();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		// offSet = GetListPosition(Mathf.CeilToInt(childCount / Columns) * Columns - 1) * -0.5f + Vector3.Scale(TileSize, LayoutDireciton) * -0.5f;
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B((((float)((float)((int32_t)((int32_t)L_8/(int32_t)L_9))))), /*hidden argument*/NULL);
		int32_t L_11 = __this->get_Columns_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), (int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_14, L_15, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_16, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_17, /*hidden argument*/NULL);
		__this->set_offSet_12(L_18);
		goto IL_0095;
	}

IL_0088:
	{
		// offSet = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offSet_12(L_19);
	}

IL_0095:
	{
		// for (int i = 0; i < childCount; i++)
		V_3 = 0;
		goto IL_00f2;
	}

IL_0099:
	{
		// Transform item = transform.GetChild(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_3;
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_20, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		// item.localPosition = StartPosition + offSet + (Vector3.Scale(TileSize, LayoutDireciton) * 0.5f) + GetListPosition(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_StartPosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = __this->get_offSet_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_29, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_26, L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_33, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_23, L_34, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00f2:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		V_5 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_5;
		if (L_38)
		{
			goto IL_0099;
		}
	}
	{
		// editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection__ctor_mC52E8BC7805A5F03400F3E98DABA0B46F988981B (TileGridObjectCollection_tEE0174AD585A66713BEA454E011F8402896BFC20 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection__ctor_mC52E8BC7805A5F03400F3E98DABA0B46F988981B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected int Columns = 4;
		__this->set_Columns_4(4);
		// protected Vector3 TileSize = new Vector3(0.1f, 0.1f, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (0.1f), (0.0f), /*hidden argument*/NULL);
		__this->set_TileSize_5(L_0);
		// protected Vector3 Gutters = new Vector3(0.005f, 0.005f, 0.005f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.005f), (0.005f), (0.005f), /*hidden argument*/NULL);
		__this->set_Gutters_6(L_1);
		// protected Vector3 LayoutDireciton = new Vector3(1, -1, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_LayoutDireciton_7(L_2);
		// protected Vector3 StartPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_StartPosition_8(L_3);
		// protected bool Centered = false;
		__this->set_Centered_9((bool)0);
		// protected GridDivisions DepthCalculatedBy = GridDivisions.Rows;
		__this->set_DepthCalculatedBy_10(0);
		// protected bool OnlyInEditMode = false;
		__this->set_OnlyInEditMode_11((bool)0);
		// protected bool editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
