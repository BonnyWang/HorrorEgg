#include "il2cpp-config.h"

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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8;
// Firebase.Database.DatabaseError
struct DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2;
// Firebase.Database.DatabaseException
struct DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39;
// Firebase.Database.DatabaseReference
struct DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6;
// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158;
// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E;
// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12;
// Firebase.Database.Internal.InternalListener
struct InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1;
// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B;
// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388;
// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_t11D4B34F6F39BC3F67C492A72FF3A6FA918EB260;
// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB;
// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5;
// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D;
// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C;
// Firebase.Database.InternalQuery
struct InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB;
// Firebase.Database.Query
struct Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F;
// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF;
// Firebase.FirebaseApp
struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_t362FEF94FA8FC4281542DB73AB85A18C490DD450;
// Firebase.Platform.IClockService
struct IClockService_tC83BA5CC8925B4FB346FCE5F86220A16991F0354;
// Firebase.Platform.ILoggingService
struct ILoggingService_tF5FCF6BAA373E9C3985AEDEB3297E2953604D873;
// Firebase.Variant
struct Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.ArithmeticException
struct ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Internal.InternalListener>[]
struct EntryU5BU5D_t0613D6FFC429FC7FE487ECA9901A81CE629DDA35;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Database.FirebaseDatabase>[]
struct EntryU5BU5D_t17846D3C98797C9E49B41D4B4ECBA345FEB2AA4F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct KeyCollection_tB8CDB76B2AC81E373229DFA93475C7D5C9F15944;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Database.FirebaseDatabase>
struct KeyCollection_tED03C7DDD971EB9D8C80A4CB6696E194711997C7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t666396E67E50284D48938851873CE562083D67F2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct ValueCollection_t1ECD5FC751A54CCD10F508E8C256BD03B22451C9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Database.FirebaseDatabase>
struct ValueCollection_tAA30CCC3063376C59FFD98791EC5E245346CEDE4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_t1181C8320D44607239EE846AFE47B897C70629E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_tC2AC9421BE65F604A91B9A8DBCF0F3852948B750;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.InternalDataSnapshot>
struct IEnumerable_1_t8326F3EF09423B5CC3EB33CF03F2F8BB85D999E2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.DivideByZeroException
struct DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.OutOfMemoryException
struct OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7;
// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangeType_t72EF4B75ABE59631C47F0521837CEC2041A3CD1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_tDDBEDD5227F360B4D311BD40D61C7DAE5179F4EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_t9CFD2D8A88E4C9B1D3148DCB5B2B84BCC7904F07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppConfigExtensions_t362FEF94FA8FC4281542DB73AB85A18C490DD450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral030E8E8F47BFE8D70A7C16D8697DA59A2F780275;
IL2CPP_EXTERN_C String_t* _stringLiteral05A308029DFB0AAD1134F3E4B028519B98D2806B;
IL2CPP_EXTERN_C String_t* _stringLiteral11C5CF62B8C6090DB756C0500E411A8323CC3779;
IL2CPP_EXTERN_C String_t* _stringLiteral1D5EE313D50A7F8AEDF787B5A6C029EF09906C69;
IL2CPP_EXTERN_C String_t* _stringLiteral1E533537ED011AB19AE6747DF8B8F95A9E70CAEE;
IL2CPP_EXTERN_C String_t* _stringLiteral238422C199B1DA9376D6D0B0473BCF5D65AF76E8;
IL2CPP_EXTERN_C String_t* _stringLiteral2E9045902981639C78002C9B7703BA483D6E8A24;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2F0E9C4819337D229DC079F7EF5604CC86DD4A;
IL2CPP_EXTERN_C String_t* _stringLiteral43C3C52CE9B7645EFB7341BC689E2D18A56BA7CD;
IL2CPP_EXTERN_C String_t* _stringLiteral46776BD15CB393538C543C3DCA2ED44E055EF79C;
IL2CPP_EXTERN_C String_t* _stringLiteral485C0DB0D97BEE2AD947C0844A4001AA2CC28ED5;
IL2CPP_EXTERN_C String_t* _stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral5444D6F9BD53CC5E722D4CF53859F98787333718;
IL2CPP_EXTERN_C String_t* _stringLiteral55EB6C2DA4A967184A694D66924D58310E7999F7;
IL2CPP_EXTERN_C String_t* _stringLiteral6335EB6522AB2308F001D48967579AD35EB604C0;
IL2CPP_EXTERN_C String_t* _stringLiteral6AB2A5D1FE0A10CB014FC4303709BA72103C7CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral6F8BBE8223234BE7CF068795479D66E39AC47CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral76CD6E2E967192C0E980C24C0FC9B3321836F134;
IL2CPP_EXTERN_C String_t* _stringLiteral82FEB1F87A470BAACEB4953C32A1CC382CCF10AA;
IL2CPP_EXTERN_C String_t* _stringLiteral97A9C310AF2569E6A8B8E7CDB7B5E6BEE1AD5AE8;
IL2CPP_EXTERN_C String_t* _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E20E5CF769AB0E45EF2C502587A7197C1A1100;
IL2CPP_EXTERN_C String_t* _stringLiteralAC6996996732374A3ECDAC4A654527DD3F9C85C0;
IL2CPP_EXTERN_C String_t* _stringLiteralB553988D3E28D099A271683ADE88E9EDB57EE10F;
IL2CPP_EXTERN_C String_t* _stringLiteralC3EF337D8E93BFC7DCD64FAB1CDA2CC6EC015AEA;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E3D9B1EA59C2C3EA81424DD35283AC917B2D77;
IL2CPP_EXTERN_C String_t* _stringLiteralD2605ACD229B49A682D1AF88108FAC1CEEA6CC52;
IL2CPP_EXTERN_C String_t* _stringLiteralD57FCC10EA477EEAF3AA1F6C08C1F88F27F227A6;
IL2CPP_EXTERN_C String_t* _stringLiteralD68049BB85454C0B8C56FFBB73C45E8ADEE41B21;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE44BF54C67AB77DFD957EB06F409847FEF4851AF;
IL2CPP_EXTERN_C String_t* _stringLiteralE6CB995CFE0FE3233478F83BE4BB662B2D0F2AFE;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF3DA9A389ABD93EE737198EA8C068AEC4BA6B4FD;
IL2CPP_EXTERN_C String_t* _stringLiteralF7368006D9EB8DA53E381FD4C46A859390D39E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAE38FB8D02D5E169BAF4BEBE9B0103A0ECC878;
IL2CPP_EXTERN_C String_t* _stringLiteralFC09D17A4B10AE2EE4172C94F6799A0FC53E7090;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m63F6EF2C599AA2E401A192DDB50FED0AFEB6634A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mA9763C018D5FC884395F25DCF2AC250BF45FDD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB84600595CFAD42508FC7A8D07699E4F7C163085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mBEE63A95C7342ACEC5389ADFEDFA2508828E7B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1633DA74A1D09C292C267EAF1B3AE9FAE11F7CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m654888D66E01C54A796BAE1B837CACE90021C74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m02F0902909E4C411ED5E93D481AB6B3CD76F4729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE26D1E1AB22C783D52432C80DE066B1FC0A6F10A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m007CC390C84CA0941A4DC4703BB6301BC20EF2E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m8FE918D7E82015A80F42CA63685E7B02E754DDD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_m44DC8130CB46002CFCD4B43A45AD5E20B066A9C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_OnAppDisposed_m947893443EF19DD9BFAD50F0AFD8AFA8D106B1FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_get_DefaultInstance_m3B0C21CB77D5BD79E4D7534EC1703E7B6BD6A322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnCancelledHandler_m1218C42DA7ABE7ED2B9715AE914192105DB2E0B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildChangeHandler_m6DB95F755F71797BAA6F0B7DD54331BB00B85AA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildRemovedHandler_m5D6A44BD25A5A96031709C08F5DB07FA9D54962E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_Child_m81176820ED1FE31B72BCD5E5F68BF48A2020CB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_children_count_mA2B24873919C7606A8AE2500DBCC5A11A48CCD13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_exists_mCBBF2ED22D6A45E823B62F8848E3C6B8A9715B93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_key_string_m1A660F8325DB4E46D1CB6B95635BE2C3B7FDE2E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_value_m828DF44B5AE8F4B6DCB68351822050A8A5C3DD8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_is_valid_m8174EB91441E96662DBA4428D1A0B8BD0D05C9C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_url_m4123B650BA69B63318767B1ED352271BF3DAF2AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetInstanceInternal_m03A380236753AAA0164727E96DEE42FE8F50DC1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetReference_m7E014BA624B03F9BF0F4E1CDC47DA42E86827D5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_ReleaseReferenceInternal_m3BE4F9D37A8127432C0F6BE2D98D7A8C697ACCDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_CreateChildListener_m02623E8F4F0C07430CA9E560211008E41A632BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_CreateValueListener_mA53F0CD7AB485484052606AAD29534BA8AF2ED0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyChildListener_m095E6A8FF3FEA126E029ECC2289641EB9BE63C0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyValueListener_mD1854CE6370D1CAEABAE27C8E8C1DB7518BD4B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterChildListenerCallbacks_m005E88C19CDEE598E8E851BA252FD1CF8440BAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterValueListenerCallbacks_mE93E3BADA1CDC47FD62C551AD958073C2747AA0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_is_valid_mF3B0C6034A37D37DAC539C4AAF18DA3CFDB92D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnCancelledHandler_m252BC4328A6F6AF40026CE9F518FBDA6C841CE87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnValueChangedHandler_m4078B2D6CA4A969809CA501CE64504FD57155808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query__ctor_mD14136487250A9CD3E30FEF6B21029797B260929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m5AC4DFDFF1A6C236029CD558A1FF5D38F3AA38B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_mEF8DD64FA343BF83A426DAB76750CD594B888427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mA932B93D3A7AF538172B7C2642FBCABF47DC2760_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2B351503080170D1A8C1ADE3E0BD9473ACE246B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m4344F98527C15712F85A2D350A055D445A1436BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m81640A842718725195DC7267A192231C12262DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m4FD506FCFBD93647EFDBE956D1FC2005EB980FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB0365F54B3C35341C0320D1F27C7BCC7C905D19D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m3DC0CBB350D3428305D27465BC029143F304B6CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m35D65783DFE167D3BAAE1736FD89C223E19B3E71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_mC734E19C981F93A52EB1DDDC7C74CF031D1A9AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m355FAAE89C30EDBCDC996DFB1A7AB07FD4C1685A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m4B24A4FCF562E01C8B0F689F0E93C43DF9D40D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_mC2F0FF53340DA80E3E6D35C794208B3FE132455C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mC0BF0EBF95B71B34D4005C4F4CAC82338D3E212C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m862457361BA824195BF983ECA70317AA7AF8861D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m7993E40EBCD3560E931806C70DC8E5DF8A59720E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mCF8C4632B91779D8B8DEB4264F89B34F8A75346B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m70FEFF8849686B254EB1572D2DEB620FEE6036BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mC116264E159492CFD41C53F2C1ADE8AFFAB9F585_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ChildChangedEventArgs__ctor_m5ACB5CCA25EC16696C02668A9A56C19D9EC3D83B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChildChangedEventArgs__ctor_m9ACC5358CA1C07D3F43C722BCFBF27DDDC08B60A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataSnapshot_Child_mB81E4C5045F40D8E59D95F14B275091908EA1118_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataSnapshot_CreateSnapshot_mB382692543CF83588B8DD15AB1F1A41D17189A6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataSnapshot_ToString_mD0A28710D9F4CE7F104B038B0824C884892CA65B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseError_FromError_mC4AA8CA4B352A8AA4AD7DC51548C9AEF4772522B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseError_ToString_mE0FB62C9FADBAF045247FB55E0E639CB76E5EEC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseError__cctor_m60404FB6F806F9089526C4B9B93CB6E7C482D7CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseError__ctor_m91C5179A636161FD1B4553247FD453B1F1DA4DD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseException__ctor_m42A9A8E44BEDE98ECCA613E41F44A76DC0638FA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseInternalPINVOKE__cctor_m1B712550F79BA3C278F2D7B5E21E5F5CB796F3F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DatabaseReference_Equals_mA98108DEABE7C291455C518C9EF3F03DD9D5A3DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_Dispose_m90224BBC05725BDC93D88641786D08FBBF8B1C58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_GetInstance_m44DC8130CB46002CFCD4B43A45AD5E20B066A9C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_GetInstance_m987403AFCC2E40ACD465632124B56E856057D4F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_GetReference_mDA839ED2DA49DF728A2FA336C5EE83ADEDA4706F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase__cctor_m7146554A9495B6AC9C99E780D10856857758EDBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase__ctor_m4A30C2025F399C8E3B22899703564938DA2C5ED3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseDatabase_get_DefaultInstance_m3B0C21CB77D5BD79E4D7534EC1703E7B6BD6A322_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_CreateCppListener_m8465952A359BDFA7607EC9CFB90BBD309C5A4AC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_DestroyCppListener_m5B57F4F551FE25B299A3F8484B4A3C509B099031_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_OnCancelledHandler_m1218C42DA7ABE7ED2B9715AE914192105DB2E0B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_OnChildChangeHandler_m6DB95F755F71797BAA6F0B7DD54331BB00B85AA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_OnChildRemovedHandler_m5D6A44BD25A5A96031709C08F5DB07FA9D54962E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener_TryGetListener_mD3E34F28D51F8275558203FD163F0ABC104CD532_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener__cctor_m67D8B04E58745017BA22230D850025CFA1972115_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalChildListener__ctor_m2E7464A76BC55CA99F4CAE648408CB34711DC145_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_Child_m81176820ED1FE31B72BCD5E5F68BF48A2020CB7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_Dispose_mB89E4F48D7A2D275FC2B6A488B000ACE66486D17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_Dispose_mBD3323FB62C8AA0CB06673F619A05468B9AEB61F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_children_count_mA2B24873919C7606A8AE2500DBCC5A11A48CCD13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_exists_mCBBF2ED22D6A45E823B62F8848E3C6B8A9715B93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_key_string_m1A660F8325DB4E46D1CB6B95635BE2C3B7FDE2E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDataSnapshot_value_m828DF44B5AE8F4B6DCB68351822050A8A5C3DD8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference_Dispose_m60A3F28A5EFD2BCCAC367A5ECABD5F4219805452_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference__ctor_mA4BEDABF5BFE8EB6A666C1EDC85EF22BF5CAF8B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference_is_valid_m8174EB91441E96662DBA4428D1A0B8BD0D05C9C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalDatabaseReference_url_m4123B650BA69B63318767B1ED352271BF3DAF2AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_Dispose_m400D1BF86619387F98C1616474222FB146737229_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_Dispose_m7497B035927A6EF7A5170EB1BF5FF5EB31EF2408_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_GetInstanceInternal_m03A380236753AAA0164727E96DEE42FE8F50DC1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_GetReference_m7E014BA624B03F9BF0F4E1CDC47DA42E86827D5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_ReleaseReferenceInternal_m3BE4F9D37A8127432C0F6BE2D98D7A8C697ACCDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalFirebaseDatabase_getCPtr_m984F705CA4D549077DF6EEBF28D3458F25931C2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener_AfterRemovingListener_m166F175786C631F8A47A1E39BE6DAFD93BF17226_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener_BeforeAddingListener_mCA6162A823572CD376DD6AFE773A9EA854EB6966_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener_Dispose_m4D3D694DE9A5CAF8CD4CA81D2C990C33A2C4A0B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener_TryGetListener_m8E58F5AF31454E7A0ECE748220DA9E399D1AB5B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener__cctor_m9AF1AF08ED8CCA8071EDC50DAFA92DAF7E3413F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalListener__ctor_m6E86532F26752ACF2793DF742C16EB696F21206D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_CreateChildListener_m02623E8F4F0C07430CA9E560211008E41A632BCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_CreateValueListener_mA53F0CD7AB485484052606AAD29534BA8AF2ED0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_DestroyChildListener_m095E6A8FF3FEA126E029ECC2289641EB9BE63C0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_DestroyValueListener_mD1854CE6370D1CAEABAE27C8E8C1DB7518BD4B8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_Dispose_m54024D3DEB57A69C993D80B430B252DB1C6C83E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_Dispose_mFD8C67C479614246C1E8355F99F00FD58617A4B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_RegisterChildListenerCallbacks_m005E88C19CDEE598E8E851BA252FD1CF8440BAE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_RegisterValueListenerCallbacks_mE93E3BADA1CDC47FD62C551AD958073C2747AA0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalQuery_is_valid_mF3B0C6034A37D37DAC539C4AAF18DA3CFDB92D28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_CreateCppListener_mAC2C6259BDFA0758FEE9A65BA5D825C6C442BAAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_DestroyCppListener_mFAC84C7DC6B1A89C878A06684D1B68CCCD590CDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_OnCancelledHandler_m252BC4328A6F6AF40026CE9F518FBDA6C841CE87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_OnValueChangedHandler_m4078B2D6CA4A969809CA501CE64504FD57155808_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_TryGetListener_mACB36299BE31AA5B4A3BC2760366E5C9354362F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener__cctor_m73A5BCEE5AEB7A23927E9D8FA067CFEED02E297C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener__ctor_mAB8F5C223B92E39C0F28248259ECA828161A50D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_add_valueChangedImpl_m68AD0E5A5A3B986ABEC42B6C5170E317A8B8010C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InternalValueListener_remove_valueChangedImpl_mD7B98774B5947050C7CFC354F83AA8CD1A747CF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnCancelledDelegate_BeginInvoke_m73042215958D9865E01C32309848BE3EE9F0622A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnCancelledDelegate_BeginInvoke_mE4779539BAE41A476999EFD84E731AD552593799_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnChildChangeDelegate_BeginInvoke_mB15B51628F2E8305B431A5540171F40B9A500EE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnChildRemovedDelegate_BeginInvoke_m04449D3C7CE9220252F1C3B88E8B6A6E1B675D5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnValueChangedDelegate_BeginInvoke_mB2FE54FBF725EB99515B4F36E504F659D71D0652_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Query__ctor_mD14136487250A9CD3E30FEF6B21029797B260929_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_m5AC4DFDFF1A6C236029CD558A1FF5D38F3AA38B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_mEF8DD64FA343BF83A426DAB76750CD594B888427_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_mA932B93D3A7AF538172B7C2642FBCABF47DC2760_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2B351503080170D1A8C1ADE3E0BD9473ACE246B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m4344F98527C15712F85A2D350A055D445A1436BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_m81640A842718725195DC7267A192231C12262DE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_m4FD506FCFBD93647EFDBE956D1FC2005EB980FCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB0365F54B3C35341C0320D1F27C7BCC7C905D19D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_m3DC0CBB350D3428305D27465BC029143F304B6CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_m35D65783DFE167D3BAAE1736FD89C223E19B3E71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_mC734E19C981F93A52EB1DDDC7C74CF031D1A9AC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m355FAAE89C30EDBCDC996DFB1A7AB07FD4C1685A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_m4B24A4FCF562E01C8B0F689F0E93C43DF9D40D05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_mC2F0FF53340DA80E3E6D35C794208B3FE132455C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_m7C2E5727B9E16F3B2C0D8E709F26A7FE6EB6AFFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException__cctor_m76ACB5E6E3B76D0E7DDAAC11A8FD2DF1AE340704_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_mD96FA554663D8A078724F5106AC0164004F44FFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495AFirebase_Database_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m862457361BA824195BF983ECA70317AA7AF8861D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m7993E40EBCD3560E931806C70DC8E5DF8A59720E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mCF8C4632B91779D8B8DEB4264F89B34F8A75346B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m70FEFF8849686B254EB1572D2DEB620FEE6036BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mC116264E159492CFD41C53F2C1ADE8AFFAB9F585_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueChangedEventArgs__ctor_m608F94EF6256B5F922A7D6FFA3DA379788EAF922_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueChangedEventArgs__ctor_m76A9AEE3419051E6CDC227961CB0BDF37C07119D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFD17A142AA88117C88337A6D404BC60825DDBE68 
{
public:

public:
};


// System.Object


// Firebase.Database.DataSnapshot
struct DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3  : public RuntimeObject
{
public:
	// Firebase.Database.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database_1;
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::parentSnapshot
	DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___parentSnapshot_2;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot::parentList
	DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 * ___parentList_3;

public:
	inline static int32_t get_offset_of_internalSnapshot_0() { return static_cast<int32_t>(offsetof(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3, ___internalSnapshot_0)); }
	inline InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * get_internalSnapshot_0() const { return ___internalSnapshot_0; }
	inline InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 ** get_address_of_internalSnapshot_0() { return &___internalSnapshot_0; }
	inline void set_internalSnapshot_0(InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * value)
	{
		___internalSnapshot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSnapshot_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3, ___database_1)); }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_parentSnapshot_2() { return static_cast<int32_t>(offsetof(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3, ___parentSnapshot_2)); }
	inline DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * get_parentSnapshot_2() const { return ___parentSnapshot_2; }
	inline DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 ** get_address_of_parentSnapshot_2() { return &___parentSnapshot_2; }
	inline void set_parentSnapshot_2(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * value)
	{
		___parentSnapshot_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentSnapshot_2), (void*)value);
	}

	inline static int32_t get_offset_of_parentList_3() { return static_cast<int32_t>(offsetof(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3, ___parentList_3)); }
	inline DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 * get_parentList_3() const { return ___parentList_3; }
	inline DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 ** get_address_of_parentList_3() { return &___parentList_3; }
	inline void set_parentList_3(DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 * value)
	{
		___parentList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentList_3), (void*)value);
	}
};


// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.DataSnapshot/DataSnapshotList::internalList
	RuntimeObject* ___internalList_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot/DataSnapshotList::database
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database_1;

public:
	inline static int32_t get_offset_of_internalList_0() { return static_cast<int32_t>(offsetof(DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8, ___internalList_0)); }
	inline RuntimeObject* get_internalList_0() const { return ___internalList_0; }
	inline RuntimeObject** get_address_of_internalList_0() { return &___internalList_0; }
	inline void set_internalList_0(RuntimeObject* value)
	{
		___internalList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalList_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8, ___database_1)); }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}
};


// Firebase.Database.DatabaseError
struct DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_15;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_16;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2, ___U3CCodeU3Ek__BackingField_15)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_15() const { return ___U3CCodeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_15() { return &___U3CCodeU3Ek__BackingField_15; }
	inline void set_U3CCodeU3Ek__BackingField_15(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2, ___U3CMessageU3Ek__BackingField_16)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_16() const { return ___U3CMessageU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_16() { return &___U3CMessageU3Ek__BackingField_16; }
	inline void set_U3CMessageU3Ek__BackingField_16(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetailsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2, ___U3CDetailsU3Ek__BackingField_17)); }
	inline String_t* get_U3CDetailsU3Ek__BackingField_17() const { return ___U3CDetailsU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CDetailsU3Ek__BackingField_17() { return &___U3CDetailsU3Ek__BackingField_17; }
	inline void set_U3CDetailsU3Ek__BackingField_17(String_t* value)
	{
		___U3CDetailsU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetailsU3Ek__BackingField_17), (void*)value);
	}
};

struct DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	RuntimeObject* ___ErrorReasons_13;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Firebase.Database.DatabaseError::ErrorCodes
	RuntimeObject* ___ErrorCodes_14;

public:
	inline static int32_t get_offset_of_ErrorReasons_13() { return static_cast<int32_t>(offsetof(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields, ___ErrorReasons_13)); }
	inline RuntimeObject* get_ErrorReasons_13() const { return ___ErrorReasons_13; }
	inline RuntimeObject** get_address_of_ErrorReasons_13() { return &___ErrorReasons_13; }
	inline void set_ErrorReasons_13(RuntimeObject* value)
	{
		___ErrorReasons_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorReasons_13), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorCodes_14() { return static_cast<int32_t>(offsetof(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields, ___ErrorCodes_14)); }
	inline RuntimeObject* get_ErrorCodes_14() const { return ___ErrorCodes_14; }
	inline RuntimeObject** get_address_of_ErrorCodes_14() { return &___ErrorCodes_14; }
	inline void set_ErrorCodes_14(RuntimeObject* value)
	{
		___ErrorCodes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorCodes_14), (void*)value);
	}
};


// Firebase.Database.DatabaseInternalPINVOKE
struct DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D  : public RuntimeObject
{
public:

public:
};

struct DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_StaticFields
{
public:
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper Firebase.Database.DatabaseInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D * ___swigExceptionHelper_0;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper Firebase.Database.DatabaseInternalPINVOKE::swigStringHelper
	SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields
{
public:
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___applicationDelegate_0;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___arithmeticDelegate_1;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___divideByZeroDelegate_2;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___indexOutOfRangeDelegate_3;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___invalidCastDelegate_4;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___invalidOperationDelegate_5;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___ioDelegate_6;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___nullReferenceDelegate_7;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___outOfMemoryDelegate_8;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___overflowDelegate_9;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___systemDelegate_10;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentDelegate_11;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentNullDelegate_12;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields
{
public:
	// System.Int32 Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject * ___exceptionsLock_2;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}

	inline static int32_t get_offset_of_exceptionsLock_2() { return static_cast<int32_t>(offsetof(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields, ___exceptionsLock_2)); }
	inline RuntimeObject * get_exceptionsLock_2() const { return ___exceptionsLock_2; }
	inline RuntimeObject ** get_address_of_exceptionsLock_2() { return &___exceptionsLock_2; }
	inline void set_exceptionsLock_2(RuntimeObject * value)
	{
		___exceptionsLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionsLock_2), (void*)value);
	}
};

struct SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields
{
public:
	// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7_StaticFields
{
public:
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA  : public RuntimeObject
{
public:
	// Firebase.Database.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___U3CAppU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_internalDatabase_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA, ___internalDatabase_2)); }
	inline InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * get_internalDatabase_2() const { return ___internalDatabase_2; }
	inline InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C ** get_address_of_internalDatabase_2() { return &___internalDatabase_2; }
	inline void set_internalDatabase_2(InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * value)
	{
		___internalDatabase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalDatabase_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA, ___U3CAppU3Ek__BackingField_4)); }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * get_U3CAppU3Ek__BackingField_4() const { return ___U3CAppU3Ek__BackingField_4; }
	inline FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 ** get_address_of_U3CAppU3Ek__BackingField_4() { return &___U3CAppU3Ek__BackingField_4; }
	inline void set_U3CAppU3Ek__BackingField_4(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * value)
	{
		___U3CAppU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppU3Ek__BackingField_4), (void*)value);
	}
};

struct FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * ___databases_5;

public:
	inline static int32_t get_offset_of_databases_5() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_StaticFields, ___databases_5)); }
	inline Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * get_databases_5() const { return ___databases_5; }
	inline Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 ** get_address_of_databases_5() { return &___databases_5; }
	inline void set_databases_5(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * value)
	{
		___databases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databases_5), (void*)value);
	}
};


// Firebase.Database.Internal.InternalListener
struct InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uid
	int32_t ___uid_2;

public:
	inline static int32_t get_offset_of_uid_2() { return static_cast<int32_t>(offsetof(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2, ___uid_2)); }
	inline int32_t get_uid_2() const { return ___uid_2; }
	inline int32_t* get_address_of_uid_2() { return &___uid_2; }
	inline void set_uid_2(int32_t value)
	{
		___uid_2 = value;
	}
};

struct InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uidGenerator
	int32_t ___uidGenerator_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener> Firebase.Database.Internal.InternalListener::databaseCallbacks
	Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * ___databaseCallbacks_1;

public:
	inline static int32_t get_offset_of_uidGenerator_0() { return static_cast<int32_t>(offsetof(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields, ___uidGenerator_0)); }
	inline int32_t get_uidGenerator_0() const { return ___uidGenerator_0; }
	inline int32_t* get_address_of_uidGenerator_0() { return &___uidGenerator_0; }
	inline void set_uidGenerator_0(int32_t value)
	{
		___uidGenerator_0 = value;
	}

	inline static int32_t get_offset_of_databaseCallbacks_1() { return static_cast<int32_t>(offsetof(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields, ___databaseCallbacks_1)); }
	inline Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * get_databaseCallbacks_1() const { return ___databaseCallbacks_1; }
	inline Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF ** get_address_of_databaseCallbacks_1() { return &___databaseCallbacks_1; }
	inline void set_databaseCallbacks_1(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * value)
	{
		___databaseCallbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databaseCallbacks_1), (void*)value);
	}
};


// Firebase.Database.Query
struct Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F  : public RuntimeObject
{
public:
	// Firebase.Database.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * ___childListener_3;

public:
	inline static int32_t get_offset_of_internalQuery_0() { return static_cast<int32_t>(offsetof(Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F, ___internalQuery_0)); }
	inline InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * get_internalQuery_0() const { return ___internalQuery_0; }
	inline InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB ** get_address_of_internalQuery_0() { return &___internalQuery_0; }
	inline void set_internalQuery_0(InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * value)
	{
		___internalQuery_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F, ___database_1)); }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueListener_2() { return static_cast<int32_t>(offsetof(Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F, ___valueListener_2)); }
	inline InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * get_valueListener_2() const { return ___valueListener_2; }
	inline InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 ** get_address_of_valueListener_2() { return &___valueListener_2; }
	inline void set_valueListener_2(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * value)
	{
		___valueListener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueListener_2), (void*)value);
	}

	inline static int32_t get_offset_of_childListener_3() { return static_cast<int32_t>(offsetof(Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F, ___childListener_3)); }
	inline InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * get_childListener_3() const { return ___childListener_3; }
	inline InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F ** get_address_of_childListener_3() { return &___childListener_3; }
	inline void set_childListener_3(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * value)
	{
		___childListener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childListener_3), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Platform.FirebaseAppPlatform::<app>k__BackingField
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ___U3CappU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CappU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75, ___U3CappU3Ek__BackingField_0)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get_U3CappU3Ek__BackingField_0() const { return ___U3CappU3Ek__BackingField_0; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of_U3CappU3Ek__BackingField_0() { return &___U3CappU3Ek__BackingField_0; }
	inline void set_U3CappU3Ek__BackingField_0(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		___U3CappU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappU3Ek__BackingField_0), (void*)value);
	}
};


// Firebase.Platform.Services
struct Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC  : public RuntimeObject
{
public:

public:
};

struct Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields
{
public:
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_1;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAppConfigU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CAppConfigU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CAppConfigU3Ek__BackingField_0() const { return ___U3CAppConfigU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CAppConfigU3Ek__BackingField_0() { return &___U3CAppConfigU3Ek__BackingField_0; }
	inline void set_U3CAppConfigU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CAppConfigU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppConfigU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CClockU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClockU3Ek__BackingField_1() const { return ___U3CClockU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClockU3Ek__BackingField_1() { return &___U3CClockU3Ek__BackingField_1; }
	inline void set_U3CClockU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClockU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClockU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields, ___U3CLoggingU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CLoggingU3Ek__BackingField_2() const { return ___U3CLoggingU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CLoggingU3Ek__BackingField_2() { return &___U3CLoggingU3Ek__BackingField_2; }
	inline void set_U3CLoggingU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CLoggingU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggingU3Ek__BackingField_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0613D6FFC429FC7FE487ECA9901A81CE629DDA35* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB8CDB76B2AC81E373229DFA93475C7D5C9F15944 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1ECD5FC751A54CCD10F508E8C256BD03B22451C9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___entries_1)); }
	inline EntryU5BU5D_t0613D6FFC429FC7FE487ECA9901A81CE629DDA35* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0613D6FFC429FC7FE487ECA9901A81CE629DDA35** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0613D6FFC429FC7FE487ECA9901A81CE629DDA35* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___keys_7)); }
	inline KeyCollection_tB8CDB76B2AC81E373229DFA93475C7D5C9F15944 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB8CDB76B2AC81E373229DFA93475C7D5C9F15944 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB8CDB76B2AC81E373229DFA93475C7D5C9F15944 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ___values_8)); }
	inline ValueCollection_t1ECD5FC751A54CCD10F508E8C256BD03B22451C9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1ECD5FC751A54CCD10F508E8C256BD03B22451C9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1ECD5FC751A54CCD10F508E8C256BD03B22451C9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___entries_1)); }
	inline EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t69CCD9E4E7050700879917C9CB7E5E88F89235B1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___keys_7)); }
	inline KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2F25BAF319A40DA5241F076B74BB90B72F16822F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ___values_8)); }
	inline ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tEDEE983AB5C1AD1832785DBAED94462C85312A6F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t17846D3C98797C9E49B41D4B4ECBA345FEB2AA4F* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tED03C7DDD971EB9D8C80A4CB6696E194711997C7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tAA30CCC3063376C59FFD98791EC5E245346CEDE4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___entries_1)); }
	inline EntryU5BU5D_t17846D3C98797C9E49B41D4B4ECBA345FEB2AA4F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t17846D3C98797C9E49B41D4B4ECBA345FEB2AA4F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t17846D3C98797C9E49B41D4B4ECBA345FEB2AA4F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___keys_7)); }
	inline KeyCollection_tED03C7DDD971EB9D8C80A4CB6696E194711997C7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tED03C7DDD971EB9D8C80A4CB6696E194711997C7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tED03C7DDD971EB9D8C80A4CB6696E194711997C7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ___values_8)); }
	inline ValueCollection_tAA30CCC3063376C59FFD98791EC5E245346CEDE4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tAA30CCC3063376C59FFD98791EC5E245346CEDE4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tAA30CCC3063376C59FFD98791EC5E245346CEDE4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___entries_1)); }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAD4FDE2B2578C6625A7296B1C46DCB06DCB45186* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___keys_7)); }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t666396E67E50284D48938851873CE562083D67F2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t666396E67E50284D48938851873CE562083D67F2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ___values_8)); }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t532E2FD863D0D47B87202BE6B4F7C7EDB5DD7CBF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___U3CDatabaseErrorU3Ek__BackingField_2;
	// System.String Firebase.Database.ChildChangedEventArgs::<PreviousChildName>k__BackingField
	String_t* ___U3CPreviousChildNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousChildNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF, ___U3CPreviousChildNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CPreviousChildNameU3Ek__BackingField_3() const { return ___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPreviousChildNameU3Ek__BackingField_3() { return &___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline void set_U3CPreviousChildNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CPreviousChildNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousChildNameU3Ek__BackingField_3), (void*)value);
	}
};


// Firebase.Database.DatabaseReference
struct DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0  : public Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F
{
public:
	// Firebase.Database.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___U3CDatabaseU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_internalReference_4() { return static_cast<int32_t>(offsetof(DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0, ___internalReference_4)); }
	inline InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * get_internalReference_4() const { return ___internalReference_4; }
	inline InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D ** get_address_of_internalReference_4() { return &___internalReference_4; }
	inline void set_internalReference_4(InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * value)
	{
		___internalReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0, ___U3CDatabaseU3Ek__BackingField_5)); }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * get_U3CDatabaseU3Ek__BackingField_5() const { return ___U3CDatabaseU3Ek__BackingField_5; }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA ** get_address_of_U3CDatabaseU3Ek__BackingField_5() { return &___U3CDatabaseU3Ek__BackingField_5; }
	inline void set_U3CDatabaseU3Ek__BackingField_5(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * value)
	{
		___U3CDatabaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseU3Ek__BackingField_5), (void*)value);
	}
};


// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___U3CDatabaseErrorU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseErrorU3Ek__BackingField_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// Firebase.Database.ChildChangeType
struct ChildChangeType_t72EF4B75ABE59631C47F0521837CEC2041A3CD1D 
{
public:
	// System.Int32 Firebase.Database.ChildChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChildChangeType_t72EF4B75ABE59631C47F0521837CEC2041A3CD1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Database.Error
struct Error_tDDBEDD5227F360B4D311BD40D61C7DAE5179F4EF 
{
public:
	// System.Int32 Firebase.Database.Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Error_tDDBEDD5227F360B4D311BD40D61C7DAE5179F4EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F  : public InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2
{
public:
	// System.Object Firebase.Database.Internal.InternalChildListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.InternalQuery Firebase.Database.Internal.InternalChildListener::internalQuery
	InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalChildListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalChildListener::database
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database_6;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::cancelledImpl
	EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * ___cancelledImpl_7;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childAddedImpl
	EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * ___childAddedImpl_8;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childChangedImpl
	EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * ___childChangedImpl_9;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childMovedImpl
	EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * ___childMovedImpl_10;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childRemovedImpl
	EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * ___childRemovedImpl_11;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventLock_3), (void*)value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___internalQuery_4)); }
	inline InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_4), (void*)value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___database_6)); }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_cancelledImpl_7() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___cancelledImpl_7)); }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * get_cancelledImpl_7() const { return ___cancelledImpl_7; }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 ** get_address_of_cancelledImpl_7() { return &___cancelledImpl_7; }
	inline void set_cancelledImpl_7(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * value)
	{
		___cancelledImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancelledImpl_7), (void*)value);
	}

	inline static int32_t get_offset_of_childAddedImpl_8() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___childAddedImpl_8)); }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * get_childAddedImpl_8() const { return ___childAddedImpl_8; }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 ** get_address_of_childAddedImpl_8() { return &___childAddedImpl_8; }
	inline void set_childAddedImpl_8(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * value)
	{
		___childAddedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childAddedImpl_8), (void*)value);
	}

	inline static int32_t get_offset_of_childChangedImpl_9() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___childChangedImpl_9)); }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * get_childChangedImpl_9() const { return ___childChangedImpl_9; }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 ** get_address_of_childChangedImpl_9() { return &___childChangedImpl_9; }
	inline void set_childChangedImpl_9(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * value)
	{
		___childChangedImpl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childChangedImpl_9), (void*)value);
	}

	inline static int32_t get_offset_of_childMovedImpl_10() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___childMovedImpl_10)); }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * get_childMovedImpl_10() const { return ___childMovedImpl_10; }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 ** get_address_of_childMovedImpl_10() { return &___childMovedImpl_10; }
	inline void set_childMovedImpl_10(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * value)
	{
		___childMovedImpl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childMovedImpl_10), (void*)value);
	}

	inline static int32_t get_offset_of_childRemovedImpl_11() { return static_cast<int32_t>(offsetof(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F, ___childRemovedImpl_11)); }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * get_childRemovedImpl_11() const { return ___childRemovedImpl_11; }
	inline EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 ** get_address_of_childRemovedImpl_11() { return &___childRemovedImpl_11; }
	inline void set_childRemovedImpl_11(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * value)
	{
		___childRemovedImpl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childRemovedImpl_11), (void*)value);
	}
};


// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1  : public InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2
{
public:
	// System.Object Firebase.Database.Internal.InternalValueListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.InternalQuery Firebase.Database.Internal.InternalValueListener::internalQuery
	InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalValueListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalValueListener::database
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database_6;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.InternalValueListener::valueChangedImpl
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___valueChangedImpl_7;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventLock_3), (void*)value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1, ___internalQuery_4)); }
	inline InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_4), (void*)value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1, ___database_6)); }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_valueChangedImpl_7() { return static_cast<int32_t>(offsetof(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1, ___valueChangedImpl_7)); }
	inline EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * get_valueChangedImpl_7() const { return ___valueChangedImpl_7; }
	inline EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 ** get_address_of_valueChangedImpl_7() { return &___valueChangedImpl_7; }
	inline void set_valueChangedImpl_7(EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * value)
	{
		___valueChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueChangedImpl_7), (void*)value);
	}
};


// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.InitResult
struct InitResult_t0159C076DA44626ECA5EA139DB147F9BFE9AB31F 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_t0159C076DA44626ECA5EA139DB147F9BFE9AB31F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.VariantExtension/KeyOptions
struct KeyOptions_t364FE7FA7E743DE3D6F9BCA58FD191C91E603221 
{
public:
	// System.Int32 Firebase.VariantExtension/KeyOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyOptions_t364FE7FA7E743DE3D6F9BCA58FD191C91E603221, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t876E76124F400D12395BF61D562162AB6822204A 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t876E76124F400D12395BF61D562162AB6822204A, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// Firebase.Database.DatabaseException
struct DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93  : public Exception_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::callbackId
	int32_t ___callbackId_1;
	// Firebase.Database.ChildChangeType Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::changeType
	int32_t ___changeType_2;
	// System.String Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::previousChildName
	String_t* ___previousChildName_3;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}

	inline static int32_t get_offset_of_changeType_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71, ___changeType_2)); }
	inline int32_t get_changeType_2() const { return ___changeType_2; }
	inline int32_t* get_address_of_changeType_2() { return &___changeType_2; }
	inline void set_changeType_2(int32_t value)
	{
		___changeType_2 = value;
	}

	inline static int32_t get_offset_of_previousChildName_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71, ___previousChildName_3)); }
	inline String_t* get_previousChildName_3() const { return ___previousChildName_3; }
	inline String_t** get_address_of_previousChildName_3() { return &___previousChildName_3; }
	inline void set_previousChildName_3(String_t* value)
	{
		___previousChildName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousChildName_3), (void*)value);
	}
};


// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Error Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_2), (void*)value);
	}
};


// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Error Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_2), (void*)value);
	}
};


// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalDataSnapshot::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalDataSnapshot::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalFirebaseDatabase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.InternalQuery
struct InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalQuery::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalQuery::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.FirebaseApp
struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * ___appPlatform_16;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___AppDisposed_4)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986, ___appPlatform_16)); }
	inline FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * get_appPlatform_16() const { return ___appPlatform_16; }
	inline FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 ** get_address_of_appPlatform_16() { return &___appPlatform_16; }
	inline void set_appPlatform_16(FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * value)
	{
		___appPlatform_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_16), (void*)value);
	}
};

struct FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_tC2AC9421BE65F604A91B9A8DBCF0F3852948B750 * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t1181C8320D44607239EE846AFE47B897C70629E8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Boolean Firebase.FirebaseApp::userAgentRegistered
	bool ___userAgentRegistered_11;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_14;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_15;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_tC2AC9421BE65F604A91B9A8DBCF0F3852948B750 * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_tC2AC9421BE65F604A91B9A8DBCF0F3852948B750 ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_tC2AC9421BE65F604A91B9A8DBCF0F3852948B750 * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_t1181C8320D44607239EE846AFE47B897C70629E8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_t1181C8320D44607239EE846AFE47B897C70629E8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_t1181C8320D44607239EE846AFE47B897C70629E8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_userAgentRegistered_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___userAgentRegistered_11)); }
	inline bool get_userAgentRegistered_11() const { return ___userAgentRegistered_11; }
	inline bool* get_address_of_userAgentRegistered_11() { return &___userAgentRegistered_11; }
	inline void set_userAgentRegistered_11(bool value)
	{
		___userAgentRegistered_11 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThread_14)); }
	inline int32_t get_CheckDependenciesThread_14() const { return ___CheckDependenciesThread_14; }
	inline int32_t* get_address_of_CheckDependenciesThread_14() { return &___CheckDependenciesThread_14; }
	inline void set_CheckDependenciesThread_14(int32_t value)
	{
		___CheckDependenciesThread_14 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields, ___CheckDependenciesThreadLock_15)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_15() const { return ___CheckDependenciesThreadLock_15; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_15() { return &___CheckDependenciesThreadLock_15; }
	inline void set_CheckDependenciesThreadLock_15(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_15), (void*)value);
	}
};


// Firebase.Variant
struct Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3, ___swigCPtr_0)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_t11D4B34F6F39BC3F67C492A72FF3A6FA918EB260  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D  : public InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalDatabaseReference::swigCPtr
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___swigCPtr_2;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D, ___swigCPtr_2)); }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t876E76124F400D12395BF61D562162AB6822204A * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t876E76124F400D12395BF61D562162AB6822204A  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}
};


// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.OutOfMemoryException
struct OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D  : public ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m666A712CA7A58F848042C6D32C98EE8995819E20_inline (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_mE63924DCC3123B8FFBC4237E6917E26F88BDC021_inline (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m20718636943A4938EAF09AB7FD13F850C38A5923_inline (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_m9238846842B9FFD1A970E1C92905C8E5CD5EA3D7 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * ___internalSnapshot0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___parentSnapshot2, DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 * ___parentList3, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_GetValue_m05B8179F8D47CEF9825019B264C7C8F5A5D05FB5 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, bool ___useExportFormat0, const RuntimeMethod* method);
// System.UInt32 Firebase.Database.InternalDataSnapshot::children_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InternalDataSnapshot_children_count_mA2B24873919C7606A8AE2500DBCC5A11A48CCD13 (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method);
// System.String Firebase.Database.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m1A660F8325DB4E46D1CB6B95635BE2C3B7FDE2E2 (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method);
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * InternalDataSnapshot_Child_m81176820ED1FE31B72BCD5E5F68BF48A2020CB7E (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.InternalDataSnapshot::exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshot_exists_mCBBF2ED22D6A45E823B62F8848E3C6B8A9715B93 (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method);
// Firebase.Variant Firebase.Database.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * InternalDataSnapshot_value_m828DF44B5AE8F4B6DCB68351822050A8A5C3DD8B (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method);
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant,Firebase.VariantExtension/KeyOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VariantExtension_ToObject_m31FEB88E50B859DBAB901219009FC82CF2CCAF67 (Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * ___variant0, int32_t ___options1, const RuntimeMethod* method);
// System.String Google.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mECDA2F1555347E2938F7718C1DFEFDBA38204CFF (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_mD4237863945D07798604818704684947D5FDFF0E (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_m1518330AD7D26392C68206C6B91725B2B59E8B60 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62 (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *, const RuntimeMethod*))Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared)(__this, method);
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m970F93BF99B8CADB7A110F4E32C7049C8C3ABF72_inline (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mC40B49304B5E5C1C6DEE1A3252E289F80DD4C362_inline (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m4D808B4C8EEBE84693B4C6B62C51C6E835E69407_inline (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m36A3D170C15C43CDF39D954F34AFA62A58F8E0E0 (int32_t ___error0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_m91C5179A636161FD1B4553247FD453B1F1DA4DD0 (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m191783B11DB5192D62F2BD6F771487C9EE14B05E_inline (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m960F91B8C562A79376D27994126A07AAFC854F42 (SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m81FF77FCDC842CD59AFFC6A50A52EB073012CAE6 (SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m5AC4DFDFF1A6C236029CD558A1FF5D38F3AA38B1 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m4344F98527C15712F85A2D350A055D445A1436BB (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m81640A842718725195DC7267A192231C12262DE9 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB0365F54B3C35341C0320D1F27C7BCC7C905D19D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m3DC0CBB350D3428305D27465BC029143F304B6CD (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m35D65783DFE167D3BAAE1736FD89C223E19B3E71 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m4FD506FCFBD93647EFDBE956D1FC2005EB980FCC (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mC734E19C981F93A52EB1DDDC7C74CF031D1A9AC6 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m355FAAE89C30EDBCDC996DFB1A7AB07FD4C1685A (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m4B24A4FCF562E01C8B0F689F0E93C43DF9D40D05 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mC2F0FF53340DA80E3E6D35C794208B3FE132455C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mEF8DD64FA343BF83A426DAB76750CD594B888427 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mA932B93D3A7AF538172B7C2642FBCABF47DC2760 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2B351503080170D1A8C1ADE3E0BD9473ACE246B6 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169 (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52 (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54 (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mDC8C263784437D38EDBCC4EEFE44FCD0B18E964B (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m0B74CB7E6D14DC9AC84060D0D6AB4C312DF9E11C (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___applicationDelegate0, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___arithmeticDelegate1, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___divideByZeroDelegate2, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___indexOutOfRangeDelegate3, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___invalidCastDelegate4, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___invalidOperationDelegate5, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___ioDelegate6, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___nullReferenceDelegate7, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___outOfMemoryDelegate8, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___overflowDelegate9, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m6FB7D43CAEF343880BF0EAFFFE7892BAB4160804 (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentDelegate0, ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentNullDelegate1, ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mC0BF0EBF95B71B34D4005C4F4CAC82338D3E212C (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mBA7C61B68C982573A93027F2C3C6EBF7DD06C80F (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m084EE432ABFF24B1201524DA89AF2E093DC95D45 (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mD14136487250A9CD3E30FEF6B21029797B260929 (Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F * __this, InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m7859AD2E45557631B3AFCA0B36CCBB8866D52838_inline (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * __this, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___value0, const RuntimeMethod* method);
// System.String Firebase.Database.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m4123B650BA69B63318767B1ED352271BF3DAF2AA (InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mCB56A4EAB624A269744D1B80E720696A82B56C15_inline (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___value0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseDatabase_get_App_mFE2C50D8940E5B4C430806440C5A862343D004AF_inline (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m072D550D05307D8D5DFA4CFBB6FA16FC97823071 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_m90224BBC05725BDC93D88641786D08FBBF8B1C58 (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::Remove(!0)
inline bool Dictionary_2_Remove_mA9763C018D5FC884395F25DCF2AC250BF45FDD54 (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mCDE2565D1210AC8CC47FF5F8E25C278B8421338E (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m7497B035927A6EF7A5170EB1BF5FF5EB31EF2408 (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * __this, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63 (const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m42A9A8E44BEDE98ECCA613E41F44A76DC0638FA0 (DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93 * __this, String_t* ___message0, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * FirebaseDatabase_GetInstance_m987403AFCC2E40ACD465632124B56E856057D4F3 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495A_inline (const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::get_AppPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * FirebaseApp_get_AppPlatform_m6F308A08C9294CB4D8191CAA2A0410E22A039934 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * FirebaseDatabase_GetInstance_m44DC8130CB46002CFCD4B43A45AD5E20B066A9C8 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m8662687B625928A0A97D80475461F3339D61D9AD (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mBEE63A95C7342ACEC5389ADFEDFA2508828E7B80 (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * __this, String_t* ___key0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 *, String_t*, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.InternalFirebaseDatabase Firebase.Database.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * InternalFirebaseDatabase_GetInstanceInternal_m03A380236753AAA0164727E96DEE42FE8F50DC1F (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m4A30C2025F399C8E3B22899703564938DA2C5ED3 (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * ___internalDB1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE26D1E1AB22C783D52432C80DE066B1FC0A6F10A (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * __this, String_t* ___key0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 *, String_t*, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalFirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * InternalFirebaseDatabase_GetReference_m7E014BA624B03F9BF0F4E1CDC47DA42E86827D5D (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_m3A9202A4CF09218EEAE5B2AB199DEFEEE6D41C9C (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * __this, InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * ___internalRef0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::.ctor()
inline void Dictionary_2__ctor_m1633DA74A1D09C292C267EAF1B3AE9FAE11F7CEA (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m6DB95F755F71797BAA6F0B7DD54331BB00B85AA4 (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_m5D6A44BD25A5A96031709C08F5DB07FA9D54962E (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m1218C42DA7ABE7ED2B9715AE914192105DB2E0B5 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_m8E58F5AF31454E7A0ECE748220DA9E399D1AB5B5 (int32_t ___uid0, InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 ** ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m41EA9A7599E7C81C30FA67B967FE12DFB06DB5DD (U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m3B7EADEF7545B6A3AD0366481AB72DF0C1AB7D2A (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mB5B8DABA67D8D7F0FBBBB9C52B612A437CF85D46 (U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m4E1C44E0713B77FA20A7CE1923A2EADA77A7C6FE (U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_mEBAB2D76867218823415E876AE85722B88812C1E (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m996DDFB3395CB7CECDFAFA8AA5B25310D0D4C4E3 (OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m52A5C936C8F7AE1C9BBFD54125674186357C407A (OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m005E88C19CDEE598E8E851BA252FD1CF8440BAE6 (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * ___cancelledCallback0, OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * ___childChangeCallback1, OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * ___childRemovedCallback2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_m6E86532F26752ACF2793DF742C16EB696F21206D (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.InternalQuery::CreateChildListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InternalQuery_CreateChildListener_m02623E8F4F0C07430CA9E560211008E41A632BCA (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, int32_t ___callbackId0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_m095E6A8FF3FEA126E029ECC2289641EB9BE63C0C (intptr_t ___listener0, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_m8E5A9DE57AD5AE1A46617005C0FB5CE60E8EE27A (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_mD3E34F28D51F8275558203FD163F0ABC104CD532 (int32_t ___callbackId0, InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F ** ___childListener1, const RuntimeMethod* method);
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * DataSnapshot_CreateSnapshot_mB382692543CF83588B8DD15AB1F1A41D17189A6E (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * ___internalSnapshot0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m5ACB5CCA25EC16696C02668A9A56C19D9EC3D83B (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m007CC390C84CA0941A4DC4703BB6301BC20EF2E3 (EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * __this, RuntimeObject * ___sender0, ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 *, RuntimeObject *, ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Database.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mBD3323FB62C8AA0CB06673F619A05468B9AEB61F (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method);
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * DatabaseError_FromError_mC4AA8CA4B352A8AA4AD7DC51548C9AEF4772522B (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m9ACC5358CA1C07D3F43C722BCFBF27DDDC08B60A (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___error0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mB84600595CFAD42508FC7A8D07699E4F7C163085 (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * __this, int32_t ___key0, InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF *, int32_t, InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m4D3D694DE9A5CAF8CD4CA81D2C990C33A2C4A0B8 (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::Remove(!0)
inline bool Dictionary_2_Remove_m63F6EF2C599AA2E401A192DDB50FED0AFEB6634A (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m02F0902909E4C411ED5E93D481AB6B3CD76F4729 (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * __this, int32_t ___key0, InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF *, int32_t, InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::.ctor()
inline void Dictionary_2__ctor_m654888D66E01C54A796BAE1B837CACE90021C74C (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_m4078B2D6CA4A969809CA501CE64504FD57155808 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m252BC4328A6F6AF40026CE9F518FBDA6C841CE87 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mE8ACCB18323D6E112C33CD972CC555ECFDE927E0 (U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m25DDB64AEE866D3B1DE81B0854B9E53117920AB4 (U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m0CD66F930839C4F0F877454137271C454135FB00 (OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_mE93E3BADA1CDC47FD62C551AD958073C2747AA0D (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * ___cancelledCallback0, OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * ___valueChangedCallback1, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.InternalQuery::CreateValueListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InternalQuery_CreateValueListener_mA53F0CD7AB485484052606AAD29534BA8AF2ED0C (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, int32_t ___callbackId0, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_mD1854CE6370D1CAEABAE27C8E8C1DB7518BD4B8A (intptr_t ___listener0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalListener::BeforeAddingListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_BeforeAddingListener_mCA6162A823572CD376DD6AFE773A9EA854EB6966 (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::add_valueChangedImpl(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_add_valueChangedImpl_m68AD0E5A5A3B986ABEC42B6C5170E317A8B8010C (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::remove_valueChangedImpl(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_remove_valueChangedImpl_mD7B98774B5947050C7CFC354F83AA8CD1A747CF8 (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalListener::AfterRemovingListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_AfterRemovingListener_m166F175786C631F8A47A1E39BE6DAFD93BF17226 (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_mACB36299BE31AA5B4A3BC2760366E5C9354362F4 (int32_t ___callbackId0, InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 ** ___valueListener1, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m76A9AEE3419051E6CDC227961CB0BDF37C07119D (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___snapshot0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m8FE918D7E82015A80F42CA63685E7B02E754DDD1 (EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * __this, RuntimeObject * ___sender0, ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *, RuntimeObject *, ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m608F94EF6256B5F922A7D6FFA3DA379788EAF922 (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___error0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshot_m284D015E6105739DE1A09471A58E6934E611EB9B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_exists(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDataSnapshot_exists_m9E96C3A42053FB6F0FAF7B11934AE653F4CCBC1D (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3 (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F (const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m693EE8A9D32226F2243BF85A8EA2C16E1B818D7F (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.UInt32 Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_children_count(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DatabaseInternalPINVOKE_InternalDataSnapshot_children_count_m7F6DF5A155938A9846CEC11DF3DAA39AF9E02AEC (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m33270DF03E012A2D37FF87626EA757E46FFFDC15 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_value_mE947855B47A834B98FE167FA4B6F8710284780D4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant__ctor_m59CC9EFEEC60458B6F259253F2D10AF77B2011E1 (Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_mC0678FE3250A8EB4F1BEC07A879454DC30C2CDE1 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_m13D6B8B586018E1130241E39FE6077F89C8500BD (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDatabaseReference_mD1F1E9DD71667FD91E430E8D3AE2BD2B313870A7 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_mFD8C67C479614246C1E8355F99F00FD58617A4B3 (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m8D357B33916F57EE30DB8A68AE3DC402B7411503 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDatabaseReference_url_mE698F3CFE744A16600ECF0AD32C6E420AAC6278B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m3BE4F9D37A8127432C0F6BE2D98D7A8C697ACCDE (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * ___instance0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m61846B0CA7B86C7856E07C376C615A75D48D6EB1 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mA4BEDABF5BFE8EB6A666C1EDC85EF22BF5CAF8B3 (InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  FirebaseApp_getCPtr_m0372DFB0195DD695D91B7F96142F8C9AB0F41FEC (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_m8E9AD9CAF85C10BBD3342366769FEF8859119EF0 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_m5354B484807E4600EAF1EEAB21F4B7AE04156285 (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::getCPtr(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  InternalFirebaseDatabase_getCPtr_m984F705CA4D549077DF6EEBF28D3458F25931C2A (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_mF817C479412507403A97DEC85B7B205589AAAE1A (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalQuery_m90A37054E326D615DFE5FC86AED4998958E37CBC (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalQuery_is_valid_m4CC67A031CA0EA757A84916835F49E77F992EDA5 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_CreateValueListener(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_CreateValueListener_m1233AD5714608DA3F9DB0DEB6A7DBF7E092E961C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m4BCAD2E06BC26BB30FAA21BB153066727E98CF2D (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_m434D288EA24879D4051283FC56D4B675DF94025C (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * ___jarg10, OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_CreateChildListener(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_CreateChildListener_m0C5243699422DC862015AC0370498421A636CBFB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m83A1DA3BDBB08D4C9A1865FE8279F3896CEDEA99 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m718542E0DFB968F0BB8A7D8855277E170E467A89 (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * ___jarg10, OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * ___jarg21, OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * ___jarg32, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_mAB8F5C223B92E39C0F28248259ECA828161A50D7 (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_m2E7464A76BC55CA99F4CAE648408CB34711DC145 (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * __this, InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::add_ValueChanged(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_add_ValueChanged_m1E9F4E086130B3786EC32AEA4B3E34120A5244EC (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::remove_ValueChanged(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_remove_ValueChanged_mE19D96456F779B08A4F741D08CC9D0564A3670FA (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mA2453D4B1AB972C8F14FF2A4A2CB7CD461DAC80E_inline (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m3802F468A4D4C49F51079BA0BCA16C128786C2B5_inline (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___value0, const RuntimeMethod* method);
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
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m5ACB5CCA25EC16696C02668A9A56C19D9EC3D83B (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChildChangedEventArgs__ctor_m5ACB5CCA25EC16696C02668A9A56C19D9EC3D83B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___previousChildName1;
		ChildChangedEventArgs_set_PreviousChildName_m666A712CA7A58F848042C6D32C98EE8995819E20_inline(__this, L_0, /*hidden argument*/NULL);
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_1 = ___snapshot0;
		ChildChangedEventArgs_set_Snapshot_mE63924DCC3123B8FFBC4237E6917E26F88BDC021_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m9ACC5358CA1C07D3F43C722BCFBF27DDDC08B60A (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChildChangedEventArgs__ctor_m9ACC5358CA1C07D3F43C722BCFBF27DDDC08B60A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_0 = ___error0;
		ChildChangedEventArgs_set_DatabaseError_m20718636943A4938EAF09AB7FD13F850C38A5923_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_mE63924DCC3123B8FFBC4237E6917E26F88BDC021 (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m20718636943A4938EAF09AB7FD13F850C38A5923 (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m666A712CA7A58F848042C6D32C98EE8995819E20 (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
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
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_m9238846842B9FFD1A970E1C92905C8E5CD5EA3D7 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * ___internalSnapshot0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___parentSnapshot2, DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 * ___parentList3, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_0 = ___internalSnapshot0;
		__this->set_internalSnapshot_0(L_0);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_1 = ___database1;
		__this->set_database_1(L_1);
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_2 = ___parentSnapshot2;
		__this->set_parentSnapshot_2(L_2);
		DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 * L_3 = ___parentList3;
		__this->set_parentList_3(L_3);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * DataSnapshot_CreateSnapshot_mB382692543CF83588B8DD15AB1F1A41D17189A6E (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * ___internalSnapshot0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshot_CreateSnapshot_mB382692543CF83588B8DD15AB1F1A41D17189A6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * V_0 = NULL;
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_0 = ___internalSnapshot0;
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_1 = ___database1;
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_2 = (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 *)il2cpp_codegen_object_new(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_m9238846842B9FFD1A970E1C92905C8E5CD5EA3D7(L_2, L_0, L_1, (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 *)NULL, (DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_3 = V_0;
		return L_3;
	}
}
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_m1518330AD7D26392C68206C6B91725B2B59E8B60 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = DataSnapshot_GetValue_m05B8179F8D47CEF9825019B264C7C8F5A5D05FB5(__this, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Int64 Firebase.Database.DataSnapshot::get_ChildrenCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DataSnapshot_get_ChildrenCount_m071108222A3776A4933FE74CBC94C5B6160DE089 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		uint32_t L_1 = InternalDataSnapshot_children_count_mA2B24873919C7606A8AE2500DBCC5A11A48CCD13(L_0, /*hidden argument*/NULL);
		V_0 = (((int64_t)((uint64_t)L_1)));
		goto IL_0010;
	}

IL_0010:
	{
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_mD4237863945D07798604818704684947D5FDFF0E (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		String_t* L_1 = InternalDataSnapshot_key_string_m1A660F8325DB4E46D1CB6B95635BE2C3B7FDE2E2(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * DataSnapshot_Child_mB81E4C5045F40D8E59D95F14B275091908EA1118 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshot_Child_mB81E4C5045F40D8E59D95F14B275091908EA1118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * V_0 = NULL;
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_0 = __this->get_internalSnapshot_0();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_2 = InternalDataSnapshot_Child_m81176820ED1FE31B72BCD5E5F68BF48A2020CB7E(L_0, L_1, /*hidden argument*/NULL);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_3 = __this->get_database_1();
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_4 = (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 *)il2cpp_codegen_object_new(DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_m9238846842B9FFD1A970E1C92905C8E5CD5EA3D7(L_4, L_2, L_3, __this, (DataSnapshotList_t086ACAB2FC8A0A204BA9619296F5AFAF831CF8C8 *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_5 = V_0;
		return L_5;
	}
}
// System.String Firebase.Database.DataSnapshot::GetRawJsonValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_GetRawJsonValue_m5948937F8C7DD99CBE837966D7D16E8F007B53D3 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		bool L_1 = InternalDataSnapshot_exists_mCBBF2ED22D6A45E823B62F8848E3C6B8A9715B93(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (String_t*)NULL;
		goto IL_0031;
	}

IL_0018:
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_3 = __this->get_internalSnapshot_0();
		NullCheck(L_3);
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_4 = InternalDataSnapshot_value_m828DF44B5AE8F4B6DCB68351822050A8A5C3DD8B(L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5 = VariantExtension_ToObject_m31FEB88E50B859DBAB901219009FC82CF2CCAF67(L_4, 1, /*hidden argument*/NULL);
		String_t* L_6 = Json_Serialize_mECDA2F1555347E2938F7718C1DFEFDBA38204CFF(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_GetValue_m05B8179F8D47CEF9825019B264C7C8F5A5D05FB5 (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, bool ___useExportFormat0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_1 = InternalDataSnapshot_value_m828DF44B5AE8F4B6DCB68351822050A8A5C3DD8B(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = VariantExtension_ToObject_m31FEB88E50B859DBAB901219009FC82CF2CCAF67(L_1, 1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Database.DataSnapshot::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_ToString_mD0A28710D9F4CE7F104B038B0824C884892CA65B (DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshot_ToString_mD0A28710D9F4CE7F104B038B0824C884892CA65B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral6F8BBE8223234BE7CF068795479D66E39AC47CC7);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral6F8BBE8223234BE7CF068795479D66E39AC47CC7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = DataSnapshot_get_Key_mD4237863945D07798604818704684947D5FDFF0E(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD57FCC10EA477EEAF3AA1F6C08C1F88F27F227A6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralD57FCC10EA477EEAF3AA1F6C08C1F88F27F227A6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		RuntimeObject * L_6 = DataSnapshot_get_Value_m1518330AD7D26392C68206C6B91725B2B59E8B60(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralF7368006D9EB8DA53E381FD4C46A859390D39E4E);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralF7368006D9EB8DA53E381FD4C46A859390D39E4E);
		String_t* L_8 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		String_t* L_9 = V_0;
		return L_9;
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
// System.Void Firebase.Database.DatabaseError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__cctor_m60404FB6F806F9089526C4B9B93CB6E7C482D7CE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError__cctor_m60404FB6F806F9089526C4B9B93CB6E7C482D7CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C * L_0 = (Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C *)il2cpp_codegen_object_new(Dictionary_2_t4EFE6A1D6502662B911688316C6920444A18CF0C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C(L_0, /*hidden argument*/Dictionary_2__ctor_m6C6B59C12BD62E890CCF5AF0366E3DA0F29ADE6C_RuntimeMethod_var);
		((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->set_ErrorReasons_13(L_0);
		Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * L_1 = (Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB *)il2cpp_codegen_object_new(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62(L_1, /*hidden argument*/Dictionary_2__ctor_m20A5B6C6950ACF998FE28F7FACEA19C755593E62_RuntimeMethod_var);
		((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->set_ErrorCodes_14(L_1);
		RuntimeObject* L_2 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_2, (-1), _stringLiteral5444D6F9BD53CC5E722D4CF53859F98787333718);
		RuntimeObject* L_3 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_3, ((int32_t)-2), _stringLiteralB553988D3E28D099A271683ADE88E9EDB57EE10F);
		RuntimeObject* L_4 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_4, ((int32_t)-3), _stringLiteral05A308029DFB0AAD1134F3E4B028519B98D2806B);
		RuntimeObject* L_5 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_5, ((int32_t)-4), _stringLiteralC3EF337D8E93BFC7DCD64FAB1CDA2CC6EC015AEA);
		RuntimeObject* L_6 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_6);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_6, ((int32_t)-6), _stringLiteralC8E3D9B1EA59C2C3EA81424DD35283AC917B2D77);
		RuntimeObject* L_7 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_7, ((int32_t)-7), _stringLiteral6335EB6522AB2308F001D48967579AD35EB604C0);
		RuntimeObject* L_8 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_8);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_8, ((int32_t)-8), _stringLiteral46776BD15CB393538C543C3DCA2ED44E055EF79C);
		RuntimeObject* L_9 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_9, ((int32_t)-9), _stringLiteral97A9C310AF2569E6A8B8E7CDB7B5E6BEE1AD5AE8);
		RuntimeObject* L_10 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_10, ((int32_t)-10), _stringLiteral3E2F0E9C4819337D229DC079F7EF5604CC86DD4A);
		RuntimeObject* L_11 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_11, ((int32_t)-11), _stringLiteral43C3C52CE9B7645EFB7341BC689E2D18A56BA7CD);
		RuntimeObject* L_12 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_12, ((int32_t)-24), _stringLiteralFC09D17A4B10AE2EE4172C94F6799A0FC53E7090);
		RuntimeObject* L_13 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_13, ((int32_t)-25), _stringLiteralAC6996996732374A3ECDAC4A654527DD3F9C85C0);
		RuntimeObject* L_14 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_14, ((int32_t)-999), _stringLiteral2E9045902981639C78002C9B7703BA483D6E8A24);
		RuntimeObject* L_15 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_15, _stringLiteral11C5CF62B8C6090DB756C0500E411A8323CC3779, (-1));
		RuntimeObject* L_16 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_16, _stringLiteralD68049BB85454C0B8C56FFBB73C45E8ADEE41B21, ((int32_t)-2));
		RuntimeObject* L_17 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_17, _stringLiteralA9E20E5CF769AB0E45EF2C502587A7197C1A1100, ((int32_t)-3));
		RuntimeObject* L_18 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_18, _stringLiteralE6CB995CFE0FE3233478F83BE4BB662B2D0F2AFE, ((int32_t)-4));
		RuntimeObject* L_19 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_19, _stringLiteral1E533537ED011AB19AE6747DF8B8F95A9E70CAEE, ((int32_t)-6));
		RuntimeObject* L_20 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_20, _stringLiteral238422C199B1DA9376D6D0B0473BCF5D65AF76E8, ((int32_t)-7));
		RuntimeObject* L_21 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_21, _stringLiteral76CD6E2E967192C0E980C24C0FC9B3321836F134, ((int32_t)-8));
		RuntimeObject* L_22 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_22, _stringLiteralE44BF54C67AB77DFD957EB06F409847FEF4851AF, ((int32_t)-9));
		RuntimeObject* L_23 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_23, _stringLiteral1D5EE313D50A7F8AEDF787B5A6C029EF09906C69, ((int32_t)-10));
		RuntimeObject* L_24 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_24, _stringLiteral030E8E8F47BFE8D70A7C16D8697DA59A2F780275, ((int32_t)-24));
		RuntimeObject* L_25 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, L_25, _stringLiteral82FEB1F87A470BAACEB4953C32A1CC382CCF10AA, ((int32_t)-25));
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_m91C5179A636161FD1B4553247FD453B1F1DA4DD0 (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError__ctor_m91C5179A636161FD1B4553247FD453B1F1DA4DD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * G_B2_0 = NULL;
	DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * G_B3_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___code0;
		DatabaseError_set_Code_m970F93BF99B8CADB7A110F4E32C7049C8C3ABF72_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		DatabaseError_set_Message_mC40B49304B5E5C1C6DEE1A3252E289F80DD4C362_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___details2;
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___details2;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001f:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		DatabaseError_set_Details_m4D808B4C8EEBE84693B4C6B62C51C6E835E69407_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m970F93BF99B8CADB7A110F4E32C7049C8C3ABF72 (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m191783B11DB5192D62F2BD6F771487C9EE14B05E (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mC40B49304B5E5C1C6DEE1A3252E289F80DD4C362 (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m4D808B4C8EEBE84693B4C6B62C51C6E835E69407 (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m36A3D170C15C43CDF39D954F34AFA62A58F8E0E0 (int32_t ___error0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___error0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0054;
			}
			case 4:
			{
				goto IL_0059;
			}
			case 5:
			{
				goto IL_005e;
			}
			case 6:
			{
				goto IL_0063;
			}
			case 7:
			{
				goto IL_0068;
			}
			case 8:
			{
				goto IL_006d;
			}
			case 9:
			{
				goto IL_0072;
			}
			case 10:
			{
				goto IL_007a;
			}
			case 11:
			{
				goto IL_007f;
			}
			case 12:
			{
				goto IL_007f;
			}
			case 13:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0045:
	{
		V_1 = ((int32_t)-4);
		goto IL_0087;
	}

IL_004a:
	{
		V_1 = ((int32_t)-6);
		goto IL_0087;
	}

IL_004f:
	{
		V_1 = ((int32_t)-7);
		goto IL_0087;
	}

IL_0054:
	{
		V_1 = ((int32_t)-8);
		goto IL_0087;
	}

IL_0059:
	{
		V_1 = ((int32_t)-24);
		goto IL_0087;
	}

IL_005e:
	{
		V_1 = ((int32_t)-2);
		goto IL_0087;
	}

IL_0063:
	{
		V_1 = ((int32_t)-9);
		goto IL_0087;
	}

IL_0068:
	{
		V_1 = ((int32_t)-3);
		goto IL_0087;
	}

IL_006d:
	{
		V_1 = ((int32_t)-10);
		goto IL_0087;
	}

IL_0072:
	{
		V_1 = ((int32_t)-999);
		goto IL_0087;
	}

IL_007a:
	{
		V_1 = ((int32_t)-25);
		goto IL_0087;
	}

IL_007f:
	{
		V_1 = ((int32_t)-999);
		goto IL_0087;
	}

IL_0087:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * DatabaseError_FromError_mC4AA8CA4B352A8AA4AD7DC51548C9AEF4772522B (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError_FromError_mC4AA8CA4B352A8AA4AD7DC51548C9AEF4772522B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * V_2 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var);
		int32_t L_1 = DatabaseError_ErrorToCode_m36A3D170C15C43CDF39D954F34AFA62A58F8E0E0(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___msg1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = ___msg1;
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_5 = ___msg1;
		G_B4_0 = L_5;
		goto IL_0026;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.String>::get_Item(!0) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, L_6, L_7);
		G_B4_0 = L_8;
	}

IL_0026:
	{
		V_1 = G_B4_0;
		int32_t L_9 = V_0;
		String_t* L_10 = V_1;
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_11 = (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 *)il2cpp_codegen_object_new(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var);
		DatabaseError__ctor_m91C5179A636161FD1B4553247FD453B1F1DA4DD0(L_11, L_9, L_10, (String_t*)NULL, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_0032;
	}

IL_0032:
	{
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_12 = V_2;
		return L_12;
	}
}
// System.String Firebase.Database.DatabaseError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_ToString_mE0FB62C9FADBAF045247FB55E0E639CB76E5EEC2 (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError_ToString_mE0FB62C9FADBAF045247FB55E0E639CB76E5EEC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = DatabaseError_get_Message_m191783B11DB5192D62F2BD6F771487C9EE14B05E_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral55EB6C2DA4A967184A694D66924D58310E7999F7, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
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
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m42A9A8E44BEDE98ECCA613E41F44A76DC0638FA0 (DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseException__ctor_m42A9A8E44BEDE98ECCA613E41F44A76DC0638FA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE__cctor_m1B712550F79BA3C278F2D7B5E21E5F5CB796F3F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseInternalPINVOKE__cctor_m1B712550F79BA3C278F2D7B5E21E5F5CB796F3F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D * L_0 = (SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D *)il2cpp_codegen_object_new(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m960F91B8C562A79376D27994126A07AAFC854F42(L_0, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7 * L_1 = (SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7 *)il2cpp_codegen_object_new(SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m81FF77FCDC842CD59AFFC6A50A52EB073012CAE6(L_1, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1(void*, char*);
#endif
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m61846B0CA7B86C7856E07C376C615A75D48D6EB1 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal(void*, char*, int32_t*);
#endif
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_m8E9AD9CAF85C10BBD3342366769FEF8859119EF0 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal(void*);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_mF817C479412507403A97DEC85B7B205589AAAE1A (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDataSnapshot(void*);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshot_m284D015E6105739DE1A09471A58E6934E611EB9B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_delete_InternalDataSnapshot", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDataSnapshot)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_exists(void*);
#endif
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_exists(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDataSnapshot_exists_m9E96C3A42053FB6F0FAF7B11934AE653F4CCBC1D (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalDataSnapshot_exists", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_exists)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0(void*, char*);
#endif
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m693EE8A9D32226F2243BF85A8EA2C16E1B818D7F (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_children_count(void*);
#endif
// System.UInt32 Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_children_count(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DatabaseInternalPINVOKE_InternalDataSnapshot_children_count_m7F6DF5A155938A9846CEC11DF3DAA39AF9E02AEC (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalDataSnapshot_children_count", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_children_count)(____jarg10_marshaled);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_key_string(void*);
#endif
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m33270DF03E012A2D37FF87626EA757E46FFFDC15 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalDataSnapshot_key_string", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_key_string)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_value(void*);
#endif
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_value_mE947855B47A834B98FE167FA4B6F8710284780D4 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalDataSnapshot_value", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_value)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalQuery(void*);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalQuery_m90A37054E326D615DFE5FC86AED4998958E37CBC (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_delete_InternalQuery", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalQuery)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_is_valid(void*);
#endif
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalQuery_is_valid_m4CC67A031CA0EA757A84916835F49E77F992EDA5 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalQuery_is_valid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_is_valid)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_CreateValueListener(void*, int32_t);
#endif
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_CreateValueListener(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_CreateValueListener_m1233AD5714608DA3F9DB0DEB6A7DBF7E092E961C (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalQuery_CreateValueListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_CreateValueListener)(____jarg10_marshaled, ___jarg21);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_DestroyValueListener(intptr_t);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m4BCAD2E06BC26BB30FAA21BB153066727E98CF2D (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalQuery_DestroyValueListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_DestroyValueListener)(___jarg10);
	#else
	il2cppPInvokeFunc(___jarg10);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_m434D288EA24879D4051283FC56D4B675DF94025C (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * ___jarg10, OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_CreateChildListener(void*, int32_t);
#endif
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_CreateChildListener(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_CreateChildListener_m0C5243699422DC862015AC0370498421A636CBFB (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalQuery_CreateChildListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_CreateChildListener)(____jarg10_marshaled, ___jarg21);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_DestroyChildListener(intptr_t);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m83A1DA3BDBB08D4C9A1865FE8279F3896CEDEA99 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalQuery_DestroyChildListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_DestroyChildListener)(___jarg10);
	#else
	il2cppPInvokeFunc(___jarg10);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m718542E0DFB968F0BB8A7D8855277E170E467A89 (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * ___jarg10, OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * ___jarg21, OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Marshaling of parameter '___jarg32' to native representation
	Il2CppMethodPointer ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg32));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDatabaseReference(void*);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDatabaseReference_mD1F1E9DD71667FD91E430E8D3AE2BD2B313870A7 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_delete_InternalDatabaseReference", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDatabaseReference)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_is_valid(void*);
#endif
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m8D357B33916F57EE30DB8A68AE3DC402B7411503 (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalDatabaseReference_is_valid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_is_valid)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_url(void*);
#endif
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDatabaseReference_url_mE698F3CFE744A16600ECF0AD32C6E420AAC6278B (HandleRef_t876E76124F400D12395BF61D562162AB6822204A  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalDatabaseReference_url", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_url)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast(intptr_t);
#endif
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_mC0678FE3250A8EB4F1BEC07A879454DC30C2CDE1 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m5AC4DFDFF1A6C236029CD558A1FF5D38F3AA38B1(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m5AC4DFDFF1A6C236029CD558A1FF5D38F3AA38B1(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m4344F98527C15712F85A2D350A055D445A1436BB(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m4344F98527C15712F85A2D350A055D445A1436BB(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m81640A842718725195DC7267A192231C12262DE9(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m81640A842718725195DC7267A192231C12262DE9(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB0365F54B3C35341C0320D1F27C7BCC7C905D19D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB0365F54B3C35341C0320D1F27C7BCC7C905D19D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m3DC0CBB350D3428305D27465BC029143F304B6CD(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m3DC0CBB350D3428305D27465BC029143F304B6CD(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m35D65783DFE167D3BAAE1736FD89C223E19B3E71(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m35D65783DFE167D3BAAE1736FD89C223E19B3E71(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m4FD506FCFBD93647EFDBE956D1FC2005EB980FCC(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m4FD506FCFBD93647EFDBE956D1FC2005EB980FCC(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_mC734E19C981F93A52EB1DDDC7C74CF031D1A9AC6(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_mC734E19C981F93A52EB1DDDC7C74CF031D1A9AC6(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m355FAAE89C30EDBCDC996DFB1A7AB07FD4C1685A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m355FAAE89C30EDBCDC996DFB1A7AB07FD4C1685A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m4B24A4FCF562E01C8B0F689F0E93C43DF9D40D05(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m4B24A4FCF562E01C8B0F689F0E93C43DF9D40D05(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_mC2F0FF53340DA80E3E6D35C794208B3FE132455C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_mC2F0FF53340DA80E3E6D35C794208B3FE132455C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_mEF8DD64FA343BF83A426DAB76750CD594B888427(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_mEF8DD64FA343BF83A426DAB76750CD594B888427(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mA932B93D3A7AF538172B7C2642FBCABF47DC2760(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mA932B93D3A7AF538172B7C2642FBCABF47DC2760(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2B351503080170D1A8C1ADE3E0BD9473ACE246B6(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2B351503080170D1A8C1ADE3E0BD9473ACE246B6(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m0B74CB7E6D14DC9AC84060D0D6AB4C312DF9E11C (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___applicationDelegate0, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___arithmeticDelegate1, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___divideByZeroDelegate2, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___indexOutOfRangeDelegate3, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___invalidCastDelegate4, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___invalidOperationDelegate5, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___ioDelegate6, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___nullReferenceDelegate7, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___outOfMemoryDelegate8, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___overflowDelegate9, ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "SWIGRegisterExceptionCallbacks_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_DatabaseInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m6FB7D43CAEF343880BF0EAFFFE7892BAB4160804 (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentDelegate0, ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentNullDelegate1, ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m5AC4DFDFF1A6C236029CD558A1FF5D38F3AA38B1 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_m5AC4DFDFF1A6C236029CD558A1FF5D38F3AA38B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_2 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m4344F98527C15712F85A2D350A055D445A1436BB (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m4344F98527C15712F85A2D350A055D445A1436BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 * L_2 = (ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269 *)il2cpp_codegen_object_new(ArithmeticException_tF9EF5FE94597830EF315C5934258F994B8648269_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m1412E36F7AF7D25CF6A00670AE2296E88DA85F5F(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m81640A842718725195DC7267A192231C12262DE9 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_m81640A842718725195DC7267A192231C12262DE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC * L_2 = (DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC *)il2cpp_codegen_object_new(DivideByZeroException_tD233835DD9A31EE4E64DD93F2D6143646CFD3FBC_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m12EDCCC81402AA666F9C3CF1CB8A8A7AA8D61169(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB0365F54B3C35341C0320D1F27C7BCC7C905D19D (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB0365F54B3C35341C0320D1F27C7BCC7C905D19D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_2 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m6CE231E888365F20BD05664560F7AF3830E9D21A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m3DC0CBB350D3428305D27465BC029143F304B6CD (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_m3DC0CBB350D3428305D27465BC029143F304B6CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m54AEC55A8A1F1EAD6485B691BB597C7EB284B2A5(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m35D65783DFE167D3BAAE1736FD89C223E19B3E71 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_m35D65783DFE167D3BAAE1736FD89C223E19B3E71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC40AA9579B996C6FBAE023590139C16304D81DC6(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m4FD506FCFBD93647EFDBE956D1FC2005EB980FCC (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m4FD506FCFBD93647EFDBE956D1FC2005EB980FCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_2 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_m37262C706BEB979358ABEFEA9F9F253E8773D2B7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mC734E19C981F93A52EB1DDDC7C74CF031D1A9AC6 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_mC734E19C981F93A52EB1DDDC7C74CF031D1A9AC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC * L_2 = (NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC *)il2cpp_codegen_object_new(NullReferenceException_t204B194BC4DDA3259AF5A8633EA248AE5977ABDC_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mCD292E9CAC2B24447B04F5404C318B1B2AF4023D(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m355FAAE89C30EDBCDC996DFB1A7AB07FD4C1685A (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m355FAAE89C30EDBCDC996DFB1A7AB07FD4C1685A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 * L_2 = (OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7 *)il2cpp_codegen_object_new(OutOfMemoryException_t2DF3EAC178583BD1DEFAAECBEDB2AF1EA86FBFC7_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m155C798916559886F6DD9C93B414E5764C55FD52(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m4B24A4FCF562E01C8B0F689F0E93C43DF9D40D05 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_m4B24A4FCF562E01C8B0F689F0E93C43DF9D40D05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D * L_2 = (OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D *)il2cpp_codegen_object_new(OverflowException_tD89571E2350DE06D9DE4AB65ADCA77D607B5693D_il2cpp_TypeInfo_var);
		OverflowException__ctor_m15CD001EEB2E79D7497E101546B04D9A5520357E(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_mC2F0FF53340DA80E3E6D35C794208B3FE132455C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_mC2F0FF53340DA80E3E6D35C794208B3FE132455C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 * L_2 = (SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782 *)il2cpp_codegen_object_new(SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782_il2cpp_TypeInfo_var);
		SystemException__ctor_mA18D2EA5642C066F35CB8C965398F9A542C33B0A(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_mEF8DD64FA343BF83A426DAB76750CD594B888427 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_mEF8DD64FA343BF83A426DAB76750CD594B888427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_2 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8E5D9390593273B9774DBD2E967805E8EDE668E3(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mA932B93D3A7AF538172B7C2642FBCABF47DC2760 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_mA932B93D3A7AF538172B7C2642FBCABF47DC2760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_0 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_3, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_5, /*hidden argument*/NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_9 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m9EA692D49986AEBAC433CE3381331146109AE20F(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2B351503080170D1A8C1ADE3E0BD9473ACE246B6 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2B351503080170D1A8C1ADE3E0BD9473ACE246B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_0 = SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_3, _stringLiteralA804D931F27BE6EF35191274DAF148C0B4FCEEF6, L_5, /*hidden argument*/NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_9 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m7C2E5727B9E16F3B2C0D8E709F26A7FE6EB6AFFF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_m7C2E5727B9E16F3B2C0D8E709F26A7FE6EB6AFFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_0 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m5AC4DFDFF1A6C236029CD558A1FF5D38F3AA38B1_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_1 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m4344F98527C15712F85A2D350A055D445A1436BB_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_2 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m81640A842718725195DC7267A192231C12262DE9_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_3 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB0365F54B3C35341C0320D1F27C7BCC7C905D19D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_4 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m3DC0CBB350D3428305D27465BC029143F304B6CD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_5 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m35D65783DFE167D3BAAE1736FD89C223E19B3E71_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_6 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m4FD506FCFBD93647EFDBE956D1FC2005EB980FCC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_7 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_mC734E19C981F93A52EB1DDDC7C74CF031D1A9AC6_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_8 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m355FAAE89C30EDBCDC996DFB1A7AB07FD4C1685A_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_9 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m4B24A4FCF562E01C8B0F689F0E93C43DF9D40D05_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_10 = (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B *)il2cpp_codegen_object_new(ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_mC2F0FF53340DA80E3E6D35C794208B3FE132455C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * L_11 = (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mDC8C263784437D38EDBCC4EEFE44FCD0B18E964B(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_mEF8DD64FA343BF83A426DAB76750CD594B888427_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * L_12 = (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mDC8C263784437D38EDBCC4EEFE44FCD0B18E964B(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_mA932B93D3A7AF538172B7C2642FBCABF47DC2760_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * L_13 = (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_mDC8C263784437D38EDBCC4EEFE44FCD0B18E964B(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m2B351503080170D1A8C1ADE3E0BD9473ACE246B6_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_14 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_15 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_16 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_17 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_18 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_19 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_20 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_21 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_22 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_23 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * L_24 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m0B74CB7E6D14DC9AC84060D0D6AB4C312DF9E11C(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * L_25 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * L_26 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * L_27 = ((SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m6FB7D43CAEF343880BF0EAFFFE7892BAB4160804(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m960F91B8C562A79376D27994126A07AAFC854F42 (SWIGExceptionHelper_t1C2B3CB969B2DCA7E6FD4EC74E3266678A8FA10D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mDC8C263784437D38EDBCC4EEFE44FCD0B18E964B (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m2B8EC9B33D88A2DC9C7E2894B664E211D8975CA9 (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___paramName1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), ___paramName1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m066B543E8904CE43C0F0D12E1CB99D3BA67A8845 (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m024793F0946BB778DA70E05CFE61735555A8E7F2 (ExceptionArgumentDelegate_tA38212B4E19A366D73FFA780B0B72D986F119EA9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mF8B700E9AA12D71F01E5657B746328A37F2DBD54 (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mB1179ECDE8F528EB9E6E54E61BE22EDA29EA3BB2 (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m02F1D6D79B5E192FE9CC6AFCA1CBE7B0F624F9F3 (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m4ADD0DFEFC6109E45D7ED328026711BB1AC9FF2B (ExceptionDelegate_t2593B84680A1BA5EF61F87E3641982E97D97BB5B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_0 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral519E5A114736C3C9A5709C059C9D5F69D5683AB2, L_3, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		Exception_t * L_5 = ___e0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_6 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, SWIGPendingException_Set_mAA43DD1F0D8B01C340697932F25DDE4E4B5C030C_RuntimeMethod_var);
	}

IL_002d:
	{
		Exception_t * L_7 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->set_pendingException_0(L_7);
		RuntimeObject * L_8 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_1 = L_8;
		V_2 = (bool)0;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_9, (bool*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		int32_t L_10 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x5F, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_005e;
			}
		}

IL_0057:
		{
			RuntimeObject * L_12 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_12, /*hidden argument*/NULL);
		}

IL_005e:
		{
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		return;
	}
}
// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_mFA478DA70FFC228DA5D99A72C760C9739EF8AD89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Exception_t *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		Exception_t * L_4 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_4;
		((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeObject * L_5 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_3 = L_5;
		V_4 = (bool)0;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_6 = V_3;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_6, (bool*)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var);
		int32_t L_7 = ((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
		IL2CPP_LEAVE(0x57, FINALLY_004b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_4;
			if (!L_8)
			{
				goto IL_0056;
			}
		}

IL_004f:
		{
			RuntimeObject * L_9 = V_3;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		}

IL_0056:
		{
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
	}

IL_0058:
	{
	}

IL_0059:
	{
		Exception_t * L_10 = V_0;
		V_5 = L_10;
		goto IL_005e;
	}

IL_005e:
	{
		Exception_t * L_11 = V_5;
		return L_11;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m76ACB5E6E3B76D0E7DDAAC11A8FD2DF1AE340704 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException__cctor_m76ACB5E6E3B76D0E7DDAAC11A8FD2DF1AE340704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(0);
		((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->set_exceptionsLock_2(NULL);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t90BE68CD7E0C821861D980859970AC5BFA734A3A_il2cpp_TypeInfo_var))->set_exceptionsLock_2(L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mC0BF0EBF95B71B34D4005C4F4CAC82338D3E212C(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_mC0BF0EBF95B71B34D4005C4F4CAC82338D3E212C(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_DatabaseInternal(Il2CppMethodPointer);
#endif
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m084EE432ABFF24B1201524DA89AF2E093DC95D45 (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-11_6_0"), "SWIGRegisterStringCallback_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_DatabaseInternal)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mC0BF0EBF95B71B34D4005C4F4CAC82338D3E212C (String_t* ___cString0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___cString0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mD96FA554663D8A078724F5106AC0164004F44FFE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_mD96FA554663D8A078724F5106AC0164004F44FFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * L_0 = (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 *)il2cpp_codegen_object_new(SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mBA7C61B68C982573A93027F2C3C6EBF7DD06C80F(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mC0BF0EBF95B71B34D4005C4F4CAC82338D3E212C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * L_1 = ((SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m084EE432ABFF24B1201524DA89AF2E093DC95D45(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m81FF77FCDC842CD59AFFC6A50A52EB073012CAE6 (SWIGStringHelper_t6FF0747F8608D3FF493832EFBFBF719983156BD7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mBA7C61B68C982573A93027F2C3C6EBF7DD06C80F (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m887547BA3E6F346B03C1091EAC5FC9EC224CA0A0 (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mFE5F6CD9345B7DEDD0A71465F6FC4FAC07A78748 (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * __this, String_t* ___message0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m7709DAC71480E531E557E6B532DC1C3599FB2ED2 (SWIGStringDelegate_t68ABACF8905CE4A954FEA011908B3567169B8B39 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_m3A9202A4CF09218EEAE5B2AB199DEFEEE6D41C9C (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * __this, InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * ___internalRef0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * L_0 = ___internalRef0;
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_1 = ___database1;
		Query__ctor_mD14136487250A9CD3E30FEF6B21029797B260929(__this, L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * L_2 = ___internalRef0;
		__this->set_internalReference_4(L_2);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_3 = ___database1;
		DatabaseReference_set_Database_m7859AD2E45557631B3AFCA0B36CCBB8866D52838_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m7859AD2E45557631B3AFCA0B36CCBB8866D52838 (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * __this, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Firebase.Database.DatabaseReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseReference_ToString_m83091CEBAC8DAB8E8E9D160E0A38A13B3FD52E6E (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * L_0 = __this->get_internalReference_4();
		NullCheck(L_0);
		String_t* L_1 = InternalDatabaseReference_url_m4123B650BA69B63318767B1ED352271BF3DAF2AA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Firebase.Database.DatabaseReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseReference_Equals_mA98108DEABE7C291455C518C9EF3F03DD9D5A3DD (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseReference_Equals_mA98108DEABE7C291455C518C9EF3F03DD9D5A3DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!((DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 *)IsInstSealed((RuntimeObject*)L_0, DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		RuntimeObject * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_1, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Firebase.Database.DatabaseReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseReference_GetHashCode_mE595DE105F8F0663DAD46BA7821F2C438AF1004A (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
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
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m4A30C2025F399C8E3B22899703564938DA2C5ED3 (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * ___internalDB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase__ctor_m4A30C2025F399C8E3B22899703564938DA2C5ED3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
		FirebaseDatabase_set_App_mCB56A4EAB624A269744D1B80E720696A82B56C15_inline(__this, L_0, /*hidden argument*/NULL);
		InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_1 = ___internalDB1;
		__this->set_internalDatabase_2(L_1);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = FirebaseDatabase_get_App_mFE2C50D8940E5B4C430806440C5A862343D004AF_inline(__this, /*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_3 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_3, __this, (intptr_t)((intptr_t)FirebaseDatabase_OnAppDisposed_m947893443EF19DD9BFAD50F0AFD8AFA8D106B1FE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		FirebaseApp_add_AppDisposed_m072D550D05307D8D5DFA4CFBB6FA16FC97823071(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Finalize_m56DB0415888D3D97345B3091389EE112BA72FD75 (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		FirebaseDatabase_Dispose_m90224BBC05725BDC93D88641786D08FBBF8B1C58(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_OnAppDisposed_m947893443EF19DD9BFAD50F0AFD8AFA8D106B1FE (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___eventArgs1, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_Dispose_m90224BBC05725BDC93D88641786D08FBBF8B1C58(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_m90224BBC05725BDC93D88641786D08FBBF8B1C58 (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_Dispose_m90224BBC05725BDC93D88641786D08FBBF8B1C58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_0 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_1 = __this->get_internalDatabase_2();
			V_2 = (bool)((((RuntimeObject*)(InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_2 = V_2;
			if (!L_2)
			{
				goto IL_0025;
			}
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x99, FINALLY_008e);
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var);
			Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_3 = ((FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var))->get_databases_5();
			V_3 = L_3;
			V_4 = (bool)0;
		}

IL_002e:
		try
		{ // begin try (depth: 2)
			Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_4 = V_3;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_4, (bool*)(&V_4), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var);
			Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_5 = ((FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_6 = __this->get_name_3();
			NullCheck(L_5);
			Dictionary_2_Remove_mA9763C018D5FC884395F25DCF2AC250BF45FDD54(L_5, L_6, /*hidden argument*/Dictionary_2_Remove_mA9763C018D5FC884395F25DCF2AC250BF45FDD54_RuntimeMethod_var);
			IL2CPP_LEAVE(0x58, FINALLY_004c);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004c;
		}

FINALLY_004c:
		{ // begin finally (depth: 2)
			{
				bool L_7 = V_4;
				if (!L_7)
				{
					goto IL_0057;
				}
			}

IL_0050:
			{
				Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_8 = V_3;
				Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
			}

IL_0057:
			{
				IL2CPP_END_FINALLY(76)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(76)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x58, IL_0058)
		}

IL_0058:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_9 = FirebaseDatabase_get_App_mFE2C50D8940E5B4C430806440C5A862343D004AF_inline(__this, /*hidden argument*/NULL);
			EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_10 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
			EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_10, __this, (intptr_t)((intptr_t)FirebaseDatabase_OnAppDisposed_m947893443EF19DD9BFAD50F0AFD8AFA8D106B1FE_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_9);
			FirebaseApp_remove_AppDisposed_mCDE2565D1210AC8CC47FF5F8E25C278B8421338E(L_9, L_10, /*hidden argument*/NULL);
			FirebaseDatabase_set_App_mCB56A4EAB624A269744D1B80E720696A82B56C15_inline(__this, (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)NULL, /*hidden argument*/NULL);
			InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_11 = __this->get_internalDatabase_2();
			NullCheck(L_11);
			InternalFirebaseDatabase_Dispose_m7497B035927A6EF7A5170EB1BF5FF5EB31EF2408(L_11, /*hidden argument*/NULL);
			__this->set_internalDatabase_2((InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C *)NULL);
			IL2CPP_LEAVE(0x99, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0098;
			}
		}

IL_0091:
		{
			FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_13 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_13, /*hidden argument*/NULL);
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x99, IL_0099)
	}

IL_0099:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseDatabase_get_App_mFE2C50D8940E5B4C430806440C5A862343D004AF (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = __this->get_U3CAppU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mCB56A4EAB624A269744D1B80E720696A82B56C15 (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_4(L_0);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * FirebaseDatabase_get_DefaultInstance_m3B0C21CB77D5BD79E4D7534EC1703E7B6BD6A322 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_get_DefaultInstance_m3B0C21CB77D5BD79E4D7534EC1703E7B6BD6A322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * V_0 = NULL;
	bool V_1 = false;
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = FirebaseApp_get_DefaultInstance_m46ACEAEC916D0AC3014302498F51607462EE5C63(/*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93 * L_3 = (DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93 *)il2cpp_codegen_object_new(DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m42A9A8E44BEDE98ECCA613E41F44A76DC0638FA0(L_3, _stringLiteral485C0DB0D97BEE2AD947C0844A4001AA2CC28ED5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseDatabase_get_DefaultInstance_m3B0C21CB77D5BD79E4D7534EC1703E7B6BD6A322_RuntimeMethod_var);
	}

IL_001b:
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_5 = FirebaseDatabase_GetInstance_m987403AFCC2E40ACD465632124B56E856057D4F3(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_6 = V_2;
		return L_6;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * FirebaseDatabase_GetInstance_m987403AFCC2E40ACD465632124B56E856057D4F3 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_GetInstance_m987403AFCC2E40ACD465632124B56E856057D4F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * V_0 = NULL;
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495A_inline(/*hidden argument*/NULL);
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_2 = ___app0;
		NullCheck(L_2);
		FirebaseAppPlatform_tDB2126CA2A03AFD8EA2B368EAB733DE52BFF6D75 * L_3 = FirebaseApp_get_AppPlatform_m6F308A08C9294CB4D8191CAA2A0410E22A039934(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(0 /* System.String Firebase.Platform.IAppConfigExtensions::GetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t362FEF94FA8FC4281542DB73AB85A18C490DD450_il2cpp_TypeInfo_var, L_1, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_5 = FirebaseDatabase_GetInstance_m44DC8130CB46002CFCD4B43A45AD5E20B066A9C8(L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_6 = V_0;
		return L_6;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * FirebaseDatabase_GetInstance_m44DC8130CB46002CFCD4B43A45AD5E20B066A9C8 (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_GetInstance_m44DC8130CB46002CFCD4B43A45AD5E20B066A9C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * V_7 = NULL;
	bool V_8 = false;
	FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B7_0 = 0;
	{
		String_t* L_0 = ___url1;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93 * L_3 = (DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93 *)il2cpp_codegen_object_new(DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m42A9A8E44BEDE98ECCA613E41F44A76DC0638FA0(L_3, _stringLiteralF3DA9A389ABD93EE737198EA8C068AEC4BA6B4FD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseDatabase_GetInstance_m44DC8130CB46002CFCD4B43A45AD5E20B066A9C8_RuntimeMethod_var);
	}

IL_0017:
	{
		V_0 = (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA *)NULL;
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_4 = ___app0;
		NullCheck(L_4);
		String_t* L_5 = FirebaseApp_get_Name_m8662687B625928A0A97D80475461F3339D61D9AD(L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___url1;
		String_t* L_7 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6AB2A5D1FE0A10CB014FC4303709BA72103C7CD0, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var);
		Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_8 = ((FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var))->get_databases_5();
		V_3 = L_8;
		V_4 = (bool)0;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_9 = V_3;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_9, (bool*)(&V_4), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var);
			Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_10 = ((FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_11 = V_1;
			NullCheck(L_10);
			bool L_12 = Dictionary_2_TryGetValue_mBEE63A95C7342ACEC5389ADFEDFA2508828E7B80(L_10, L_11, (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mBEE63A95C7342ACEC5389ADFEDFA2508828E7B80_RuntimeMethod_var);
			V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_009c;
			}
		}

IL_0054:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_14 = ___app0;
			String_t* L_15 = ___url1;
			InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_16 = InternalFirebaseDatabase_GetInstanceInternal_m03A380236753AAA0164727E96DEE42FE8F50DC1F(L_14, L_15, (int32_t*)(&V_6), /*hidden argument*/NULL);
			V_7 = L_16;
			InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_17 = V_7;
			if (!L_17)
			{
				goto IL_006b;
			}
		}

IL_0064:
		{
			int32_t L_18 = V_6;
			G_B7_0 = ((!(((uint32_t)L_18) <= ((uint32_t)0)))? 1 : 0);
			goto IL_006c;
		}

IL_006b:
		{
			G_B7_0 = 1;
		}

IL_006c:
		{
			V_8 = (bool)G_B7_0;
			bool L_19 = V_8;
			if (!L_19)
			{
				goto IL_007e;
			}
		}

IL_0072:
		{
			DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93 * L_20 = (DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93 *)il2cpp_codegen_object_new(DatabaseException_tF751AB453AFFC98B6B95464ACEDACD0F2B161F93_il2cpp_TypeInfo_var);
			DatabaseException__ctor_m42A9A8E44BEDE98ECCA613E41F44A76DC0638FA0(L_20, _stringLiteralD2605ACD229B49A682D1AF88108FAC1CEEA6CC52, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, FirebaseDatabase_GetInstance_m44DC8130CB46002CFCD4B43A45AD5E20B066A9C8_RuntimeMethod_var);
		}

IL_007e:
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_21 = ___app0;
			InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_22 = V_7;
			FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_23 = (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA *)il2cpp_codegen_object_new(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var);
			FirebaseDatabase__ctor_m4A30C2025F399C8E3B22899703564938DA2C5ED3(L_23, L_21, L_22, /*hidden argument*/NULL);
			V_0 = L_23;
			FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_24 = V_0;
			String_t* L_25 = V_1;
			NullCheck(L_24);
			L_24->set_name_3(L_25);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var);
			Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_26 = ((FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_27 = V_1;
			FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_28 = V_0;
			NullCheck(L_26);
			Dictionary_2_set_Item_mE26D1E1AB22C783D52432C80DE066B1FC0A6F10A(L_26, L_27, L_28, /*hidden argument*/Dictionary_2_set_Item_mE26D1E1AB22C783D52432C80DE066B1FC0A6F10A_RuntimeMethod_var);
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		{
			bool L_29 = V_4;
			if (!L_29)
			{
				goto IL_00aa;
			}
		}

IL_00a3:
		{
			Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_30 = V_3;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_30, /*hidden argument*/NULL);
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(159)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
	}

IL_00ab:
	{
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_31 = V_0;
		V_9 = L_31;
		goto IL_00b0;
	}

IL_00b0:
	{
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_32 = V_9;
		return L_32;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * FirebaseDatabase_GetReference_mDA839ED2DA49DF728A2FA336C5EE83ADEDA4706F (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_GetReference_mDA839ED2DA49DF728A2FA336C5EE83ADEDA4706F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * V_0 = NULL;
	{
		InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_0 = __this->get_internalDatabase_2();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * L_2 = InternalFirebaseDatabase_GetReference_m7E014BA624B03F9BF0F4E1CDC47DA42E86827D5D(L_0, L_1, /*hidden argument*/NULL);
		DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * L_3 = (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 *)il2cpp_codegen_object_new(DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_m3A9202A4CF09218EEAE5B2AB199DEFEEE6D41C9C(L_3, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__cctor_m7146554A9495B6AC9C99E780D10856857758EDBD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase__cctor_m7146554A9495B6AC9C99E780D10856857758EDBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 * L_0 = (Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0 *)il2cpp_codegen_object_new(Dictionary_2_t76E1D15B4217C9738A39E0BE0EFADD439D72EFA0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1633DA74A1D09C292C267EAF1B3AE9FAE11F7CEA(L_0, /*hidden argument*/Dictionary_2__ctor_m1633DA74A1D09C292C267EAF1B3AE9FAE11F7CEA_RuntimeMethod_var);
		((FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA_il2cpp_TypeInfo_var))->set_databases_5(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildChangeHandler_m6DB95F755F71797BAA6F0B7DD54331BB00B85AA4(int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, char* ___previousChildName3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___previousChildName3' to managed representation
	String_t* ____previousChildName3_unmarshaled = NULL;
	____previousChildName3_unmarshaled = il2cpp_codegen_marshal_string_result(___previousChildName3);

	// Managed method invocation
	InternalChildListener_OnChildChangeHandler_m6DB95F755F71797BAA6F0B7DD54331BB00B85AA4(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildRemovedHandler_m5D6A44BD25A5A96031709C08F5DB07FA9D54962E(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalChildListener_OnChildRemovedHandler_m5D6A44BD25A5A96031709C08F5DB07FA9D54962E(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnCancelledHandler_m1218C42DA7ABE7ED2B9715AE914192105DB2E0B5(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalChildListener_OnCancelledHandler_m1218C42DA7ABE7ED2B9715AE914192105DB2E0B5(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_mD3E34F28D51F8275558203FD163F0ABC104CD532 (int32_t ___callbackId0, InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F ** ___childListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_TryGetListener_mD3E34F28D51F8275558203FD163F0ABC104CD532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		bool L_1 = InternalListener_TryGetListener_m8E58F5AF31454E7A0ECE748220DA9E399D1AB5B5(L_0, (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F ** L_3 = ___childListener1;
		InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * L_4 = V_0;
		*((RuntimeObject **)L_3) = (RuntimeObject *)((InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F *)IsInstSealed((RuntimeObject*)L_4, InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)((InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F *)IsInstSealed((RuntimeObject*)L_4, InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F_il2cpp_TypeInfo_var)));
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F ** L_5 = ___childListener1;
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_6 = *((InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F **)L_5);
		V_2 = (bool)((!(((RuntimeObject*)(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0028;
	}

IL_0020:
	{
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F ** L_7 = ___childListener1;
		*((RuntimeObject **)L_7) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)NULL);
		V_2 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m6DB95F755F71797BAA6F0B7DD54331BB00B85AA4 (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnChildChangeHandler_m6DB95F755F71797BAA6F0B7DD54331BB00B85AA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * L_0 = (U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m41EA9A7599E7C81C30FA67B967FE12DFB06DB5DD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * L_1 = V_0;
		intptr_t L_2 = ___snapshot2;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * L_5 = V_0;
		int32_t L_6 = ___changeType1;
		NullCheck(L_5);
		L_5->set_changeType_2(L_6);
		U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * L_7 = V_0;
		String_t* L_8 = ___previousChildName3;
		NullCheck(L_7);
		L_7->set_previousChildName_3(L_8);
		U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * L_9 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mCF8C4632B91779D8B8DEB4264F89B34F8A75346B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionAggregator_t9CFD2D8A88E4C9B1D3148DCB5B2B84BCC7904F07_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m3B7EADEF7545B6A3AD0366481AB72DF0C1AB7D2A(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_m5D6A44BD25A5A96031709C08F5DB07FA9D54962E (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnChildRemovedHandler_m5D6A44BD25A5A96031709C08F5DB07FA9D54962E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 * L_0 = (U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_mB5B8DABA67D8D7F0FBBBB9C52B612A437CF85D46(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 * L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 * L_5 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m70FEFF8849686B254EB1572D2DEB620FEE6036BE_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionAggregator_t9CFD2D8A88E4C9B1D3148DCB5B2B84BCC7904F07_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m3B7EADEF7545B6A3AD0366481AB72DF0C1AB7D2A(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m1218C42DA7ABE7ED2B9715AE914192105DB2E0B5 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnCancelledHandler_m1218C42DA7ABE7ED2B9715AE914192105DB2E0B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * L_0 = (U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m4E1C44E0713B77FA20A7CE1923A2EADA77A7C6FE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->set_msg_2(L_6);
		U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * L_7 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mC116264E159492CFD41C53F2C1ADE8AFFAB9F585_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionAggregator_t9CFD2D8A88E4C9B1D3148DCB5B2B84BCC7904F07_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m3B7EADEF7545B6A3AD0366481AB72DF0C1AB7D2A(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__cctor_m67D8B04E58745017BA22230D850025CFA1972115 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener__cctor_m67D8B04E58745017BA22230D850025CFA1972115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * L_0 = (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 *)il2cpp_codegen_object_new(OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_mEBAB2D76867218823415E876AE85722B88812C1E(L_0, NULL, (intptr_t)((intptr_t)InternalChildListener_OnCancelledHandler_m1218C42DA7ABE7ED2B9715AE914192105DB2E0B5_RuntimeMethod_var), /*hidden argument*/NULL);
		OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * L_1 = (OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E *)il2cpp_codegen_object_new(OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E_il2cpp_TypeInfo_var);
		OnChildChangeDelegate__ctor_m996DDFB3395CB7CECDFAFA8AA5B25310D0D4C4E3(L_1, NULL, (intptr_t)((intptr_t)InternalChildListener_OnChildChangeHandler_m6DB95F755F71797BAA6F0B7DD54331BB00B85AA4_RuntimeMethod_var), /*hidden argument*/NULL);
		OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * L_2 = (OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 *)il2cpp_codegen_object_new(OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12_il2cpp_TypeInfo_var);
		OnChildRemovedDelegate__ctor_m52A5C936C8F7AE1C9BBFD54125674186357C407A(L_2, NULL, (intptr_t)((intptr_t)InternalChildListener_OnChildRemovedHandler_m5D6A44BD25A5A96031709C08F5DB07FA9D54962E_RuntimeMethod_var), /*hidden argument*/NULL);
		InternalQuery_RegisterChildListenerCallbacks_m005E88C19CDEE598E8E851BA252FD1CF8440BAE6(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_m2E7464A76BC55CA99F4CAE648408CB34711DC145 (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * __this, InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener__ctor_m2E7464A76BC55CA99F4CAE648408CB34711DC145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		InternalListener__ctor_m6E86532F26752ACF2793DF742C16EB696F21206D(__this, /*hidden argument*/NULL);
		InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::CreateCppListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_CreateCppListener_m8465952A359BDFA7607EC9CFB90BBD309C5A4AC2 (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * __this, int32_t ___callbackId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_CreateCppListener_m8465952A359BDFA7607EC9CFB90BBD309C5A4AC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * L_3 = __this->get_internalQuery_4();
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		intptr_t L_5 = InternalQuery_CreateChildListener_m02623E8F4F0C07430CA9E560211008E41A632BCA(L_3, L_4, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)L_5);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_DestroyCppListener_m5B57F4F551FE25B299A3F8484B4A3C509B099031 (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_DestroyCppListener_m5B57F4F551FE25B299A3F8484B4A3C509B099031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_cppListener_5();
		InternalQuery_DestroyChildListener_m095E6A8FF3FEA126E029ECC2289641EB9BE63C0C((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalChildListener::HasNoListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_HasNoListeners_m29B9B02101714CDBE403F42DD792FF8F2E69B43A (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_0 = __this->get_cancelledImpl_7();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
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
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m41EA9A7599E7C81C30FA67B967FE12DFB06DB5DD (U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::<OnChildChangeHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mCF8C4632B91779D8B8DEB4264F89B34F8A75346B (U3CU3Ec__DisplayClass4_0_t728C83AE6B03C6F954A25420D7C622D882A79F71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_mCF8C4632B91779D8B8DEB4264F89B34F8A75346B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * V_0 = NULL;
	EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * V_1 = NULL;
	InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_1 = (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 *)il2cpp_codegen_object_new(InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m8E5A9DE57AD5AE1A46617005C0FB5CE60E8EE27A(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 *)NULL;
		V_2 = (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F_il2cpp_TypeInfo_var);
		bool L_3 = InternalChildListener_TryGetListener_mD3E34F28D51F8275558203FD163F0ABC104CD532(L_2, (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F **)(&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_5 = __this->get_changeType_2();
		V_4 = L_5;
		int32_t L_6 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0055;
			}
		}
	}
	{
		goto IL_005e;
	}

IL_0043:
	{
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_7 = V_2;
		NullCheck(L_7);
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_8 = L_7->get_childAddedImpl_8();
		V_1 = L_8;
		goto IL_005e;
	}

IL_004c:
	{
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_10 = L_9->get_childChangedImpl_9();
		V_1 = L_10;
		goto IL_005e;
	}

IL_0055:
	{
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_12 = L_11->get_childMovedImpl_10();
		V_1 = L_12;
		goto IL_005e;
	}

IL_005e:
	{
	}

IL_005f:
	{
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_13 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_15 = V_1;
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_16 = V_0;
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_17 = V_2;
		NullCheck(L_17);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_18 = L_17->get_database_6();
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_19 = DataSnapshot_CreateSnapshot_mB382692543CF83588B8DD15AB1F1A41D17189A6E(L_16, L_18, /*hidden argument*/NULL);
		String_t* L_20 = __this->get_previousChildName_3();
		ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * L_21 = (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF *)il2cpp_codegen_object_new(ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m5ACB5CCA25EC16696C02668A9A56C19D9EC3D83B(L_21, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		EventHandler_1_Invoke_m007CC390C84CA0941A4DC4703BB6301BC20EF2E3(L_15, NULL, L_21, /*hidden argument*/EventHandler_1_Invoke_m007CC390C84CA0941A4DC4703BB6301BC20EF2E3_RuntimeMethod_var);
		goto IL_0095;
	}

IL_008c:
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_22 = V_0;
		NullCheck(L_22);
		InternalDataSnapshot_Dispose_mBD3323FB62C8AA0CB06673F619A05468B9AEB61F(L_22, /*hidden argument*/NULL);
	}

IL_0095:
	{
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
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mB5B8DABA67D8D7F0FBBBB9C52B612A437CF85D46 (U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::<OnChildRemovedHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m70FEFF8849686B254EB1572D2DEB620FEE6036BE (U3CU3Ec__DisplayClass5_0_tED20CB1D41B72AB09A0E2766EF398842A5DBCBA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m70FEFF8849686B254EB1572D2DEB620FEE6036BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * V_0 = NULL;
	EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * V_1 = NULL;
	InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_1 = (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 *)il2cpp_codegen_object_new(InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m8E5A9DE57AD5AE1A46617005C0FB5CE60E8EE27A(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 *)NULL;
		V_2 = (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F_il2cpp_TypeInfo_var);
		bool L_3 = InternalChildListener_TryGetListener_mD3E34F28D51F8275558203FD163F0ABC104CD532(L_2, (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F **)(&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_5 = V_2;
		NullCheck(L_5);
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_6 = L_5->get_childRemovedImpl_11();
		V_1 = L_6;
	}

IL_002c:
	{
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_7 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_9 = V_1;
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_10 = V_0;
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_11 = V_2;
		NullCheck(L_11);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_12 = L_11->get_database_6();
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_13 = DataSnapshot_CreateSnapshot_mB382692543CF83588B8DD15AB1F1A41D17189A6E(L_10, L_12, /*hidden argument*/NULL);
		ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * L_14 = (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF *)il2cpp_codegen_object_new(ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m5ACB5CCA25EC16696C02668A9A56C19D9EC3D83B(L_14, L_13, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_9);
		EventHandler_1_Invoke_m007CC390C84CA0941A4DC4703BB6301BC20EF2E3(L_9, NULL, L_14, /*hidden argument*/EventHandler_1_Invoke_m007CC390C84CA0941A4DC4703BB6301BC20EF2E3_RuntimeMethod_var);
		goto IL_005d;
	}

IL_0054:
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_15 = V_0;
		NullCheck(L_15);
		InternalDataSnapshot_Dispose_mBD3323FB62C8AA0CB06673F619A05468B9AEB61F(L_15, /*hidden argument*/NULL);
	}

IL_005d:
	{
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
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m4E1C44E0713B77FA20A7CE1923A2EADA77A7C6FE (U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::<OnCancelledHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mC116264E159492CFD41C53F2C1ADE8AFFAB9F585 (U3CU3Ec__DisplayClass6_0_tD8B5A8E51383AF998FE4ECCFE38E1578B18324E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mC116264E159492CFD41C53F2C1ADE8AFFAB9F585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * V_0 = NULL;
	InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 *)NULL;
		int32_t L_0 = __this->get_callbackId_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F_il2cpp_TypeInfo_var);
		bool L_1 = InternalChildListener_TryGetListener_mD3E34F28D51F8275558203FD163F0ABC104CD532(L_0, (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F **)(&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_3 = V_1;
		NullCheck(L_3);
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_4 = L_3->get_cancelledImpl_7();
		V_0 = L_4;
	}

IL_001d:
	{
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_5 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		EventHandler_1_tFAA9435118459D3D14B667DDEC4E46D306BF12D6 * L_7 = V_0;
		int32_t L_8 = __this->get_error_1();
		String_t* L_9 = __this->get_msg_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var);
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_10 = DatabaseError_FromError_mC4AA8CA4B352A8AA4AD7DC51548C9AEF4772522B(L_8, L_9, /*hidden argument*/NULL);
		ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * L_11 = (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF *)il2cpp_codegen_object_new(ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m9ACC5358CA1C07D3F43C722BCFBF27DDDC08B60A(L_11, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m007CC390C84CA0941A4DC4703BB6301BC20EF2E3(L_7, NULL, L_11, /*hidden argument*/EventHandler_1_Invoke_m007CC390C84CA0941A4DC4703BB6301BC20EF2E3_RuntimeMethod_var);
	}

IL_0045:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_mEBAB2D76867218823415E876AE85722B88812C1E (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_m75E62DFBB4DEBCA6D74132331696812F2142846C (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___error1, ___msg2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Error,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancelledDelegate_BeginInvoke_m73042215958D9865E01C32309848BE3EE9F0622A (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCancelledDelegate_BeginInvoke_m73042215958D9865E01C32309848BE3EE9F0622A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_tDDBEDD5227F360B4D311BD40D61C7DAE5179F4EF_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_EndInvoke_mB45A70A61E017F2392C799896239662776405458 (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E (OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___previousChildName3' to native representation
	char* ____previousChildName3_marshaled = NULL;
	____previousChildName3_marshaled = il2cpp_codegen_marshal_string(___previousChildName3);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_marshaled);

	// Marshaling cleanup of parameter '___previousChildName3' native representation
	il2cpp_codegen_marshal_free(____previousChildName3_marshaled);
	____previousChildName3_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m996DDFB3395CB7CECDFAFA8AA5B25310D0D4C4E3 (OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::Invoke(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_Invoke_m0FA7F7F538B9E87659ED57834F44331CF512D897 (OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						GenericVirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						VirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::BeginInvoke(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChildChangeDelegate_BeginInvoke_mB15B51628F2E8305B431A5540171F40B9A500EE1 (OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnChildChangeDelegate_BeginInvoke_mB15B51628F2E8305B431A5540171F40B9A500EE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(ChildChangeType_t72EF4B75ABE59631C47F0521837CEC2041A3CD1D_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot2);
	__d_args[3] = ___previousChildName3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_EndInvoke_m77D180654C3C92F274A2D87BBEC0F046F40F6940 (OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 (OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m52A5C936C8F7AE1C9BBFD54125674186357C407A (OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_Invoke_mCB41E11453C8923E8A1662AE46DD9B46B38DFA18 (OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___snapshot1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChildRemovedDelegate_BeginInvoke_m04449D3C7CE9220252F1C3B88E8B6A6E1B675D5B (OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnChildRemovedDelegate_BeginInvoke_m04449D3C7CE9220252F1C3B88E8B6A6E1B675D5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_EndInvoke_m02EF58F5A948FF0D7D029475441EF716CFA4394C (OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_m8E58F5AF31454E7A0ECE748220DA9E399D1AB5B5 (int32_t ___uid0, InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 ** ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_TryGetListener_m8E58F5AF31454E7A0ECE748220DA9E399D1AB5B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_0 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_2 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = ___uid0;
		InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 ** L_4 = ___listener1;
		NullCheck(L_2);
		bool L_5 = Dictionary_2_TryGetValue_mB84600595CFAD42508FC7A8D07699E4F7C163085(L_2, L_3, (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_mB84600595CFAD42508FC7A8D07699E4F7C163085_RuntimeMethod_var);
		V_2 = L_5;
		IL2CPP_LEAVE(0x2D, FINALLY_0022);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0025:
		{
			Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_7 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(34)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_m6E86532F26752ACF2793DF742C16EB696F21206D (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener__ctor_m6E86532F26752ACF2793DF742C16EB696F21206D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_0 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		int32_t L_2 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_uidGenerator_0();
		int32_t L_3 = L_2;
		((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->set_uidGenerator_0(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set_uid_2(L_3);
		IL2CPP_LEAVE(0x3B, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_003a;
			}
		}

IL_0033:
		{
			Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_003a:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
	}

IL_003b:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Finalize_mC19E99B9B0BFDA0D06C1DA046130AC558DF2D81F (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		InternalListener_Dispose_m4D3D694DE9A5CAF8CD4CA81D2C990C33A2C4A0B8(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m4D3D694DE9A5CAF8CD4CA81D2C990C33A2C4A0B8 (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_Dispose_m4D3D694DE9A5CAF8CD4CA81D2C990C33A2C4A0B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		VirtActionInvoker0::Invoke(6 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_0 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_2 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = __this->get_uid_2();
		NullCheck(L_2);
		Dictionary_2_Remove_m63F6EF2C599AA2E401A192DDB50FED0AFEB6634A(L_2, L_3, /*hidden argument*/Dictionary_2_Remove_m63F6EF2C599AA2E401A192DDB50FED0AFEB6634A_RuntimeMethod_var);
		IL2CPP_LEAVE(0x39, FINALLY_002e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0038;
			}
		}

IL_0031:
		{
			Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_0038:
		{
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::BeforeAddingListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_BeforeAddingListener_mCA6162A823572CD376DD6AFE773A9EA854EB6966 (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_BeforeAddingListener_mCA6162A823572CD376DD6AFE773A9EA854EB6966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Firebase.Database.Internal.InternalListener::HasNoListeners() */, __this);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_2 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_1 = L_2;
		V_2 = (bool)0;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_3 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_3, (bool*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_4 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_5 = __this->get_uid_2();
		NullCheck(L_4);
		Dictionary_2_set_Item_m02F0902909E4C411ED5E93D481AB6B3CD76F4729(L_4, L_5, __this, /*hidden argument*/Dictionary_2_set_Item_m02F0902909E4C411ED5E93D481AB6B3CD76F4729_RuntimeMethod_var);
		IL2CPP_LEAVE(0x3E, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_003d;
			}
		}

IL_0036:
		{
			Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_7 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(51)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		int32_t L_8 = __this->get_uid_2();
		VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void Firebase.Database.Internal.InternalListener::CreateCppListener(System.Int32) */, __this, L_8);
	}

IL_004c:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::AfterRemovingListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_AfterRemovingListener_m166F175786C631F8A47A1E39BE6DAFD93BF17226 (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_AfterRemovingListener_m166F175786C631F8A47A1E39BE6DAFD93BF17226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Firebase.Database.Internal.InternalListener::HasNoListeners() */, __this);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		VirtActionInvoker0::Invoke(6 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_2 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_1 = L_2;
		V_2 = (bool)0;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_3 = V_1;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_3, (bool*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_4 = ((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_5 = __this->get_uid_2();
		NullCheck(L_4);
		Dictionary_2_Remove_m63F6EF2C599AA2E401A192DDB50FED0AFEB6634A(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m63F6EF2C599AA2E401A192DDB50FED0AFEB6634A_RuntimeMethod_var);
		IL2CPP_LEAVE(0x44, FINALLY_0039);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0043;
			}
		}

IL_003c:
		{
			Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_7 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_7, /*hidden argument*/NULL);
		}

IL_0043:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
	}

IL_0045:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__cctor_m9AF1AF08ED8CCA8071EDC50DAFA92DAF7E3413F5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener__cctor_m9AF1AF08ED8CCA8071EDC50DAFA92DAF7E3413F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->set_uidGenerator_0(0);
		Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF * L_0 = (Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF *)il2cpp_codegen_object_new(Dictionary_2_tC3AA28FED1CF31AF56D829E0D96DDDD8D6CCCCDF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m654888D66E01C54A796BAE1B837CACE90021C74C(L_0, /*hidden argument*/Dictionary_2__ctor_m654888D66E01C54A796BAE1B837CACE90021C74C_RuntimeMethod_var);
		((InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var))->set_databaseCallbacks_1(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnValueChangedHandler_m4078B2D6CA4A969809CA501CE64504FD57155808(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalValueListener_OnValueChangedHandler_m4078B2D6CA4A969809CA501CE64504FD57155808(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnCancelledHandler_m252BC4328A6F6AF40026CE9F518FBDA6C841CE87(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalValueListener_OnCancelledHandler_m252BC4328A6F6AF40026CE9F518FBDA6C841CE87(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_mACB36299BE31AA5B4A3BC2760366E5C9354362F4 (int32_t ___callbackId0, InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 ** ___valueListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_TryGetListener_mACB36299BE31AA5B4A3BC2760366E5C9354362F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		bool L_1 = InternalListener_TryGetListener_m8E58F5AF31454E7A0ECE748220DA9E399D1AB5B5(L_0, (InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 ** L_3 = ___valueListener1;
		InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2 * L_4 = V_0;
		*((RuntimeObject **)L_3) = (RuntimeObject *)((InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 *)IsInstSealed((RuntimeObject*)L_4, InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)((InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 *)IsInstSealed((RuntimeObject*)L_4, InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1_il2cpp_TypeInfo_var)));
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 ** L_5 = ___valueListener1;
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * L_6 = *((InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 **)L_5);
		V_2 = (bool)((!(((RuntimeObject*)(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0028;
	}

IL_0020:
	{
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 ** L_7 = ___valueListener1;
		*((RuntimeObject **)L_7) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)NULL);
		V_2 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_m4078B2D6CA4A969809CA501CE64504FD57155808 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_OnValueChangedHandler_m4078B2D6CA4A969809CA501CE64504FD57155808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B * L_0 = (U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_mE8ACCB18323D6E112C33CD972CC555ECFDE927E0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B * L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B * L_5 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m862457361BA824195BF983ECA70317AA7AF8861D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionAggregator_t9CFD2D8A88E4C9B1D3148DCB5B2B84BCC7904F07_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m3B7EADEF7545B6A3AD0366481AB72DF0C1AB7D2A(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m252BC4328A6F6AF40026CE9F518FBDA6C841CE87 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_OnCancelledHandler_m252BC4328A6F6AF40026CE9F518FBDA6C841CE87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * L_0 = (U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m25DDB64AEE866D3B1DE81B0854B9E53117920AB4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->set_msg_2(L_6);
		U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * L_7 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_8 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m7993E40EBCD3560E931806C70DC8E5DF8A59720E_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExceptionAggregator_t9CFD2D8A88E4C9B1D3148DCB5B2B84BCC7904F07_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m3B7EADEF7545B6A3AD0366481AB72DF0C1AB7D2A(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__cctor_m73A5BCEE5AEB7A23927E9D8FA067CFEED02E297C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener__cctor_m73A5BCEE5AEB7A23927E9D8FA067CFEED02E297C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * L_0 = (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 *)il2cpp_codegen_object_new(OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_mEBAB2D76867218823415E876AE85722B88812C1E(L_0, NULL, (intptr_t)((intptr_t)InternalValueListener_OnCancelledHandler_m252BC4328A6F6AF40026CE9F518FBDA6C841CE87_RuntimeMethod_var), /*hidden argument*/NULL);
		OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * L_1 = (OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB *)il2cpp_codegen_object_new(OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB_il2cpp_TypeInfo_var);
		OnValueChangedDelegate__ctor_m0CD66F930839C4F0F877454137271C454135FB00(L_1, NULL, (intptr_t)((intptr_t)InternalValueListener_OnValueChangedHandler_m4078B2D6CA4A969809CA501CE64504FD57155808_RuntimeMethod_var), /*hidden argument*/NULL);
		InternalQuery_RegisterValueListenerCallbacks_mE93E3BADA1CDC47FD62C551AD958073C2747AA0D(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_mAB8F5C223B92E39C0F28248259ECA828161A50D7 (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener__ctor_mAB8F5C223B92E39C0F28248259ECA828161A50D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t457417B43E9588682DA8A95CC47CA9F92684EAF2_il2cpp_TypeInfo_var);
		InternalListener__ctor_m6E86532F26752ACF2793DF742C16EB696F21206D(__this, /*hidden argument*/NULL);
		InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::CreateCppListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_CreateCppListener_mAC2C6259BDFA0758FEE9A65BA5D825C6C442BAAE (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, int32_t ___callbackId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_CreateCppListener_mAC2C6259BDFA0758FEE9A65BA5D825C6C442BAAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * L_3 = __this->get_internalQuery_4();
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		intptr_t L_5 = InternalQuery_CreateValueListener_mA53F0CD7AB485484052606AAD29534BA8AF2ED0C(L_3, L_4, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)L_5);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_DestroyCppListener_mFAC84C7DC6B1A89C878A06684D1B68CCCD590CDF (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_DestroyCppListener_mFAC84C7DC6B1A89C878A06684D1B68CCCD590CDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_cppListener_5();
		InternalQuery_DestroyValueListener_mD1854CE6370D1CAEABAE27C8E8C1DB7518BD4B8A((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002e:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalValueListener::HasNoListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_HasNoListeners_m86BEDD5B3B21FB0C0992A0775E5F2F78A3E3D1EE (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_0 = __this->get_valueChangedImpl_7();
		V_0 = (bool)((((RuntimeObject*)(EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::add_valueChangedImpl(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_add_valueChangedImpl_m68AD0E5A5A3B986ABEC42B6C5170E317A8B8010C (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_add_valueChangedImpl_m68AD0E5A5A3B986ABEC42B6C5170E317A8B8010C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * V_0 = NULL;
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * V_1 = NULL;
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * V_2 = NULL;
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_0 = __this->get_valueChangedImpl_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_2 = V_1;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2_il2cpp_TypeInfo_var));
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 ** L_5 = __this->get_address_of_valueChangedImpl_7();
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_6 = V_2;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_7 = V_1;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *>((EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_9 = V_0;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)L_9) == ((RuntimeObject*)(EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::remove_valueChangedImpl(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_remove_valueChangedImpl_mD7B98774B5947050C7CFC354F83AA8CD1A747CF8 (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_remove_valueChangedImpl_mD7B98774B5947050C7CFC354F83AA8CD1A747CF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * V_0 = NULL;
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * V_1 = NULL;
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * V_2 = NULL;
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_0 = __this->get_valueChangedImpl_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_2 = V_1;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2_il2cpp_TypeInfo_var));
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 ** L_5 = __this->get_address_of_valueChangedImpl_7();
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_6 = V_2;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_7 = V_1;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *>((EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_9 = V_0;
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)L_9) == ((RuntimeObject*)(EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::add_ValueChanged(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_add_ValueChanged_m1E9F4E086130B3786EC32AEA4B3E34120A5244EC (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		InternalListener_BeforeAddingListener_mCA6162A823572CD376DD6AFE773A9EA854EB6966(__this, /*hidden argument*/NULL);
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_2 = ___value0;
		InternalValueListener_add_valueChangedImpl_m68AD0E5A5A3B986ABEC42B6C5170E317A8B8010C(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x31, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::remove_ValueChanged(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_remove_ValueChanged_mE19D96456F779B08A4F741D08CC9D0564A3670FA (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_eventLock_3();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_2 = ___value0;
		InternalValueListener_remove_valueChangedImpl_mD7B98774B5947050C7CFC354F83AA8CD1A747CF8(__this, L_2, /*hidden argument*/NULL);
		InternalListener_AfterRemovingListener_m166F175786C631F8A47A1E39BE6DAFD93BF17226(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x31, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
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
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mE8ACCB18323D6E112C33CD972CC555ECFDE927E0 (U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::<OnValueChangedHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m862457361BA824195BF983ECA70317AA7AF8861D (U3CU3Ec__DisplayClass3_0_tD9F7679CE8732CCA0ACA2A6E52F7BE42B9FA676B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m862457361BA824195BF983ECA70317AA7AF8861D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * V_0 = NULL;
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * V_1 = NULL;
	InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_1 = (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 *)il2cpp_codegen_object_new(InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m8E5A9DE57AD5AE1A46617005C0FB5CE60E8EE27A(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)NULL;
		V_2 = (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1_il2cpp_TypeInfo_var);
		bool L_3 = InternalValueListener_TryGetListener_mACB36299BE31AA5B4A3BC2760366E5C9354362F4(L_2, (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 **)(&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * L_5 = V_2;
		NullCheck(L_5);
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_6 = L_5->get_valueChangedImpl_7();
		V_1 = L_6;
	}

IL_002c:
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_7 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_9 = V_1;
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_10 = V_0;
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * L_11 = V_2;
		NullCheck(L_11);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_12 = L_11->get_database_6();
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_13 = DataSnapshot_CreateSnapshot_mB382692543CF83588B8DD15AB1F1A41D17189A6E(L_10, L_12, /*hidden argument*/NULL);
		ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * L_14 = (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF *)il2cpp_codegen_object_new(ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m76A9AEE3419051E6CDC227961CB0BDF37C07119D(L_14, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		EventHandler_1_Invoke_m8FE918D7E82015A80F42CA63685E7B02E754DDD1(L_9, NULL, L_14, /*hidden argument*/EventHandler_1_Invoke_m8FE918D7E82015A80F42CA63685E7B02E754DDD1_RuntimeMethod_var);
		goto IL_005c;
	}

IL_0053:
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_15 = V_0;
		NullCheck(L_15);
		InternalDataSnapshot_Dispose_mBD3323FB62C8AA0CB06673F619A05468B9AEB61F(L_15, /*hidden argument*/NULL);
	}

IL_005c:
	{
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
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m25DDB64AEE866D3B1DE81B0854B9E53117920AB4 (U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::<OnCancelledHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m7993E40EBCD3560E931806C70DC8E5DF8A59720E (U3CU3Ec__DisplayClass4_0_tA3403FFA82171BE840C5FE7872E2B33C43D3E388 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m7993E40EBCD3560E931806C70DC8E5DF8A59720E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * V_0 = NULL;
	InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)NULL;
		int32_t L_0 = __this->get_callbackId_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1_il2cpp_TypeInfo_var);
		bool L_1 = InternalValueListener_TryGetListener_mACB36299BE31AA5B4A3BC2760366E5C9354362F4(L_0, (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 **)(&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * L_3 = V_1;
		NullCheck(L_3);
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_4 = L_3->get_valueChangedImpl_7();
		V_0 = L_4;
	}

IL_001d:
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_5 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_7 = V_0;
		int32_t L_8 = __this->get_error_1();
		String_t* L_9 = __this->get_msg_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2_il2cpp_TypeInfo_var);
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_10 = DatabaseError_FromError_mC4AA8CA4B352A8AA4AD7DC51548C9AEF4772522B(L_8, L_9, /*hidden argument*/NULL);
		ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * L_11 = (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF *)il2cpp_codegen_object_new(ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m608F94EF6256B5F922A7D6FFA3DA379788EAF922(L_11, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m8FE918D7E82015A80F42CA63685E7B02E754DDD1(L_7, NULL, L_11, /*hidden argument*/EventHandler_1_Invoke_m8FE918D7E82015A80F42CA63685E7B02E754DDD1_RuntimeMethod_var);
	}

IL_0045:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_t11D4B34F6F39BC3F67C492A72FF3A6FA918EB260 (OnCancelledDelegate_t11D4B34F6F39BC3F67C492A72FF3A6FA918EB260 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_mCB45A7799B65CFC0387E6072C9E0992B7F4A5B30 (OnCancelledDelegate_t11D4B34F6F39BC3F67C492A72FF3A6FA918EB260 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_mF586644CC3F69ECFCD832651879CB8BFB163E777 (OnCancelledDelegate_t11D4B34F6F39BC3F67C492A72FF3A6FA918EB260 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___error1, ___msg2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Error,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancelledDelegate_BeginInvoke_mE4779539BAE41A476999EFD84E731AD552593799 (OnCancelledDelegate_t11D4B34F6F39BC3F67C492A72FF3A6FA918EB260 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCancelledDelegate_BeginInvoke_mE4779539BAE41A476999EFD84E731AD552593799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_tDDBEDD5227F360B4D311BD40D61C7DAE5179F4EF_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_EndInvoke_mE8B23423B869AC8D82D1D15FCBC45B259A365C17 (OnCancelledDelegate_t11D4B34F6F39BC3F67C492A72FF3A6FA918EB260 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB (OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m0CD66F930839C4F0F877454137271C454135FB00 (OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_Invoke_mCA6082CE5B1E776FA71FB65E53D363866AD60C11 (OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___callbackId0) - 1), ___snapshot1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnValueChangedDelegate_BeginInvoke_mB2FE54FBF725EB99515B4F36E504F659D71D0652 (OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnValueChangedDelegate_BeginInvoke_mB2FE54FBF725EB99515B4F36E504F659D71D0652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_EndInvoke_m1864ACA9B7D1B4E674DF117E3BD232EC7A46A293 (OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_m8E5A9DE57AD5AE1A46617005C0FB5CE60E8EE27A (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshot::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Finalize_m6ABE98FB821454A539D7536AB61AF82E945B9BB4 (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mBD3323FB62C8AA0CB06673F619A05468B9AEB61F (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_Dispose_mBD3323FB62C8AA0CB06673F619A05468B9AEB61F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mB89E4F48D7A2D275FC2B6A488B000ACE66486D17 (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_Dispose_mB89E4F48D7A2D275FC2B6A488B000ACE66486D17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_2 = L_4;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_005e;
			}
		}

IL_002c:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_004c;
			}
		}

IL_0037:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_delete_InternalDataSnapshot_m284D015E6105739DE1A09471A58E6934E611EB9B(L_8, /*hidden argument*/NULL);
		}

IL_004c:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x73, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0072;
			}
		}

IL_006b:
		{
			RuntimeObject * L_11 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		}

IL_0072:
		{
			IL2CPP_END_FINALLY(104)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x73, IL_0073)
	}

IL_0073:
	{
		return;
	}
}
// System.Boolean Firebase.Database.InternalDataSnapshot::exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshot_exists_mCBBF2ED22D6A45E823B62F8848E3C6B8A9715B93 (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_exists_mCBBF2ED22D6A45E823B62F8848E3C6B8A9715B93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_exists_m9E96C3A42053FB6F0FAF7B11934AE653F4CCBC1D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalDataSnapshot_exists_mCBBF2ED22D6A45E823B62F8848E3C6B8A9715B93_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * InternalDataSnapshot_Child_m81176820ED1FE31B72BCD5E5F68BF48A2020CB7E (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_Child_m81176820ED1FE31B72BCD5E5F68BF48A2020CB7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * V_0 = NULL;
	bool V_1 = false;
	InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * V_2 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m693EE8A9D32226F2243BF85A8EA2C16E1B818D7F(L_0, L_1, /*hidden argument*/NULL);
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_3 = (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 *)il2cpp_codegen_object_new(InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m8E5A9DE57AD5AE1A46617005C0FB5CE60E8EE27A(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_6 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, InternalDataSnapshot_Child_m81176820ED1FE31B72BCD5E5F68BF48A2020CB7E_RuntimeMethod_var);
	}

IL_0023:
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * L_8 = V_2;
		return L_8;
	}
}
// System.UInt32 Firebase.Database.InternalDataSnapshot::children_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InternalDataSnapshot_children_count_mA2B24873919C7606A8AE2500DBCC5A11A48CCD13 (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_children_count_mA2B24873919C7606A8AE2500DBCC5A11A48CCD13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		uint32_t L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_children_count_m7F6DF5A155938A9846CEC11DF3DAA39AF9E02AEC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalDataSnapshot_children_count_mA2B24873919C7606A8AE2500DBCC5A11A48CCD13_RuntimeMethod_var);
	}

IL_001c:
	{
		uint32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.String Firebase.Database.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m1A660F8325DB4E46D1CB6B95635BE2C3B7FDE2E2 (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_key_string_m1A660F8325DB4E46D1CB6B95635BE2C3B7FDE2E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		String_t* L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m33270DF03E012A2D37FF87626EA757E46FFFDC15(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalDataSnapshot_key_string_m1A660F8325DB4E46D1CB6B95635BE2C3B7FDE2E2_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// Firebase.Variant Firebase.Database.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * InternalDataSnapshot_value_m828DF44B5AE8F4B6DCB68351822050A8A5C3DD8B (InternalDataSnapshot_t6342E31EFD1B481EF059707B449D5339521F6FE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_value_m828DF44B5AE8F4B6DCB68351822050A8A5C3DD8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * V_0 = NULL;
	bool V_1 = false;
	Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * V_2 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_value_mE947855B47A834B98FE167FA4B6F8710284780D4(L_0, /*hidden argument*/NULL);
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_2 = (Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 *)il2cpp_codegen_object_new(Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3_il2cpp_TypeInfo_var);
		Variant__ctor_m59CC9EFEEC60458B6F259253F2D10AF77B2011E1(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, InternalDataSnapshot_value_m828DF44B5AE8F4B6DCB68351822050A8A5C3DD8B_RuntimeMethod_var);
	}

IL_0022:
	{
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		Variant_tB85EDFCFD60A6820DC8156FC1439B2FD6B49CEA3 * L_7 = V_2;
		return L_7;
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
// System.Void Firebase.Database.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mA4BEDABF5BFE8EB6A666C1EDC85EF22BF5CAF8B3 (InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference__ctor_mA4BEDABF5BFE8EB6A666C1EDC85EF22BF5CAF8B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_mC0678FE3250A8EB4F1BEC07A879454DC30C2CDE1((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		InternalQuery__ctor_m13D6B8B586018E1130241E39FE6077F89C8500BD(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Database.InternalDatabaseReference::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Dispose_m60A3F28A5EFD2BCCAC367A5ECABD5F4219805452 (InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_Dispose_m60A3F28A5EFD2BCCAC367A5ECABD5F4219805452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_2 = L_4;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_005e;
			}
		}

IL_002c:
		{
			bool L_6 = ((InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB *)__this)->get_swigCMemOwn_1();
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_004c;
			}
		}

IL_0037:
		{
			((InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_8 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_delete_InternalDatabaseReference_mD1F1E9DD71667FD91E430E8D3AE2BD2B313870A7(L_8, /*hidden argument*/NULL);
		}

IL_004c:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_9);
		}

IL_005e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			bool L_10 = ___disposing0;
			InternalQuery_Dispose_mFD8C67C479614246C1E8355F99F00FD58617A4B3(__this, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x7B, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_007a;
			}
		}

IL_0073:
		{
			RuntimeObject * L_12 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_12, /*hidden argument*/NULL);
		}

IL_007a:
		{
			IL2CPP_END_FINALLY(112)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
	}

IL_007b:
	{
		return;
	}
}
// System.Boolean Firebase.Database.InternalDatabaseReference::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDatabaseReference_is_valid_m8174EB91441E96662DBA4428D1A0B8BD0D05C9C5 (InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_is_valid_m8174EB91441E96662DBA4428D1A0B8BD0D05C9C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m8D357B33916F57EE30DB8A68AE3DC402B7411503(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalDatabaseReference_is_valid_m8174EB91441E96662DBA4428D1A0B8BD0D05C9C5_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.String Firebase.Database.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m4123B650BA69B63318767B1ED352271BF3DAF2AA (InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_url_m4123B650BA69B63318767B1ED352271BF3DAF2AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		String_t* L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_url_mE698F3CFE744A16600ECF0AD32C6E420AAC6278B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalDatabaseReference_url_m4123B650BA69B63318767B1ED352271BF3DAF2AA_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
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
// System.Void Firebase.Database.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_m5354B484807E4600EAF1EEAB21F4B7AE04156285 (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::getCPtr(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t876E76124F400D12395BF61D562162AB6822204A  InternalFirebaseDatabase_getCPtr_m984F705CA4D549077DF6EEBF28D3458F25931C2A (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_getCPtr_m984F705CA4D549077DF6EEBF28D3458F25931C2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t876E76124F400D12395BF61D562162AB6822204A  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2 = L_1->get_swigCPtr_0();
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_3;
		memset((&L_3), 0, sizeof(L_3));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Finalize_m01382CDB56BCCDDACCD20332EEEAE82CA0B776E1 (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m7497B035927A6EF7A5170EB1BF5FF5EB31EF2408 (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_Dispose_m7497B035927A6EF7A5170EB1BF5FF5EB31EF2408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m400D1BF86619387F98C1616474222FB146737229 (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_Dispose_m400D1BF86619387F98C1616474222FB146737229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		InternalFirebaseDatabase_ReleaseReferenceInternal_m3BE4F9D37A8127432C0F6BE2D98D7A8C697ACCDE(__this, /*hidden argument*/NULL);
		__this->set_swigCMemOwn_1((bool)0);
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x47, FINALLY_003c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0046;
			}
		}

IL_003f:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		return;
	}
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalFirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * InternalFirebaseDatabase_GetReference_m7E014BA624B03F9BF0F4E1CDC47DA42E86827D5D (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_GetReference_m7E014BA624B03F9BF0F4E1CDC47DA42E86827D5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * V_0 = NULL;
	bool V_1 = false;
	InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * V_2 = NULL;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m61846B0CA7B86C7856E07C376C615A75D48D6EB1(L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * L_3 = (InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D *)il2cpp_codegen_object_new(InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_mA4BEDABF5BFE8EB6A666C1EDC85EF22BF5CAF8B3(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_6 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, InternalFirebaseDatabase_GetReference_m7E014BA624B03F9BF0F4E1CDC47DA42E86827D5D_RuntimeMethod_var);
	}

IL_0023:
	{
		InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		InternalDatabaseReference_tA23FC7650C7BACF91F07E4F0BE157630F7E1422D * L_8 = V_2;
		return L_8;
	}
}
// Firebase.Database.InternalFirebaseDatabase Firebase.Database.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * InternalFirebaseDatabase_GetInstanceInternal_m03A380236753AAA0164727E96DEE42FE8F50DC1F (FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_GetInstanceInternal_m03A380236753AAA0164727E96DEE42FE8F50DC1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * V_2 = NULL;
	bool V_3 = false;
	InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = FirebaseApp_getCPtr_m0372DFB0195DD695D91B7F96142F8C9AB0F41FEC(L_0, /*hidden argument*/NULL);
			String_t* L_2 = ___url1;
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
			intptr_t L_3 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_m8E9AD9CAF85C10BBD3342366769FEF8859119EF0(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0029;
			}
		}

IL_0020:
		{
			intptr_t L_6 = V_1;
			InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_7 = (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C *)il2cpp_codegen_object_new(InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C_il2cpp_TypeInfo_var);
			InternalFirebaseDatabase__ctor_m5354B484807E4600EAF1EEAB21F4B7AE04156285(L_7, (intptr_t)L_6, (bool)0, /*hidden argument*/NULL);
			G_B4_0 = L_7;
			goto IL_002a;
		}

IL_0029:
		{
			G_B4_0 = ((InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C *)(NULL));
		}

IL_002a:
		{
			V_2 = G_B4_0;
			IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
			bool L_8 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
			V_3 = L_8;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
			Exception_t * L_10 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, InternalFirebaseDatabase_GetInstanceInternal_m03A380236753AAA0164727E96DEE42FE8F50DC1F_RuntimeMethod_var);
		}

IL_003a:
		{
			InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_11 = V_2;
			V_4 = L_11;
			IL2CPP_LEAVE(0x45, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		int32_t* L_12 = ___init_result_out2;
		int32_t L_13 = V_0;
		*((int32_t*)L_12) = (int32_t)L_13;
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_14 = V_4;
		return L_14;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m3BE4F9D37A8127432C0F6BE2D98D7A8C697ACCDE (InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_ReleaseReferenceInternal_m3BE4F9D37A8127432C0F6BE2D98D7A8C697ACCDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		InternalFirebaseDatabase_t0049646C3889739E8DC25CDB31E389EEB997FB6C * L_0 = ___instance0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_1 = InternalFirebaseDatabase_getCPtr_m984F705CA4D549077DF6EEBF28D3458F25931C2A(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_mF817C479412507403A97DEC85B7B205589AAAE1A(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalFirebaseDatabase_ReleaseReferenceInternal_m3BE4F9D37A8127432C0F6BE2D98D7A8C697ACCDE_RuntimeMethod_var);
	}

IL_001c:
	{
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
// System.Void Firebase.Database.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_m13D6B8B586018E1130241E39FE6077F89C8500BD (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_mC2825B8A426D786133FA1CA99DD50EB444F2B8A8 (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_m54024D3DEB57A69C993D80B430B252DB1C6C83E2 (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_Dispose_m54024D3DEB57A69C993D80B430B252DB1C6C83E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_mFD8C67C479614246C1E8355F99F00FD58617A4B3 (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_Dispose_mFD8C67C479614246C1E8355F99F00FD58617A4B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline((HandleRef_t876E76124F400D12395BF61D562162AB6822204A *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_2 = L_4;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_005e;
			}
		}

IL_002c:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_004c;
			}
		}

IL_0037:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_delete_InternalQuery_m90A37054E326D615DFE5FC86AED4998958E37CBC(L_8, /*hidden argument*/NULL);
		}

IL_004c:
		{
			HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_mCD64E7F91766FE7602EE34A8CEEF6C1EF4C943BB((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x73, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		{
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0072;
			}
		}

IL_006b:
		{
			RuntimeObject * L_11 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
		}

IL_0072:
		{
			IL2CPP_END_FINALLY(104)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x73, IL_0073)
	}

IL_0073:
	{
		return;
	}
}
// System.Boolean Firebase.Database.InternalQuery::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalQuery_is_valid_mF3B0C6034A37D37DAC539C4AAF18DA3CFDB92D28 (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_is_valid_mF3B0C6034A37D37DAC539C4AAF18DA3CFDB92D28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_InternalQuery_is_valid_m4CC67A031CA0EA757A84916835F49E77F992EDA5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalQuery_is_valid_mF3B0C6034A37D37DAC539C4AAF18DA3CFDB92D28_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.IntPtr Firebase.Database.InternalQuery::CreateValueListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InternalQuery_CreateValueListener_mA53F0CD7AB485484052606AAD29534BA8AF2ED0C (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, int32_t ___callbackId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_CreateValueListener_mA53F0CD7AB485484052606AAD29534BA8AF2ED0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		int32_t L_1 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_InternalQuery_CreateValueListener_m1233AD5714608DA3F9DB0DEB6A7DBF7E092E961C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, InternalQuery_CreateValueListener_mA53F0CD7AB485484052606AAD29534BA8AF2ED0C_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_6 = V_0;
		V_2 = (intptr_t)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		intptr_t L_7 = V_2;
		return (intptr_t)L_7;
	}
}
// System.Void Firebase.Database.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_mD1854CE6370D1CAEABAE27C8E8C1DB7518BD4B8A (intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_DestroyValueListener_mD1854CE6370D1CAEABAE27C8E8C1DB7518BD4B8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m4BCAD2E06BC26BB30FAA21BB153066727E98CF2D((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_1 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalQuery_DestroyValueListener_mD1854CE6370D1CAEABAE27C8E8C1DB7518BD4B8A_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_mE93E3BADA1CDC47FD62C551AD958073C2747AA0D (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * ___cancelledCallback0, OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * ___valueChangedCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_RegisterValueListenerCallbacks_mE93E3BADA1CDC47FD62C551AD958073C2747AA0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * L_0 = ___cancelledCallback0;
		OnValueChangedDelegate_t40EC3B2B99EB294AAE90C3DF2E4CDB2D56A432EB * L_1 = ___valueChangedCallback1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_m434D288EA24879D4051283FC56D4B675DF94025C(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, InternalQuery_RegisterValueListenerCallbacks_mE93E3BADA1CDC47FD62C551AD958073C2747AA0D_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.IntPtr Firebase.Database.InternalQuery::CreateChildListener(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InternalQuery_CreateChildListener_m02623E8F4F0C07430CA9E560211008E41A632BCA (InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * __this, int32_t ___callbackId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_CreateChildListener_m02623E8F4F0C07430CA9E560211008E41A632BCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t876E76124F400D12395BF61D562162AB6822204A  L_0 = __this->get_swigCPtr_0();
		int32_t L_1 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_InternalQuery_CreateChildListener_m0C5243699422DC862015AC0370498421A636CBFB(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, InternalQuery_CreateChildListener_m02623E8F4F0C07430CA9E560211008E41A632BCA_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_6 = V_0;
		V_2 = (intptr_t)L_6;
		goto IL_0021;
	}

IL_0021:
	{
		intptr_t L_7 = V_2;
		return (intptr_t)L_7;
	}
}
// System.Void Firebase.Database.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_m095E6A8FF3FEA126E029ECC2289641EB9BE63C0C (intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_DestroyChildListener_m095E6A8FF3FEA126E029ECC2289641EB9BE63C0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m83A1DA3BDBB08D4C9A1865FE8279F3896CEDEA99((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_1 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, InternalQuery_DestroyChildListener_m095E6A8FF3FEA126E029ECC2289641EB9BE63C0C_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m005E88C19CDEE598E8E851BA252FD1CF8440BAE6 (OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * ___cancelledCallback0, OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * ___childChangeCallback1, OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * ___childRemovedCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_RegisterChildListenerCallbacks_m005E88C19CDEE598E8E851BA252FD1CF8440BAE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnCancelledDelegate_tE8B947C3FBB5876DFFB4BAD183CE4185D6B7A158 * L_0 = ___cancelledCallback0;
		OnChildChangeDelegate_t95B0769A09EDBBF281E13534E33451FF1138572E * L_1 = ___childChangeCallback1;
		OnChildRemovedDelegate_t867482D5593C31CD6D05FE110F9E33E8C7C39E12 * L_2 = ___childRemovedCallback2;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_tF25B892076C367AF63922F2866CCD46733E3EC0D_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m718542E0DFB968F0BB8A7D8855277E170E467A89(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_mD4D80E781F96FEF55206918D14AB360887AAF5C3(/*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tBD01F554C16083D77763863FC641E4E5F3FDA6F2_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m38572E9DE3C1AE287C0951154B104230A667F11F(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, InternalQuery_RegisterChildListenerCallbacks_m005E88C19CDEE598E8E851BA252FD1CF8440BAE6_RuntimeMethod_var);
	}

IL_0019:
	{
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
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mD14136487250A9CD3E30FEF6B21029797B260929 (Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F * __this, InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * ___internalQuery0, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query__ctor_mD14136487250A9CD3E30FEF6B21029797B260929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * L_0 = ___internalQuery0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Firebase.Database.InternalQuery::is_valid() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_3 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_3, _stringLiteralFBAE38FB8D02D5E169BAF4BEBE9B0103A0ECC878, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Query__ctor_mD14136487250A9CD3E30FEF6B21029797B260929_RuntimeMethod_var);
	}

IL_0021:
	{
		InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * L_4 = ___internalQuery0;
		__this->set_internalQuery_0(L_4);
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_5 = ___database1;
		__this->set_database_1(L_5);
		InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * L_6 = ___internalQuery0;
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_7 = ___database1;
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * L_8 = (InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 *)il2cpp_codegen_object_new(InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1_il2cpp_TypeInfo_var);
		InternalValueListener__ctor_mAB8F5C223B92E39C0F28248259ECA828161A50D7(L_8, L_6, L_7, /*hidden argument*/NULL);
		__this->set_valueListener_2(L_8);
		InternalQuery_t7859D3C676348D61E86BC3280CF7B1EB9EEC9DDB * L_9 = ___internalQuery0;
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_10 = ___database1;
		InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F * L_11 = (InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F *)il2cpp_codegen_object_new(InternalChildListener_t482210BE3E7C51BACC746ECF575151DF3A62416F_il2cpp_TypeInfo_var);
		InternalChildListener__ctor_m2E7464A76BC55CA99F4CAE648408CB34711DC145(L_11, L_9, L_10, /*hidden argument*/NULL);
		__this->set_childListener_3(L_11);
		return;
	}
}
// System.Void Firebase.Database.Query::add_ValueChanged(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_add_ValueChanged_m448AB7CF6A3756D244440E2E67A66D5982F97B13 (Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * L_0 = __this->get_valueListener_2();
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalValueListener_add_ValueChanged_m1E9F4E086130B3786EC32AEA4B3E34120A5244EC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query::remove_ValueChanged(System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query_remove_ValueChanged_m7C733BFCB2BD8ED5B7A5A784371CB93850204DB2 (Query_t1E0F3026DDEB6B36A14F95500703CAFE0D51B91F * __this, EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * ___value0, const RuntimeMethod* method)
{
	{
		InternalValueListener_tB1FB3438C4B4CC8E226C7E4B0D967F8C92FBA1F1 * L_0 = __this->get_valueListener_2();
		EventHandler_1_tE91601A0F47A0649CA4A29909CA542076A0018A2 * L_1 = ___value0;
		NullCheck(L_0);
		InternalValueListener_remove_ValueChanged_mE19D96456F779B08A4F741D08CC9D0564A3670FA(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m76A9AEE3419051E6CDC227961CB0BDF37C07119D (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___snapshot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueChangedEventArgs__ctor_m76A9AEE3419051E6CDC227961CB0BDF37C07119D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_0 = ___snapshot0;
		ValueChangedEventArgs_set_Snapshot_mA2453D4B1AB972C8F14FF2A4A2CB7CD461DAC80E_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m608F94EF6256B5F922A7D6FFA3DA379788EAF922 (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueChangedEventArgs__ctor_m608F94EF6256B5F922A7D6FFA3DA379788EAF922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_0 = ___error0;
		ValueChangedEventArgs_set_DatabaseError_m3802F468A4D4C49F51079BA0BCA16C128786C2B5_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::get_Snapshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ValueChangedEventArgs_get_Snapshot_mA9E77A2016A6213A9262D7B6CECDBB89C7B5042B (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, const RuntimeMethod* method)
{
	{
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_0 = __this->get_U3CSnapshotU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mA2453D4B1AB972C8F14FF2A4A2CB7CD461DAC80E (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::get_DatabaseError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ValueChangedEventArgs_get_DatabaseError_mD933538ACE292BD5D3C5672B3C15CC5DF3AAD752 (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, const RuntimeMethod* method)
{
	{
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_0 = __this->get_U3CDatabaseErrorU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m3802F468A4D4C49F51079BA0BCA16C128786C2B5 (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m666A712CA7A58F848042C6D32C98EE8995819E20_inline (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_mE63924DCC3123B8FFBC4237E6917E26F88BDC021_inline (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m20718636943A4938EAF09AB7FD13F850C38A5923_inline (ChildChangedEventArgs_tCD1E3196774D1BF60693141BF786A78BCE6495BF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m970F93BF99B8CADB7A110F4E32C7049C8C3ABF72_inline (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mC40B49304B5E5C1C6DEE1A3252E289F80DD4C362_inline (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m4D808B4C8EEBE84693B4C6B62C51C6E835E69407_inline (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m191783B11DB5192D62F2BD6F771487C9EE14B05E_inline (DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m7859AD2E45557631B3AFCA0B36CCBB8866D52838_inline (DatabaseReference_tA24C1F1DC400D70122DE6586AB63BC7C1F95D1C0 * __this, FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mCB56A4EAB624A269744D1B80E720696A82B56C15_inline (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * FirebaseDatabase_get_App_mFE2C50D8940E5B4C430806440C5A862343D004AF_inline (FirebaseDatabase_tA87FD8E3AE0FBBAE0CA5A7EAEFA5616C399BF3EA * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t20651D18EC581E16B23A78CC38A27A2991409986 * L_0 = __this->get_U3CAppU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_get_AppConfig_mA0120A6A8C65ECC8886C56F6ADCF8276D7EC495AFirebase_Database_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_StaticFields*)il2cpp_codegen_static_fields_for(Services_t471E8549E9209A1F9BA0C5101C5C668068085DDC_il2cpp_TypeInfo_var))->get_U3CAppConfigU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m095712F299EA36BF75975343C726FA160EE38277_inline (HandleRef_t876E76124F400D12395BF61D562162AB6822204A * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mA2453D4B1AB972C8F14FF2A4A2CB7CD461DAC80E_inline (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_tEE451566F049728898FC8B6BA5DDB529EAC490E3 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m3802F468A4D4C49F51079BA0BCA16C128786C2B5_inline (ValueChangedEventArgs_t45E237658D80C3910AF0B2BEE0584D5342913EEF * __this, DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_tC3CB9543A791D4B19FDADCB64CDEDF4A4CC8E5E2 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
