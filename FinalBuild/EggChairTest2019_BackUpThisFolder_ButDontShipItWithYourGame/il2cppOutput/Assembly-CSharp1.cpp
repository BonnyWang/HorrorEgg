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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<System.String>>[]
struct EntryU5BU5D_t5F144DEAB68C4E9264BBFDB6D338313C9435245F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_t7D300CE1CB9D0C18A6A29716019D9F4DA4C17490;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Uduino.BLEDeviceButton_Interface>[]
struct EntryU5BU5D_tC96C6BDC36449D88BD12B36FC6BD795B2824DE09;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Uduino.UduinoDevice>[]
struct EntryU5BU5D_tAC3B8C3F779AC8FCDDB7248A1ED463E43E30E3E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<System.String>>
struct KeyCollection_t744586CF8C082125754C3B146E1347F123C92930;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t301F7AA2D002B20DED934E68BA125BE268F2BEF9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Uduino.BLEDeviceButton_Interface>
struct KeyCollection_t483C9FAB8864A16DC41100558D4860BD655F5D61;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Uduino.UduinoDevice>
struct KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<System.String>>
struct ValueCollection_t93902BBAE074D63F286A27EEEE5DBDACBDC8146A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_tFBC1693F0C1EAF26CFEC28D74985CA5F1718A7B5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Uduino.BLEDeviceButton_Interface>
struct ValueCollection_tEE237FFE2E21F7DB9531CC549B37CB516E792853;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Uduino.UduinoDevice>
struct ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t67B76EE53FF18810AB6822EF82D44ADD0E707F21;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.String,Uduino.BLEDeviceButton_Interface>
struct Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA;
// System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>
struct Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<Uduino.ArduinoBoardType>
struct List_1_t8114691E8FF6E2627907B15BD0FB558AA68ED4A0;
// System.Collections.Generic.List`1<Uduino.Pin>
struct List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.Queue
struct Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Uduino.ArduinoBoardType
struct ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90;
// Uduino.BLEDeviceButton_Interface
struct BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233;
// Uduino.BoardsTypeList
struct BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7;
// Uduino.Interface
struct Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7;
// Uduino.IsActiveDictionnary
struct IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E;
// Uduino.IsPresentDictionnary
struct IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0;
// Uduino.Pin
struct Pin_tCA13A6E61822241A72D937ED2217785A334EF455;
// Uduino.Pin[]
struct PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54;
// Uduino.UduinoConnection
struct UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7;
// Uduino.UduinoDevice
struct UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A;
// Uduino.UduinoDevice/OnBoardClosedEvent
struct OnBoardClosedEvent_t866F2520EA50117DC86D631F178F02C7AADCED7B;
// Uduino.UduinoDevice/OnBoardFoundEvent
struct OnBoardFoundEvent_t76691EEE127ACE2244769592F59076BE02B7C6D5;
// Uduino.UduinoDevice[]
struct UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771;
// Uduino.UduinoInterface
struct UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A;
// Uduino.UduinoInterface/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t7C4526B0752B11F77F19A8F9B48A0D6D7A4B1D0A;
// Uduino.UduinoInterface_Bluetooth
struct UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF;
// Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856;
// Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9
struct U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64;
// Uduino.UduinoInterface_Serial
struct UduinoInterface_Serial_tDAEC1D0B8E520BE2F9E2637545C29D178D350258;
// Uduino.UduinoManager
struct UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073;
// Uduino.UduinoManager/<>c__DisplayClass167_0
struct U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C;
// Uduino.UduinoManager/<AutoSendBundle>d__152
struct U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9;
// Uduino.UduinoManager/<CoroutineRead>d__166
struct U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113;
// Uduino.UduinoManager/<DelayedDiscover>d__89
struct U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54;
// Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90
struct U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2;
// Uduino.UduinoManager/BoardAlreadyExistException
struct BoardAlreadyExistException_t7FA252A04F70FB74F0362FA40DF4DD48E0918A78;
// Uduino.UduinoManager/OnBoardConnectedDelegate
struct OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384;
// Uduino.UduinoManager/OnBoardDisconnectedDelegate
struct OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40;
// Uduino.UduinoManager/OnDataReceivedDelegate
struct OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92;
// Uduino.UduinoManager/OnValueReceivedDelegate
struct OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544;
// Uduino.UduinoManager/eventBoard
struct eventBoard_t8BC0918006535568A2223543B6AF4B4631765609;
// Uduino.UduinoManager/eventValueReceived
struct eventValueReceived_t8130A3E2DE2BCEC0FA5F327D9C1A9B0E880E747E;
// UduinoEventsReceiver
struct UduinoEventsReceiver_t1850846D8D3AF37704E855AC1EB3487AF199CF8A;
// UduinoShortCall
struct UduinoShortCall_t11A361FA6058666855C8B07FCDF873A0B9B7117C;
// UnityEngine.Animation
struct Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<Uduino.UduinoDevice>
struct UnityEvent_1_tD75DD786FC9FD883E80567D5E2746B61F2A6AEEA;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t62EAE6FD22ECC8C2672CE4C6829EA8D8D9AD890D;
// UnityEngine.Events.UnityEvent`2<System.String,Uduino.UduinoDevice>
struct UnityEvent_2_tFE1DFE49DEC166D074ABB396BC1EFFF6771C8736;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// YawAndRollControl
struct YawAndRollControl_tACC3C41B12A01D48D8933A51383115B0DE3301AB;
// chairTest
struct chairTest_tEAC4726426BE3DFB379794519D7CEE1C12A90B40;
// test
struct test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246;
// tiltControl
struct tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalogPin_t77A3ED326BD76F30F19F3BDE379F6A871E7D867F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardAlreadyExistException_t7FA252A04F70FB74F0362FA40DF4DD48E0918A78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PinMode_tC4C0981AF254662628B9C03A310717AD7779C430_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pin_tCA13A6E61822241A72D937ED2217785A334EF455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UduinoManagerU5BU5D_t2898AED1A18540CC0145C57FA79821C00B588035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05DF82A810AD66949483301CA58664C53D850FA1;
IL2CPP_EXTERN_C String_t* _stringLiteral093E1DF21527B696EDC9F87022E89A766E1477CF;
IL2CPP_EXTERN_C String_t* _stringLiteral18937339861CA32925D093C4D6CC9D6F615C76F2;
IL2CPP_EXTERN_C String_t* _stringLiteral1BCEA69475048CF070EC94BED7A2EF98011885B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1CE282E6DBEA7F4CE00A27C0BC69EE51E832A4C3;
IL2CPP_EXTERN_C String_t* _stringLiteral221FCFB346E423B58ADDB0D97C8533152F3720DB;
IL2CPP_EXTERN_C String_t* _stringLiteral23164C14E57DB9200E63A0B6E3A1768A4D4EA64C;
IL2CPP_EXTERN_C String_t* _stringLiteral2E2C4A3EBC1C1E72B1CE04B0ED674CBBFD8BE644;
IL2CPP_EXTERN_C String_t* _stringLiteral34F66B43E9E9CDD93C48788AD6E5863FAB1FC5B4;
IL2CPP_EXTERN_C String_t* _stringLiteral393F0371650C6F794C36DF75ABEFD61B0603D3CB;
IL2CPP_EXTERN_C String_t* _stringLiteral39F2DE372BA290EBCA52B2D8C7CA722F665CAE5C;
IL2CPP_EXTERN_C String_t* _stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral3C363836CF4E16666669A25DA280A1865C2D2874;
IL2CPP_EXTERN_C String_t* _stringLiteral3D43511C30D2D711D7E5CE8FA9F15DDA6F4941EB;
IL2CPP_EXTERN_C String_t* _stringLiteral3EAA821148A0C69AED3E5A54A20F2D4166A33D41;
IL2CPP_EXTERN_C String_t* _stringLiteral42F0E11F3A3D95EC3DB83A36D7CA83E8159F6D16;
IL2CPP_EXTERN_C String_t* _stringLiteral449BBA9A341A8B4C54E693A64883A04DD00C3658;
IL2CPP_EXTERN_C String_t* _stringLiteral44E6F22664CB2FB8FD804B5B139F4A621A8533F8;
IL2CPP_EXTERN_C String_t* _stringLiteral46C006ABC7A76999D50E7D9ECC954B62D46B21FD;
IL2CPP_EXTERN_C String_t* _stringLiteral4F294E7F34581EA65A554CFE3B47D012CB376FE2;
IL2CPP_EXTERN_C String_t* _stringLiteral55FC352D8B3A250B4D69AC45EB070FE3B634D493;
IL2CPP_EXTERN_C String_t* _stringLiteral5BF355A682C58F09210B5766A9C8499C2A0A4F89;
IL2CPP_EXTERN_C String_t* _stringLiteral5E4DA4C3EDD4F78FCC5A7C2888A770480C395EA6;
IL2CPP_EXTERN_C String_t* _stringLiteral6870010883A79E8B2A508909DC21A05CC8FF73B8;
IL2CPP_EXTERN_C String_t* _stringLiteral6CD4D4FA037E28BD90EB3F8F5B63736A75912AC9;
IL2CPP_EXTERN_C String_t* _stringLiteral6E4577EBF6317F736219D48612F608870F0D0E90;
IL2CPP_EXTERN_C String_t* _stringLiteral6F05E7CC9203F83829C08DCC46FAFE9DB426763F;
IL2CPP_EXTERN_C String_t* _stringLiteral71AA0ABF0D7DD219818E1A1DA63F5CB29B4DDD75;
IL2CPP_EXTERN_C String_t* _stringLiteral75945757832DD051708CD199F55AF0DE31E325E2;
IL2CPP_EXTERN_C String_t* _stringLiteral7706DD10EBDD4999F3EC1E5C286BD9AB3D9BD0FB;
IL2CPP_EXTERN_C String_t* _stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A;
IL2CPP_EXTERN_C String_t* _stringLiteral7C44F53BDF1812B01853B656B2653CCFF07D2F1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE0F3C6F1200F90D8400E857F47B24B6DEAF4D4;
IL2CPP_EXTERN_C String_t* _stringLiteral835A17A1181E411161D6E7D4E07A03059AF13A48;
IL2CPP_EXTERN_C String_t* _stringLiteral860872FDAA3CE4D5D6F5D0EF1654AE6443614143;
IL2CPP_EXTERN_C String_t* _stringLiteral86F7E437FAA5A7FCE15D1DDCB9EAEAEA377667B8;
IL2CPP_EXTERN_C String_t* _stringLiteral8A2A4E099BCAB523C092A5C08EA1E044AC059E36;
IL2CPP_EXTERN_C String_t* _stringLiteral8F453EEF38F989C701DE26E184F91A1269FAF52C;
IL2CPP_EXTERN_C String_t* _stringLiteral9517B2CD8614A87F6E6C61447EF000E96D543A8A;
IL2CPP_EXTERN_C String_t* _stringLiteral9AD7224DB7E64CF4AE2F340AA628897952DD63F5;
IL2CPP_EXTERN_C String_t* _stringLiteral9CF959B5D826CDD0D8F001FBB43DA511CC300929;
IL2CPP_EXTERN_C String_t* _stringLiteral9D2FCBD63B938BFAC69BA309E9641A80EE133C8D;
IL2CPP_EXTERN_C String_t* _stringLiteral9E4574266DACDC0582DEF1405BF5D9F7C70B58D6;
IL2CPP_EXTERN_C String_t* _stringLiteral9FA7093C83DECDB6AFB93DF5EF06282F74AC04D1;
IL2CPP_EXTERN_C String_t* _stringLiteralA14D59E94AA57F0E505F7C1813A26B85FC61E241;
IL2CPP_EXTERN_C String_t* _stringLiteralA5667FE2AB8054BAE9CDD965F752E1CC2A62A4A6;
IL2CPP_EXTERN_C String_t* _stringLiteralA5A74A6DF09278B88CB6EA23B7D7F2570C33BABF;
IL2CPP_EXTERN_C String_t* _stringLiteralA767A88E839DF23AB859D35BB0BCE9B4C599EA50;
IL2CPP_EXTERN_C String_t* _stringLiteralA89F3250DBC77042068080A89795F3074F9220CC;
IL2CPP_EXTERN_C String_t* _stringLiteralA93910695ED7D7FBAC0CE8A59C6385D8F310216A;
IL2CPP_EXTERN_C String_t* _stringLiteralA95B1923A5C3E14C03B2F43A2431793205757469;
IL2CPP_EXTERN_C String_t* _stringLiteralADCF5BDBF18ABDB73B68B4FBA985C05289DCE1C1;
IL2CPP_EXTERN_C String_t* _stringLiteralB029548A14DE5793F270C493DAEA6FE798E513D9;
IL2CPP_EXTERN_C String_t* _stringLiteralB0715E3222A66EC3D40A41D074FC7586B7310574;
IL2CPP_EXTERN_C String_t* _stringLiteralB470B345BD0F060653D2C5E64AFB6464E5BA253E;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27;
IL2CPP_EXTERN_C String_t* _stringLiteralBD5E8D69EEB50D73FB29455C04828E9F3F05481B;
IL2CPP_EXTERN_C String_t* _stringLiteralC215392D2EF3AF35DF5D17EA8987D1AA2A34EE95;
IL2CPP_EXTERN_C String_t* _stringLiteralC4FC59D17BAA54A1C093E5848D49E81FB3615877;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E23457AA7C2B399D3293C894EBBD3F530F1BDA;
IL2CPP_EXTERN_C String_t* _stringLiteralC6A3DE7E362AF3C28E58BE98004C7BF75D43F783;
IL2CPP_EXTERN_C String_t* _stringLiteralC8AA100DA3DA30B63C39537EA37B0B5700310DC1;
IL2CPP_EXTERN_C String_t* _stringLiteralC8EC1E8B6DEE5C8720FAE0C67EDB410BD4AEE40D;
IL2CPP_EXTERN_C String_t* _stringLiteralCC966E54C4E94B37CCFAFBB962ED1F23F60172D7;
IL2CPP_EXTERN_C String_t* _stringLiteralD51FD1FA078AAC425FACEE809654486FE077256D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBE93FF9910410FB2CB846BC3780E07ADB874C27;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9138A21442C68129A92392BE16C647F350D36A;
IL2CPP_EXTERN_C String_t* _stringLiteralDF8014D12117F29AC124C97D0B005C03F8EB041C;
IL2CPP_EXTERN_C String_t* _stringLiteralE15F8BFC9B32CF92737566D51FB63AE8B2FFBC5E;
IL2CPP_EXTERN_C String_t* _stringLiteralE45CA35451F0E2ACBA9CF2E9878EA01FF8A62898;
IL2CPP_EXTERN_C String_t* _stringLiteralE608486DEBB915711FE32538288521A3DBB86963;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7E56F7206F85F5B191811C40B51F15EAA19B04;
IL2CPP_EXTERN_C String_t* _stringLiteralF495EF2B0E3EA63EE88B6B55E75AD68ECFF5B735;
IL2CPP_EXTERN_C String_t* _stringLiteralF826223C9018BB726AFEE1CC3A2EBFAA33104D3E;
IL2CPP_EXTERN_C String_t* _stringLiteralF9567B9F05C7AB491BBF8A1CDC2F56E22E6B570F;
IL2CPP_EXTERN_C String_t* _stringLiteralFD62812FBD9EC4C7F99AA4F6253FEAD2388EB238;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_tCFC171459D159DDEC6500B55543A76219D49BB9C_mA47DE57327917E1273751CB3892224AAFDBB7CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0C1540577D28C292ECE5F4C850995A05E49EA7E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m11F9F2E8D36516D60DABA163D11EC44F2BBDCBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m65646C5479559A60A51E83C1B088ACCA9BE6C3E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBA447A76DA2E06DCBF2B1F8FA1F04B73017A45FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mCF7E960E3F755EBE4FB2BB83B1F985904AC913E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mEA90595FDA692A60DA663B7C7943B63266C08AFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsValue_m7D39562E7698F24BD42E630C10DEF3649855033A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m272D869A02B86CD241608D68CDD897F2D686A083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7898C1D0AD6BF832B78F2B8E39CF633139AD9A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m57865BAC70A924D938AD3AC56D3FF534D1942D1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m398F95668B9B305770A66F5AD04AF5D425CAAAB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7DA909F956100BBC672D809737E36516C7FA9F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9A5731E68B9008253C528D2B668F28A76B37C9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4F95054FE102D7014045D0A2B578F427C703A930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m60D88C1C1814A9AE9F02E6880319F43E497E06D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m945D436495A8F3935777DC059EA8D3079477F6B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6A96CE2CA53893FBAF20C4D6D63BAB5C64B3B596_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mE9851C6F91B0565530E84534A4E69C8D3431C86A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m0EEF7DE234518B8CDECFD6B99FA12BECD62D41A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m54A98B5800203426543418BAAA3B7FFD7678444A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8D826194919B0993A2EA9E7E9B3081F97CE4F5C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m83873244A5C506D707505774A74F363C56B75270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF8D0669CB944FCE2BB85B6C8B71F049935B543A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C330C3A75176C2C56AD16272FBC316DD8AF8BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFC84E1C498674352EF1A70EF34A78B866DE4CBCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_mADEDC0A874A4700CAF77DE3C47A9DC6BF468EB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m47FF534555003E6174B06C71F86BEF738CB181D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m43278E4AC46C3ADF301DF48E82903297218D24CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m4B2A5CAB715165D12BD2A240EC8DA064DFB2F9AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCEEF3AB9054DFCF8685C9B150E71400E02B96D9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m11F8123E0FF743303C1CA5F9566A36673D608C13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAutoSendBundleU3Ed__152_System_Collections_IEnumerator_Reset_m0DAED64503A8E1A6924041EB70F7A167068A7812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineReadU3Ed__166_System_Collections_IEnumerator_Reset_m5EB9024EE0E8C8247C737D961AD6F49DE4D569F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayedDiscoverU3Ed__89_System_Collections_IEnumerator_Reset_m50D275E6D55378A6A36BC35677CDA0CDC55227F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRestartIfBoardNotDetectedU3Ed__90_System_Collections_IEnumerator_Reset_mA17B3E320E6FD89E93BFEBCE98A636AFCE2269DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartSliderCountdownU3Ed__9_System_Collections_IEnumerator_Reset_m33D13BEEBE74F963085D51229F85B9417920D046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CAddDeviceButtonU3Eb__0_m8DA3AF87CD927A522205872A6551E4260F7F9576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CAddDeviceButtonU3Eb__1_m4CE5F04623885031D60066A0AE2D998D7F288B73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass167_0_U3CTriggerEventU3Eb__0_m795BA9045CFA30D88C540237D4FE29DED43A8C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UduinoManager_AddUduinoBoard_m373D4BBEDFDAEB217F146AA300A036320953A709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UduinoManager_ReadPorts_m4A24858DE4486789AF974FB3631946D315B091FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UduinoShortCall_U3CUpdateU3Eb__2_0_mF5C6E9314D4F648B58D8CE67A92EF7CFBC030934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m17062A6318EC9C67FE24E1FCE80196587551711B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m2425BF6294B29967F7EF6C91B0019D28577FA2BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m324264A40386ECA3265553AD462245E9151C24E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m09DCA4D04F7E62BF2F027663F420E933039BEE78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_mE67D31EA88E60447788EC99960766028BB2F5A3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BoardAlreadyExistException__ctor_m1B54CDF66C8D82DF511C08B18F728159B8D6492A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAutoSendBundleU3Ed__152_MoveNext_m5A12A8180D35363391CFBD9BF635B68203514431_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAutoSendBundleU3Ed__152_System_Collections_IEnumerator_Reset_m0DAED64503A8E1A6924041EB70F7A167068A7812_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCoroutineReadU3Ed__166_MoveNext_m7CE513F9BDA78D2925455BF398832BECA0C0762C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCoroutineReadU3Ed__166_System_Collections_IEnumerator_Reset_m5EB9024EE0E8C8247C737D961AD6F49DE4D569F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedDiscoverU3Ed__89_MoveNext_m9FA410729D41480CE33D0D39C42FB637A4C00532_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayedDiscoverU3Ed__89_System_Collections_IEnumerator_Reset_m50D275E6D55378A6A36BC35677CDA0CDC55227F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRestartIfBoardNotDetectedU3Ed__90_MoveNext_m469AEAF8BCA9F5738D1C656E91B92E851E7C5A89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRestartIfBoardNotDetectedU3Ed__90_System_Collections_IEnumerator_Reset_mA17B3E320E6FD89E93BFEBCE98A636AFCE2269DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartSliderCountdownU3Ed__9_MoveNext_m3E4939A5B44228D9F7A9D8A057F0397C5984F2A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartSliderCountdownU3Ed__9_System_Collections_IEnumerator_Reset_m33D13BEEBE74F963085D51229F85B9417920D046_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CAddDeviceButtonU3Eb__1_m4CE5F04623885031D60066A0AE2D998D7F288B73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass167_0_U3CTriggerEventU3Eb__0_m795BA9045CFA30D88C540237D4FE29DED43A8C44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoEventsReceiver_BoardConnected_mBB1568163211C00FD74B3665252173025C417608_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoEventsReceiver_BoardDisconnected_mA8E80A82588EE31EC95A0AED902DC7B7294F581C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoEventsReceiver_DataReceived_m58D73DB2B96EA2299C0FC5AE68966B49E9599C46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_AddDeviceButton_m467AB9F5C27B6B7735A68DF648D5DAFED04A63F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_Awake_m9353E0A08B6392C041A65D8F8F119D75A0F4592D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_ClearPanel_mC8B93E049F5904B3AB128E2F3401CC87BB898934_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_SendCommand_m8DC41418D28C2AC394C7AA93EB4D4ACCF5416DC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_StartSearching_m23331EFF66FDBE264425680CD57472A5CB126423_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_StartSliderCountdown_m5572CADA921CD33CE400658CF2B23F12CFA4B44E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_StopSearching_m09795865FD23476BCF731FC874DB9684048894EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_UduinoConnected_m9041DB004CC393D9BE0655BC5064606FB985EEAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_UduinoConnecting_m49BACC3116FA606E480924291AB4AC78C6AA44DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth_UduinoDisconnected_m2BB53B7A07D2C122A74B6523D10F11B112438DC0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoInterface_Bluetooth__ctor_mA29E34F2EB40E0A7D6027364088A10897DA43503_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_AddUduinoBoard_m373D4BBEDFDAEB217F146AA300A036320953A709_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_AutoSendBundle_mC99135E59DF662CD5F95336D766C05EFA560F22C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_Awake_m1F10A5F520F5BF4B28649CA143486F95558D6504_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_BuildMessageParameters_mD5853C2857D9874B87AA3CE84C5CB8A687D3C500_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_CloseAllDevices_m0F268F039DC29CD4A25AF1719718BEED728F32C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_CloseDevice_mDCBE077F50325DC4B564D2D6CC6389A0328B652E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_CoroutineRead_m91EA8433553A457BB4F46162492300AB6E4B1476_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_DelayedDiscover_m4E181854B6BAC3121F14808320A52E7B49177601_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_DirectReadFromArduino_m407E6605F28FEBCD6110A257CCFBE9EFC836C059_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_DiscoverPorts_mDA817C0313CCA4C1313B961E98E29F5B88F1919A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_DiscoverWithDelay_mCEC3A3B70F05B62969A1ABD257A0B5D9D03721CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_ExtensionIsPresentAndActive_m25004AFFAF438F2452F94C67A7395863E9798366_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_FullReset_m721742D5D556F512D813B05C9E08708D8909F2C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetAllBoard_m45B9AB7446BD8EC0C2D26E3B6C41D52653E02BD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetBoard_m18EF75FF7775B2F78E91214B4B84B481748F4491_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetBoard_m3935921AA593BC3353009C89A92728EFDF4FE000_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetPinFromBoard_m522E2AD96EAEB465ADBBE73929F4B29C816285CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetPinFromBoard_mC5E972CE79A99B55F4B55B7F6BEA8C68162B3235_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetPinNumberFromBoardType_m7F36FDABE5825DCD683A1C62ADDFB94C450D9C19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetPinNumberFromBoardType_mB2522AE50B6ED567F4B0B926131FD9835C1E6D6F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_GetPortState_mB84C22924D8B9FA366577F4E7E28FC09AA91EA1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_InitAllCallbacks_mAAC20203AFF9077A6E790BF0259E275E9C234492_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_InitAllPins_m79BA577DA2C928BCF0F07447D122D7341406150E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_InvokeAsync_mFEB9BFC5336473111AAC45DDF2E3EC468530371A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_ReadPorts_m4A24858DE4486789AF974FB3631946D315B091FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_ReadWriteArduino_m993F2D7B08CFA7A25FD73712B348E233369A1DE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_Read_m1BE4693449C189D481796CAEFD0ED53615F5FC48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_Read_m884ACDF65D0E068B209C6CEE7CC6924CE4EDC24F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_RestartIfBoardNotDetected_m500F56B0D8C2D0286E1285544F2CB04FAACA9A69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_SetBoardType_m7951BAAC245D0008C16B5E67D9D3BCDBC75D298F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_SetBoardType_m99DBB90933875DCAB5EDE08DA5E56B546A913257_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_SetReadCallback_m43568A6575F59B1E4E6EF0892331441EFC640A9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_StartThread_mB043025F5281A496920A2EC453A0C44884B5C7E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_TriggerEvent_m77EC98A63109D6630BA7699B02ED9204CC842073_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_UduinoTargetExists_m027610AB206CBE212AB76AC264A30D30B7E79D5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_UduinoTargetExists_mBE8F04B703BA9D69F4A43D48ADEE5FD115A20203_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_Update_mFCC80ED63178092419B8AEBBD0A71825D475A651_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager__cctor_mFE47E69BB1953D6F0E634B26423338FF70704F2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager__ctor_m9EF1C6FE638830EB632DAF091752E3DCC4D53993_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_add_OnBoardConnected_m9818275EA1C759C8CD3C1ADCB93DB7EAE7DCF41D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_add_OnBoardDisconnected_m1174664673B8597292A11BAE9A4F3305BDCEC2CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_add_OnDataReceived_m6E762163B6165C3B7BA2A6918C8893602E53B784_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_add_OnValueReceived_mBC4C1BA67D0448726A0902DAFA8F347FB41988D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_analogRead_mB3D252FAD4DA539F88D5BD79C1156E7049B4655A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_analogWrite_mB59B8F32A42955A78F747E232A62F39813ED6161_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_analogWrite_mED3E48427CFC9212ACF62B15DC75F67945A8CB71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_digitalRead_mE4C62A301C1961318771DE9FCFB2B9852F1D4D41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_digitalWrite_m5188F04FA4F8D0F4B6559086939B3228A43D8845_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_digitalWrite_m8A6E3826D62C458CC07B887277E19846549B199A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_digitalWrite_mD1A96CCCA3FFBA29FBF51C752666CEC7EE82062A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_dispatchValueForPin_m6D32245429ED04FC269CFE01D8FC4E0A8C5666DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_hasBoardConnected_mB76C9FD61AEC9B4637F9919FF2C65EB23FCA951A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_isConnected_m9BFE8648260145C2E99DB8705A6D301C06CD392E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_remove_OnBoardConnected_mDD0618A79C9DB5E48C976B90BE118295050B717E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_remove_OnBoardDisconnected_m5473415E00CBFD4DE7D6AC6BD3B30B1E7ED843BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_remove_OnDataReceived_m3EE818866FB167D6984BD89B7D26EF7F42DC1DC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_remove_OnValueReceived_mDD4B1C809389470123C5774066D31890BAFEE315_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_sendCommand_m690A6959077A4D1890ED5F10AE6805A533105D80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_sendCommand_m88C831CAC933468BAF9EFB5F4674C0D86E2E84D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_sendCommand_m929F85FE4F32C66D4AE02750F1244646BB3264E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_set_Instance_m76EA050B17B1298132A131948C7229BB8174AB4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoManager_set_LimitSendRate_mE536C592311D23D2B265945858A83405BF63C568_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoShortCall_Update_m7EE01C2BB47D4D86ABD956286D35E1E7B574AEC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoVersion__cctor_m7C670201BB5521466D97098F3E9D0A670B2A7352_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoVersion_getVersion_m645347C686E3143416AC559A8594B9ED9C600B04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UduinoVersion_lastUpdate_mF194F6EDF8EE3CFF7FEF610E24713C2C54849E8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t chairTest_Start_m945082CFDA614721AD13E12CE93CA1F55D1A3AB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t chairTest_Update_m13B72658911E92DE9195B47FFF5376F0CE13059A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t eventBoard__ctor_m9B6E2E770D4950D70366F309A453B6566229DF4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t eventValueReceived__ctor_mA3E6D276900772654354D8C7075928D63E638F68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t tiltControl_GetCameraOffset_m2A0FFA6806A4AF2ECA9549F4F286F43096CF9411_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t tiltControl_GetCameraRotation_m612981BF747F37CC4DC1F90F6A58544A48DB4BCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t tiltControl_Update_m7A85586B1C3D5A06FF76A2636CEE507344ADC964_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771;
struct UduinoManagerU5BU5D_t2898AED1A18540CC0145C57FA79821C00B588035;
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Uduino.UduinoDevice>
struct KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2, ___dictionary_0)); }
	inline Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Uduino.UduinoDevice>
struct ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A, ___dictionary_0)); }
	inline Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5F144DEAB68C4E9264BBFDB6D338313C9435245F* ___entries_1;
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
	KeyCollection_t744586CF8C082125754C3B146E1347F123C92930 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t93902BBAE074D63F286A27EEEE5DBDACBDC8146A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___entries_1)); }
	inline EntryU5BU5D_t5F144DEAB68C4E9264BBFDB6D338313C9435245F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5F144DEAB68C4E9264BBFDB6D338313C9435245F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5F144DEAB68C4E9264BBFDB6D338313C9435245F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___keys_7)); }
	inline KeyCollection_t744586CF8C082125754C3B146E1347F123C92930 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t744586CF8C082125754C3B146E1347F123C92930 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t744586CF8C082125754C3B146E1347F123C92930 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ___values_8)); }
	inline ValueCollection_t93902BBAE074D63F286A27EEEE5DBDACBDC8146A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t93902BBAE074D63F286A27EEEE5DBDACBDC8146A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t93902BBAE074D63F286A27EEEE5DBDACBDC8146A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7D300CE1CB9D0C18A6A29716019D9F4DA4C17490* ___entries_1;
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
	KeyCollection_t301F7AA2D002B20DED934E68BA125BE268F2BEF9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFBC1693F0C1EAF26CFEC28D74985CA5F1718A7B5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___entries_1)); }
	inline EntryU5BU5D_t7D300CE1CB9D0C18A6A29716019D9F4DA4C17490* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7D300CE1CB9D0C18A6A29716019D9F4DA4C17490** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7D300CE1CB9D0C18A6A29716019D9F4DA4C17490* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___keys_7)); }
	inline KeyCollection_t301F7AA2D002B20DED934E68BA125BE268F2BEF9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t301F7AA2D002B20DED934E68BA125BE268F2BEF9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t301F7AA2D002B20DED934E68BA125BE268F2BEF9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ___values_8)); }
	inline ValueCollection_tFBC1693F0C1EAF26CFEC28D74985CA5F1718A7B5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFBC1693F0C1EAF26CFEC28D74985CA5F1718A7B5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFBC1693F0C1EAF26CFEC28D74985CA5F1718A7B5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
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
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Uduino.BLEDeviceButton_Interface>
struct Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC96C6BDC36449D88BD12B36FC6BD795B2824DE09* ___entries_1;
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
	KeyCollection_t483C9FAB8864A16DC41100558D4860BD655F5D61 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tEE237FFE2E21F7DB9531CC549B37CB516E792853 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___entries_1)); }
	inline EntryU5BU5D_tC96C6BDC36449D88BD12B36FC6BD795B2824DE09* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC96C6BDC36449D88BD12B36FC6BD795B2824DE09** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC96C6BDC36449D88BD12B36FC6BD795B2824DE09* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___keys_7)); }
	inline KeyCollection_t483C9FAB8864A16DC41100558D4860BD655F5D61 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t483C9FAB8864A16DC41100558D4860BD655F5D61 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t483C9FAB8864A16DC41100558D4860BD655F5D61 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ___values_8)); }
	inline ValueCollection_tEE237FFE2E21F7DB9531CC549B37CB516E792853 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tEE237FFE2E21F7DB9531CC549B37CB516E792853 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tEE237FFE2E21F7DB9531CC549B37CB516E792853 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>
struct Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAC3B8C3F779AC8FCDDB7248A1ED463E43E30E3E0* ___entries_1;
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
	KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___entries_1)); }
	inline EntryU5BU5D_tAC3B8C3F779AC8FCDDB7248A1ED463E43E30E3E0* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAC3B8C3F779AC8FCDDB7248A1ED463E43E30E3E0** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAC3B8C3F779AC8FCDDB7248A1ED463E43E30E3E0* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___keys_7)); }
	inline KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ___values_8)); }
	inline ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Uduino.Pin>
struct List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785, ____items_1)); }
	inline PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54* get__items_1() const { return ____items_1; }
	inline PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785_StaticFields, ____emptyArray_5)); }
	inline PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PinU5BU5D_t271197115A23CF09ED01E541F2DC68B44AE7FE54* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
{
public:

public:
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

// Uduino.ArduinoBoardType
struct ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90  : public RuntimeObject
{
public:
	// System.String Uduino.ArduinoBoardType::name
	String_t* ___name_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Uduino.ArduinoBoardType::pins
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___pins_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_pins_1() { return static_cast<int32_t>(offsetof(ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90, ___pins_1)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_pins_1() const { return ___pins_1; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_pins_1() { return &___pins_1; }
	inline void set_pins_1(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___pins_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pins_1), (void*)value);
	}
};


// Uduino.BLEDeviceButton_Interface
struct BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233  : public RuntimeObject
{
public:
	// UnityEngine.UI.Button Uduino.BLEDeviceButton_Interface::button
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button_0;
	// UnityEngine.GameObject Uduino.BLEDeviceButton_Interface::connecting
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___connecting_1;
	// UnityEngine.GameObject Uduino.BLEDeviceButton_Interface::connect
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___connect_2;
	// UnityEngine.Transform Uduino.BLEDeviceButton_Interface::connected
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___connected_3;
	// UnityEngine.GameObject Uduino.BLEDeviceButton_Interface::disconnect
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___disconnect_4;

public:
	inline static int32_t get_offset_of_button_0() { return static_cast<int32_t>(offsetof(BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233, ___button_0)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_button_0() const { return ___button_0; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_button_0() { return &___button_0; }
	inline void set_button_0(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___button_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_0), (void*)value);
	}

	inline static int32_t get_offset_of_connecting_1() { return static_cast<int32_t>(offsetof(BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233, ___connecting_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_connecting_1() const { return ___connecting_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_connecting_1() { return &___connecting_1; }
	inline void set_connecting_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___connecting_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connecting_1), (void*)value);
	}

	inline static int32_t get_offset_of_connect_2() { return static_cast<int32_t>(offsetof(BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233, ___connect_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_connect_2() const { return ___connect_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_connect_2() { return &___connect_2; }
	inline void set_connect_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___connect_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connect_2), (void*)value);
	}

	inline static int32_t get_offset_of_connected_3() { return static_cast<int32_t>(offsetof(BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233, ___connected_3)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_connected_3() const { return ___connected_3; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_connected_3() { return &___connected_3; }
	inline void set_connected_3(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___connected_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connected_3), (void*)value);
	}

	inline static int32_t get_offset_of_disconnect_4() { return static_cast<int32_t>(offsetof(BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233, ___disconnect_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_disconnect_4() const { return ___disconnect_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_disconnect_4() { return &___disconnect_4; }
	inline void set_disconnect_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___disconnect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disconnect_4), (void*)value);
	}
};


// Uduino.BoardsTypeList
struct BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Uduino.ArduinoBoardType> Uduino.BoardsTypeList::boardTypes
	List_1_t8114691E8FF6E2627907B15BD0FB558AA68ED4A0 * ___boardTypes_1;

public:
	inline static int32_t get_offset_of_boardTypes_1() { return static_cast<int32_t>(offsetof(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7, ___boardTypes_1)); }
	inline List_1_t8114691E8FF6E2627907B15BD0FB558AA68ED4A0 * get_boardTypes_1() const { return ___boardTypes_1; }
	inline List_1_t8114691E8FF6E2627907B15BD0FB558AA68ED4A0 ** get_address_of_boardTypes_1() { return &___boardTypes_1; }
	inline void set_boardTypes_1(List_1_t8114691E8FF6E2627907B15BD0FB558AA68ED4A0 * value)
	{
		___boardTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardTypes_1), (void*)value);
	}
};

struct BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_StaticFields
{
public:
	// Uduino.BoardsTypeList Uduino.BoardsTypeList::_boards
	BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * ____boards_0;

public:
	inline static int32_t get_offset_of__boards_0() { return static_cast<int32_t>(offsetof(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_StaticFields, ____boards_0)); }
	inline BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * get__boards_0() const { return ____boards_0; }
	inline BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 ** get_address_of__boards_0() { return &____boards_0; }
	inline void set__boards_0(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * value)
	{
		____boards_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____boards_0), (void*)value);
	}
};


// Uduino.Interface
struct Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7  : public RuntimeObject
{
public:
	// Uduino.UduinoInterface Uduino.Interface::currentInterface
	UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * ___currentInterface_1;

public:
	inline static int32_t get_offset_of_currentInterface_1() { return static_cast<int32_t>(offsetof(Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7, ___currentInterface_1)); }
	inline UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * get_currentInterface_1() const { return ___currentInterface_1; }
	inline UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A ** get_address_of_currentInterface_1() { return &___currentInterface_1; }
	inline void set_currentInterface_1(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * value)
	{
		___currentInterface_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentInterface_1), (void*)value);
	}
};

struct Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7_StaticFields
{
public:
	// Uduino.Interface Uduino.Interface::_instance
	Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7_StaticFields, ____instance_0)); }
	inline Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 * get__instance_0() const { return ____instance_0; }
	inline Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Uduino.UduinoConnection
struct UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7  : public RuntimeObject
{
public:
	// Uduino.UduinoManager Uduino.UduinoConnection::_manager
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ____manager_0;
	// Uduino.UduinoDevice Uduino.UduinoConnection::connectedDevice
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___connectedDevice_1;

public:
	inline static int32_t get_offset_of__manager_0() { return static_cast<int32_t>(offsetof(UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7, ____manager_0)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get__manager_0() const { return ____manager_0; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of__manager_0() { return &____manager_0; }
	inline void set__manager_0(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		____manager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____manager_0), (void*)value);
	}

	inline static int32_t get_offset_of_connectedDevice_1() { return static_cast<int32_t>(offsetof(UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7, ___connectedDevice_1)); }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * get_connectedDevice_1() const { return ___connectedDevice_1; }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A ** get_address_of_connectedDevice_1() { return &___connectedDevice_1; }
	inline void set_connectedDevice_1(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * value)
	{
		___connectedDevice_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectedDevice_1), (void*)value);
	}
};


// Uduino.UduinoInterface/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t7C4526B0752B11F77F19A8F9B48A0D6D7A4B1D0A  : public RuntimeObject
{
public:
	// Uduino.UduinoInterface Uduino.UduinoInterface/<>c__DisplayClass21_0::<>4__this
	UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * ___U3CU3E4__this_0;
	// System.String Uduino.UduinoInterface/<>c__DisplayClass21_0::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t7C4526B0752B11F77F19A8F9B48A0D6D7A4B1D0A, ___U3CU3E4__this_0)); }
	inline UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t7C4526B0752B11F77F19A8F9B48A0D6D7A4B1D0A, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};


// Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856  : public RuntimeObject
{
public:
	// Uduino.UduinoInterface_Bluetooth Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0::<>4__this
	UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * ___U3CU3E4__this_0;
	// System.String Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0::uuid
	String_t* ___uuid_1;
	// System.String Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856, ___U3CU3E4__this_0)); }
	inline UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_uuid_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856, ___uuid_1)); }
	inline String_t* get_uuid_1() const { return ___uuid_1; }
	inline String_t** get_address_of_uuid_1() { return &___uuid_1; }
	inline void set_uuid_1(String_t* value)
	{
		___uuid_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uuid_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9
struct U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64  : public RuntimeObject
{
public:
	// System.Int32 Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Uduino.UduinoInterface_Bluetooth Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::<>4__this
	UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * ___U3CU3E4__this_2;
	// UnityEngine.UI.Slider Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::<slider>5__2
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___U3CsliderU3E5__2_3;
	// System.Int32 Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::<currentCount>5__3
	int32_t ___U3CcurrentCountU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64, ___U3CU3E4__this_2)); }
	inline UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsliderU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64, ___U3CsliderU3E5__2_3)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_U3CsliderU3E5__2_3() const { return ___U3CsliderU3E5__2_3; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_U3CsliderU3E5__2_3() { return &___U3CsliderU3E5__2_3; }
	inline void set_U3CsliderU3E5__2_3(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___U3CsliderU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsliderU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentCountU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64, ___U3CcurrentCountU3E5__3_4)); }
	inline int32_t get_U3CcurrentCountU3E5__3_4() const { return ___U3CcurrentCountU3E5__3_4; }
	inline int32_t* get_address_of_U3CcurrentCountU3E5__3_4() { return &___U3CcurrentCountU3E5__3_4; }
	inline void set_U3CcurrentCountU3E5__3_4(int32_t value)
	{
		___U3CcurrentCountU3E5__3_4 = value;
	}
};


// Uduino.UduinoManager/<>c__DisplayClass167_0
struct U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C  : public RuntimeObject
{
public:
	// Uduino.UduinoManager Uduino.UduinoManager/<>c__DisplayClass167_0::<>4__this
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___U3CU3E4__this_0;
	// System.String Uduino.UduinoManager/<>c__DisplayClass167_0::data
	String_t* ___data_1;
	// Uduino.UduinoDevice Uduino.UduinoManager/<>c__DisplayClass167_0::device
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C, ___U3CU3E4__this_0)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C, ___data_1)); }
	inline String_t* get_data_1() const { return ___data_1; }
	inline String_t** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(String_t* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_device_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C, ___device_2)); }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * get_device_2() const { return ___device_2; }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A ** get_address_of_device_2() { return &___device_2; }
	inline void set_device_2(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * value)
	{
		___device_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_2), (void*)value);
	}
};


// Uduino.UduinoManager/<AutoSendBundle>d__152
struct U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9  : public RuntimeObject
{
public:
	// System.Int32 Uduino.UduinoManager/<AutoSendBundle>d__152::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Uduino.UduinoManager/<AutoSendBundle>d__152::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Uduino.UduinoManager Uduino.UduinoManager/<AutoSendBundle>d__152::<>4__this
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9, ___U3CU3E4__this_2)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Uduino.UduinoManager/<CoroutineRead>d__166
struct U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113  : public RuntimeObject
{
public:
	// System.Int32 Uduino.UduinoManager/<CoroutineRead>d__166::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Uduino.UduinoManager/<CoroutineRead>d__166::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Uduino.UduinoDevice Uduino.UduinoManager/<CoroutineRead>d__166::target
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target_2;
	// Uduino.UduinoManager Uduino.UduinoManager/<CoroutineRead>d__166::<>4__this
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113, ___target_2)); }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * get_target_2() const { return ___target_2; }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113, ___U3CU3E4__this_3)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Uduino.UduinoManager/<DelayedDiscover>d__89
struct U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54  : public RuntimeObject
{
public:
	// System.Int32 Uduino.UduinoManager/<DelayedDiscover>d__89::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Uduino.UduinoManager/<DelayedDiscover>d__89::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Uduino.UduinoManager/<DelayedDiscover>d__89::delay
	float ___delay_2;
	// Uduino.UduinoManager Uduino.UduinoManager/<DelayedDiscover>d__89::<>4__this
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54, ___U3CU3E4__this_3)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90
struct U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2  : public RuntimeObject
{
public:
	// System.Int32 Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Uduino.UduinoManager Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::<>4__this
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2, ___U3CU3E4__this_2)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Uduino.UduinoVersion
struct UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A  : public RuntimeObject
{
public:

public:
};

struct UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields
{
public:
	// System.Int32 Uduino.UduinoVersion::major
	int32_t ___major_0;
	// System.Int32 Uduino.UduinoVersion::minor
	int32_t ___minor_1;
	// System.Int32 Uduino.UduinoVersion::patch
	int32_t ___patch_2;
	// System.String Uduino.UduinoVersion::update
	String_t* ___update_3;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}

	inline static int32_t get_offset_of_patch_2() { return static_cast<int32_t>(offsetof(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields, ___patch_2)); }
	inline int32_t get_patch_2() const { return ___patch_2; }
	inline int32_t* get_address_of_patch_2() { return &___patch_2; }
	inline void set_patch_2(int32_t value)
	{
		___patch_2 = value;
	}

	inline static int32_t get_offset_of_update_3() { return static_cast<int32_t>(offsetof(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields, ___update_3)); }
	inline String_t* get_update_3() const { return ___update_3; }
	inline String_t** get_address_of_update_3() { return &___update_3; }
	inline void set_update_3(String_t* value)
	{
		___update_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___update_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
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


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Action`1<System.String>>
struct KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894, ___value_1)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_value_1() const { return ___value_1; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Uduino.BLEDeviceButton_Interface>
struct KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65, ___value_1)); }
	inline BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * get_value_1() const { return ___value_1; }
	inline BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Uduino.UduinoDevice>
struct KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949, ___value_1)); }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * get_value_1() const { return ___value_1; }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___list_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_list_0() const { return ___list_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Uduino.Pin>
struct Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB, ___list_0)); }
	inline List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * get_list_0() const { return ___list_0; }
	inline List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB, ___current_3)); }
	inline Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * get_current_3() const { return ___current_3; }
	inline Pin_tCA13A6E61822241A72D937ED2217785A334EF455 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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


// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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


// Uduino.SerializableDictionary`2<System.String,System.Boolean>
struct SerializableDictionary_2_t94B119DB65941A3B3D774E53EC563966A6F8EE26  : public Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B
{
public:
	// System.Collections.Generic.List`1<TKey> Uduino.SerializableDictionary`2::keys
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___keys_14;
	// System.Collections.Generic.List`1<TValue> Uduino.SerializableDictionary`2::values
	List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * ___values_15;

public:
	inline static int32_t get_offset_of_keys_14() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t94B119DB65941A3B3D774E53EC563966A6F8EE26, ___keys_14)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_keys_14() const { return ___keys_14; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_keys_14() { return &___keys_14; }
	inline void set_keys_14(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___keys_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_14), (void*)value);
	}

	inline static int32_t get_offset_of_values_15() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t94B119DB65941A3B3D774E53EC563966A6F8EE26, ___values_15)); }
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * get_values_15() const { return ___values_15; }
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 ** get_address_of_values_15() { return &___values_15; }
	inline void set_values_15(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * value)
	{
		___values_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_15), (void*)value);
	}
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Uduino.UduinoDevice>
struct UnityEvent_1_tD75DD786FC9FD883E80567D5E2746B61F2A6AEEA  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tD75DD786FC9FD883E80567D5E2746B61F2A6AEEA, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.String,Uduino.UduinoDevice>
struct UnityEvent_2_tFE1DFE49DEC166D074ABB396BC1EFFF6771C8736  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tFE1DFE49DEC166D074ABB396BC1EFFF6771C8736, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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


// UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
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


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Action`1<System.String>>
struct Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A, ___dictionary_0)); }
	inline Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A, ___current_3)); }
	inline KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Uduino.BLEDeviceButton_Interface>
struct Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F, ___dictionary_0)); }
	inline Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F, ___current_3)); }
	inline KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Uduino.UduinoDevice>
struct Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997, ___dictionary_0)); }
	inline Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997, ___current_3)); }
	inline KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
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

// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.ThreadState
struct ThreadState_t5DE1FACD0DA096CCF07D144CBEB4D124CECC671E 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadState_t5DE1FACD0DA096CCF07D144CBEB4D124CECC671E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.AnalogPin
struct AnalogPin_t77A3ED326BD76F30F19F3BDE379F6A871E7D867F 
{
public:
	// System.Int32 Uduino.AnalogPin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalogPin_t77A3ED326BD76F30F19F3BDE379F6A871E7D867F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.BoardStatus
struct BoardStatus_t210D46DC935BD4FF62C5FEE08DFB512C301FC7C7 
{
public:
	// System.Int32 Uduino.BoardStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoardStatus_t210D46DC935BD4FF62C5FEE08DFB512C301FC7C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.ConnectionMethod
struct ConnectionMethod_t194392D9E7112219C4322D3A059C4519A6176BB0 
{
public:
	// System.Int32 Uduino.ConnectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionMethod_t194392D9E7112219C4322D3A059C4519A6176BB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.HardwareReading
struct HardwareReading_t04EEC99E958C6F9979DEE01396E8D409F2E1C6C2 
{
public:
	// System.Int32 Uduino.HardwareReading::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HardwareReading_t04EEC99E958C6F9979DEE01396E8D409F2E1C6C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.IsActiveDictionnary
struct IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E  : public SerializableDictionary_2_t94B119DB65941A3B3D774E53EC563966A6F8EE26
{
public:

public:
};


// Uduino.IsPresentDictionnary
struct IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0  : public SerializableDictionary_2_t94B119DB65941A3B3D774E53EC563966A6F8EE26
{
public:

public:
};


// Uduino.LogLevel
struct LogLevel_tD54DAED677FFB6760016BE2D1A7A4EA3108D2341 
{
public:
	// System.Int32 Uduino.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tD54DAED677FFB6760016BE2D1A7A4EA3108D2341, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.PinMode
struct PinMode_tC4C0981AF254662628B9C03A310717AD7779C430 
{
public:
	// System.Int32 Uduino.PinMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PinMode_tC4C0981AF254662628B9C03A310717AD7779C430, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.Platform
struct Platform_t815515C2C7DD14A300DC24B1CD038494009916C3 
{
public:
	// System.Int32 Uduino.Platform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Platform_t815515C2C7DD14A300DC24B1CD038494009916C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.State
struct State_t494BA86FFB6F47FBEA9103D785182B58F1FFBF20 
{
public:
	// System.Int32 Uduino.State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t494BA86FFB6F47FBEA9103D785182B58F1FFBF20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.UduinoInterfaceType
struct UduinoInterfaceType_t2662D45146AED0AA8E2076B750E2D751463899CA 
{
public:
	// System.Int32 Uduino.UduinoInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UduinoInterfaceType_t2662D45146AED0AA8E2076B750E2D751463899CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Uduino.UduinoManager/eventBoard
struct eventBoard_t8BC0918006535568A2223543B6AF4B4631765609  : public UnityEvent_1_tD75DD786FC9FD883E80567D5E2746B61F2A6AEEA
{
public:

public:
};


// Uduino.UduinoManager/eventValueReceived
struct eventValueReceived_t8130A3E2DE2BCEC0FA5F327D9C1A9B0E880E747E  : public UnityEvent_2_tFE1DFE49DEC166D074ABB396BC1EFFF6771C8736
{
public:

public:
};


// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
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

// UnityEngine.KeyCode
struct KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Uduino.Pin
struct Pin_tCA13A6E61822241A72D937ED2217785A334EF455  : public RuntimeObject
{
public:
	// Uduino.UduinoManager Uduino.Pin::manager
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___manager_0;
	// Uduino.UduinoDevice Uduino.Pin::device
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device_1;
	// System.String Uduino.Pin::arduinoName
	String_t* ___arduinoName_2;
	// Uduino.PinMode Uduino.Pin::pinMode
	int32_t ___pinMode_3;
	// Uduino.PinMode Uduino.Pin::prevPinMode
	int32_t ___prevPinMode_4;
	// System.Int32 Uduino.Pin::currentPin
	int32_t ___currentPin_5;
	// System.Int32 Uduino.Pin::prevPin
	int32_t ___prevPin_6;
	// System.Boolean Uduino.Pin::isEditorPin
	bool ___isEditorPin_7;
	// System.Boolean Uduino.Pin::isInit
	bool ___isInit_8;
	// System.Int32 Uduino.Pin::sendValue
	int32_t ___sendValue_9;
	// System.Int32 Uduino.Pin::prevSendValue
	int32_t ___prevSendValue_10;
	// System.Int32 Uduino.Pin::lastReadValue
	int32_t ___lastReadValue_11;

public:
	inline static int32_t get_offset_of_manager_0() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___manager_0)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get_manager_0() const { return ___manager_0; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of_manager_0() { return &___manager_0; }
	inline void set_manager_0(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		___manager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_0), (void*)value);
	}

	inline static int32_t get_offset_of_device_1() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___device_1)); }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * get_device_1() const { return ___device_1; }
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A ** get_address_of_device_1() { return &___device_1; }
	inline void set_device_1(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * value)
	{
		___device_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___device_1), (void*)value);
	}

	inline static int32_t get_offset_of_arduinoName_2() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___arduinoName_2)); }
	inline String_t* get_arduinoName_2() const { return ___arduinoName_2; }
	inline String_t** get_address_of_arduinoName_2() { return &___arduinoName_2; }
	inline void set_arduinoName_2(String_t* value)
	{
		___arduinoName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arduinoName_2), (void*)value);
	}

	inline static int32_t get_offset_of_pinMode_3() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___pinMode_3)); }
	inline int32_t get_pinMode_3() const { return ___pinMode_3; }
	inline int32_t* get_address_of_pinMode_3() { return &___pinMode_3; }
	inline void set_pinMode_3(int32_t value)
	{
		___pinMode_3 = value;
	}

	inline static int32_t get_offset_of_prevPinMode_4() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___prevPinMode_4)); }
	inline int32_t get_prevPinMode_4() const { return ___prevPinMode_4; }
	inline int32_t* get_address_of_prevPinMode_4() { return &___prevPinMode_4; }
	inline void set_prevPinMode_4(int32_t value)
	{
		___prevPinMode_4 = value;
	}

	inline static int32_t get_offset_of_currentPin_5() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___currentPin_5)); }
	inline int32_t get_currentPin_5() const { return ___currentPin_5; }
	inline int32_t* get_address_of_currentPin_5() { return &___currentPin_5; }
	inline void set_currentPin_5(int32_t value)
	{
		___currentPin_5 = value;
	}

	inline static int32_t get_offset_of_prevPin_6() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___prevPin_6)); }
	inline int32_t get_prevPin_6() const { return ___prevPin_6; }
	inline int32_t* get_address_of_prevPin_6() { return &___prevPin_6; }
	inline void set_prevPin_6(int32_t value)
	{
		___prevPin_6 = value;
	}

	inline static int32_t get_offset_of_isEditorPin_7() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___isEditorPin_7)); }
	inline bool get_isEditorPin_7() const { return ___isEditorPin_7; }
	inline bool* get_address_of_isEditorPin_7() { return &___isEditorPin_7; }
	inline void set_isEditorPin_7(bool value)
	{
		___isEditorPin_7 = value;
	}

	inline static int32_t get_offset_of_isInit_8() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___isInit_8)); }
	inline bool get_isInit_8() const { return ___isInit_8; }
	inline bool* get_address_of_isInit_8() { return &___isInit_8; }
	inline void set_isInit_8(bool value)
	{
		___isInit_8 = value;
	}

	inline static int32_t get_offset_of_sendValue_9() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___sendValue_9)); }
	inline int32_t get_sendValue_9() const { return ___sendValue_9; }
	inline int32_t* get_address_of_sendValue_9() { return &___sendValue_9; }
	inline void set_sendValue_9(int32_t value)
	{
		___sendValue_9 = value;
	}

	inline static int32_t get_offset_of_prevSendValue_10() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___prevSendValue_10)); }
	inline int32_t get_prevSendValue_10() const { return ___prevSendValue_10; }
	inline int32_t* get_address_of_prevSendValue_10() { return &___prevSendValue_10; }
	inline void set_prevSendValue_10(int32_t value)
	{
		___prevSendValue_10 = value;
	}

	inline static int32_t get_offset_of_lastReadValue_11() { return static_cast<int32_t>(offsetof(Pin_tCA13A6E61822241A72D937ED2217785A334EF455, ___lastReadValue_11)); }
	inline int32_t get_lastReadValue_11() const { return ___lastReadValue_11; }
	inline int32_t* get_address_of_lastReadValue_11() { return &___lastReadValue_11; }
	inline void set_lastReadValue_11(int32_t value)
	{
		___lastReadValue_11 = value;
	}
};


// Uduino.UduinoDevice
struct UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A  : public RuntimeObject
{
public:
	// System.String Uduino.UduinoDevice::name
	String_t* ___name_0;
	// System.Int32 Uduino.UduinoDevice::_boardType
	int32_t ____boardType_1;
	// System.String Uduino.UduinoDevice::lastRead
	String_t* ___lastRead_2;
	// System.String Uduino.UduinoDevice::lastWrite
	String_t* ___lastWrite_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> Uduino.UduinoDevice::bundles
	Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * ___bundles_4;
	// System.Action`1<System.String> Uduino.UduinoDevice::callback
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback_5;
	// Uduino.BoardStatus Uduino.UduinoDevice::boardStatus
	int32_t ___boardStatus_6;
	// System.Collections.Queue Uduino.UduinoDevice::readQueue
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * ___readQueue_7;
	// System.Collections.Queue Uduino.UduinoDevice::writeQueue
	Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * ___writeQueue_8;
	// System.Int32 Uduino.UduinoDevice::maxQueueLength
	int32_t ___maxQueueLength_9;
	// System.Boolean Uduino.UduinoDevice::alwaysRead
	bool ___alwaysRead_10;
	// System.Boolean Uduino.UduinoDevice::readAfterCommand
	bool ___readAfterCommand_11;
	// System.String Uduino.UduinoDevice::identity
	String_t* ___identity_12;
	// System.Boolean Uduino.UduinoDevice::commandhasBeenSent
	bool ___commandhasBeenSent_13;
	// Uduino.UduinoConnection Uduino.UduinoDevice::_connection
	UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * ____connection_14;
	// Uduino.UduinoDevice/OnBoardClosedEvent Uduino.UduinoDevice::OnBoardClosed
	OnBoardClosedEvent_t866F2520EA50117DC86D631F178F02C7AADCED7B * ___OnBoardClosed_15;
	// Uduino.UduinoDevice/OnBoardFoundEvent Uduino.UduinoDevice::OnBoardFound
	OnBoardFoundEvent_t76691EEE127ACE2244769592F59076BE02B7C6D5 * ___OnBoardFound_16;
	// System.Boolean Uduino.UduinoDevice::isApplicationQuitting
	bool ___isApplicationQuitting_17;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of__boardType_1() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ____boardType_1)); }
	inline int32_t get__boardType_1() const { return ____boardType_1; }
	inline int32_t* get_address_of__boardType_1() { return &____boardType_1; }
	inline void set__boardType_1(int32_t value)
	{
		____boardType_1 = value;
	}

	inline static int32_t get_offset_of_lastRead_2() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___lastRead_2)); }
	inline String_t* get_lastRead_2() const { return ___lastRead_2; }
	inline String_t** get_address_of_lastRead_2() { return &___lastRead_2; }
	inline void set_lastRead_2(String_t* value)
	{
		___lastRead_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastRead_2), (void*)value);
	}

	inline static int32_t get_offset_of_lastWrite_3() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___lastWrite_3)); }
	inline String_t* get_lastWrite_3() const { return ___lastWrite_3; }
	inline String_t** get_address_of_lastWrite_3() { return &___lastWrite_3; }
	inline void set_lastWrite_3(String_t* value)
	{
		___lastWrite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastWrite_3), (void*)value);
	}

	inline static int32_t get_offset_of_bundles_4() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___bundles_4)); }
	inline Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * get_bundles_4() const { return ___bundles_4; }
	inline Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 ** get_address_of_bundles_4() { return &___bundles_4; }
	inline void set_bundles_4(Dictionary_2_t5ACFAE415D71C68A067C617A03DAF1DF7EC36EF7 * value)
	{
		___bundles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bundles_4), (void*)value);
	}

	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___callback_5)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_callback_5() const { return ___callback_5; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_5), (void*)value);
	}

	inline static int32_t get_offset_of_boardStatus_6() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___boardStatus_6)); }
	inline int32_t get_boardStatus_6() const { return ___boardStatus_6; }
	inline int32_t* get_address_of_boardStatus_6() { return &___boardStatus_6; }
	inline void set_boardStatus_6(int32_t value)
	{
		___boardStatus_6 = value;
	}

	inline static int32_t get_offset_of_readQueue_7() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___readQueue_7)); }
	inline Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * get_readQueue_7() const { return ___readQueue_7; }
	inline Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 ** get_address_of_readQueue_7() { return &___readQueue_7; }
	inline void set_readQueue_7(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * value)
	{
		___readQueue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readQueue_7), (void*)value);
	}

	inline static int32_t get_offset_of_writeQueue_8() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___writeQueue_8)); }
	inline Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * get_writeQueue_8() const { return ___writeQueue_8; }
	inline Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 ** get_address_of_writeQueue_8() { return &___writeQueue_8; }
	inline void set_writeQueue_8(Queue_tEC6DE7527799C2E4224B469ECD0CDD2B25E8E4F3 * value)
	{
		___writeQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_maxQueueLength_9() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___maxQueueLength_9)); }
	inline int32_t get_maxQueueLength_9() const { return ___maxQueueLength_9; }
	inline int32_t* get_address_of_maxQueueLength_9() { return &___maxQueueLength_9; }
	inline void set_maxQueueLength_9(int32_t value)
	{
		___maxQueueLength_9 = value;
	}

	inline static int32_t get_offset_of_alwaysRead_10() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___alwaysRead_10)); }
	inline bool get_alwaysRead_10() const { return ___alwaysRead_10; }
	inline bool* get_address_of_alwaysRead_10() { return &___alwaysRead_10; }
	inline void set_alwaysRead_10(bool value)
	{
		___alwaysRead_10 = value;
	}

	inline static int32_t get_offset_of_readAfterCommand_11() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___readAfterCommand_11)); }
	inline bool get_readAfterCommand_11() const { return ___readAfterCommand_11; }
	inline bool* get_address_of_readAfterCommand_11() { return &___readAfterCommand_11; }
	inline void set_readAfterCommand_11(bool value)
	{
		___readAfterCommand_11 = value;
	}

	inline static int32_t get_offset_of_identity_12() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___identity_12)); }
	inline String_t* get_identity_12() const { return ___identity_12; }
	inline String_t** get_address_of_identity_12() { return &___identity_12; }
	inline void set_identity_12(String_t* value)
	{
		___identity_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___identity_12), (void*)value);
	}

	inline static int32_t get_offset_of_commandhasBeenSent_13() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___commandhasBeenSent_13)); }
	inline bool get_commandhasBeenSent_13() const { return ___commandhasBeenSent_13; }
	inline bool* get_address_of_commandhasBeenSent_13() { return &___commandhasBeenSent_13; }
	inline void set_commandhasBeenSent_13(bool value)
	{
		___commandhasBeenSent_13 = value;
	}

	inline static int32_t get_offset_of__connection_14() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ____connection_14)); }
	inline UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * get__connection_14() const { return ____connection_14; }
	inline UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 ** get_address_of__connection_14() { return &____connection_14; }
	inline void set__connection_14(UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * value)
	{
		____connection_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connection_14), (void*)value);
	}

	inline static int32_t get_offset_of_OnBoardClosed_15() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___OnBoardClosed_15)); }
	inline OnBoardClosedEvent_t866F2520EA50117DC86D631F178F02C7AADCED7B * get_OnBoardClosed_15() const { return ___OnBoardClosed_15; }
	inline OnBoardClosedEvent_t866F2520EA50117DC86D631F178F02C7AADCED7B ** get_address_of_OnBoardClosed_15() { return &___OnBoardClosed_15; }
	inline void set_OnBoardClosed_15(OnBoardClosedEvent_t866F2520EA50117DC86D631F178F02C7AADCED7B * value)
	{
		___OnBoardClosed_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBoardClosed_15), (void*)value);
	}

	inline static int32_t get_offset_of_OnBoardFound_16() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___OnBoardFound_16)); }
	inline OnBoardFoundEvent_t76691EEE127ACE2244769592F59076BE02B7C6D5 * get_OnBoardFound_16() const { return ___OnBoardFound_16; }
	inline OnBoardFoundEvent_t76691EEE127ACE2244769592F59076BE02B7C6D5 ** get_address_of_OnBoardFound_16() { return &___OnBoardFound_16; }
	inline void set_OnBoardFound_16(OnBoardFoundEvent_t76691EEE127ACE2244769592F59076BE02B7C6D5 * value)
	{
		___OnBoardFound_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBoardFound_16), (void*)value);
	}

	inline static int32_t get_offset_of_isApplicationQuitting_17() { return static_cast<int32_t>(offsetof(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A, ___isApplicationQuitting_17)); }
	inline bool get_isApplicationQuitting_17() const { return ___isApplicationQuitting_17; }
	inline bool* get_address_of_isApplicationQuitting_17() { return &___isApplicationQuitting_17; }
	inline void set_isApplicationQuitting_17(bool value)
	{
		___isApplicationQuitting_17 = value;
	}
};


// Uduino.UduinoManager/BoardAlreadyExistException
struct BoardAlreadyExistException_t7FA252A04F70FB74F0362FA40DF4DD48E0918A78  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
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


// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF  : public MulticastDelegate_t
{
public:

public:
};


// Uduino.UduinoManager/OnBoardConnectedDelegate
struct OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384  : public MulticastDelegate_t
{
public:

public:
};


// Uduino.UduinoManager/OnBoardDisconnectedDelegate
struct OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40  : public MulticastDelegate_t
{
public:

public:
};


// Uduino.UduinoManager/OnDataReceivedDelegate
struct OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92  : public MulticastDelegate_t
{
public:

public:
};


// Uduino.UduinoManager/OnValueReceivedDelegate
struct OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Animation
struct Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Uduino.UduinoInterface
struct UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Uduino.UduinoInterfaceType Uduino.UduinoInterface::currentInterfaceType
	int32_t ___currentInterfaceType_4;
	// Uduino.UduinoConnection Uduino.UduinoInterface::boardConnection
	UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * ___boardConnection_5;
	// UnityEngine.GameObject Uduino.UduinoInterface::fullUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___fullUI_6;
	// UnityEngine.GameObject Uduino.UduinoInterface::errorPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___errorPanel_7;
	// UnityEngine.GameObject Uduino.UduinoInterface::fullDevicePanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___fullDevicePanel_8;
	// UnityEngine.GameObject Uduino.UduinoInterface::scanButtonFull
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___scanButtonFull_9;
	// UnityEngine.GameObject Uduino.UduinoInterface::notFound
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___notFound_10;
	// UnityEngine.GameObject Uduino.UduinoInterface::boardButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boardButton_11;
	// UnityEngine.GameObject Uduino.UduinoInterface::minimalUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___minimalUI_12;
	// UnityEngine.GameObject Uduino.UduinoInterface::minimalErrorPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___minimalErrorPanel_13;
	// UnityEngine.GameObject Uduino.UduinoInterface::minimalDevicePanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___minimalDevicePanel_14;
	// UnityEngine.GameObject Uduino.UduinoInterface::minimalScanButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___minimalScanButton_15;
	// UnityEngine.GameObject Uduino.UduinoInterface::minimalNotFound
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___minimalNotFound_16;
	// UnityEngine.GameObject Uduino.UduinoInterface::minimalBoardButton
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___minimalBoardButton_17;
	// UnityEngine.GameObject Uduino.UduinoInterface::debugPanel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___debugPanel_18;
	// UnityEngine.UI.Text Uduino.UduinoInterface::sendValue
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___sendValue_19;
	// UnityEngine.UI.Text Uduino.UduinoInterface::lastReceivedValue
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___lastReceivedValue_20;

public:
	inline static int32_t get_offset_of_currentInterfaceType_4() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___currentInterfaceType_4)); }
	inline int32_t get_currentInterfaceType_4() const { return ___currentInterfaceType_4; }
	inline int32_t* get_address_of_currentInterfaceType_4() { return &___currentInterfaceType_4; }
	inline void set_currentInterfaceType_4(int32_t value)
	{
		___currentInterfaceType_4 = value;
	}

	inline static int32_t get_offset_of_boardConnection_5() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___boardConnection_5)); }
	inline UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * get_boardConnection_5() const { return ___boardConnection_5; }
	inline UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 ** get_address_of_boardConnection_5() { return &___boardConnection_5; }
	inline void set_boardConnection_5(UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * value)
	{
		___boardConnection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardConnection_5), (void*)value);
	}

	inline static int32_t get_offset_of_fullUI_6() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___fullUI_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_fullUI_6() const { return ___fullUI_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_fullUI_6() { return &___fullUI_6; }
	inline void set_fullUI_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___fullUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_errorPanel_7() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___errorPanel_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_errorPanel_7() const { return ___errorPanel_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_errorPanel_7() { return &___errorPanel_7; }
	inline void set_errorPanel_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___errorPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_fullDevicePanel_8() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___fullDevicePanel_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_fullDevicePanel_8() const { return ___fullDevicePanel_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_fullDevicePanel_8() { return &___fullDevicePanel_8; }
	inline void set_fullDevicePanel_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___fullDevicePanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDevicePanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_scanButtonFull_9() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___scanButtonFull_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_scanButtonFull_9() const { return ___scanButtonFull_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_scanButtonFull_9() { return &___scanButtonFull_9; }
	inline void set_scanButtonFull_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___scanButtonFull_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scanButtonFull_9), (void*)value);
	}

	inline static int32_t get_offset_of_notFound_10() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___notFound_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_notFound_10() const { return ___notFound_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_notFound_10() { return &___notFound_10; }
	inline void set_notFound_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___notFound_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notFound_10), (void*)value);
	}

	inline static int32_t get_offset_of_boardButton_11() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___boardButton_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boardButton_11() const { return ___boardButton_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boardButton_11() { return &___boardButton_11; }
	inline void set_boardButton_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boardButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardButton_11), (void*)value);
	}

	inline static int32_t get_offset_of_minimalUI_12() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___minimalUI_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_minimalUI_12() const { return ___minimalUI_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_minimalUI_12() { return &___minimalUI_12; }
	inline void set_minimalUI_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___minimalUI_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minimalUI_12), (void*)value);
	}

	inline static int32_t get_offset_of_minimalErrorPanel_13() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___minimalErrorPanel_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_minimalErrorPanel_13() const { return ___minimalErrorPanel_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_minimalErrorPanel_13() { return &___minimalErrorPanel_13; }
	inline void set_minimalErrorPanel_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___minimalErrorPanel_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minimalErrorPanel_13), (void*)value);
	}

	inline static int32_t get_offset_of_minimalDevicePanel_14() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___minimalDevicePanel_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_minimalDevicePanel_14() const { return ___minimalDevicePanel_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_minimalDevicePanel_14() { return &___minimalDevicePanel_14; }
	inline void set_minimalDevicePanel_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___minimalDevicePanel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minimalDevicePanel_14), (void*)value);
	}

	inline static int32_t get_offset_of_minimalScanButton_15() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___minimalScanButton_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_minimalScanButton_15() const { return ___minimalScanButton_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_minimalScanButton_15() { return &___minimalScanButton_15; }
	inline void set_minimalScanButton_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___minimalScanButton_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minimalScanButton_15), (void*)value);
	}

	inline static int32_t get_offset_of_minimalNotFound_16() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___minimalNotFound_16)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_minimalNotFound_16() const { return ___minimalNotFound_16; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_minimalNotFound_16() { return &___minimalNotFound_16; }
	inline void set_minimalNotFound_16(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___minimalNotFound_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minimalNotFound_16), (void*)value);
	}

	inline static int32_t get_offset_of_minimalBoardButton_17() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___minimalBoardButton_17)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_minimalBoardButton_17() const { return ___minimalBoardButton_17; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_minimalBoardButton_17() { return &___minimalBoardButton_17; }
	inline void set_minimalBoardButton_17(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___minimalBoardButton_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minimalBoardButton_17), (void*)value);
	}

	inline static int32_t get_offset_of_debugPanel_18() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___debugPanel_18)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_debugPanel_18() const { return ___debugPanel_18; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_debugPanel_18() { return &___debugPanel_18; }
	inline void set_debugPanel_18(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___debugPanel_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugPanel_18), (void*)value);
	}

	inline static int32_t get_offset_of_sendValue_19() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___sendValue_19)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_sendValue_19() const { return ___sendValue_19; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_sendValue_19() { return &___sendValue_19; }
	inline void set_sendValue_19(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___sendValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendValue_19), (void*)value);
	}

	inline static int32_t get_offset_of_lastReceivedValue_20() { return static_cast<int32_t>(offsetof(UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A, ___lastReceivedValue_20)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_lastReceivedValue_20() const { return ___lastReceivedValue_20; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_lastReceivedValue_20() { return &___lastReceivedValue_20; }
	inline void set_lastReceivedValue_20(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___lastReceivedValue_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastReceivedValue_20), (void*)value);
	}
};


// Uduino.UduinoManager
struct UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice> Uduino.UduinoManager::uduinoDevices
	Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * ___uduinoDevices_5;
	// System.Collections.Generic.List`1<Uduino.Pin> Uduino.UduinoManager::pins
	List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * ___pins_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>> Uduino.UduinoManager::callbacksList
	Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * ___callbacksList_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Uduino.UduinoManager::existingExtensionsMap
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___existingExtensionsMap_8;
	// Uduino.IsActiveDictionnary Uduino.UduinoManager::activeExtentionsMap
	IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E * ___activeExtentionsMap_9;
	// Uduino.IsPresentDictionnary Uduino.UduinoManager::presentExtentionsMap
	IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0 * ___presentExtentionsMap_10;
	// Uduino.UduinoConnection Uduino.UduinoManager::boardConnection
	UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * ___boardConnection_11;
	// System.Object Uduino.UduinoManager::_lockAsync
	RuntimeObject * ____lockAsync_12;
	// System.Action Uduino.UduinoManager::_callbacksAsync
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ____callbacksAsync_13;
	// Uduino.LogLevel Uduino.UduinoManager::debugLevel
	int32_t ___debugLevel_14;
	// System.Int32 Uduino.UduinoManager::baudRate
	int32_t ___baudRate_15;
	// Uduino.HardwareReading Uduino.UduinoManager::readingMethod
	int32_t ___readingMethod_16;
	// System.Boolean Uduino.UduinoManager::limitSendRate
	bool ___limitSendRate_17;
	// System.Boolean Uduino.UduinoManager::autoSendIsRunning
	bool ___autoSendIsRunning_18;
	// System.Int32 Uduino.UduinoManager::readTimeout
	int32_t ___readTimeout_19;
	// System.Int32 Uduino.UduinoManager::writeTimeout
	int32_t ___writeTimeout_20;
	// System.Int32 Uduino.UduinoManager::threadFrequency
	int32_t ___threadFrequency_21;
	// System.Boolean Uduino.UduinoManager::alwaysRead
	bool ___alwaysRead_22;
	// System.Boolean Uduino.UduinoManager::readAfterCommand
	bool ___readAfterCommand_23;
	// System.Boolean Uduino.UduinoManager::skipMessageQueue
	bool ___skipMessageQueue_24;
	// System.Int32 Uduino.UduinoManager::messageQueueLength
	int32_t ___messageQueueLength_25;
	// System.Int32 Uduino.UduinoManager::defaultArduinoBoardType
	int32_t ___defaultArduinoBoardType_26;
	// System.Boolean Uduino.UduinoManager::useCuPort
	bool ___useCuPort_27;
	// System.Int32 Uduino.UduinoManager::sendRateSpeed
	int32_t ___sendRateSpeed_28;
	// System.Int32 Uduino.UduinoManager::discoverTries
	int32_t ___discoverTries_29;
	// System.Boolean Uduino.UduinoManager::autoDiscover
	bool ___autoDiscover_30;
	// System.Single Uduino.UduinoManager::delayBeforeDiscover
	float ___delayBeforeDiscover_31;
	// System.Boolean Uduino.UduinoManager::stopAllOnQuit
	bool ___stopAllOnQuit_34;
	// System.Boolean Uduino.UduinoManager::stopAllOnPause
	bool ___stopAllOnPause_35;
	// System.Boolean Uduino.UduinoManager::autoReconnect
	bool ___autoReconnect_36;
	// System.Single Uduino.UduinoManager::autoReconnectDelay
	float ___autoReconnectDelay_37;
	// System.Boolean Uduino.UduinoManager::shouldReconnect
	bool ___shouldReconnect_38;
	// System.Collections.Generic.List`1<System.String> Uduino.UduinoManager::blackListedPorts
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___blackListedPorts_39;
	// Uduino.UduinoManager/eventValueReceived Uduino.UduinoManager::OnDataReceivedEvent
	eventValueReceived_t8130A3E2DE2BCEC0FA5F327D9C1A9B0E880E747E * ___OnDataReceivedEvent_40;
	// Uduino.UduinoManager/eventBoard Uduino.UduinoManager::OnBoardConnectedEvent
	eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * ___OnBoardConnectedEvent_41;
	// Uduino.UduinoManager/eventBoard Uduino.UduinoManager::OnBoardDisconnectedEvent
	eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * ___OnBoardDisconnectedEvent_42;
	// Uduino.UduinoManager/OnValueReceivedDelegate Uduino.UduinoManager::OnValueReceived
	OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * ___OnValueReceived_43;
	// Uduino.UduinoManager/OnDataReceivedDelegate Uduino.UduinoManager::OnDataReceived
	OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * ___OnDataReceived_44;
	// Uduino.UduinoManager/OnBoardConnectedDelegate Uduino.UduinoManager::OnBoardConnected
	OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * ___OnBoardConnected_45;
	// Uduino.UduinoManager/OnBoardDisconnectedDelegate Uduino.UduinoManager::OnBoardDisconnected
	OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * ___OnBoardDisconnected_46;
	// System.Boolean Uduino.UduinoManager::displayAndroidTextGUI
	bool ___displayAndroidTextGUI_47;
	// Uduino.Platform Uduino.UduinoManager::platformType
	int32_t ___platformType_48;
	// Uduino.ConnectionMethod Uduino.UduinoManager::connectionMethod
	int32_t ___connectionMethod_49;
	// System.Boolean Uduino.UduinoManager::autoConnectToLastDevice
	bool ___autoConnectToLastDevice_50;
	// System.Int32 Uduino.UduinoManager::bleScanDuration
	int32_t ___bleScanDuration_51;
	// Uduino.UduinoInterfaceType Uduino.UduinoManager::interfaceType
	int32_t ___interfaceType_52;
	// System.String Uduino.UduinoManager::uduinoIpAddress
	String_t* ___uduinoIpAddress_53;
	// System.Int32 Uduino.UduinoManager::uduinoWifiPort
	int32_t ___uduinoWifiPort_54;
	// System.Threading.Thread Uduino.UduinoManager::_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ____thread_55;
	// System.Boolean Uduino.UduinoManager::threadRunning
	bool ___threadRunning_56;
	// System.Int32 Uduino.UduinoManager::threadRestartTrials
	int32_t ___threadRestartTrials_57;
	// System.Boolean Uduino.UduinoManager::isApplicationQuiting
	bool ___isApplicationQuiting_58;

public:
	inline static int32_t get_offset_of_uduinoDevices_5() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___uduinoDevices_5)); }
	inline Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * get_uduinoDevices_5() const { return ___uduinoDevices_5; }
	inline Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 ** get_address_of_uduinoDevices_5() { return &___uduinoDevices_5; }
	inline void set_uduinoDevices_5(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * value)
	{
		___uduinoDevices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uduinoDevices_5), (void*)value);
	}

	inline static int32_t get_offset_of_pins_6() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___pins_6)); }
	inline List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * get_pins_6() const { return ___pins_6; }
	inline List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 ** get_address_of_pins_6() { return &___pins_6; }
	inline void set_pins_6(List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * value)
	{
		___pins_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pins_6), (void*)value);
	}

	inline static int32_t get_offset_of_callbacksList_7() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___callbacksList_7)); }
	inline Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * get_callbacksList_7() const { return ___callbacksList_7; }
	inline Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A ** get_address_of_callbacksList_7() { return &___callbacksList_7; }
	inline void set_callbacksList_7(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * value)
	{
		___callbacksList_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbacksList_7), (void*)value);
	}

	inline static int32_t get_offset_of_existingExtensionsMap_8() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___existingExtensionsMap_8)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_existingExtensionsMap_8() const { return ___existingExtensionsMap_8; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_existingExtensionsMap_8() { return &___existingExtensionsMap_8; }
	inline void set_existingExtensionsMap_8(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___existingExtensionsMap_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___existingExtensionsMap_8), (void*)value);
	}

	inline static int32_t get_offset_of_activeExtentionsMap_9() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___activeExtentionsMap_9)); }
	inline IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E * get_activeExtentionsMap_9() const { return ___activeExtentionsMap_9; }
	inline IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E ** get_address_of_activeExtentionsMap_9() { return &___activeExtentionsMap_9; }
	inline void set_activeExtentionsMap_9(IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E * value)
	{
		___activeExtentionsMap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeExtentionsMap_9), (void*)value);
	}

	inline static int32_t get_offset_of_presentExtentionsMap_10() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___presentExtentionsMap_10)); }
	inline IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0 * get_presentExtentionsMap_10() const { return ___presentExtentionsMap_10; }
	inline IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0 ** get_address_of_presentExtentionsMap_10() { return &___presentExtentionsMap_10; }
	inline void set_presentExtentionsMap_10(IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0 * value)
	{
		___presentExtentionsMap_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___presentExtentionsMap_10), (void*)value);
	}

	inline static int32_t get_offset_of_boardConnection_11() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___boardConnection_11)); }
	inline UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * get_boardConnection_11() const { return ___boardConnection_11; }
	inline UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 ** get_address_of_boardConnection_11() { return &___boardConnection_11; }
	inline void set_boardConnection_11(UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * value)
	{
		___boardConnection_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boardConnection_11), (void*)value);
	}

	inline static int32_t get_offset_of__lockAsync_12() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ____lockAsync_12)); }
	inline RuntimeObject * get__lockAsync_12() const { return ____lockAsync_12; }
	inline RuntimeObject ** get_address_of__lockAsync_12() { return &____lockAsync_12; }
	inline void set__lockAsync_12(RuntimeObject * value)
	{
		____lockAsync_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lockAsync_12), (void*)value);
	}

	inline static int32_t get_offset_of__callbacksAsync_13() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ____callbacksAsync_13)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get__callbacksAsync_13() const { return ____callbacksAsync_13; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of__callbacksAsync_13() { return &____callbacksAsync_13; }
	inline void set__callbacksAsync_13(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		____callbacksAsync_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callbacksAsync_13), (void*)value);
	}

	inline static int32_t get_offset_of_debugLevel_14() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___debugLevel_14)); }
	inline int32_t get_debugLevel_14() const { return ___debugLevel_14; }
	inline int32_t* get_address_of_debugLevel_14() { return &___debugLevel_14; }
	inline void set_debugLevel_14(int32_t value)
	{
		___debugLevel_14 = value;
	}

	inline static int32_t get_offset_of_baudRate_15() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___baudRate_15)); }
	inline int32_t get_baudRate_15() const { return ___baudRate_15; }
	inline int32_t* get_address_of_baudRate_15() { return &___baudRate_15; }
	inline void set_baudRate_15(int32_t value)
	{
		___baudRate_15 = value;
	}

	inline static int32_t get_offset_of_readingMethod_16() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___readingMethod_16)); }
	inline int32_t get_readingMethod_16() const { return ___readingMethod_16; }
	inline int32_t* get_address_of_readingMethod_16() { return &___readingMethod_16; }
	inline void set_readingMethod_16(int32_t value)
	{
		___readingMethod_16 = value;
	}

	inline static int32_t get_offset_of_limitSendRate_17() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___limitSendRate_17)); }
	inline bool get_limitSendRate_17() const { return ___limitSendRate_17; }
	inline bool* get_address_of_limitSendRate_17() { return &___limitSendRate_17; }
	inline void set_limitSendRate_17(bool value)
	{
		___limitSendRate_17 = value;
	}

	inline static int32_t get_offset_of_autoSendIsRunning_18() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___autoSendIsRunning_18)); }
	inline bool get_autoSendIsRunning_18() const { return ___autoSendIsRunning_18; }
	inline bool* get_address_of_autoSendIsRunning_18() { return &___autoSendIsRunning_18; }
	inline void set_autoSendIsRunning_18(bool value)
	{
		___autoSendIsRunning_18 = value;
	}

	inline static int32_t get_offset_of_readTimeout_19() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___readTimeout_19)); }
	inline int32_t get_readTimeout_19() const { return ___readTimeout_19; }
	inline int32_t* get_address_of_readTimeout_19() { return &___readTimeout_19; }
	inline void set_readTimeout_19(int32_t value)
	{
		___readTimeout_19 = value;
	}

	inline static int32_t get_offset_of_writeTimeout_20() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___writeTimeout_20)); }
	inline int32_t get_writeTimeout_20() const { return ___writeTimeout_20; }
	inline int32_t* get_address_of_writeTimeout_20() { return &___writeTimeout_20; }
	inline void set_writeTimeout_20(int32_t value)
	{
		___writeTimeout_20 = value;
	}

	inline static int32_t get_offset_of_threadFrequency_21() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___threadFrequency_21)); }
	inline int32_t get_threadFrequency_21() const { return ___threadFrequency_21; }
	inline int32_t* get_address_of_threadFrequency_21() { return &___threadFrequency_21; }
	inline void set_threadFrequency_21(int32_t value)
	{
		___threadFrequency_21 = value;
	}

	inline static int32_t get_offset_of_alwaysRead_22() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___alwaysRead_22)); }
	inline bool get_alwaysRead_22() const { return ___alwaysRead_22; }
	inline bool* get_address_of_alwaysRead_22() { return &___alwaysRead_22; }
	inline void set_alwaysRead_22(bool value)
	{
		___alwaysRead_22 = value;
	}

	inline static int32_t get_offset_of_readAfterCommand_23() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___readAfterCommand_23)); }
	inline bool get_readAfterCommand_23() const { return ___readAfterCommand_23; }
	inline bool* get_address_of_readAfterCommand_23() { return &___readAfterCommand_23; }
	inline void set_readAfterCommand_23(bool value)
	{
		___readAfterCommand_23 = value;
	}

	inline static int32_t get_offset_of_skipMessageQueue_24() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___skipMessageQueue_24)); }
	inline bool get_skipMessageQueue_24() const { return ___skipMessageQueue_24; }
	inline bool* get_address_of_skipMessageQueue_24() { return &___skipMessageQueue_24; }
	inline void set_skipMessageQueue_24(bool value)
	{
		___skipMessageQueue_24 = value;
	}

	inline static int32_t get_offset_of_messageQueueLength_25() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___messageQueueLength_25)); }
	inline int32_t get_messageQueueLength_25() const { return ___messageQueueLength_25; }
	inline int32_t* get_address_of_messageQueueLength_25() { return &___messageQueueLength_25; }
	inline void set_messageQueueLength_25(int32_t value)
	{
		___messageQueueLength_25 = value;
	}

	inline static int32_t get_offset_of_defaultArduinoBoardType_26() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___defaultArduinoBoardType_26)); }
	inline int32_t get_defaultArduinoBoardType_26() const { return ___defaultArduinoBoardType_26; }
	inline int32_t* get_address_of_defaultArduinoBoardType_26() { return &___defaultArduinoBoardType_26; }
	inline void set_defaultArduinoBoardType_26(int32_t value)
	{
		___defaultArduinoBoardType_26 = value;
	}

	inline static int32_t get_offset_of_useCuPort_27() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___useCuPort_27)); }
	inline bool get_useCuPort_27() const { return ___useCuPort_27; }
	inline bool* get_address_of_useCuPort_27() { return &___useCuPort_27; }
	inline void set_useCuPort_27(bool value)
	{
		___useCuPort_27 = value;
	}

	inline static int32_t get_offset_of_sendRateSpeed_28() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___sendRateSpeed_28)); }
	inline int32_t get_sendRateSpeed_28() const { return ___sendRateSpeed_28; }
	inline int32_t* get_address_of_sendRateSpeed_28() { return &___sendRateSpeed_28; }
	inline void set_sendRateSpeed_28(int32_t value)
	{
		___sendRateSpeed_28 = value;
	}

	inline static int32_t get_offset_of_discoverTries_29() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___discoverTries_29)); }
	inline int32_t get_discoverTries_29() const { return ___discoverTries_29; }
	inline int32_t* get_address_of_discoverTries_29() { return &___discoverTries_29; }
	inline void set_discoverTries_29(int32_t value)
	{
		___discoverTries_29 = value;
	}

	inline static int32_t get_offset_of_autoDiscover_30() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___autoDiscover_30)); }
	inline bool get_autoDiscover_30() const { return ___autoDiscover_30; }
	inline bool* get_address_of_autoDiscover_30() { return &___autoDiscover_30; }
	inline void set_autoDiscover_30(bool value)
	{
		___autoDiscover_30 = value;
	}

	inline static int32_t get_offset_of_delayBeforeDiscover_31() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___delayBeforeDiscover_31)); }
	inline float get_delayBeforeDiscover_31() const { return ___delayBeforeDiscover_31; }
	inline float* get_address_of_delayBeforeDiscover_31() { return &___delayBeforeDiscover_31; }
	inline void set_delayBeforeDiscover_31(float value)
	{
		___delayBeforeDiscover_31 = value;
	}

	inline static int32_t get_offset_of_stopAllOnQuit_34() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___stopAllOnQuit_34)); }
	inline bool get_stopAllOnQuit_34() const { return ___stopAllOnQuit_34; }
	inline bool* get_address_of_stopAllOnQuit_34() { return &___stopAllOnQuit_34; }
	inline void set_stopAllOnQuit_34(bool value)
	{
		___stopAllOnQuit_34 = value;
	}

	inline static int32_t get_offset_of_stopAllOnPause_35() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___stopAllOnPause_35)); }
	inline bool get_stopAllOnPause_35() const { return ___stopAllOnPause_35; }
	inline bool* get_address_of_stopAllOnPause_35() { return &___stopAllOnPause_35; }
	inline void set_stopAllOnPause_35(bool value)
	{
		___stopAllOnPause_35 = value;
	}

	inline static int32_t get_offset_of_autoReconnect_36() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___autoReconnect_36)); }
	inline bool get_autoReconnect_36() const { return ___autoReconnect_36; }
	inline bool* get_address_of_autoReconnect_36() { return &___autoReconnect_36; }
	inline void set_autoReconnect_36(bool value)
	{
		___autoReconnect_36 = value;
	}

	inline static int32_t get_offset_of_autoReconnectDelay_37() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___autoReconnectDelay_37)); }
	inline float get_autoReconnectDelay_37() const { return ___autoReconnectDelay_37; }
	inline float* get_address_of_autoReconnectDelay_37() { return &___autoReconnectDelay_37; }
	inline void set_autoReconnectDelay_37(float value)
	{
		___autoReconnectDelay_37 = value;
	}

	inline static int32_t get_offset_of_shouldReconnect_38() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___shouldReconnect_38)); }
	inline bool get_shouldReconnect_38() const { return ___shouldReconnect_38; }
	inline bool* get_address_of_shouldReconnect_38() { return &___shouldReconnect_38; }
	inline void set_shouldReconnect_38(bool value)
	{
		___shouldReconnect_38 = value;
	}

	inline static int32_t get_offset_of_blackListedPorts_39() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___blackListedPorts_39)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_blackListedPorts_39() const { return ___blackListedPorts_39; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_blackListedPorts_39() { return &___blackListedPorts_39; }
	inline void set_blackListedPorts_39(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___blackListedPorts_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blackListedPorts_39), (void*)value);
	}

	inline static int32_t get_offset_of_OnDataReceivedEvent_40() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___OnDataReceivedEvent_40)); }
	inline eventValueReceived_t8130A3E2DE2BCEC0FA5F327D9C1A9B0E880E747E * get_OnDataReceivedEvent_40() const { return ___OnDataReceivedEvent_40; }
	inline eventValueReceived_t8130A3E2DE2BCEC0FA5F327D9C1A9B0E880E747E ** get_address_of_OnDataReceivedEvent_40() { return &___OnDataReceivedEvent_40; }
	inline void set_OnDataReceivedEvent_40(eventValueReceived_t8130A3E2DE2BCEC0FA5F327D9C1A9B0E880E747E * value)
	{
		___OnDataReceivedEvent_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDataReceivedEvent_40), (void*)value);
	}

	inline static int32_t get_offset_of_OnBoardConnectedEvent_41() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___OnBoardConnectedEvent_41)); }
	inline eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * get_OnBoardConnectedEvent_41() const { return ___OnBoardConnectedEvent_41; }
	inline eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 ** get_address_of_OnBoardConnectedEvent_41() { return &___OnBoardConnectedEvent_41; }
	inline void set_OnBoardConnectedEvent_41(eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * value)
	{
		___OnBoardConnectedEvent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBoardConnectedEvent_41), (void*)value);
	}

	inline static int32_t get_offset_of_OnBoardDisconnectedEvent_42() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___OnBoardDisconnectedEvent_42)); }
	inline eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * get_OnBoardDisconnectedEvent_42() const { return ___OnBoardDisconnectedEvent_42; }
	inline eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 ** get_address_of_OnBoardDisconnectedEvent_42() { return &___OnBoardDisconnectedEvent_42; }
	inline void set_OnBoardDisconnectedEvent_42(eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * value)
	{
		___OnBoardDisconnectedEvent_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBoardDisconnectedEvent_42), (void*)value);
	}

	inline static int32_t get_offset_of_OnValueReceived_43() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___OnValueReceived_43)); }
	inline OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * get_OnValueReceived_43() const { return ___OnValueReceived_43; }
	inline OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 ** get_address_of_OnValueReceived_43() { return &___OnValueReceived_43; }
	inline void set_OnValueReceived_43(OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * value)
	{
		___OnValueReceived_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValueReceived_43), (void*)value);
	}

	inline static int32_t get_offset_of_OnDataReceived_44() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___OnDataReceived_44)); }
	inline OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * get_OnDataReceived_44() const { return ___OnDataReceived_44; }
	inline OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 ** get_address_of_OnDataReceived_44() { return &___OnDataReceived_44; }
	inline void set_OnDataReceived_44(OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * value)
	{
		___OnDataReceived_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDataReceived_44), (void*)value);
	}

	inline static int32_t get_offset_of_OnBoardConnected_45() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___OnBoardConnected_45)); }
	inline OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * get_OnBoardConnected_45() const { return ___OnBoardConnected_45; }
	inline OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 ** get_address_of_OnBoardConnected_45() { return &___OnBoardConnected_45; }
	inline void set_OnBoardConnected_45(OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * value)
	{
		___OnBoardConnected_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBoardConnected_45), (void*)value);
	}

	inline static int32_t get_offset_of_OnBoardDisconnected_46() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___OnBoardDisconnected_46)); }
	inline OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * get_OnBoardDisconnected_46() const { return ___OnBoardDisconnected_46; }
	inline OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 ** get_address_of_OnBoardDisconnected_46() { return &___OnBoardDisconnected_46; }
	inline void set_OnBoardDisconnected_46(OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * value)
	{
		___OnBoardDisconnected_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBoardDisconnected_46), (void*)value);
	}

	inline static int32_t get_offset_of_displayAndroidTextGUI_47() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___displayAndroidTextGUI_47)); }
	inline bool get_displayAndroidTextGUI_47() const { return ___displayAndroidTextGUI_47; }
	inline bool* get_address_of_displayAndroidTextGUI_47() { return &___displayAndroidTextGUI_47; }
	inline void set_displayAndroidTextGUI_47(bool value)
	{
		___displayAndroidTextGUI_47 = value;
	}

	inline static int32_t get_offset_of_platformType_48() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___platformType_48)); }
	inline int32_t get_platformType_48() const { return ___platformType_48; }
	inline int32_t* get_address_of_platformType_48() { return &___platformType_48; }
	inline void set_platformType_48(int32_t value)
	{
		___platformType_48 = value;
	}

	inline static int32_t get_offset_of_connectionMethod_49() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___connectionMethod_49)); }
	inline int32_t get_connectionMethod_49() const { return ___connectionMethod_49; }
	inline int32_t* get_address_of_connectionMethod_49() { return &___connectionMethod_49; }
	inline void set_connectionMethod_49(int32_t value)
	{
		___connectionMethod_49 = value;
	}

	inline static int32_t get_offset_of_autoConnectToLastDevice_50() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___autoConnectToLastDevice_50)); }
	inline bool get_autoConnectToLastDevice_50() const { return ___autoConnectToLastDevice_50; }
	inline bool* get_address_of_autoConnectToLastDevice_50() { return &___autoConnectToLastDevice_50; }
	inline void set_autoConnectToLastDevice_50(bool value)
	{
		___autoConnectToLastDevice_50 = value;
	}

	inline static int32_t get_offset_of_bleScanDuration_51() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___bleScanDuration_51)); }
	inline int32_t get_bleScanDuration_51() const { return ___bleScanDuration_51; }
	inline int32_t* get_address_of_bleScanDuration_51() { return &___bleScanDuration_51; }
	inline void set_bleScanDuration_51(int32_t value)
	{
		___bleScanDuration_51 = value;
	}

	inline static int32_t get_offset_of_interfaceType_52() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___interfaceType_52)); }
	inline int32_t get_interfaceType_52() const { return ___interfaceType_52; }
	inline int32_t* get_address_of_interfaceType_52() { return &___interfaceType_52; }
	inline void set_interfaceType_52(int32_t value)
	{
		___interfaceType_52 = value;
	}

	inline static int32_t get_offset_of_uduinoIpAddress_53() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___uduinoIpAddress_53)); }
	inline String_t* get_uduinoIpAddress_53() const { return ___uduinoIpAddress_53; }
	inline String_t** get_address_of_uduinoIpAddress_53() { return &___uduinoIpAddress_53; }
	inline void set_uduinoIpAddress_53(String_t* value)
	{
		___uduinoIpAddress_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uduinoIpAddress_53), (void*)value);
	}

	inline static int32_t get_offset_of_uduinoWifiPort_54() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___uduinoWifiPort_54)); }
	inline int32_t get_uduinoWifiPort_54() const { return ___uduinoWifiPort_54; }
	inline int32_t* get_address_of_uduinoWifiPort_54() { return &___uduinoWifiPort_54; }
	inline void set_uduinoWifiPort_54(int32_t value)
	{
		___uduinoWifiPort_54 = value;
	}

	inline static int32_t get_offset_of__thread_55() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ____thread_55)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get__thread_55() const { return ____thread_55; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of__thread_55() { return &____thread_55; }
	inline void set__thread_55(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		____thread_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____thread_55), (void*)value);
	}

	inline static int32_t get_offset_of_threadRunning_56() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___threadRunning_56)); }
	inline bool get_threadRunning_56() const { return ___threadRunning_56; }
	inline bool* get_address_of_threadRunning_56() { return &___threadRunning_56; }
	inline void set_threadRunning_56(bool value)
	{
		___threadRunning_56 = value;
	}

	inline static int32_t get_offset_of_threadRestartTrials_57() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___threadRestartTrials_57)); }
	inline int32_t get_threadRestartTrials_57() const { return ___threadRestartTrials_57; }
	inline int32_t* get_address_of_threadRestartTrials_57() { return &___threadRestartTrials_57; }
	inline void set_threadRestartTrials_57(int32_t value)
	{
		___threadRestartTrials_57 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuiting_58() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073, ___isApplicationQuiting_58)); }
	inline bool get_isApplicationQuiting_58() const { return ___isApplicationQuiting_58; }
	inline bool* get_address_of_isApplicationQuiting_58() { return &___isApplicationQuiting_58; }
	inline void set_isApplicationQuiting_58(bool value)
	{
		___isApplicationQuiting_58 = value;
	}
};

struct UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields
{
public:
	// Uduino.UduinoManager Uduino.UduinoManager::_instance
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ____instance_4;
	// System.String Uduino.UduinoManager::parametersDelimiter
	String_t* ___parametersDelimiter_32;
	// System.String Uduino.UduinoManager::bundleDelimiter
	String_t* ___bundleDelimiter_33;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields, ____instance_4)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get__instance_4() const { return ____instance_4; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_parametersDelimiter_32() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields, ___parametersDelimiter_32)); }
	inline String_t* get_parametersDelimiter_32() const { return ___parametersDelimiter_32; }
	inline String_t** get_address_of_parametersDelimiter_32() { return &___parametersDelimiter_32; }
	inline void set_parametersDelimiter_32(String_t* value)
	{
		___parametersDelimiter_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parametersDelimiter_32), (void*)value);
	}

	inline static int32_t get_offset_of_bundleDelimiter_33() { return static_cast<int32_t>(offsetof(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields, ___bundleDelimiter_33)); }
	inline String_t* get_bundleDelimiter_33() const { return ___bundleDelimiter_33; }
	inline String_t** get_address_of_bundleDelimiter_33() { return &___bundleDelimiter_33; }
	inline void set_bundleDelimiter_33(String_t* value)
	{
		___bundleDelimiter_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bundleDelimiter_33), (void*)value);
	}
};


// UduinoEventsReceiver
struct UduinoEventsReceiver_t1850846D8D3AF37704E855AC1EB3487AF199CF8A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UduinoShortCall
struct UduinoShortCall_t11A361FA6058666855C8B07FCDF873A0B9B7117C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Uduino.UduinoManager UduinoShortCall::u
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___u_4;
	// System.Int32 UduinoShortCall::sensorOne
	int32_t ___sensorOne_5;

public:
	inline static int32_t get_offset_of_u_4() { return static_cast<int32_t>(offsetof(UduinoShortCall_t11A361FA6058666855C8B07FCDF873A0B9B7117C, ___u_4)); }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * get_u_4() const { return ___u_4; }
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** get_address_of_u_4() { return &___u_4; }
	inline void set_u_4(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		___u_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___u_4), (void*)value);
	}

	inline static int32_t get_offset_of_sensorOne_5() { return static_cast<int32_t>(offsetof(UduinoShortCall_t11A361FA6058666855C8B07FCDF873A0B9B7117C, ___sensorOne_5)); }
	inline int32_t get_sensorOne_5() const { return ___sensorOne_5; }
	inline int32_t* get_address_of_sensorOne_5() { return &___sensorOne_5; }
	inline void set_sensorOne_5(int32_t value)
	{
		___sensorOne_5 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// YawAndRollControl
struct YawAndRollControl_tACC3C41B12A01D48D8933A51383115B0DE3301AB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean YawAndRollControl::usingReins
	bool ___usingReins_4;

public:
	inline static int32_t get_offset_of_usingReins_4() { return static_cast<int32_t>(offsetof(YawAndRollControl_tACC3C41B12A01D48D8933A51383115B0DE3301AB, ___usingReins_4)); }
	inline bool get_usingReins_4() const { return ___usingReins_4; }
	inline bool* get_address_of_usingReins_4() { return &___usingReins_4; }
	inline void set_usingReins_4(bool value)
	{
		___usingReins_4 = value;
	}
};


// chairTest
struct chairTest_tEAC4726426BE3DFB379794519D7CEE1C12A90B40  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Animation chairTest::animation
	Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___animation_4;

public:
	inline static int32_t get_offset_of_animation_4() { return static_cast<int32_t>(offsetof(chairTest_tEAC4726426BE3DFB379794519D7CEE1C12A90B40, ___animation_4)); }
	inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * get_animation_4() const { return ___animation_4; }
	inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C ** get_address_of_animation_4() { return &___animation_4; }
	inline void set_animation_4(Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * value)
	{
		___animation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animation_4), (void*)value);
	}
};


// test
struct test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// tiltControl
struct tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single tiltControl::maxHeadsetDist
	float ___maxHeadsetDist_4;
	// System.Single tiltControl::maxXAngle
	float ___maxXAngle_5;
	// System.Single tiltControl::maxZAngle
	float ___maxZAngle_6;
	// System.Single tiltControl::rotMult
	float ___rotMult_7;
	// UnityEngine.GameObject tiltControl::cubeRef
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cubeRef_8;
	// UnityEngine.GameObject tiltControl::playerCam
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___playerCam_9;

public:
	inline static int32_t get_offset_of_maxHeadsetDist_4() { return static_cast<int32_t>(offsetof(tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57, ___maxHeadsetDist_4)); }
	inline float get_maxHeadsetDist_4() const { return ___maxHeadsetDist_4; }
	inline float* get_address_of_maxHeadsetDist_4() { return &___maxHeadsetDist_4; }
	inline void set_maxHeadsetDist_4(float value)
	{
		___maxHeadsetDist_4 = value;
	}

	inline static int32_t get_offset_of_maxXAngle_5() { return static_cast<int32_t>(offsetof(tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57, ___maxXAngle_5)); }
	inline float get_maxXAngle_5() const { return ___maxXAngle_5; }
	inline float* get_address_of_maxXAngle_5() { return &___maxXAngle_5; }
	inline void set_maxXAngle_5(float value)
	{
		___maxXAngle_5 = value;
	}

	inline static int32_t get_offset_of_maxZAngle_6() { return static_cast<int32_t>(offsetof(tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57, ___maxZAngle_6)); }
	inline float get_maxZAngle_6() const { return ___maxZAngle_6; }
	inline float* get_address_of_maxZAngle_6() { return &___maxZAngle_6; }
	inline void set_maxZAngle_6(float value)
	{
		___maxZAngle_6 = value;
	}

	inline static int32_t get_offset_of_rotMult_7() { return static_cast<int32_t>(offsetof(tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57, ___rotMult_7)); }
	inline float get_rotMult_7() const { return ___rotMult_7; }
	inline float* get_address_of_rotMult_7() { return &___rotMult_7; }
	inline void set_rotMult_7(float value)
	{
		___rotMult_7 = value;
	}

	inline static int32_t get_offset_of_cubeRef_8() { return static_cast<int32_t>(offsetof(tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57, ___cubeRef_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cubeRef_8() const { return ___cubeRef_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cubeRef_8() { return &___cubeRef_8; }
	inline void set_cubeRef_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cubeRef_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeRef_8), (void*)value);
	}

	inline static int32_t get_offset_of_playerCam_9() { return static_cast<int32_t>(offsetof(tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57, ___playerCam_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_playerCam_9() const { return ___playerCam_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_playerCam_9() { return &___playerCam_9; }
	inline void set_playerCam_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___playerCam_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCam_9), (void*)value);
	}
};


// Uduino.UduinoInterface_Bluetooth
struct UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF  : public UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Uduino.BLEDeviceButton_Interface> Uduino.UduinoInterface_Bluetooth::devicesButtons
	Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * ___devicesButtons_21;

public:
	inline static int32_t get_offset_of_devicesButtons_21() { return static_cast<int32_t>(offsetof(UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF, ___devicesButtons_21)); }
	inline Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * get_devicesButtons_21() const { return ___devicesButtons_21; }
	inline Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA ** get_address_of_devicesButtons_21() { return &___devicesButtons_21; }
	inline void set_devicesButtons_21(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * value)
	{
		___devicesButtons_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___devicesButtons_21), (void*)value);
	}
};


// Uduino.UduinoInterface_Serial
struct UduinoInterface_Serial_tDAEC1D0B8E520BE2F9E2637545C29D178D350258  : public UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillRect_20)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleRect_21)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_OnValueChanged_27)); }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillImage_28)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillTransform_29)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillContainerRect_30)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleTransform_31)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleContainerRect_32)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Offset_33)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Uduino.UduinoManager[]
struct UduinoManagerU5BU5D_t2898AED1A18540CC0145C57FA79821C00B588035  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * m_Items[1];

public:
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * m_Items[1];

public:
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Uduino.UduinoDevice[]
struct UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * m_Items[1];

public:
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mC29661C8F01D8258EA0B66C004E33F5F6E59348E_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(!1[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m172A6ED766A3F35536E7DE9B3F84698510C95168_gshared (ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mBB6B5B5840E3CC8C34F28CA181A62FD0F3CAD821_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC5621E9D987E16C3F1F906063CC444772247F9FB_gshared (Dictionary_2_t67B76EE53FF18810AB6822EF82D44ADD0E707F21 * __this, RuntimeObject * ___key0, bool* ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m3BDF6E459C36C6032BA399E94D6C094D120778EC_gshared (UnityEvent_2_t62EAE6FD22ECC8C2672CE4C6829EA8D8D9AD890D * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mB06A035F20AB91B5BAB10F156049029A6D6DEE44_gshared (UnityEvent_2_t62EAE6FD22ECC8C2672CE4C6829EA8D8D9AD890D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// Uduino.UduinoManager Uduino.UduinoManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2 (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Uduino.UduinoInterface_Bluetooth::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_StopTimer_mA7EBAF9CDE98CB098C98C0A267FF24F82C9ED357 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoInterface_Bluetooth::ClearPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_ClearPanel_mC8B93E049F5904B3AB128E2F3401CC87BB898934 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoInterface_Bluetooth::DisplayDebugPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_DisplayDebugPanel_mC01574B5149940159018BCC7EB2D404050CC307F (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, bool ___active0, const RuntimeMethod* method);
// System.Void Uduino.UduinoInterface_Bluetooth::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_StartTimer_m2B21CC06AEBBCC576F57283938EC4B6354B4F950 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method);
// UnityEngine.UI.Text Uduino.UduinoInterface::getScanButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * UduinoInterface_getScanButton_mD6119BA38D20970213B5782A5F8617E7FCFF6844 (UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Uduino.BLEDeviceButton_Interface>::Clear()
inline void Dictionary_2_Clear_mCF7E960E3F755EBE4FB2BB83B1F985904AC913E8 (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA *, const RuntimeMethod*))Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared)(__this, method);
}
// UnityEngine.UI.Slider Uduino.UduinoInterface::getScanSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * UduinoInterface_getScanSlider_m04BB189CE037EE6F8D0153F100AF44CF3BC1A60E (UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Uduino.UduinoInterface_Bluetooth::StartSliderCountdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UduinoInterface_Bluetooth_StartSliderCountdown_m5572CADA921CD33CE400658CF2B23F12CFA4B44E (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSliderCountdownU3Ed__9__ctor_m0665160913927115B8F44C1CF9B70793C0951C8D (U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Transform Uduino.UduinoInterface::getPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * UduinoInterface_getPanel_m9979E84F96C70D439CAAA654F109BEB1D564B8B6 (UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject Uduino.UduinoInterface::getErrorPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UduinoInterface_getErrorPanel_m98FB38BC1968F7383C87DDCE4ADA16969A9F76DF (UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m51CDB7206C4682ECFF06CE30BE32E1A575581C04 (U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Uduino.UduinoInterface::getDeviceButtonPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * UduinoInterface_getDeviceButtonPrefab_m040D88CCF14D7D5A8C4CCD782550C43CD5E0B3A0 (UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, String_t* ___n0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Uduino.BLEDeviceButton_Interface::.ctor(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLEDeviceButton_Interface__ctor_mC89DA60D944104C7AAE8E3EBF1935DBAA3503781 (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * __this, Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Uduino.BLEDeviceButton_Interface>::Add(!0,!1)
inline void Dictionary_2_Add_m65646C5479559A60A51E83C1B088ACCA9BE6C3E0 (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * __this, String_t* ___key0, BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA *, String_t*, BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Uduino.BLEDeviceButton_Interface>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9A5731E68B9008253C528D2B668F28A76B37C9B6 (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * __this, String_t* ___key0, BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA *, String_t*, BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Uduino.BLEDeviceButton_Interface::Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLEDeviceButton_Interface_Connecting_m9D790E947CFD9D2485C014AD81BA7DE5F274601B (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * __this, const RuntimeMethod* method);
// System.Void Uduino.Log::Info(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m08CFA638194730410A989631C097C045098A5F03 (RuntimeObject * ___message0, bool ___removeNewLines1, const RuntimeMethod* method);
// System.Void Uduino.BLEDeviceButton_Interface::Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLEDeviceButton_Interface_Connected_m77C2B9766FFFEDF0CF024D5862AC6E34DDA4B777 (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * __this, const RuntimeMethod* method);
// System.Void Uduino.BLEDeviceButton_Interface::Disconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BLEDeviceButton_Interface_Disconnected_m6A4C71543A04815BB7CD59BD8A26602BE5472324 (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Uduino.BLEDeviceButton_Interface>::GetEnumerator()
inline Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F  Dictionary_2_GetEnumerator_m272D869A02B86CD241608D68CDD897F2D686A083 (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F  (*) (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Uduino.BLEDeviceButton_Interface>::get_Current()
inline KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65  Enumerator_get_Current_mFC84E1C498674352EF1A70EF34A78B866DE4CBCF_inline (Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65  (*) (Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Uduino.BLEDeviceButton_Interface>::get_Value()
inline BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * KeyValuePair_2_get_Value_m43278E4AC46C3ADF301DF48E82903297218D24CB_inline (KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65 * __this, const RuntimeMethod* method)
{
	return ((  BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * (*) (KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Uduino.BLEDeviceButton_Interface>::MoveNext()
inline bool Enumerator_MoveNext_mF8D0669CB944FCE2BB85B6C8B71F049935B543A4 (Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Uduino.BLEDeviceButton_Interface>::Dispose()
inline void Enumerator_Dispose_m8D826194919B0993A2EA9E7E9B3081F97CE4F5C9 (Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Uduino.BLEDeviceButton_Interface>::.ctor()
inline void Dictionary_2__ctor_m60D88C1C1814A9AE9F02E6880319F43E497E06D6 (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void Uduino.UduinoInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface__ctor_m2C54350C06CAD8513EC0D8E8A1C778CA235E4809 (UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::CloseDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_CloseDevice_mA13987062550B2F32EFF89734B28DEFDC06953FE (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void Uduino.Log::Warning(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warning_m7FC7B8CC24EEA8D85D60FA0BFB581628525CD3AC (RuntimeObject * ___message0, bool ___removeNewLines1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Uduino.UduinoManager>()
inline UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * GameObject_AddComponent_TisUduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_mADEDC0A874A4700CAF77DE3C47A9DC6BF468EB19 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mC29661C8F01D8258EA0B66C004E33F5F6E59348E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Uduino.Log::Error(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m2205626C83BD88E6A7F3BD4404994CC3F4DAC42D (RuntimeObject * ___message0, bool ___removeNewLines1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_mA5469BB7BBB59B8A94BB86590B051E0DFACC12DD (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::StartThread(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_StartThread_mB043025F5281A496920A2EC453A0C44884B5C7E3 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, bool ___isForced0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::StopThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_StopThread_m3485B77BE063E41C62BC10323FD24E0712F34AB9 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// Uduino.UduinoDevice[] Uduino.UduinoManager::GetAllBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* UduinoManager_GetAllBoard_m45B9AB7446BD8EC0C2D26E3B6C41D52653E02BD8 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Uduino.UduinoManager::CoroutineRead(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UduinoManager_CoroutineRead_m91EA8433553A457BB4F46162492300AB6E4B1476 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, const RuntimeMethod* method);
// System.Void Uduino.Log::Debug(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA (RuntimeObject * ___message0, bool ___removeNewLines1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mC2C29B39556BFC68657F27343602BCC57AA6604F (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mCD250A96284E3C39D579CEC447432681DE8D1E44 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/<DelayedDiscover>d__89::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDiscoverU3Ed__89__ctor_m7E394E9B30657288D1CAE916E10417EC41E79EB5 (U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartIfBoardNotDetectedU3Ed__90__ctor_mF97C754143D0A9BCBA72C399720574D6124916F1 (U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::CloseAllDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_CloseAllDevices_m0F268F039DC29CD4A25AF1719718BEED728F32C7 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// Uduino.UduinoConnection Uduino.UduinoConnection::GetFinder(Uduino.UduinoManager,Uduino.Platform,Uduino.ConnectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * UduinoConnection_GetFinder_mB6830A1588733B54E1FD6F1C059C521EDDA91158 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___manager0, int32_t ___p1, int32_t ___m2, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.String Uduino.UduinoDevice::getIdentity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* UduinoDevice_getIdentity_mCB7CF214F38F20E6D9140850B801831C5786A502_inline (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::Add(!0,!1)
inline void Dictionary_2_Add_m0C1540577D28C292ECE5F4C850995A05E49EA7E9 (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, String_t* ___key0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/BoardAlreadyExistException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardAlreadyExistException__ctor_m1B54CDF66C8D82DF511C08B18F728159B8D6492A (BoardAlreadyExistException_t7FA252A04F70FB74F0362FA40DF4DD48E0918A78 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::StartReading(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_StartReading_m178093CC7BC5AD23C21B9DF44DC2F479DF435365 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::InitAllArduinos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitAllArduinos_m6A1219CEECC8BD85FBE6402E6215B1906B6F7A28 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/OnBoardConnectedDelegate::Invoke(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBoardConnectedDelegate_Invoke_m219314AF6A3A131459C1528782E1DB53739A09A1 (OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Uduino.UduinoDevice>::Invoke(!0)
inline void UnityEvent_1_Invoke_m17062A6318EC9C67FE24E1FCE80196587551711B (UnityEvent_1_tD75DD786FC9FD883E80567D5E2746B61F2A6AEEA * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tD75DD786FC9FD883E80567D5E2746B61F2A6AEEA *, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, ___arg00, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::get_Count()
inline int32_t Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321 (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::GetEnumerator()
inline Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632 (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Uduino.UduinoDevice>::get_Current()
inline KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_inline (Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  (*) (Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Uduino.UduinoDevice>::MoveNext()
inline bool Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7 (Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Uduino.UduinoDevice>::Dispose()
inline void Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0 (Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.Boolean Uduino.UduinoManager::UduinoTargetExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_UduinoTargetExists_m027610AB206CBE212AB76AC264A30D30B7E79D5D (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::get_Item(!0)
inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * Dictionary_2_get_Item_m6A96CE2CA53893FBAF20C4D6D63BAB5C64B3B596 (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::get_Values()
inline ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * Dictionary_2_get_Values_m0EEF7DE234518B8CDECFD6B99FA12BECD62D41A3 (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, const RuntimeMethod*))Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Uduino.UduinoDevice>::CopyTo(!1[],System.Int32)
inline void ValueCollection_CopyTo_mE67D31EA88E60447788EC99960766028BB2F5A3A (ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * __this, UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A *, UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*, int32_t, const RuntimeMethod*))ValueCollection_CopyTo_m172A6ED766A3F35536E7DE9B3F84698510C95168_gshared)(__this, ___array0, ___index1, method);
}
// System.Boolean Uduino.UduinoManager::UduinoTargetExists(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_UduinoTargetExists_mBE8F04B703BA9D69F4A43D48ADEE5FD115A20203 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m7DA909F956100BBC672D809737E36516C7FA9F51 (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, String_t* ___key0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mEA90595FDA692A60DA663B7C7943B63266C08AFF (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::ContainsValue(!1)
inline bool Dictionary_2_ContainsValue_m7D39562E7698F24BD42E630C10DEF3649855033A (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*))Dictionary_2_ContainsValue_mBB6B5B5840E3CC8C34F28CA181A62FD0F3CAD821_gshared)(__this, ___value0, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::SetBoardType(Uduino.UduinoDevice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SetBoardType_m7951BAAC245D0008C16B5E67D9D3BCDBC75D298F (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___type1, const RuntimeMethod* method);
// Uduino.BoardsTypeList Uduino.BoardsTypeList::get_Boards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * BoardsTypeList_get_Boards_m8225D62ED9617A8137A71184B2DC9FF8DEEBD95E (const RuntimeMethod* method);
// System.Int32 Uduino.BoardsTypeList::GetBoardIdFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoardsTypeList_GetBoardIdFromName_mCCD07E472AF183C4C8025422A404E787C1C6D7FF (BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::SetBoardType(Uduino.UduinoDevice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SetBoardType_m99DBB90933875DCAB5EDE08DA5E56B546A913257 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___boardTypeId1, const RuntimeMethod* method);
// System.Boolean Uduino.UduinoManager::GetBoard(Uduino.UduinoDevice,Uduino.UduinoDevice[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** ___devices1, const RuntimeMethod* method);
// Uduino.ArduinoBoardType Uduino.BoardsTypeList::GetBoardFromName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * BoardsTypeList_GetBoardFromName_mE625D767DE28119EBBF85C46A7AC29A1A7A3C58C (BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 Uduino.ArduinoBoardType::GetPin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArduinoBoardType_GetPin_m9F00BAA39BF6C751A58C079F52D987D4B3BA155C (ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Int32 Uduino.ArduinoBoardType::GetPin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArduinoBoardType_GetPin_m16D7C266E9BBDA20E83248984593D8608BC67150 (ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * __this, int32_t ___id0, const RuntimeMethod* method);
// Uduino.ArduinoBoardType Uduino.BoardsTypeList::GetBoardFromId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * BoardsTypeList_GetBoardFromId_m45E7B67053D64181F513EA7A0C65A86000EC7FDE (BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * __this, int32_t ___boardId0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Uduino.UduinoDevice>::get_Value()
inline UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_inline (KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 * __this, const RuntimeMethod* method)
{
	return ((  UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * (*) (KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m798542DE19B3F02DC4F4B777BB2E73169F129DE1 (RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Int32 Uduino.UduinoManager::GetPinFromBoard(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_GetPinFromBoard_m522E2AD96EAEB465ADBBE73929F4B29C816285CF (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___pin0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::pinMode(Uduino.UduinoDevice,System.Int32,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___mode2, const RuntimeMethod* method);
// System.Int32 Uduino.UduinoManager::PinValueToBoardValue(Uduino.AnalogPin,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___boardType1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Uduino.Pin>::GetEnumerator()
inline Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B (List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  (*) (List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Uduino.Pin>::get_Current()
inline Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_inline (Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB * __this, const RuntimeMethod* method)
{
	return ((  Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * (*) (Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean Uduino.Pin::PinTargetExists(Uduino.UduinoDevice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pin_PinTargetExists_m266E03042BDEE701F9445B143F570C34723C0CF5 (Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___parentArduinoTarget0, int32_t ___currentPinTarget1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void Uduino.Pin::OverridePinMode(Uduino.PinMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_OverridePinMode_m0ED1435172D483F9707D7B9FFEFD77F23177864F (Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * __this, int32_t ___mode0, bool ___useInit1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Uduino.Pin>::MoveNext()
inline bool Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B (Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Uduino.Pin>::Dispose()
inline void Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3 (Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void Uduino.Pin::.ctor(Uduino.UduinoDevice,System.Int32,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin__ctor_m56D16306CBAFFCC897D1805D2B5D3A12FC765CA5 (Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___arduinoParent0, int32_t ___pin1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Uduino.Pin>::Add(!0)
inline void List_1_Add_mCEEF3AB9054DFCF8685C9B150E71400E02B96D9E (List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * __this, Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 *, Pin_tCA13A6E61822241A72D937ED2217785A334EF455 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void Uduino.Pin::Init(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_Init_mEF9250A53DFAEE0B04126B67E2F8D8393ADEC607 (Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * __this, bool ___useInit0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Enum::GetName(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_GetName_m9DE2256BCA030763AE066DA2B23EBBC2E4C62C5D (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::pinMode(System.Int32,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_pinMode_mA4EBB71FBE0294F3B8A2EE42BC04769C4F7BE4E3 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::SendBundle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SendBundle_mFFE5A9AD21380F26047A303712275AF77238CCA8 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___bundleName0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::InitAllPins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitAllPins_m79BA577DA2C928BCF0F07447D122D7341406150E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::InitAllCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitAllCallbacks_mAAC20203AFF9077A6E790BF0259E275E9C234492 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::GetEnumerator()
inline Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A  Dictionary_2_GetEnumerator_m7898C1D0AD6BF832B78F2B8E39CF633139AD9A94 (Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A  (*) (Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Action`1<System.String>>::get_Current()
inline KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894  Enumerator_get_Current_m9C330C3A75176C2C56AD16272FBC316DD8AF8BFA_inline (Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894  (*) (Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Action`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m47FF534555003E6174B06C71F86BEF738CB181D2_inline (KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// System.Boolean Uduino.UduinoManager::GetBoard(System.String,Uduino.UduinoDevice[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_GetBoard_m18EF75FF7775B2F78E91214B4B84B481748F4491 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___name0, UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** ___devices1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Action`1<System.String>>::get_Value()
inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * KeyValuePair_2_get_Value_m4B2A5CAB715165D12BD2A240EC8DA064DFB2F9AC_inline (KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 * __this, const RuntimeMethod* method)
{
	return ((  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * (*) (KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Action`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m83873244A5C506D707505774A74F363C56B75270 (Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Action`1<System.String>>::Dispose()
inline void Enumerator_Dispose_m54A98B5800203426543418BAAA3B7FFD7678444A (Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.Void Uduino.Pin::SendPinValue(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_SendPinValue_m4CEEC6CF0AA00DC3588E9BFC365CE1CBEB3B58C6 (Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * __this, int32_t ___sendValue0, String_t* ___typeOfPin1, String_t* ___bundle2, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::arduinoWrite(Uduino.UduinoDevice,System.Int32,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___value2, String_t* ___typeOfPin3, String_t* ___bundle4, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::digitalWrite(Uduino.UduinoDevice,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_digitalWrite_mD1A96CCCA3FFBA29FBF51C752666CEC7EE82062A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___value2, String_t* ___bundle3, const RuntimeMethod* method);
// System.Int32 Uduino.UduinoManager::digitalRead(Uduino.UduinoDevice,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_digitalRead_mE4C62A301C1961318771DE9FCFB2B9852F1D4D41 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, String_t* ___bundle2, const RuntimeMethod* method);
// System.Int32 Uduino.UduinoManager::analogRead(Uduino.UduinoDevice,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_analogRead_mB3D252FAD4DA539F88D5BD79C1156E7049B4655A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, String_t* ___bundle2, const RuntimeMethod* method);
// System.Void Uduino.UduinoDevice::AddToBundle(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoDevice_AddToBundle_m7B1004685A71B9263CDAC2C1185CE66F2105D427 (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * __this, String_t* ___message0, String_t* ___bundle1, const RuntimeMethod* method);
// System.String Uduino.UduinoManager::DirectReadFromArduino(Uduino.UduinoDevice,System.String,System.Action`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UduinoManager_DirectReadFromArduino_m407E6605F28FEBCD6110A257CCFBE9EFC836C059 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___targetDevice0, String_t* ___message1, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___action2, String_t* ___bundle3, const RuntimeMethod* method);
// System.String Uduino.UduinoManager::BuildMessageParameters(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UduinoManager_BuildMessageParameters_mD5853C2857D9874B87AA3CE84C5CB8A687D3C500 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters0, const RuntimeMethod* method);
// Uduino.UduinoDevice Uduino.UduinoManager::GetBoard(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * UduinoManager_GetBoard_m3935921AA593BC3353009C89A92728EFDF4FE000 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::sendCommand(Uduino.UduinoDevice,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_sendCommand_m690A6959077A4D1890ED5F10AE6805A533105D80 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___command1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value2, const RuntimeMethod* method);
// System.Boolean Uduino.UduinoManager::sendCommand(Uduino.UduinoDevice,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_sendCommand_m88C831CAC933468BAF9EFB5F4674C0D86E2E84D5 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___message1, String_t* ___bundle2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::Add(!0,!1)
inline void Dictionary_2_Add_m11F9F2E8D36516D60DABA163D11EC44F2BBDCBC5 (Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * __this, String_t* ___key0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A *, String_t*, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Uduino.UduinoManager::SetReadCallback(Uduino.UduinoDevice,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SetReadCallback_m43568A6575F59B1E4E6EF0892331441EFC640A9A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback1, const RuntimeMethod* method);
// System.Void Uduino.UduinoDevice::SendBundle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoDevice_SendBundle_m9B96F1BA51D74455B55DCA804C54DB05BBA70182 (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * __this, String_t* ___bundleName0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::SendBundle(Uduino.UduinoDevice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SendBundle_mF11EA0C8655BF1D3CA65D3126450F8A55EF2A889 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___bundleName1, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/<AutoSendBundle>d__152::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoSendBundleU3Ed__152__ctor_mCA4C32C8C0AE32D5E84B31457A5B93C0903C6FCD (U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m398F95668B9B305770A66F5AD04AF5D425CAAAB7 (Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B * __this, String_t* ___key0, bool* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC299681D95BE2E81CC7CBA606C4E9D07A00FA35B *, String_t*, bool*, const RuntimeMethod*))Dictionary_2_TryGetValue_mC5621E9D987E16C3F1F906063CC444772247F9FB_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Uduino.UduinoManager::IsRunning()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool UduinoManager_IsRunning_mC1B8002F69AE86A87126E07CBC5C891C0C6035BB_inline (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5 (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Threading.ThreadState System.Threading.Thread::get_ThreadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ThreadState_m8F398B10B485BC5FC7499B53452230A604989C10 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/<CoroutineRead>d__166::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineReadU3Ed__166__ctor_m32497998675242462CE0AA8181536976A4D6390A (U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/<>c__DisplayClass167_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass167_0__ctor_mAA9712FD0C5B8D876D9E0A933A6D86EE730D0FDA (U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::InvokeAsync(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InvokeAsync_mFEB9BFC5336473111AAC45DDF2E3EC468530371A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___callback0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::get_Keys()
inline KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2 * Dictionary_2_get_Keys_mE9851C6F91B0565530E84534A4E69C8D3431C86A (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2 * (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, const RuntimeMethod*))Dictionary_2_get_Keys_m079EE5437EE7D904E9E3F798041C1108B96B3AC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_inline (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void Uduino.UduinoManager::CloseDevice(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_CloseDevice_mDCBE077F50325DC4B564D2D6CC6389A0328B652E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978 (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::Clear()
inline void Dictionary_2_Clear_mBA447A76DA2E06DCBF2B1F8FA1F04B73017A45FA (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, const RuntimeMethod*))Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared)(__this, method);
}
// System.Void Uduino.Pin::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_Destroy_m7EAB0E0AE1CACEDB8177C135C7F8095DF91C33AF (Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * __this, const RuntimeMethod* method);
// Uduino.Interface Uduino.Interface::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 * Interface_get_Instance_m8962A680AFECDC5D3DE7050B3699988B7844F5AC (const RuntimeMethod* method);
// System.Void Uduino.Interface::RemoveDeviceButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interface_RemoveDeviceButton_mD94443FC5210392CB55B8B76467DAE9179A56EF8 (Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Uduino.Interface::UduinoDisconnected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interface_UduinoDisconnected_m8880D5546D0694CB98FBD16B41541C658EA86E58 (Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/OnBoardDisconnectedDelegate::Invoke(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBoardDisconnectedDelegate_Invoke_m0175464886F111F63E829902031FB5EB2F9DA7B4 (OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::Remove(!0)
inline bool Dictionary_2_Remove_m57865BAC70A924D938AD3AC56D3FF534D1942D1E (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Void Uduino.UduinoManager::FullReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_FullReset_m721742D5D556F512D813B05C9E08708D8909F2C3 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::DisableThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_DisableThread_mD62037C8E57381C76F0CB2FE6265E4913DF7CB02 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Uduino.UduinoDevice>::.ctor()
inline void Dictionary_2__ctor_m945D436495A8F3935777DC059EA8D3079477F6B9 (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Uduino.Pin>::.ctor()
inline void List_1__ctor_m11F8123E0FF743303C1CA5F9566A36673D608C13 (List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m4F95054FE102D7014045D0A2B578F427C703A930 (Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Uduino.IsActiveDictionnary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsActiveDictionnary__ctor_m0A3E01EBF831BFB1765884498846596B66CB0C80 (IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E * __this, const RuntimeMethod* method);
// System.Void Uduino.IsPresentDictionnary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsPresentDictionnary__ctor_m9ACF3929979A6FC80DA4A323D4EBAC9A7437F756 (IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/OnDataReceivedDelegate::Invoke(System.String,Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDataReceivedDelegate_Invoke_m45ADB303544F62AD260517648196701E979ADA87 (OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * __this, String_t* ___data0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device1, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager/OnValueReceivedDelegate::Invoke(System.String,Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueReceivedDelegate_Invoke_mFB8EF6F35664E23EE1013C11D81E523953BA6DFE (OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * __this, String_t* ___data0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<System.String,Uduino.UduinoDevice>::Invoke(!0,!1)
inline void UnityEvent_2_Invoke_m324264A40386ECA3265553AD462245E9151C24E9 (UnityEvent_2_tFE1DFE49DEC166D074ABB396BC1EFFF6771C8736 * __this, String_t* ___arg00, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tFE1DFE49DEC166D074ABB396BC1EFFF6771C8736 *, String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*))UnityEvent_2_Invoke_m3BDF6E459C36C6032BA399E94D6C094D120778EC_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Boolean Uduino.UduinoManager::get_LimitSendRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool UduinoManager_get_LimitSendRate_mD771F5DC1D2BC8D2E93EAB1432D991195AFA64AB_inline (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoDevice::SendAllBundles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoDevice_SendAllBundles_m3AA0B34A59AB5F75640AAFDC6DE087AE52B4BC85 (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * __this, const RuntimeMethod* method);
// System.Void Uduino.UduinoManager::DiscoverPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_DiscoverPorts_mDA817C0313CCA4C1313B961E98E29F5B88F1919A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Uduino.UduinoDevice>::.ctor()
inline void UnityEvent_1__ctor_m2425BF6294B29967F7EF6C91B0019D28577FA2BD (UnityEvent_1_tD75DD786FC9FD883E80567D5E2746B61F2A6AEEA * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tD75DD786FC9FD883E80567D5E2746B61F2A6AEEA *, const RuntimeMethod*))UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,Uduino.UduinoDevice>::.ctor()
inline void UnityEvent_2__ctor_m09DCA4D04F7E62BF2F027663F420E933039BEE78 (UnityEvent_2_tFE1DFE49DEC166D074ABB396BC1EFFF6771C8736 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tFE1DFE49DEC166D074ABB396BC1EFFF6771C8736 *, const RuntimeMethod*))UnityEvent_2__ctor_mB06A035F20AB91B5BAB10F156049029A6D6DEE44_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3 (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Uduino.UduinoManager::Read(System.String,System.Action`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_Read_m884ACDF65D0E068B209C6CEE7CC6924CE4EDC24F (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___message0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___action1, String_t* ___bundle2, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA (String_t* ___s0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * Component_GetComponent_TisAnimation_tCFC171459D159DDEC6500B55543A76219D49BB9C_mA47DE57327917E1273751CB3892224AAFDBB7CF0 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_IsPlaying_m7E78EE738A3A1F0B2B0365171EFE2B55B1E421A0 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m743CCCF04B64977460915D9E7007B0859BDF6AE9 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// UnityEngine.Vector3 tiltControl::GetCameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  tiltControl_GetCameraRotation_m612981BF747F37CC4DC1F90F6A58544A48DB4BCD (tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_m02858E8B3313B27174B19E9113F24EF25FBCEC7F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Uduino.UduinoInterface/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m2FD9F92F0514A06908D6AB197722BB023C326BFE (U3CU3Ec__DisplayClass21_0_t7C4526B0752B11F77F19A8F9B48A0D6D7A4B1D0A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Uduino.UduinoInterface/<>c__DisplayClass21_0::<AddDeviceButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CAddDeviceButtonU3Eb__0_m6799B2BC8DDBD77726B086B54068D587DCEA9352 (U3CU3Ec__DisplayClass21_0_t7C4526B0752B11F77F19A8F9B48A0D6D7A4B1D0A * __this, const RuntimeMethod* method)
{
	{
		// deviceBtn.transform.Find("Disconnect").GetComponent<Button>().onClick.AddListener(() => this.DisconnectUduino(name));
		UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A * L_0 = __this->get_U3CU3E4__this_0();
		String_t* L_1 = __this->get_name_1();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void Uduino.UduinoInterface::DisconnectUduino(System.String) */, L_0, L_1);
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
// System.Void Uduino.UduinoInterface_Bluetooth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_Awake_m9353E0A08B6392C041A65D8F8F119D75A0F4592D (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_Awake_m9353E0A08B6392C041A65D8F8F119D75A0F4592D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch(UduinoManager.Instance.interfaceType)
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_0 = UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = L_0->get_interfaceType_52();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0053;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_001f:
	{
		// minimalUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_minimalUI_12();
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		// fullUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_fullUI_6();
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_006b;
	}

IL_0039:
	{
		// minimalUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_minimalUI_12();
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		// fullUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_fullUI_6();
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_006b;
	}

IL_0053:
	{
		// minimalUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_minimalUI_12();
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		// fullUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_fullUI_6();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// StopTimer();
		UduinoInterface_Bluetooth_StopTimer_mA7EBAF9CDE98CB098C98C0A267FF24F82C9ED357(__this, /*hidden argument*/NULL);
		// ClearPanel();
		UduinoInterface_Bluetooth_ClearPanel_mC8B93E049F5904B3AB128E2F3401CC87BB898934(__this, /*hidden argument*/NULL);
		// DisplayDebugPanel(false);
		UduinoInterface_Bluetooth_DisplayDebugPanel_mC01574B5149940159018BCC7EB2D404050CC307F(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_Read_m925B1CAEA2451B28FC989377CE8FE85F969B6A91 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::SendValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_SendValue_m60819CD47B4F3E0E9C2A26B15E51A1703BBDA099 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	{
		// boardConnection.PluginWrite(sendValue.text);
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_0 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_boardConnection_5();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_sendValue_19();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void Uduino.UduinoConnection::PluginWrite(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::LastReceviedValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_LastReceviedValue_m41590C1F5E8B7315C969B486ABF2A5AE6E0BEE91 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// lastReceivedValue.text = value;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_lastReceivedValue_20();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::SearchDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_SearchDevices_m2D7D4AC8D615A841C3BFEF18E80EA0CBDB096C6C (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	{
		// boardConnection.ScanForDevices();
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_0 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_boardConnection_5();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void Uduino.UduinoConnection::ScanForDevices() */, L_0);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::StartSearching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_StartSearching_m23331EFF66FDBE264425680CD57472A5CB126423 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_StartSearching_m23331EFF66FDBE264425680CD57472A5CB126423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ClearPanel();
		UduinoInterface_Bluetooth_ClearPanel_mC8B93E049F5904B3AB128E2F3401CC87BB898934(__this, /*hidden argument*/NULL);
		// StartTimer();
		UduinoInterface_Bluetooth_StartTimer_m2B21CC06AEBBCC576F57283938EC4B6354B4F950(__this, /*hidden argument*/NULL);
		// DisplayDebugPanel(false);
		UduinoInterface_Bluetooth_DisplayDebugPanel_mC01574B5149940159018BCC7EB2D404050CC307F(__this, (bool)0, /*hidden argument*/NULL);
		// NoDeviceFound(false);
		VirtActionInvoker1< bool >::Invoke(13 /* System.Void Uduino.UduinoInterface::NoDeviceFound(System.Boolean) */, __this, (bool)0);
		// getScanButton().text = "Scanning...";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = UduinoInterface_getScanButton_mD6119BA38D20970213B5782A5F8617E7FCFF6844(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralBD5E8D69EEB50D73FB29455C04828E9F3F05481B);
		// devicesButtons.Clear();
		Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * L_1 = __this->get_devicesButtons_21();
		NullCheck(L_1);
		Dictionary_2_Clear_mCF7E960E3F755EBE4FB2BB83B1F985904AC913E8(L_1, /*hidden argument*/Dictionary_2_Clear_mCF7E960E3F755EBE4FB2BB83B1F985904AC913E8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::StopSearching()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_StopSearching_m09795865FD23476BCF731FC874DB9684048894EE (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_StopSearching_m09795865FD23476BCF731FC874DB9684048894EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getScanButton().text = "Scan for devices";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = UduinoInterface_getScanButton_mD6119BA38D20970213B5782A5F8617E7FCFF6844(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralCC966E54C4E94B37CCFAFBB962ED1F23F60172D7);
		// getScanSlider().value = 0;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_1 = UduinoInterface_getScanSlider_m04BB189CE037EE6F8D0153F100AF44CF3BC1A60E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (0.0f));
		// getScanSlider().gameObject.SetActive(false);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_2 = UduinoInterface_getScanSlider_m04BB189CE037EE6F8D0153F100AF44CF3BC1A60E(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_StartTimer_m2B21CC06AEBBCC576F57283938EC4B6354B4F950 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(StartSliderCountdown());
		RuntimeObject* L_0 = UduinoInterface_Bluetooth_StartSliderCountdown_m5572CADA921CD33CE400658CF2B23F12CFA4B44E(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Uduino.UduinoInterface_Bluetooth::StartSliderCountdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UduinoInterface_Bluetooth_StartSliderCountdown_m5572CADA921CD33CE400658CF2B23F12CFA4B44E (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_StartSliderCountdown_m5572CADA921CD33CE400658CF2B23F12CFA4B44E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * L_0 = (U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 *)il2cpp_codegen_object_new(U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64_il2cpp_TypeInfo_var);
		U3CStartSliderCountdownU3Ed__9__ctor_m0665160913927115B8F44C1CF9B70793C0951C8D(L_0, 0, /*hidden argument*/NULL);
		U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::SendCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_SendCommand_m8DC41418D28C2AC394C7AA93EB4D4ACCF5416DC5 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, String_t* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_SendCommand_m8DC41418D28C2AC394C7AA93EB4D4ACCF5416DC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boardConnection.PluginWrite(t + "\r\n");
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_0 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_boardConnection_5();
		String_t* L_1 = ___t0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_1, _stringLiteralBA8AB5A0280B953AA97435FF8946CBCBB2755A27, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void Uduino.UduinoConnection::PluginWrite(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_StopTimer_mA7EBAF9CDE98CB098C98C0A267FF24F82C9ED357 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	{
		// getScanSlider().value = 0;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_0 = UduinoInterface_getScanSlider_m04BB189CE037EE6F8D0153F100AF44CF3BC1A60E(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (0.0f));
		// getScanSlider().gameObject.SetActive(false);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_1 = UduinoInterface_getScanSlider_m04BB189CE037EE6F8D0153F100AF44CF3BC1A60E(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::ClearPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_ClearPanel_mC8B93E049F5904B3AB128E2F3401CC87BB898934 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_ClearPanel_mC8B93E049F5904B3AB128E2F3401CC87BB898934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Transform child in getPanel())
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = UduinoInterface_getPanel_m9979E84F96C70D439CAAA654F109BEB1D564B8B6(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0061;
		}

IL_000e:
		{
			// foreach (Transform child in getPanel())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_2);
			V_1 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_3, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var));
			// if (child.gameObject.name != "NotFound")
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_1;
			NullCheck(L_4);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			String_t* L_6 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_5, /*hidden argument*/NULL);
			bool L_7 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_6, _stringLiteral6F05E7CC9203F83829C08DCC46FAFE9DB426763F, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0061;
			}
		}

IL_0031:
		{
			// if (child.gameObject.name == "Device")
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = V_1;
			NullCheck(L_8);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			String_t* L_10 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_9, /*hidden argument*/NULL);
			bool L_11 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_10, _stringLiteralA5A74A6DF09278B88CB6EA23B7D7F2570C33BABF, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0056;
			}
		}

IL_0048:
		{
			// child.gameObject.SetActive(false);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = V_1;
			NullCheck(L_12);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_12, /*hidden argument*/NULL);
			NullCheck(L_13);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_13, (bool)0, /*hidden argument*/NULL);
			goto IL_0061;
		}

IL_0056:
		{
			// Destroy(child.gameObject);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = V_1;
			NullCheck(L_14);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_14, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_15, /*hidden argument*/NULL);
		}

IL_0061:
		{
			// foreach (Transform child in getPanel())
			RuntimeObject* L_16 = V_0;
			NullCheck(L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_000e;
			}
		}

IL_0069:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_006b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006b;
	}

FINALLY_006b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_19 = V_2;
			if (!L_19)
			{
				goto IL_007b;
			}
		}

IL_0075:
		{
			RuntimeObject* L_20 = V_2;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_20);
		}

IL_007b:
		{
			IL2CPP_END_FINALLY(107)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(107)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// getErrorPanel().SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = UduinoInterface_getErrorPanel_m98FB38BC1968F7383C87DDCE4ADA16969A9F76DF(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_21, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::AddDeviceButton(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_AddDeviceButton_m467AB9F5C27B6B7735A68DF648D5DAFED04A63F4 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, String_t* ___name0, String_t* ___uuid1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_AddDeviceButton_m467AB9F5C27B6B7735A68DF648D5DAFED04A63F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * V_0 = NULL;
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * V_1 = NULL;
	BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * V_2 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_0 = (U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m51CDB7206C4682ECFF06CE30BE32E1A575581C04(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_2 = V_0;
		String_t* L_3 = ___uuid1;
		NullCheck(L_2);
		L_2->set_uuid_1(L_3);
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_4 = V_0;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		L_4->set_name_2(L_5);
		// if (UduinoManager.Instance.interfaceType == UduinoInterfaceType.None)
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_6 = UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2(/*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->get_interfaceType_52();
		if (L_7)
		{
			goto IL_0028;
		}
	}
	{
		// return;
		return;
	}

IL_0028:
	{
		// GameObject deviceBtn = Instantiate(getDeviceButtonPrefab(), getPanel());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = UduinoInterface_getDeviceButtonPrefab_m040D88CCF14D7D5A8C4CCD782550C43CD5E0B3A0(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = UduinoInterface_getPanel_m9979E84F96C70D439CAAA654F109BEB1D564B8B6(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		// deviceBtn.transform.name = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = L_10;
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = L_13->get_name_2();
		NullCheck(L_12);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_12, L_14, /*hidden argument*/NULL);
		// deviceBtn.transform.Find("DeviceName").transform.GetComponent<Text>().text = name;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = L_11;
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Transform_Find_m673797B6329C2669A543904532ABA1680DA4EAD1(L_16, _stringLiteral39F2DE372BA290EBCA52B2D8C7CA722F665CAE5C, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_19 = Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854(L_18, /*hidden argument*/Component_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_mAD33230551A78A91EE16B6EDE1D6CDDA7E437854_RuntimeMethod_var);
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_name_2();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_21);
		// Button btn = deviceBtn.GetComponent<Button>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = L_15;
		NullCheck(L_22);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_23 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_22, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		V_1 = L_23;
		// deviceBtn.gameObject.SetActive(true);
		NullCheck(L_22);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_22, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_24, (bool)1, /*hidden argument*/NULL);
		// BLEDeviceButton_Interface deviceInterface = new BLEDeviceButton_Interface(btn);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_25 = V_1;
		BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * L_26 = (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 *)il2cpp_codegen_object_new(BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233_il2cpp_TypeInfo_var);
		BLEDeviceButton_Interface__ctor_mC89DA60D944104C7AAE8E3EBF1935DBAA3503781(L_26, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		// devicesButtons.Add(name, deviceInterface);
		Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * L_27 = __this->get_devicesButtons_21();
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = L_28->get_name_2();
		BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * L_30 = V_2;
		NullCheck(L_27);
		Dictionary_2_Add_m65646C5479559A60A51E83C1B088ACCA9BE6C3E0(L_27, L_29, L_30, /*hidden argument*/Dictionary_2_Add_m65646C5479559A60A51E83C1B088ACCA9BE6C3E0_RuntimeMethod_var);
		// btn.onClick.AddListener(() => boardConnection.ConnectPeripheral(uuid, name));
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_31 = V_1;
		NullCheck(L_31);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_32 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_31, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_33 = V_0;
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_34 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_34, L_33, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CAddDeviceButtonU3Eb__0_m8DA3AF87CD927A522205872A6551E4260F7F9576_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_32, L_34, /*hidden argument*/NULL);
		// deviceInterface.disconnect.GetComponent<Button>().onClick.AddListener(() => UduinoManager.Instance.CloseDevice(name));
		BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * L_35 = V_2;
		NullCheck(L_35);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = L_35->get_disconnect_4();
		NullCheck(L_36);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_37 = GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80(L_36, /*hidden argument*/GameObject_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m04725F873F765AF3EA906137A60CD58809FE1C80_RuntimeMethod_var);
		NullCheck(L_37);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_38 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_37, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * L_39 = V_0;
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_40 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_40, L_39, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass13_0_U3CAddDeviceButtonU3Eb__1_m4CE5F04623885031D60066A0AE2D998D7F288B73_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_38);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_38, L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::DisplayDebugPanel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_DisplayDebugPanel_mC01574B5149940159018BCC7EB2D404050CC307F (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, bool ___active0, const RuntimeMethod* method)
{
	{
		// debugPanel.SetActive(active);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)__this)->get_debugPanel_18();
		bool L_1 = ___active0;
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::UduinoConnecting(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_UduinoConnecting_m49BACC3116FA606E480924291AB4AC78C6AA44DA (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_UduinoConnecting_m49BACC3116FA606E480924291AB4AC78C6AA44DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * V_0 = NULL;
	{
		// BLEDeviceButton_Interface currentDeviceBtn = null;
		V_0 = (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 *)NULL;
		// if (devicesButtons.TryGetValue(name, out currentDeviceBtn))
		Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * L_0 = __this->get_devicesButtons_21();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m9A5731E68B9008253C528D2B668F28A76B37C9B6(L_0, L_1, (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9A5731E68B9008253C528D2B668F28A76B37C9B6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// currentDeviceBtn.Connecting();
		BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * L_3 = V_0;
		NullCheck(L_3);
		BLEDeviceButton_Interface_Connecting_m9D790E947CFD9D2485C014AD81BA7DE5F274601B(L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// Log.Info("connecting to " + name);
		String_t* L_4 = ___name0;
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral7706DD10EBDD4999F3EC1E5C286BD9AB3D9BD0FB, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Info_m08CFA638194730410A989631C097C045098A5F03(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::UduinoConnected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_UduinoConnected_m9041DB004CC393D9BE0655BC5064606FB985EEAD (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_UduinoConnected_m9041DB004CC393D9BE0655BC5064606FB985EEAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * V_0 = NULL;
	{
		// BLEDeviceButton_Interface currentDeviceBtn = null;
		V_0 = (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 *)NULL;
		// if(devicesButtons.TryGetValue(name, out currentDeviceBtn)) {
		Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * L_0 = __this->get_devicesButtons_21();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m9A5731E68B9008253C528D2B668F28A76B37C9B6(L_0, L_1, (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9A5731E68B9008253C528D2B668F28A76B37C9B6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// DisplayDebugPanel(true);
		UduinoInterface_Bluetooth_DisplayDebugPanel_mC01574B5149940159018BCC7EB2D404050CC307F(__this, (bool)1, /*hidden argument*/NULL);
		// currentDeviceBtn.Connected();
		BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * L_3 = V_0;
		NullCheck(L_3);
		BLEDeviceButton_Interface_Connected_m77C2B9766FFFEDF0CF024D5862AC6E34DDA4B777(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::UduinoDisconnected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth_UduinoDisconnected_m2BB53B7A07D2C122A74B6523D10F11B112438DC0 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth_UduinoDisconnected_m2BB53B7A07D2C122A74B6523D10F11B112438DC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * V_0 = NULL;
	Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// BLEDeviceButton_Interface currentDeviceBtn = null;
		V_0 = (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 *)NULL;
		// if (devicesButtons.TryGetValue(name, out currentDeviceBtn))
		Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * L_0 = __this->get_devicesButtons_21();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m9A5731E68B9008253C528D2B668F28A76B37C9B6(L_0, L_1, (BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9A5731E68B9008253C528D2B668F28A76B37C9B6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// DisplayDebugPanel(false);
		UduinoInterface_Bluetooth_DisplayDebugPanel_mC01574B5149940159018BCC7EB2D404050CC307F(__this, (bool)0, /*hidden argument*/NULL);
		// currentDeviceBtn.Disconnected();
		BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * L_3 = V_0;
		NullCheck(L_3);
		BLEDeviceButton_Interface_Disconnected_m6A4C71543A04815BB7CD59BD8A26602BE5472324(L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0020:
	{
		// foreach(KeyValuePair<string, BLEDeviceButton_Interface> a in devicesButtons)
		Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * L_4 = __this->get_devicesButtons_21();
		NullCheck(L_4);
		Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F  L_5 = Dictionary_2_GetEnumerator_m272D869A02B86CD241608D68CDD897F2D686A083(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m272D869A02B86CD241608D68CDD897F2D686A083_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_002e:
		{
			// foreach(KeyValuePair<string, BLEDeviceButton_Interface> a in devicesButtons)
			KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65  L_6 = Enumerator_get_Current_mFC84E1C498674352EF1A70EF34A78B866DE4CBCF_inline((Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F *)(&V_1), /*hidden argument*/Enumerator_get_Current_mFC84E1C498674352EF1A70EF34A78B866DE4CBCF_RuntimeMethod_var);
			V_2 = L_6;
			// a.Value.Disconnected();
			BLEDeviceButton_Interface_t75A3DDA3744F4E55CB5B4A5385C534D7A2106233 * L_7 = KeyValuePair_2_get_Value_m43278E4AC46C3ADF301DF48E82903297218D24CB_inline((KeyValuePair_2_tB421C2B7FF4902C100704F6071EA3B182E876C65 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m43278E4AC46C3ADF301DF48E82903297218D24CB_RuntimeMethod_var);
			NullCheck(L_7);
			BLEDeviceButton_Interface_Disconnected_m6A4C71543A04815BB7CD59BD8A26602BE5472324(L_7, /*hidden argument*/NULL);
		}

IL_0042:
		{
			// foreach(KeyValuePair<string, BLEDeviceButton_Interface> a in devicesButtons)
			bool L_8 = Enumerator_MoveNext_mF8D0669CB944FCE2BB85B6C8B71F049935B543A4((Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mF8D0669CB944FCE2BB85B6C8B71F049935B543A4_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_002e;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8D826194919B0993A2EA9E7E9B3081F97CE4F5C9((Enumerator_t98DC8F12F02E3F68070FCEC09976F6B1FCE7321F *)(&V_1), /*hidden argument*/Enumerator_Dispose_m8D826194919B0993A2EA9E7E9B3081F97CE4F5C9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Bluetooth__ctor_mA29E34F2EB40E0A7D6027364088A10897DA43503 (UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoInterface_Bluetooth__ctor_mA29E34F2EB40E0A7D6027364088A10897DA43503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<string, BLEDeviceButton_Interface> devicesButtons = new Dictionary<string, BLEDeviceButton_Interface>();
		Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA * L_0 = (Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA *)il2cpp_codegen_object_new(Dictionary_2_tC16AC4AA1713E403AFEA860CB1877E73E9973EFA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m60D88C1C1814A9AE9F02E6880319F43E497E06D6(L_0, /*hidden argument*/Dictionary_2__ctor_m60D88C1C1814A9AE9F02E6880319F43E497E06D6_RuntimeMethod_var);
		__this->set_devicesButtons_21(L_0);
		UduinoInterface__ctor_m2C54350C06CAD8513EC0D8E8A1C778CA235E4809(__this, /*hidden argument*/NULL);
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
// System.Void Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m51CDB7206C4682ECFF06CE30BE32E1A575581C04 (U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0::<AddDeviceButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CAddDeviceButtonU3Eb__0_m8DA3AF87CD927A522205872A6551E4260F7F9576 (U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * __this, const RuntimeMethod* method)
{
	{
		// btn.onClick.AddListener(() => boardConnection.ConnectPeripheral(uuid, name));
		UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_1 = ((UduinoInterface_t9B5852AC392D2146000E23EFFCCC594EDC3F705A *)L_0)->get_boardConnection_5();
		String_t* L_2 = __this->get_uuid_1();
		String_t* L_3 = __this->get_name_2();
		NullCheck(L_1);
		VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(14 /* System.Boolean Uduino.UduinoConnection::ConnectPeripheral(System.String,System.String) */, L_1, L_2, L_3);
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth/<>c__DisplayClass13_0::<AddDeviceButton>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CAddDeviceButtonU3Eb__1_m4CE5F04623885031D60066A0AE2D998D7F288B73 (U3CU3Ec__DisplayClass13_0_tB39F9FA484450253E3CB862FBE2133A3B4629856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CAddDeviceButtonU3Eb__1_m4CE5F04623885031D60066A0AE2D998D7F288B73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deviceInterface.disconnect.GetComponent<Button>().onClick.AddListener(() => UduinoManager.Instance.CloseDevice(name));
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_0 = UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_name_2();
		NullCheck(L_0);
		UduinoManager_CloseDevice_mA13987062550B2F32EFF89734B28DEFDC06953FE(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSliderCountdownU3Ed__9__ctor_m0665160913927115B8F44C1CF9B70793C0951C8D (U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSliderCountdownU3Ed__9_System_IDisposable_Dispose_mAA2DF855BF8FDE140C49BE4B93BF790D8E5DBD9B (U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartSliderCountdownU3Ed__9_MoveNext_m3E4939A5B44228D9F7A9D8A057F0397C5984F2A7 (U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartSliderCountdownU3Ed__9_MoveNext_m3E4939A5B44228D9F7A9D8A057F0397C5984F2A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Slider slider = getScanSlider();
		UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * L_4 = V_1;
		NullCheck(L_4);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_5 = UduinoInterface_getScanSlider_m04BB189CE037EE6F8D0153F100AF44CF3BC1A60E(L_4, /*hidden argument*/NULL);
		__this->set_U3CsliderU3E5__2_3(L_5);
		// slider.gameObject.SetActive(true);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_6 = __this->get_U3CsliderU3E5__2_3();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		// int currentCount = 0 ;
		__this->set_U3CcurrentCountU3E5__3_4(0);
		goto IL_0096;
	}

IL_0044:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_8 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_8, (0.01f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// slider.value = (float)((float)currentCount / (float)(UduinoManager.Instance.bleScanDuration * 100));
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_9 = __this->get_U3CsliderU3E5__2_3();
		int32_t L_10 = __this->get_U3CcurrentCountU3E5__3_4();
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_11 = UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2(/*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = L_11->get_bleScanDuration_51();
		NullCheck(L_9);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_9, (((float)((float)((float)((float)(((float)((float)L_10)))/(float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)((int32_t)100))))))))))));
		// currentCount++;
		int32_t L_13 = __this->get_U3CcurrentCountU3E5__3_4();
		V_2 = L_13;
		int32_t L_14 = V_2;
		__this->set_U3CcurrentCountU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
	}

IL_0096:
	{
		// while (currentCount < UduinoManager.Instance.bleScanDuration * 100)
		int32_t L_15 = __this->get_U3CcurrentCountU3E5__3_4();
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_16 = UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2(/*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = L_16->get_bleScanDuration_51();
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)((int32_t)100))))))
		{
			goto IL_0044;
		}
	}
	{
		// StopTimer();
		UduinoInterface_Bluetooth_tF364CC3FD9C5453754AFB557C8CFDCA73A6E95EF * L_18 = V_1;
		NullCheck(L_18);
		UduinoInterface_Bluetooth_StopTimer_mA7EBAF9CDE98CB098C98C0A267FF24F82C9ED357(L_18, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartSliderCountdownU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m18142046F2326DA18B1E1CBFE2C0223A133D8164 (U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSliderCountdownU3Ed__9_System_Collections_IEnumerator_Reset_m33D13BEEBE74F963085D51229F85B9417920D046 (U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartSliderCountdownU3Ed__9_System_Collections_IEnumerator_Reset_m33D13BEEBE74F963085D51229F85B9417920D046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartSliderCountdownU3Ed__9_System_Collections_IEnumerator_Reset_m33D13BEEBE74F963085D51229F85B9417920D046_RuntimeMethod_var);
	}
}
// System.Object Uduino.UduinoInterface_Bluetooth/<StartSliderCountdown>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartSliderCountdownU3Ed__9_System_Collections_IEnumerator_get_Current_mD3453F37C48A554047591F1133E52F310EEF2ADE (U3CStartSliderCountdownU3Ed__9_t8063B49D311D10BE51E64FC7DFE0C4FD38A0AC64 * __this, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoInterface_Serial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoInterface_Serial__ctor_m4F050E6B62DE346AF43D50472FAFFD224837CF7D (UduinoInterface_Serial_tDAEC1D0B8E520BE2F9E2637545C29D178D350258 * __this, const RuntimeMethod* method)
{
	{
		UduinoInterface__ctor_m2C54350C06CAD8513EC0D8E8A1C778CA235E4809(__this, /*hidden argument*/NULL);
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
// Uduino.UduinoManager Uduino.UduinoManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UduinoManagerU5BU5D_t2898AED1A18540CC0145C57FA79821C00B588035* V_0 = NULL;
	{
		// if (_instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_0 = ((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return _instance;
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_2 = ((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->get__instance_4();
		return L_2;
	}

IL_0013:
	{
		// UduinoManager[] uduinoManagers = FindObjectsOfType(typeof(UduinoManager)) as UduinoManager[];
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tE519E5BBCA48F8FEAE68926638261BD14A981AB9* L_5 = Object_FindObjectsOfType_m3FC26FB3B36525BFBFCCCD1AEEE8A86712A12203(L_4, /*hidden argument*/NULL);
		V_0 = ((UduinoManagerU5BU5D_t2898AED1A18540CC0145C57FA79821C00B588035*)IsInst((RuntimeObject*)L_5, UduinoManagerU5BU5D_t2898AED1A18540CC0145C57FA79821C00B588035_il2cpp_TypeInfo_var));
		// if (uduinoManagers.Length == 0 )
		UduinoManagerU5BU5D_t2898AED1A18540CC0145C57FA79821C00B588035* L_6 = V_0;
		NullCheck(L_6);
		if ((((RuntimeArray*)L_6)->max_length))
		{
			goto IL_0051;
		}
	}
	{
		// Log.Warning("UduinoManager not present on the scene. Creating a new one.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Warning_m7FC7B8CC24EEA8D85D60FA0BFB581628525CD3AC(_stringLiteral1CE282E6DBEA7F4CE00A27C0BC69EE51E832A4C3, (bool)0, /*hidden argument*/NULL);
		// UduinoManager manager = new GameObject("UduinoManager").AddComponent<UduinoManager>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_7, _stringLiteralE45CA35451F0E2ACBA9CF2E9878EA01FF8A62898, /*hidden argument*/NULL);
		NullCheck(L_7);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_8 = GameObject_AddComponent_TisUduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_mADEDC0A874A4700CAF77DE3C47A9DC6BF468EB19(L_7, /*hidden argument*/GameObject_AddComponent_TisUduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_mADEDC0A874A4700CAF77DE3C47A9DC6BF468EB19_RuntimeMethod_var);
		// _instance = manager;
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->set__instance_4(L_8);
		// return _instance;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_9 = ((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->get__instance_4();
		return L_9;
	}

IL_0051:
	{
		// return uduinoManagers[0];
		UduinoManagerU5BU5D_t2898AED1A18540CC0145C57FA79821C00B588035* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}
}
// System.Void Uduino.UduinoManager::set_Instance(Uduino.UduinoManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_set_Instance_m76EA050B17B1298132A131948C7229BB8174AB4A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_set_Instance_m76EA050B17B1298132A131948C7229BB8174AB4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_0 = ((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// _instance = value;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->set__instance_4(L_2);
		return;
	}

IL_0014:
	{
		// Log.Error("You can only use one UduinoManager. Destroying the new one attached to the GameObject " + value.gameObject.name);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_3 = ___value0;
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralC8AA100DA3DA30B63C39537EA37B0B5700310DC1, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Error_m2205626C83BD88E6A7F3BD4404994CC3F4DAC42D(L_6, (bool)0, /*hidden argument*/NULL);
		// Destroy(value);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_7 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Uduino.UduinoManager::get_BaudRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_get_BaudRate_mAE43D1423722B55FF1FB89D08FE79EF61AFE4235 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// get { return baudRate; }
		int32_t L_0 = __this->get_baudRate_15();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager::set_BaudRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_set_BaudRate_m4F0C37D48097829B3E5C2328DAC26633BF548997 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { baudRate = value; }
		int32_t L_0 = ___value0;
		__this->set_baudRate_15(L_0);
		// set { baudRate = value; }
		return;
	}
}
// Uduino.HardwareReading Uduino.UduinoManager::get_ReadingMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_get_ReadingMethod_mF7DAB9CBE78D2E2C8F7F4459371728B665D74CB0 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// get { return readingMethod; }
		int32_t L_0 = __this->get_readingMethod_16();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager::set_ReadingMethod(Uduino.HardwareReading)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_set_ReadingMethod_m5FC83E59EC08A0AAB40767CF7CD8661445846122 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	int32_t V_1 = 0;
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * V_2 = NULL;
	{
		// if (Application.isPlaying && readingMethod != value)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_1 = __this->get_readingMethod_16();
		int32_t L_2 = ___value0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0054;
		}
	}
	{
		// if (readingMethod == HardwareReading.Thread)
		int32_t L_3 = __this->get_readingMethod_16();
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_mA5469BB7BBB59B8A94BB86590B051E0DFACC12DD(__this, /*hidden argument*/NULL);
		// StartThread();
		UduinoManager_StartThread_mB043025F5281A496920A2EC453A0C44884B5C7E3(__this, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0054;
	}

IL_0027:
	{
		// StopThread();
		UduinoManager_StopThread_m3485B77BE063E41C62BC10323FD24E0712F34AB9(__this, /*hidden argument*/NULL);
		// foreach (UduinoDevice device in GetAllBoard())
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_4 = UduinoManager_GetAllBoard_m45B9AB7446BD8EC0C2D26E3B6C41D52653E02BD8(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		goto IL_004e;
	}

IL_0038:
	{
		// foreach (UduinoDevice device in GetAllBoard())
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// StartCoroutine(CoroutineRead(device));
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_9 = V_2;
		RuntimeObject* L_10 = UduinoManager_CoroutineRead_m91EA8433553A457BB4F46162492300AB6E4B1476(__this, L_9, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004e:
	{
		// foreach (UduinoDevice device in GetAllBoard())
		int32_t L_12 = V_1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_0038;
		}
	}

IL_0054:
	{
		// readingMethod = value;
		int32_t L_14 = ___value0;
		__this->set_readingMethod_16(L_14);
		// }
		return;
	}
}
// System.Boolean Uduino.UduinoManager::get_LimitSendRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_get_LimitSendRate_mD771F5DC1D2BC8D2E93EAB1432D991195AFA64AB (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// get { return limitSendRate; }
		bool L_0 = __this->get_limitSendRate_17();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager::set_LimitSendRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_set_LimitSendRate_mE536C592311D23D2B265945858A83405BF63C568 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_set_LimitSendRate_mE536C592311D23D2B265945858A83405BF63C568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (limitSendRate == value)
		bool L_0 = __this->get_limitSendRate_17();
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (Application.isPlaying)
		bool L_2 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		// if (value && !autoSendIsRunning)
		bool L_3 = ___value0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		bool L_4 = __this->get_autoSendIsRunning_18();
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		// Log.Debug("Start auto read");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA(_stringLiteral75945757832DD051708CD199F55AF0DE31E325E2, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine("AutoSendBundle");
		MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD(__this, _stringLiteralC8EC1E8B6DEE5C8720FAE0C67EDB410BD4AEE40D, /*hidden argument*/NULL);
		// autoSendIsRunning = true;
		__this->set_autoSendIsRunning_18((bool)1);
		// }
		goto IL_0059;
	}

IL_003c:
	{
		// Log.Debug("Stop auto read");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA(_stringLiteral42F0E11F3A3D95EC3DB83A36D7CA83E8159F6D16, (bool)0, /*hidden argument*/NULL);
		// StopCoroutine("AutoSendBundle");
		MonoBehaviour_StopCoroutine_mC2C29B39556BFC68657F27343602BCC57AA6604F(__this, _stringLiteralC8EC1E8B6DEE5C8720FAE0C67EDB410BD4AEE40D, /*hidden argument*/NULL);
		// autoSendIsRunning = false;
		__this->set_autoSendIsRunning_18((bool)0);
	}

IL_0059:
	{
		// limitSendRate = value;
		bool L_5 = ___value0;
		__this->set_limitSendRate_17(L_5);
		// }
		return;
	}
}
// System.Int32 Uduino.UduinoManager::get_SendRateSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_get_SendRateSpeed_mEBE7F5E4F879CBE613DC8DF474915BE18EFAEB18 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// get { return sendRateSpeed; }
		int32_t L_0 = __this->get_sendRateSpeed_28();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager::set_SendRateSpeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_set_SendRateSpeed_m55CB798A3894FD45411DE61F053849369DE5D444 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { sendRateSpeed = value; }
		int32_t L_0 = ___value0;
		__this->set_sendRateSpeed_28(L_0);
		// set { sendRateSpeed = value; }
		return;
	}
}
// System.Int32 Uduino.UduinoManager::get_DiscoverTries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_get_DiscoverTries_m3B86EFFBFFA711F25BE535BFC141CE90E38B837E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// get { return discoverTries; }
		int32_t L_0 = __this->get_discoverTries_29();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager::set_DiscoverTries(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_set_DiscoverTries_m85B61DC5FAB7C2EBDCF000C691055220334F5E8B (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { discoverTries = value; }
		int32_t L_0 = ___value0;
		__this->set_discoverTries_29(L_0);
		// set { discoverTries = value; }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Uduino.UduinoManager::get_BlackListedPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * UduinoManager_get_BlackListedPorts_m53496DE5FBD5444C8AD24F26D31DDFDAC04E150F (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// get { return blackListedPorts; }
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_blackListedPorts_39();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager::set_BlackListedPorts(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_set_BlackListedPorts_m62B297A6D381221AE8C02E7044F32A5296200013 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___value0, const RuntimeMethod* method)
{
	{
		// set { blackListedPorts = value; }
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = ___value0;
		__this->set_blackListedPorts_39(L_0);
		// set { blackListedPorts = value; }
		return;
	}
}
// System.Void Uduino.UduinoManager::add_OnValueReceived(Uduino.UduinoManager/OnValueReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_add_OnValueReceived_mBC4C1BA67D0448726A0902DAFA8F347FB41988D7 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_add_OnValueReceived_mBC4C1BA67D0448726A0902DAFA8F347FB41988D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * V_0 = NULL;
	OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * V_1 = NULL;
	OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * V_2 = NULL;
	{
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_0 = __this->get_OnValueReceived_43();
		V_0 = L_0;
	}

IL_0007:
	{
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_1 = V_0;
		V_1 = L_1;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_2 = V_1;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 *)CastclassSealed((RuntimeObject*)L_4, OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544_il2cpp_TypeInfo_var));
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 ** L_5 = __this->get_address_of_OnValueReceived_43();
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_6 = V_2;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_7 = V_1;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_8 = InterlockedCompareExchangeImpl<OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 *>((OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_9 = V_0;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 *)L_9) == ((RuntimeObject*)(OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uduino.UduinoManager::remove_OnValueReceived(Uduino.UduinoManager/OnValueReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_remove_OnValueReceived_mDD4B1C809389470123C5774066D31890BAFEE315 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_remove_OnValueReceived_mDD4B1C809389470123C5774066D31890BAFEE315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * V_0 = NULL;
	OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * V_1 = NULL;
	OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * V_2 = NULL;
	{
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_0 = __this->get_OnValueReceived_43();
		V_0 = L_0;
	}

IL_0007:
	{
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_1 = V_0;
		V_1 = L_1;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_2 = V_1;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 *)CastclassSealed((RuntimeObject*)L_4, OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544_il2cpp_TypeInfo_var));
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 ** L_5 = __this->get_address_of_OnValueReceived_43();
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_6 = V_2;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_7 = V_1;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_8 = InterlockedCompareExchangeImpl<OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 *>((OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_9 = V_0;
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 *)L_9) == ((RuntimeObject*)(OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uduino.UduinoManager::add_OnDataReceived(Uduino.UduinoManager/OnDataReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_add_OnDataReceived_m6E762163B6165C3B7BA2A6918C8893602E53B784 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_add_OnDataReceived_m6E762163B6165C3B7BA2A6918C8893602E53B784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * V_0 = NULL;
	OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * V_1 = NULL;
	OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * V_2 = NULL;
	{
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_0 = __this->get_OnDataReceived_44();
		V_0 = L_0;
	}

IL_0007:
	{
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_1 = V_0;
		V_1 = L_1;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_2 = V_1;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 *)CastclassSealed((RuntimeObject*)L_4, OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92_il2cpp_TypeInfo_var));
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 ** L_5 = __this->get_address_of_OnDataReceived_44();
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_6 = V_2;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_7 = V_1;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_8 = InterlockedCompareExchangeImpl<OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 *>((OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_9 = V_0;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 *)L_9) == ((RuntimeObject*)(OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uduino.UduinoManager::remove_OnDataReceived(Uduino.UduinoManager/OnDataReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_remove_OnDataReceived_m3EE818866FB167D6984BD89B7D26EF7F42DC1DC3 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_remove_OnDataReceived_m3EE818866FB167D6984BD89B7D26EF7F42DC1DC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * V_0 = NULL;
	OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * V_1 = NULL;
	OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * V_2 = NULL;
	{
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_0 = __this->get_OnDataReceived_44();
		V_0 = L_0;
	}

IL_0007:
	{
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_1 = V_0;
		V_1 = L_1;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_2 = V_1;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 *)CastclassSealed((RuntimeObject*)L_4, OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92_il2cpp_TypeInfo_var));
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 ** L_5 = __this->get_address_of_OnDataReceived_44();
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_6 = V_2;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_7 = V_1;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_8 = InterlockedCompareExchangeImpl<OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 *>((OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_9 = V_0;
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 *)L_9) == ((RuntimeObject*)(OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uduino.UduinoManager::add_OnBoardConnected(Uduino.UduinoManager/OnBoardConnectedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_add_OnBoardConnected_m9818275EA1C759C8CD3C1ADCB93DB7EAE7DCF41D (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_add_OnBoardConnected_m9818275EA1C759C8CD3C1ADCB93DB7EAE7DCF41D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * V_0 = NULL;
	OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * V_1 = NULL;
	OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * V_2 = NULL;
	{
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_0 = __this->get_OnBoardConnected_45();
		V_0 = L_0;
	}

IL_0007:
	{
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_1 = V_0;
		V_1 = L_1;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_2 = V_1;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 *)CastclassSealed((RuntimeObject*)L_4, OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384_il2cpp_TypeInfo_var));
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 ** L_5 = __this->get_address_of_OnBoardConnected_45();
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_6 = V_2;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_7 = V_1;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_8 = InterlockedCompareExchangeImpl<OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 *>((OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_9 = V_0;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 *)L_9) == ((RuntimeObject*)(OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uduino.UduinoManager::remove_OnBoardConnected(Uduino.UduinoManager/OnBoardConnectedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_remove_OnBoardConnected_mDD0618A79C9DB5E48C976B90BE118295050B717E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_remove_OnBoardConnected_mDD0618A79C9DB5E48C976B90BE118295050B717E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * V_0 = NULL;
	OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * V_1 = NULL;
	OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * V_2 = NULL;
	{
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_0 = __this->get_OnBoardConnected_45();
		V_0 = L_0;
	}

IL_0007:
	{
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_1 = V_0;
		V_1 = L_1;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_2 = V_1;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 *)CastclassSealed((RuntimeObject*)L_4, OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384_il2cpp_TypeInfo_var));
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 ** L_5 = __this->get_address_of_OnBoardConnected_45();
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_6 = V_2;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_7 = V_1;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_8 = InterlockedCompareExchangeImpl<OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 *>((OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_9 = V_0;
		OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 *)L_9) == ((RuntimeObject*)(OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uduino.UduinoManager::add_OnBoardDisconnected(Uduino.UduinoManager/OnBoardDisconnectedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_add_OnBoardDisconnected_m1174664673B8597292A11BAE9A4F3305BDCEC2CA (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_add_OnBoardDisconnected_m1174664673B8597292A11BAE9A4F3305BDCEC2CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * V_0 = NULL;
	OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * V_1 = NULL;
	OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * V_2 = NULL;
	{
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_0 = __this->get_OnBoardDisconnected_46();
		V_0 = L_0;
	}

IL_0007:
	{
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_1 = V_0;
		V_1 = L_1;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_2 = V_1;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 *)CastclassSealed((RuntimeObject*)L_4, OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40_il2cpp_TypeInfo_var));
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 ** L_5 = __this->get_address_of_OnBoardDisconnected_46();
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_6 = V_2;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_7 = V_1;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_8 = InterlockedCompareExchangeImpl<OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 *>((OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_9 = V_0;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 *)L_9) == ((RuntimeObject*)(OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uduino.UduinoManager::remove_OnBoardDisconnected(Uduino.UduinoManager/OnBoardDisconnectedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_remove_OnBoardDisconnected_m5473415E00CBFD4DE7D6AC6BD3B30B1E7ED843BD (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_remove_OnBoardDisconnected_m5473415E00CBFD4DE7D6AC6BD3B30B1E7ED843BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * V_0 = NULL;
	OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * V_1 = NULL;
	OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * V_2 = NULL;
	{
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_0 = __this->get_OnBoardDisconnected_46();
		V_0 = L_0;
	}

IL_0007:
	{
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_1 = V_0;
		V_1 = L_1;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_2 = V_1;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 *)CastclassSealed((RuntimeObject*)L_4, OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40_il2cpp_TypeInfo_var));
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 ** L_5 = __this->get_address_of_OnBoardDisconnected_46();
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_6 = V_2;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_7 = V_1;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_8 = InterlockedCompareExchangeImpl<OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 *>((OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_9 = V_0;
		OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 *)L_9) == ((RuntimeObject*)(OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Uduino.UduinoManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_Awake_m1F10A5F520F5BF4B28649CA143486F95558D6504 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_Awake_m1F10A5F520F5BF4B28649CA143486F95558D6504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Uduino is not setup ! Please setup Uduino before starting the game.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral6CD4D4FA037E28BD90EB3F8F5B63736A75912AC9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::DiscoverWithDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_DiscoverWithDelay_mCEC3A3B70F05B62969A1ABD257A0B5D9D03721CE (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_DiscoverWithDelay_mCEC3A3B70F05B62969A1ABD257A0B5D9D03721CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("DelayedDiscover", delay);
		float L_0 = ___delay0;
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_StartCoroutine_mCD250A96284E3C39D579CEC447432681DE8D1E44(__this, _stringLiteralD51FD1FA078AAC425FACEE809654486FE077256D, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Uduino.UduinoManager::DelayedDiscover(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UduinoManager_DelayedDiscover_m4E181854B6BAC3121F14808320A52E7B49177601 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_DelayedDiscover_m4E181854B6BAC3121F14808320A52E7B49177601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * L_0 = (U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 *)il2cpp_codegen_object_new(U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54_il2cpp_TypeInfo_var);
		U3CDelayedDiscoverU3Ed__89__ctor_m7E394E9B30657288D1CAE916E10417EC41E79EB5(L_0, 0, /*hidden argument*/NULL);
		U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * L_2 = L_1;
		float L_3 = ___delay0;
		NullCheck(L_2);
		L_2->set_delay_2(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Uduino.UduinoManager::RestartIfBoardNotDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UduinoManager_RestartIfBoardNotDetected_m500F56B0D8C2D0286E1285544F2CB04FAACA9A69 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_RestartIfBoardNotDetected_m500F56B0D8C2D0286E1285544F2CB04FAACA9A69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * L_0 = (U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 *)il2cpp_codegen_object_new(U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2_il2cpp_TypeInfo_var);
		U3CRestartIfBoardNotDetectedU3Ed__90__ctor_mF97C754143D0A9BCBA72C399720574D6124916F1(L_0, 0, /*hidden argument*/NULL);
		U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Uduino.UduinoManager::DiscoverPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_DiscoverPorts_mDA817C0313CCA4C1313B961E98E29F5B88F1919A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_DiscoverPorts_mDA817C0313CCA4C1313B961E98E29F5B88F1919A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CloseAllDevices();
		UduinoManager_CloseAllDevices_m0F268F039DC29CD4A25AF1719718BEED728F32C7(__this, /*hidden argument*/NULL);
		// if (boardConnection == null || !Application.isPlaying)
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_0 = __this->get_boardConnection_11();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}

IL_0015:
	{
		// boardConnection = UduinoConnection.GetFinder(this, platformType, connectionMethod);
		int32_t L_2 = __this->get_platformType_48();
		int32_t L_3 = __this->get_connectionMethod_49();
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_4 = UduinoConnection_GetFinder_mB6830A1588733B54E1FD6F1C059C521EDDA91158(__this, L_2, L_3, /*hidden argument*/NULL);
		__this->set_boardConnection_11(L_4);
	}

IL_002d:
	{
		// if (boardConnection != null)
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_5 = __this->get_boardConnection_11();
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// boardConnection.FindBoards(this);
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_6 = __this->get_boardConnection_11();
		NullCheck(L_6);
		VirtActionInvoker1< UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * >::Invoke(5 /* System.Void Uduino.UduinoConnection::FindBoards(Uduino.UduinoManager) */, L_6, __this);
		// } else
		return;
	}

IL_0042:
	{
		// Log.Warning("You didn't select any platform. Disabling Uduino.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Warning_m7FC7B8CC24EEA8D85D60FA0BFB581628525CD3AC(_stringLiteral5E4DA4C3EDD4F78FCC5A7C2888A770480C395EA6, (bool)0, /*hidden argument*/NULL);
		// this.enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::AddUduinoBoard(System.String,Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_AddUduinoBoard_m373D4BBEDFDAEB217F146AA300A036320953A709 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___name0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___board1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_AddUduinoBoard_m373D4BBEDFDAEB217F146AA300A036320953A709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (uduinoDevices)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				// Log.Info("Board <color=#ff3355>" + name + "</color> <color=#2196F3>[" + board.getIdentity() + "]</color> detected.");
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
				NullCheck(L_3);
				ArrayElementTypeCheck (L_3, _stringLiteralA93910695ED7D7FBAC0CE8A59C6385D8F310216A);
				(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA93910695ED7D7FBAC0CE8A59C6385D8F310216A);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
				String_t* L_5 = ___name0;
				NullCheck(L_4);
				ArrayElementTypeCheck (L_4, L_5);
				(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_4;
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, _stringLiteral9FA7093C83DECDB6AFB93DF5EF06282F74AC04D1);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9FA7093C83DECDB6AFB93DF5EF06282F74AC04D1);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_8 = ___board1;
				NullCheck(L_8);
				String_t* L_9 = UduinoDevice_getIdentity_mCB7CF214F38F20E6D9140850B801831C5786A502_inline(L_8, /*hidden argument*/NULL);
				NullCheck(L_7);
				ArrayElementTypeCheck (L_7, L_9);
				(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
				StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_7;
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, _stringLiteralE15F8BFC9B32CF92737566D51FB63AE8B2FFBC5E);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE15F8BFC9B32CF92737566D51FB63AE8B2FFBC5E);
				String_t* L_11 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_10, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
				Log_Info_m08CFA638194730410A989631C097C045098A5F03(L_11, (bool)0, /*hidden argument*/NULL);
				// uduinoDevices.Add(name, board);
				Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_12 = __this->get_uduinoDevices_5();
				String_t* L_13 = ___name0;
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_14 = ___board1;
				NullCheck(L_12);
				Dictionary_2_Add_m0C1540577D28C292ECE5F4C850995A05E49EA7E9(L_12, L_13, L_14, /*hidden argument*/Dictionary_2_Add_m0C1540577D28C292ECE5F4C850995A05E49EA7E9_RuntimeMethod_var);
				// }
				IL2CPP_LEAVE(0xCB, FINALLY_006d);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0056;
				throw e;
			}

CATCH_0056:
			{ // begin catch(System.Exception)
				// catch (Exception)
				// throw new BoardAlreadyExistException("Board with the name " + name + " is already connected ! Try to change the name of one of the arduino board");
				String_t* L_15 = ___name0;
				String_t* L_16 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral23164C14E57DB9200E63A0B6E3A1768A4D4EA64C, L_15, _stringLiteralADCF5BDBF18ABDB73B68B4FBA985C05289DCE1C1, /*hidden argument*/NULL);
				BoardAlreadyExistException_t7FA252A04F70FB74F0362FA40DF4DD48E0918A78 * L_17 = (BoardAlreadyExistException_t7FA252A04F70FB74F0362FA40DF4DD48E0918A78 *)il2cpp_codegen_object_new(BoardAlreadyExistException_t7FA252A04F70FB74F0362FA40DF4DD48E0918A78_il2cpp_TypeInfo_var);
				BoardAlreadyExistException__ctor_m1B54CDF66C8D82DF511C08B18F728159B8D6492A(L_17, L_16, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, UduinoManager_AddUduinoBoard_m373D4BBEDFDAEB217F146AA300A036320953A709_RuntimeMethod_var);
			} // end catch (depth: 3)
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_006d;
		}

FINALLY_006d:
		{ // begin finally (depth: 2)
			{
				// board.alwaysRead = alwaysRead;
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_18 = ___board1;
				bool L_19 = __this->get_alwaysRead_22();
				NullCheck(L_18);
				L_18->set_alwaysRead_10(L_19);
				// board.readAfterCommand = readAfterCommand;
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_20 = ___board1;
				bool L_21 = __this->get_readAfterCommand_23();
				NullCheck(L_20);
				L_20->set_readAfterCommand_11(L_21);
				// StartReading(board);
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_22 = ___board1;
				UduinoManager_StartReading_m178093CC7BC5AD23C21B9DF44DC2F479DF435365(__this, L_22, /*hidden argument*/NULL);
				// InitAllArduinos();
				UduinoManager_InitAllArduinos_m6A1219CEECC8BD85FBE6402E6215B1906B6F7A28(__this, /*hidden argument*/NULL);
				// board.WriteToArduino("connected", instant: true);
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_23 = ___board1;
				NullCheck(L_23);
				VirtFuncInvoker3< bool, String_t*, RuntimeObject *, bool >::Invoke(6 /* System.Boolean Uduino.UduinoDevice::WriteToArduino(System.String,System.Object,System.Boolean) */, L_23, _stringLiteralC5E23457AA7C2B399D3293C894EBBD3F530F1BDA, NULL, (bool)1);
				// if (OnBoardConnected != null)
				OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_24 = __this->get_OnBoardConnected_45();
				if (!L_24)
				{
					goto IL_00b4;
				}
			}

IL_00a8:
			{
				// OnBoardConnected(board);
				OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * L_25 = __this->get_OnBoardConnected_45();
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_26 = ___board1;
				NullCheck(L_25);
				OnBoardConnectedDelegate_Invoke_m219314AF6A3A131459C1528782E1DB53739A09A1(L_25, L_26, /*hidden argument*/NULL);
			}

IL_00b4:
			{
				// OnBoardConnectedEvent.Invoke(board);
				eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * L_27 = __this->get_OnBoardConnectedEvent_41();
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_28 = ___board1;
				NullCheck(L_27);
				UnityEvent_1_Invoke_m17062A6318EC9C67FE24E1FCE80196587551711B(L_27, L_28, /*hidden argument*/UnityEvent_1_Invoke_m17062A6318EC9C67FE24E1FCE80196587551711B_RuntimeMethod_var);
				// }
				IL2CPP_END_FINALLY(109)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(109)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xCB, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		{
			bool L_29 = V_1;
			if (!L_29)
			{
				goto IL_00ca;
			}
		}

IL_00c4:
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_30 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_30, /*hidden argument*/NULL);
		}

IL_00ca:
		{
			IL2CPP_END_FINALLY(193)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::GetPortState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_GetPortState_mB84C22924D8B9FA366577F4E7E28FC09AA91EA1C (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetPortState_mB84C22924D8B9FA366577F4E7E28FC09AA91EA1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (uduinoDevices.Count == 0)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_0, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Log.Info("Trying to close and no port are currently open");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Info_m08CFA638194730410A989631C097C045098A5F03(_stringLiteral860872FDAA3CE4D5D6F5D0EF1654AE6443614143, (bool)0, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_2 = __this->get_uduinoDevices_5();
		NullCheck(L_2);
		Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  L_3 = Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002e;
		}

IL_0026:
		{
			// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
			Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_inline((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_RuntimeMethod_var);
		}

IL_002e:
		{
			// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
			bool L_4 = Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0026;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Boolean Uduino.UduinoManager::hasBoardConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_hasBoardConnected_mB76C9FD61AEC9B4637F9919FF2C65EB23FCA951A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_hasBoardConnected_mB76C9FD61AEC9B4637F9919FF2C65EB23FCA951A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return uduinoDevices.Count == 0 ? false : true;
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_0, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean Uduino.UduinoManager::GetBoard(System.String,Uduino.UduinoDevice[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_GetBoard_m18EF75FF7775B2F78E91214B4B84B481748F4491 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___name0, UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** ___devices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetBoard_m18EF75FF7775B2F78E91214B4B84B481748F4491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UduinoTargetExists(name))
		String_t* L_0 = ___name0;
		bool L_1 = UduinoManager_UduinoTargetExists_m027610AB206CBE212AB76AC264A30D30B7E79D5D(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// devices = new UduinoDevice[1];
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_2 = ___devices1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)SZArrayNew(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771_il2cpp_TypeInfo_var, (uint32_t)1);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
		// devices[0] = uduinoDevices[name];
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_4 = ___devices1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_5 = *((UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)L_4);
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_6 = __this->get_uduinoDevices_5();
		String_t* L_7 = ___name0;
		NullCheck(L_6);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_8 = Dictionary_2_get_Item_m6A96CE2CA53893FBAF20C4D6D63BAB5C64B3B596(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m6A96CE2CA53893FBAF20C4D6D63BAB5C64B3B596_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)L_8);
		// return true;
		return (bool)1;
	}

IL_0023:
	{
		// devices = new UduinoDevice[uduinoDevices.Count];
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_9 = ___devices1;
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_10 = __this->get_uduinoDevices_5();
		NullCheck(L_10);
		int32_t L_11 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_10, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_12 = (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)SZArrayNew(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771_il2cpp_TypeInfo_var, (uint32_t)L_11);
		*((RuntimeObject **)L_9) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)(RuntimeObject *)L_12);
		// uduinoDevices.Values.CopyTo(devices, 0);
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_13 = __this->get_uduinoDevices_5();
		NullCheck(L_13);
		ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * L_14 = Dictionary_2_get_Values_m0EEF7DE234518B8CDECFD6B99FA12BECD62D41A3(L_13, /*hidden argument*/Dictionary_2_get_Values_m0EEF7DE234518B8CDECFD6B99FA12BECD62D41A3_RuntimeMethod_var);
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_15 = ___devices1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_16 = *((UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)L_15);
		NullCheck(L_14);
		ValueCollection_CopyTo_mE67D31EA88E60447788EC99960766028BB2F5A3A(L_14, L_16, 0, /*hidden argument*/ValueCollection_CopyTo_mE67D31EA88E60447788EC99960766028BB2F5A3A_RuntimeMethod_var);
		// if (devices.Length == 0) return false;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_17 = ___devices1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_18 = *((UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)L_17);
		NullCheck(L_18);
		if ((((RuntimeArray*)L_18)->max_length))
		{
			goto IL_004f;
		}
	}
	{
		// if (devices.Length == 0) return false;
		return (bool)0;
	}

IL_004f:
	{
		// else return true;
		return (bool)1;
	}
}
// Uduino.UduinoDevice[] Uduino.UduinoManager::GetAllBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* UduinoManager_GetAllBoard_m45B9AB7446BD8EC0C2D26E3B6C41D52653E02BD8 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetAllBoard_m45B9AB7446BD8EC0C2D26E3B6C41D52653E02BD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	{
		// UduinoDevice[] devices = new UduinoDevice[uduinoDevices.Count];
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_0, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_2 = (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)SZArrayNew(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// uduinoDevices.Values.CopyTo(devices, 0);
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_3 = __this->get_uduinoDevices_5();
		NullCheck(L_3);
		ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * L_4 = Dictionary_2_get_Values_m0EEF7DE234518B8CDECFD6B99FA12BECD62D41A3(L_3, /*hidden argument*/Dictionary_2_get_Values_m0EEF7DE234518B8CDECFD6B99FA12BECD62D41A3_RuntimeMethod_var);
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_5 = V_0;
		NullCheck(L_4);
		ValueCollection_CopyTo_mE67D31EA88E60447788EC99960766028BB2F5A3A(L_4, L_5, 0, /*hidden argument*/ValueCollection_CopyTo_mE67D31EA88E60447788EC99960766028BB2F5A3A_RuntimeMethod_var);
		// return devices;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Uduino.UduinoManager::GetBoard(Uduino.UduinoDevice,Uduino.UduinoDevice[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** ___devices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UduinoTargetExists(device))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___device0;
		bool L_1 = UduinoManager_UduinoTargetExists_mBE8F04B703BA9D69F4A43D48ADEE5FD115A20203(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// devices = new UduinoDevice[1];
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_2 = ___devices1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)SZArrayNew(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771_il2cpp_TypeInfo_var, (uint32_t)1);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
		// devices[0] = device;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_4 = ___devices1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_5 = *((UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)L_4);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = ___device0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)L_6);
		// return true;
		return (bool)1;
	}

IL_0018:
	{
		// devices = new UduinoDevice[uduinoDevices.Count];
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_7 = ___devices1;
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_8 = __this->get_uduinoDevices_5();
		NullCheck(L_8);
		int32_t L_9 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_8, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_10 = (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771*)SZArrayNew(UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771_il2cpp_TypeInfo_var, (uint32_t)L_9);
		*((RuntimeObject **)L_7) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)L_10);
		// uduinoDevices.Values.CopyTo(devices, 0);
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_11 = __this->get_uduinoDevices_5();
		NullCheck(L_11);
		ValueCollection_t46D6949FD153F032774CB918BD1C15725080180A * L_12 = Dictionary_2_get_Values_m0EEF7DE234518B8CDECFD6B99FA12BECD62D41A3(L_11, /*hidden argument*/Dictionary_2_get_Values_m0EEF7DE234518B8CDECFD6B99FA12BECD62D41A3_RuntimeMethod_var);
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_13 = ___devices1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_14 = *((UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)L_13);
		NullCheck(L_12);
		ValueCollection_CopyTo_mE67D31EA88E60447788EC99960766028BB2F5A3A(L_12, L_14, 0, /*hidden argument*/ValueCollection_CopyTo_mE67D31EA88E60447788EC99960766028BB2F5A3A_RuntimeMethod_var);
		// if (devices.Length == 0) return false;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771** L_15 = ___devices1;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_16 = *((UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)L_15);
		NullCheck(L_16);
		if ((((RuntimeArray*)L_16)->max_length))
		{
			goto IL_0044;
		}
	}
	{
		// if (devices.Length == 0) return false;
		return (bool)0;
	}

IL_0044:
	{
		// else return true;
		return (bool)1;
	}
}
// Uduino.UduinoDevice Uduino.UduinoManager::GetBoard(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * UduinoManager_GetBoard_m3935921AA593BC3353009C89A92728EFDF4FE000 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetBoard_m3935921AA593BC3353009C89A92728EFDF4FE000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * V_0 = NULL;
	{
		// if (UduinoTargetExists(name))
		String_t* L_0 = ___name0;
		bool L_1 = UduinoManager_UduinoTargetExists_m027610AB206CBE212AB76AC264A30D30B7E79D5D(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// UduinoDevice device = null;
		V_0 = (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL;
		// uduinoDevices.TryGetValue(name, out device);
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_2 = __this->get_uduinoDevices_5();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		Dictionary_2_TryGetValue_m7DA909F956100BBC672D809737E36516C7FA9F51(L_2, L_3, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m7DA909F956100BBC672D809737E36516C7FA9F51_RuntimeMethod_var);
		// return device;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_4 = V_0;
		return L_4;
	}

IL_001c:
	{
		// Log.Error("No board with the name " + name + " is found in the board list.");
		String_t* L_5 = ___name0;
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral6E4577EBF6317F736219D48612F608870F0D0E90, L_5, _stringLiteral44E6F22664CB2FB8FD804B5B139F4A621A8533F8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Error_m2205626C83BD88E6A7F3BD4404994CC3F4DAC42D(L_6, (bool)0, /*hidden argument*/NULL);
		// return null;
		return (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL;
	}
}
// System.Boolean Uduino.UduinoManager::UduinoTargetExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_UduinoTargetExists_m027610AB206CBE212AB76AC264A30D30B7E79D5D (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_UduinoTargetExists_m027610AB206CBE212AB76AC264A30D30B7E79D5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == "" || target == null) return false;
		String_t* L_0 = ___target0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___target0;
		if (L_2)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// if (target == "" || target == null) return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (uduinoDevices.ContainsKey(target))
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_3 = __this->get_uduinoDevices_5();
		String_t* L_4 = ___target0;
		NullCheck(L_3);
		bool L_5 = Dictionary_2_ContainsKey_mEA90595FDA692A60DA663B7C7943B63266C08AFF(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_mEA90595FDA692A60DA663B7C7943B63266C08AFF_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Uduino.UduinoManager::UduinoTargetExists(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_UduinoTargetExists_mBE8F04B703BA9D69F4A43D48ADEE5FD115A20203 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_UduinoTargetExists_mBE8F04B703BA9D69F4A43D48ADEE5FD115A20203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null) return false;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if (target == null) return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (uduinoDevices.ContainsValue(target))
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_1 = __this->get_uduinoDevices_5();
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_2 = ___target0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsValue_m7D39562E7698F24BD42E630C10DEF3649855033A(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsValue_m7D39562E7698F24BD42E630C10DEF3649855033A_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0015:
	{
		// if (target != null)
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_4 = ___target0;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// Log.Warning("The object " + target + " cannot be found. Are you sure it's connected and correctly detected ?");
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_5 = ___target0;
		String_t* L_6 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralA767A88E839DF23AB859D35BB0BCE9B4C599EA50, L_5, _stringLiteralF9567B9F05C7AB491BBF8A1CDC2F56E22E6B570F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Warning_m7FC7B8CC24EEA8D85D60FA0BFB581628525CD3AC(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Uduino.UduinoManager::SetBoardType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SetBoardType_mA65C2ED43084CC33A0613DEF7E800591299FD80E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___type0, const RuntimeMethod* method)
{
	{
		// SetBoardType(null, type);
		String_t* L_0 = ___type0;
		UduinoManager_SetBoardType_m7951BAAC245D0008C16B5E67D9D3BCDBC75D298F(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::SetBoardType(Uduino.UduinoDevice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SetBoardType_m7951BAAC245D0008C16B5E67D9D3BCDBC75D298F (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_SetBoardType_m7951BAAC245D0008C16B5E67D9D3BCDBC75D298F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int boardTypeId = BoardsTypeList.Boards.GetBoardIdFromName(type);
		IL2CPP_RUNTIME_CLASS_INIT(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_il2cpp_TypeInfo_var);
		BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * L_0 = BoardsTypeList_get_Boards_m8225D62ED9617A8137A71184B2DC9FF8DEEBD95E(/*hidden argument*/NULL);
		String_t* L_1 = ___type1;
		NullCheck(L_0);
		int32_t L_2 = BoardsTypeList_GetBoardIdFromName_mCCD07E472AF183C4C8025422A404E787C1C6D7FF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// SetBoardType(target, boardTypeId);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_3 = ___target0;
		int32_t L_4 = V_0;
		UduinoManager_SetBoardType_m99DBB90933875DCAB5EDE08DA5E56B546A913257(__this, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::SetBoardType(Uduino.UduinoDevice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SetBoardType_m99DBB90933875DCAB5EDE08DA5E56B546A913257 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___boardTypeId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_SetBoardType_m99DBB90933875DCAB5EDE08DA5E56B546A913257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (GetBoard(target, out devices))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		bool L_1 = UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716(__this, L_0, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_2 = V_0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_001e;
	}

IL_0011:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// device._boardType = boardTypeId;
		int32_t L_7 = ___boardTypeId1;
		NullCheck(L_6);
		L_6->set__boardType_1(L_7);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001e:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_9 = V_2;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0025:
	{
		// Log.Info("Setting board type to a non-existant board");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Info_m08CFA638194730410A989631C097C045098A5F03(_stringLiteral5BF355A682C58F09210B5766A9C8499C2A0A4F89, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Uduino.UduinoManager::GetPinNumberFromBoardType(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_GetPinNumberFromBoardType_m7F36FDABE5825DCD683A1C62ADDFB94C450D9C19 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___boardType0, String_t* ___pin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetPinNumberFromBoardType_m7F36FDABE5825DCD683A1C62ADDFB94C450D9C19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BoardsTypeList.Boards.GetBoardFromName(boardType).GetPin(pin);
		IL2CPP_RUNTIME_CLASS_INIT(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_il2cpp_TypeInfo_var);
		BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * L_0 = BoardsTypeList_get_Boards_m8225D62ED9617A8137A71184B2DC9FF8DEEBD95E(/*hidden argument*/NULL);
		String_t* L_1 = ___boardType0;
		NullCheck(L_0);
		ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * L_2 = BoardsTypeList_GetBoardFromName_mE625D767DE28119EBBF85C46A7AC29A1A7A3C58C(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___pin1;
		NullCheck(L_2);
		int32_t L_4 = ArduinoBoardType_GetPin_m9F00BAA39BF6C751A58C079F52D987D4B3BA155C(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Uduino.UduinoManager::GetPinNumberFromBoardType(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_GetPinNumberFromBoardType_mB2522AE50B6ED567F4B0B926131FD9835C1E6D6F (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___boardType0, int32_t ___pin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetPinNumberFromBoardType_mB2522AE50B6ED567F4B0B926131FD9835C1E6D6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return BoardsTypeList.Boards.GetBoardFromName(boardType).GetPin(pin);
		IL2CPP_RUNTIME_CLASS_INIT(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_il2cpp_TypeInfo_var);
		BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * L_0 = BoardsTypeList_get_Boards_m8225D62ED9617A8137A71184B2DC9FF8DEEBD95E(/*hidden argument*/NULL);
		String_t* L_1 = ___boardType0;
		NullCheck(L_0);
		ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * L_2 = BoardsTypeList_GetBoardFromName_mE625D767DE28119EBBF85C46A7AC29A1A7A3C58C(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___pin1;
		NullCheck(L_2);
		int32_t L_4 = ArduinoBoardType_GetPin_m16D7C266E9BBDA20E83248984593D8608BC67150(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Uduino.UduinoManager::GetPinFromBoard(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_GetPinFromBoard_m522E2AD96EAEB465ADBBE73929F4B29C816285CF (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___pin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetPinFromBoard_m522E2AD96EAEB465ADBBE73929F4B29C816285CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if(uduinoDevices.Count == 0)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_0, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		// return BoardsTypeList.Boards.GetBoardFromId(defaultArduinoBoardType).GetPin(pin);
		IL2CPP_RUNTIME_CLASS_INIT(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_il2cpp_TypeInfo_var);
		BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * L_2 = BoardsTypeList_get_Boards_m8225D62ED9617A8137A71184B2DC9FF8DEEBD95E(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_defaultArduinoBoardType_26();
		NullCheck(L_2);
		ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * L_4 = BoardsTypeList_GetBoardFromId_m45E7B67053D64181F513EA7A0C65A86000EC7FDE(L_2, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___pin0;
		NullCheck(L_4);
		int32_t L_6 = ArduinoBoardType_GetPin_m9F00BAA39BF6C751A58C079F52D987D4B3BA155C(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0024:
	{
		// var e = uduinoDevices.GetEnumerator();
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_7 = __this->get_uduinoDevices_5();
		NullCheck(L_7);
		Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  L_8 = Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632(L_7, /*hidden argument*/Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632_RuntimeMethod_var);
		V_0 = L_8;
		// e.MoveNext();
		Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7_RuntimeMethod_var);
		// UduinoDevice anElement = e.Current.Value;
		KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  L_9 = Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_inline((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_RuntimeMethod_var);
		V_2 = L_9;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_10 = KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_inline((KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_RuntimeMethod_var);
		// int currentBoardType = anElement._boardType;
		NullCheck(L_10);
		int32_t L_11 = L_10->get__boardType_1();
		V_1 = L_11;
		// return BoardsTypeList.Boards.GetBoardFromId(currentBoardType).GetPin(pin);
		IL2CPP_RUNTIME_CLASS_INIT(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_il2cpp_TypeInfo_var);
		BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * L_12 = BoardsTypeList_get_Boards_m8225D62ED9617A8137A71184B2DC9FF8DEEBD95E(/*hidden argument*/NULL);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * L_14 = BoardsTypeList_GetBoardFromId_m45E7B67053D64181F513EA7A0C65A86000EC7FDE(L_12, L_13, /*hidden argument*/NULL);
		String_t* L_15 = ___pin0;
		NullCheck(L_14);
		int32_t L_16 = ArduinoBoardType_GetPin_m9F00BAA39BF6C751A58C079F52D987D4B3BA155C(L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 Uduino.UduinoManager::GetPinFromBoard(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_GetPinFromBoard_mC5E972CE79A99B55F4B55B7F6BEA8C68162B3235 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_GetPinFromBoard_mC5E972CE79A99B55F4B55B7F6BEA8C68162B3235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetPinFromBoard(pin+"");
		int32_t L_0 = ___pin0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_m798542DE19B3F02DC4F4B777BB2E73169F129DE1(L_2, /*hidden argument*/NULL);
		int32_t L_4 = UduinoManager_GetPinFromBoard_m522E2AD96EAEB465ADBBE73929F4B29C816285CF(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Uduino.UduinoManager::isConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_isConnected_m9BFE8648260145C2E99DB8705A6D301C06CD392E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_isConnected_m9BFE8648260145C2E99DB8705A6D301C06CD392E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return uduinoDevices.Count != 0;
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_0, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Uduino.UduinoManager::pinMode(System.Int32,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_pinMode_mA4EBB71FBE0294F3B8A2EE42BC04769C4F7BE4E3 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// pinMode(null, pin, mode);
		int32_t L_0 = ___pin0;
		int32_t L_1 = ___mode1;
		UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::pinMode(Uduino.AnalogPin,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_pinMode_m3C90CB6C4AD4CEB822FB134DF04EA1D98AC0B395 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// pinMode(null, PinValueToBoardValue(pin), mode);
		int32_t L_0 = ___pin0;
		int32_t L_1 = UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1(__this, L_0, (-1), /*hidden argument*/NULL);
		int32_t L_2 = ___mode1;
		UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::pinMode(Uduino.UduinoDevice,Uduino.AnalogPin,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_pinMode_m5C5D7A960525061D761372C6D06938E52B3F43E8 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___mode2, const RuntimeMethod* method)
{
	{
		// pinMode(target, PinValueToBoardValue(pin, target._boardType), mode);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		int32_t L_1 = ___pin1;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__boardType_1();
		int32_t L_4 = UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1(__this, L_1, L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___mode2;
		UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777(__this, L_0, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::pinMode(Uduino.UduinoDevice,System.Int32,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___mode2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * V_2 = NULL;
	Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B18_0 = NULL;
	{
		// bool pinExists = false;
		V_0 = (bool)0;
		// foreach (Pin pinTarget in pins)
		List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_0 = __this->get_pins_6();
		NullCheck(L_0);
		Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  L_1 = List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B(L_0, /*hidden argument*/List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f2;
		}

IL_0013:
		{
			// foreach (Pin pinTarget in pins)
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_2 = Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_inline((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_RuntimeMethod_var);
			V_2 = L_2;
			// if (pinTarget.PinTargetExists(target, pin))
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_3 = V_2;
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_4 = ___target0;
			int32_t L_5 = ___pin1;
			NullCheck(L_3);
			bool L_6 = Pin_PinTargetExists_m266E03042BDEE701F9445B143F570C34723C0CF5(L_3, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_00f2;
			}
		}

IL_0028:
		{
			// pinExists = true;
			V_0 = (bool)1;
			// if ( pinTarget.pinMode != mode) {
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_7 = V_2;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_pinMode_3();
			int32_t L_9 = ___mode2;
			if ((((int32_t)L_8) == ((int32_t)L_9)))
			{
				goto IL_00b7;
			}
		}

IL_0036:
		{
			// Log.Debug("Override pinMode for the pin <color=#4CAF50>" + pin + "</color> from <color=#2e7d32>" + pinTarget.pinMode + "</color> to <color=#2e7d32>" + mode + "</color>.");
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, _stringLiteralC4FC59D17BAA54A1C093E5848D49E81FB3615877);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC4FC59D17BAA54A1C093E5848D49E81FB3615877);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
			int32_t L_13 = ___pin1;
			int32_t L_14 = L_13;
			RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_15);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_12;
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, _stringLiteral34F66B43E9E9CDD93C48788AD6E5863FAB1FC5B4);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral34F66B43E9E9CDD93C48788AD6E5863FAB1FC5B4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_18 = V_2;
			NullCheck(L_18);
			int32_t L_19 = L_18->get_pinMode_3();
			int32_t L_20 = L_19;
			RuntimeObject * L_21 = Box(PinMode_tC4C0981AF254662628B9C03A310717AD7779C430_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_17);
			ArrayElementTypeCheck (L_17, L_21);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_17;
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, _stringLiteral46C006ABC7A76999D50E7D9ECC954B62D46B21FD);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral46C006ABC7A76999D50E7D9ECC954B62D46B21FD);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
			int32_t L_24 = ___mode2;
			int32_t L_25 = L_24;
			RuntimeObject * L_26 = Box(PinMode_tC4C0981AF254662628B9C03A310717AD7779C430_il2cpp_TypeInfo_var, &L_25);
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_26);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_26);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_23;
			NullCheck(L_27);
			ArrayElementTypeCheck (L_27, _stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
			String_t* L_28 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
			Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA(L_28, (bool)0, /*hidden argument*/NULL);
			// if ((target == null && uduinoDevices.Count != 0) || (target != null && UduinoTargetExists(target)))
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_29 = ___target0;
			if (L_29)
			{
				goto IL_0097;
			}
		}

IL_008a:
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_30 = __this->get_uduinoDevices_5();
			NullCheck(L_30);
			int32_t L_31 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_30, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_00a3;
			}
		}

IL_0097:
		{
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_32 = ___target0;
			if (!L_32)
			{
				goto IL_00ad;
			}
		}

IL_009a:
		{
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_33 = ___target0;
			bool L_34 = UduinoManager_UduinoTargetExists_mBE8F04B703BA9D69F4A43D48ADEE5FD115A20203(__this, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_00ad;
			}
		}

IL_00a3:
		{
			// pinTarget.OverridePinMode(mode);
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_35 = V_2;
			int32_t L_36 = ___mode2;
			NullCheck(L_35);
			Pin_OverridePinMode_m0ED1435172D483F9707D7B9FFEFD77F23177864F(L_35, L_36, (bool)0, /*hidden argument*/NULL);
			// }
			goto IL_00f2;
		}

IL_00ad:
		{
			// pinTarget.OverridePinMode(mode, true);
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_37 = V_2;
			int32_t L_38 = ___mode2;
			NullCheck(L_37);
			Pin_OverridePinMode_m0ED1435172D483F9707D7B9FFEFD77F23177864F(L_37, L_38, (bool)1, /*hidden argument*/NULL);
			// } else
			goto IL_00f2;
		}

IL_00b7:
		{
			// Log.Debug("pinMode of <color=#4CAF50>" + pin + "</color> already set to <color=#2e7d32>" + mode + "</color>");
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_39 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_40 = L_39;
			NullCheck(L_40);
			ArrayElementTypeCheck (L_40, _stringLiteral9517B2CD8614A87F6E6C61447EF000E96D543A8A);
			(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral9517B2CD8614A87F6E6C61447EF000E96D543A8A);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = L_40;
			int32_t L_42 = ___pin1;
			int32_t L_43 = L_42;
			RuntimeObject * L_44 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_43);
			NullCheck(L_41);
			ArrayElementTypeCheck (L_41, L_44);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_44);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_45 = L_41;
			NullCheck(L_45);
			ArrayElementTypeCheck (L_45, _stringLiteral55FC352D8B3A250B4D69AC45EB070FE3B634D493);
			(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral55FC352D8B3A250B4D69AC45EB070FE3B634D493);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_46 = L_45;
			int32_t L_47 = ___mode2;
			int32_t L_48 = L_47;
			RuntimeObject * L_49 = Box(PinMode_tC4C0981AF254662628B9C03A310717AD7779C430_il2cpp_TypeInfo_var, &L_48);
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, L_49);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_49);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_50 = L_46;
			NullCheck(L_50);
			ArrayElementTypeCheck (L_50, _stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A);
			(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A);
			String_t* L_51 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_50, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
			Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA(L_51, (bool)0, /*hidden argument*/NULL);
		}

IL_00f2:
		{
			// foreach (Pin pinTarget in pins)
			bool L_52 = Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_0013;
			}
		}

IL_00fe:
		{
			IL2CPP_LEAVE(0x10E, FINALLY_0100);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0100;
	}

FINALLY_0100:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(256)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(256)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10E, IL_010e)
	}

IL_010e:
	{
		// if (!pinExists)
		bool L_53 = V_0;
		if (L_53)
		{
			goto IL_01b5;
		}
	}
	{
		// Pin newPin = new Pin(target, pin, mode);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_54 = ___target0;
		int32_t L_55 = ___pin1;
		int32_t L_56 = ___mode2;
		Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_57 = (Pin_tCA13A6E61822241A72D937ED2217785A334EF455 *)il2cpp_codegen_object_new(Pin_tCA13A6E61822241A72D937ED2217785A334EF455_il2cpp_TypeInfo_var);
		Pin__ctor_m56D16306CBAFFCC897D1805D2B5D3A12FC765CA5(L_57, L_54, L_55, L_56, /*hidden argument*/NULL);
		V_3 = L_57;
		// pins.Add(newPin);
		List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_58 = __this->get_pins_6();
		Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_59 = V_3;
		NullCheck(L_58);
		List_1_Add_mCEEF3AB9054DFCF8685C9B150E71400E02B96D9E(L_58, L_59, /*hidden argument*/List_1_Add_mCEEF3AB9054DFCF8685C9B150E71400E02B96D9E_RuntimeMethod_var);
		// string arduinoTarget = target != null ? " on the arduino <color=#ff3355>" + target.name + "</color> " : " ";
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_60 = ___target0;
		if (L_60)
		{
			goto IL_0133;
		}
	}
	{
		G_B18_0 = _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
		goto IL_0148;
	}

IL_0133:
	{
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_61 = ___target0;
		NullCheck(L_61);
		String_t* L_62 = L_61->get_name_0();
		String_t* L_63 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralDBE93FF9910410FB2CB846BC3780E07ADB874C27, L_62, _stringLiteralB029548A14DE5793F270C493DAEA6FE798E513D9, /*hidden argument*/NULL);
		G_B18_0 = L_63;
	}

IL_0148:
	{
		V_4 = G_B18_0;
		// Log.Debug("Set pinMode of <color=#4CAF50>" + pin +"</color>" +  arduinoTarget + "to <color=#2e7d32>" + mode + "</color>");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_64 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = L_64;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteral8F453EEF38F989C701DE26E184F91A1269FAF52C);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral8F453EEF38F989C701DE26E184F91A1269FAF52C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_66 = L_65;
		int32_t L_67 = ___pin1;
		int32_t L_68 = L_67;
		RuntimeObject * L_69 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_69);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_69);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_70 = L_66;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, _stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_71 = L_70;
		String_t* L_72 = V_4;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_72);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_73 = L_71;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteralA14D59E94AA57F0E505F7C1813A26B85FC61E241);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralA14D59E94AA57F0E505F7C1813A26B85FC61E241);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_74 = L_73;
		int32_t L_75 = ___mode2;
		int32_t L_76 = L_75;
		RuntimeObject * L_77 = Box(PinMode_tC4C0981AF254662628B9C03A310717AD7779C430_il2cpp_TypeInfo_var, &L_76);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_77);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_78 = L_74;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A);
		String_t* L_79 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_78, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA(L_79, (bool)0, /*hidden argument*/NULL);
		// if ((target == null && uduinoDevices.Count != 0) || //if target is not set but at least one card is connected
		//    (target != null && UduinoTargetExists(target)))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_80 = ___target0;
		if (L_80)
		{
			goto IL_01a2;
		}
	}
	{
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_81 = __this->get_uduinoDevices_5();
		NullCheck(L_81);
		int32_t L_82 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_81, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		if (L_82)
		{
			goto IL_01ae;
		}
	}

IL_01a2:
	{
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_83 = ___target0;
		if (!L_83)
		{
			goto IL_01b5;
		}
	}
	{
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_84 = ___target0;
		bool L_85 = UduinoManager_UduinoTargetExists_mBE8F04B703BA9D69F4A43D48ADEE5FD115A20203(__this, L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_01b5;
		}
	}

IL_01ae:
	{
		// newPin.Init();
		Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_86 = V_3;
		NullCheck(L_86);
		Pin_Init_mEF9250A53DFAEE0B04126B67E2F8D8393ADEC607(L_86, (bool)0, /*hidden argument*/NULL);
	}

IL_01b5:
	{
		// }
		return;
	}
}
// System.Int32 Uduino.UduinoManager::PinValueToBoardValue(Uduino.AnalogPin,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___boardType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(boardType == -1) boardType = defaultArduinoBoardType;
		int32_t L_0 = ___boardType1;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}
	{
		// if(boardType == -1) boardType = defaultArduinoBoardType;
		int32_t L_1 = __this->get_defaultArduinoBoardType_26();
		___boardType1 = L_1;
	}

IL_000c:
	{
		// return BoardsTypeList.Boards.GetBoardFromId(boardType).GetPin(Enum.GetName(pin.GetType(), pin));
		IL2CPP_RUNTIME_CLASS_INIT(BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7_il2cpp_TypeInfo_var);
		BoardsTypeList_t97EEE1EDA23988D42069C7F8C85FBC48531A8AA7 * L_2 = BoardsTypeList_get_Boards_m8225D62ED9617A8137A71184B2DC9FF8DEEBD95E(/*hidden argument*/NULL);
		int32_t L_3 = ___boardType1;
		NullCheck(L_2);
		ArduinoBoardType_t9384F77917726661C51836C8554113E3D7C12B90 * L_4 = BoardsTypeList_GetBoardFromId_m45E7B67053D64181F513EA7A0C65A86000EC7FDE(L_2, L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___pin0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(AnalogPin_t77A3ED326BD76F30F19F3BDE379F6A871E7D867F_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_7);
		Type_t * L_8 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ___pin0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(AnalogPin_t77A3ED326BD76F30F19F3BDE379F6A871E7D867F_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		String_t* L_12 = Enum_GetName_m9DE2256BCA030763AE066DA2B23EBBC2E4C62C5D(L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_13 = ArduinoBoardType_GetPin_m9F00BAA39BF6C751A58C079F52D987D4B3BA155C(L_4, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void Uduino.UduinoManager::InitPin(System.Int32,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitPin_m865912DEF457AFBD2A7836952F00B30271C03618 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// pinMode(null, pin, mode);
		int32_t L_0 = ___pin0;
		int32_t L_1 = ___mode1;
		UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::InitPin(Uduino.AnalogPin,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitPin_m58CB1C7F260C8DB57207B1AC298BCE8AF7AF8565 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// pinMode(null, (int)pin, mode);
		int32_t L_0 = ___pin0;
		int32_t L_1 = ___mode1;
		UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::InitPin(Uduino.UduinoDevice,System.Int32,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitPin_mD217DCEF3FB71DB85E0CA503F4C27E47980D2FDA (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___mode2, const RuntimeMethod* method)
{
	{
		// pinMode(target, pin, mode);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		int32_t L_1 = ___pin1;
		int32_t L_2 = ___mode2;
		UduinoManager_pinMode_mF5F5F74195F9EF5D10D931D99F9F76EC66B8E777(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::InitPin(System.String,Uduino.AnalogPin,Uduino.PinMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitPin_mEEC9BAFE271148C8A0467D10ABDAF3EFECAD497D (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, int32_t ___pin1, int32_t ___mode2, const RuntimeMethod* method)
{
	{
		// pinMode((int)pin, mode);
		int32_t L_0 = ___pin1;
		int32_t L_1 = ___mode2;
		UduinoManager_pinMode_mA4EBB71FBE0294F3B8A2EE42BC04769C4F7BE4E3(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::InitAllPins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitAllPins_m79BA577DA2C928BCF0F07447D122D7341406150E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_InitAllPins_m79BA577DA2C928BCF0F07447D122D7341406150E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach(Pin pin in pins)
		List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_0 = __this->get_pins_6();
		NullCheck(L_0);
		Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  L_1 = List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B(L_0, /*hidden argument*/List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001b;
		}

IL_000e:
		{
			// foreach(Pin pin in pins)
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_2 = Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_inline((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_RuntimeMethod_var);
			// pin.Init(true);
			NullCheck(L_2);
			Pin_Init_mEF9250A53DFAEE0B04126B67E2F8D8393ADEC607(L_2, (bool)1, /*hidden argument*/NULL);
		}

IL_001b:
		{
			// foreach(Pin pin in pins)
			bool L_3 = Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000e;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// Log.Debug("Init all pins not already initialized.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA(_stringLiteral9D2FCBD63B938BFAC69BA309E9641A80EE133C8D, (bool)0, /*hidden argument*/NULL);
		// SendBundle("init");
		UduinoManager_SendBundle_mFFE5A9AD21380F26047A303712275AF77238CCA8(__this, _stringLiteralFD62812FBD9EC4C7F99AA4F6253FEAD2388EB238, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::InitAllArduinos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitAllArduinos_m6A1219CEECC8BD85FBE6402E6215B1906B6F7A28 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// InitAllPins();
		UduinoManager_InitAllPins_m79BA577DA2C928BCF0F07447D122D7341406150E(__this, /*hidden argument*/NULL);
		// InitAllCallbacks();
		UduinoManager_InitAllCallbacks_mAAC20203AFF9077A6E790BF0259E275E9C234492(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::InitAllCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InitAllCallbacks_mAAC20203AFF9077A6E790BF0259E275E9C234492 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_InitAllCallbacks_mAAC20203AFF9077A6E790BF0259E275E9C234492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_2 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (KeyValuePair<string, Action<string>> callback in callbacksList)
		Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * L_0 = __this->get_callbacksList_7();
		NullCheck(L_0);
		Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A  L_1 = Dictionary_2_GetEnumerator_m7898C1D0AD6BF832B78F2B8E39CF633139AD9A94(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m7898C1D0AD6BF832B78F2B8E39CF633139AD9A94_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_000e:
		{
			// foreach (KeyValuePair<string, Action<string>> callback in callbacksList)
			KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894  L_2 = Enumerator_get_Current_m9C330C3A75176C2C56AD16272FBC316DD8AF8BFA_inline((Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9C330C3A75176C2C56AD16272FBC316DD8AF8BFA_RuntimeMethod_var);
			V_1 = L_2;
			// if (GetBoard(callback.Key, out devices) || callback.Key == "")
			String_t* L_3 = KeyValuePair_2_get_Key_m47FF534555003E6174B06C71F86BEF738CB181D2_inline((KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m47FF534555003E6174B06C71F86BEF738CB181D2_RuntimeMethod_var);
			bool L_4 = UduinoManager_GetBoard_m18EF75FF7775B2F78E91214B4B84B481748F4491(__this, L_3, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_2), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_003a;
			}
		}

IL_0027:
		{
			String_t* L_5 = KeyValuePair_2_get_Key_m47FF534555003E6174B06C71F86BEF738CB181D2_inline((KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m47FF534555003E6174B06C71F86BEF738CB181D2_RuntimeMethod_var);
			bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_005e;
			}
		}

IL_003a:
		{
			// foreach (UduinoDevice device in devices)
			UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_7 = V_2;
			V_3 = L_7;
			V_4 = 0;
			goto IL_0057;
		}

IL_0041:
		{
			// foreach (UduinoDevice device in devices)
			UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_8 = V_3;
			int32_t L_9 = V_4;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			// device.callback = callback.Value;
			Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_12 = KeyValuePair_2_get_Value_m4B2A5CAB715165D12BD2A240EC8DA064DFB2F9AC_inline((KeyValuePair_2_t83943D81DD4A907ED3514CA74414F41D2CC78894 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m4B2A5CAB715165D12BD2A240EC8DA064DFB2F9AC_RuntimeMethod_var);
			NullCheck(L_11);
			L_11->set_callback_5(L_12);
			int32_t L_13 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		}

IL_0057:
		{
			// foreach (UduinoDevice device in devices)
			int32_t L_14 = V_4;
			UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_15 = V_3;
			NullCheck(L_15);
			if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))))
			{
				goto IL_0041;
			}
		}

IL_005e:
		{
			// foreach (KeyValuePair<string, Action<string>> callback in callbacksList)
			bool L_16 = Enumerator_MoveNext_m83873244A5C506D707505774A74F363C56B75270((Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m83873244A5C506D707505774A74F363C56B75270_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_000e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x77, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m54A98B5800203426543418BAAA3B7FFD7678444A((Enumerator_tA48D43F1A961959714BAF84EB221E08BC7169E8A *)(&V_0), /*hidden argument*/Enumerator_Dispose_m54A98B5800203426543418BAAA3B7FFD7678444A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(105)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::arduinoWrite(Uduino.UduinoDevice,System.Int32,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___value2, String_t* ___typeOfPin3, String_t* ___bundle4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool onPinExists = false;
		V_0 = (bool)0;
		// foreach (Pin pinTarget in pins)
		List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_0 = __this->get_pins_6();
		NullCheck(L_0);
		Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  L_1 = List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B(L_0, /*hidden argument*/List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0010:
		{
			// foreach (Pin pinTarget in pins)
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_2 = Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_inline((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_RuntimeMethod_var);
			V_2 = L_2;
			// if (pinTarget.PinTargetExists(target, pin))
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_3 = V_2;
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_4 = ___target0;
			int32_t L_5 = ___pin1;
			NullCheck(L_3);
			bool L_6 = Pin_PinTargetExists_m266E03042BDEE701F9445B143F570C34723C0CF5(L_3, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002f;
			}
		}

IL_0022:
		{
			// pinTarget.SendPinValue(value, typeOfPin, bundle);
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_7 = V_2;
			int32_t L_8 = ___value2;
			String_t* L_9 = ___typeOfPin3;
			String_t* L_10 = ___bundle4;
			NullCheck(L_7);
			Pin_SendPinValue_m4CEEC6CF0AA00DC3588E9BFC365CE1CBEB3B58C6(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
			// onPinExists = true;
			V_0 = (bool)1;
		}

IL_002f:
		{
			// foreach (Pin pinTarget in pins)
			bool L_11 = Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0010;
			}
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x48, IL_0048)
	}

IL_0048:
	{
		// if (!onPinExists)
		bool L_12 = V_0;
		if (L_12)
		{
			goto IL_0066;
		}
	}
	{
		// Log.Info("You are trying to send a message to the pin " + pin + " but this pin is not initialized. \r\nUse the function UduinoManager.Instance.InitPin(..)");
		int32_t L_13 = ___pin1;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral18937339861CA32925D093C4D6CC9D6F615C76F2, L_15, _stringLiteral393F0371650C6F794C36DF75ABEFD61B0603D3CB, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Info_m08CFA638194730410A989631C097C045098A5F03(L_16, (bool)0, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::digitalWrite(Uduino.UduinoDevice,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_digitalWrite_mD1A96CCCA3FFBA29FBF51C752666CEC7EE82062A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___value2, String_t* ___bundle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_digitalWrite_mD1A96CCCA3FFBA29FBF51C752666CEC7EE82062A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value <= 150) value = 0;
		int32_t L_0 = ___value2;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)150))))
		{
			goto IL_000d;
		}
	}
	{
		// if (value <= 150) value = 0;
		___value2 = 0;
		goto IL_0014;
	}

IL_000d:
	{
		// else value = 255;
		___value2 = ((int32_t)255);
	}

IL_0014:
	{
		// arduinoWrite(target,pin,value,"d", bundle);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_1 = ___target0;
		int32_t L_2 = ___pin1;
		int32_t L_3 = ___value2;
		String_t* L_4 = ___bundle3;
		UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52(__this, L_1, L_2, L_3, _stringLiteral3C363836CF4E16666669A25DA280A1865C2D2874, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::digitalWrite(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_digitalWrite_mDCBCF33F0DE22258193B5723905D0A7F915E0077 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___value1, String_t* ___bundle2, const RuntimeMethod* method)
{
	{
		// digitalWrite(null, pin, value, bundle);
		int32_t L_0 = ___pin0;
		int32_t L_1 = ___value1;
		String_t* L_2 = ___bundle2;
		UduinoManager_digitalWrite_mD1A96CCCA3FFBA29FBF51C752666CEC7EE82062A(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::digitalWrite(System.Int32,Uduino.State,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_digitalWrite_m8A6E3826D62C458CC07B887277E19846549B199A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___state1, String_t* ___bundle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_digitalWrite_m8A6E3826D62C458CC07B887277E19846549B199A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arduinoWrite(null, pin, (int)state * 255,"d", bundle);
		int32_t L_0 = ___pin0;
		int32_t L_1 = ___state1;
		String_t* L_2 = ___bundle2;
		UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)255))), _stringLiteral3C363836CF4E16666669A25DA280A1865C2D2874, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::digitalWrite(Uduino.UduinoDevice,System.Int32,Uduino.State,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_digitalWrite_m5188F04FA4F8D0F4B6559086939B3228A43D8845 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___state2, String_t* ___bundle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_digitalWrite_m5188F04FA4F8D0F4B6559086939B3228A43D8845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arduinoWrite(target, pin, (int)state * 255, "d", bundle);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		int32_t L_1 = ___pin1;
		int32_t L_2 = ___state2;
		String_t* L_3 = ___bundle3;
		UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52(__this, L_0, L_1, ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)255))), _stringLiteral3C363836CF4E16666669A25DA280A1865C2D2874, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::analogWrite(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_analogWrite_mB59B8F32A42955A78F747E232A62F39813ED6161 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, int32_t ___value1, String_t* ___bundle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_analogWrite_mB59B8F32A42955A78F747E232A62F39813ED6161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arduinoWrite(null, pin, value, "a", bundle);
		int32_t L_0 = ___pin0;
		int32_t L_1 = ___value1;
		String_t* L_2 = ___bundle2;
		UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, L_1, _stringLiteral86F7E437FAA5A7FCE15D1DDCB9EAEAEA377667B8, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::analogWrite(Uduino.UduinoDevice,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_analogWrite_mED3E48427CFC9212ACF62B15DC75F67945A8CB71 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___value2, String_t* ___bundle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_analogWrite_mED3E48427CFC9212ACF62B15DC75F67945A8CB71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arduinoWrite(target, pin, value, "a", bundle);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		int32_t L_1 = ___pin1;
		int32_t L_2 = ___value2;
		String_t* L_3 = ___bundle3;
		UduinoManager_arduinoWrite_m7A699D28763484F3E657A86E36196E1C4E72DF52(__this, L_0, L_1, L_2, _stringLiteral86F7E437FAA5A7FCE15D1DDCB9EAEAEA377667B8, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Uduino.UduinoManager::digitalRead(Uduino.UduinoDevice,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_digitalRead_mE4C62A301C1961318771DE9FCFB2B9852F1D4D41 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, String_t* ___bundle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_digitalRead_mE4C62A301C1961318771DE9FCFB2B9852F1D4D41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// int readVal = 0;
		V_0 = 0;
		// foreach (Pin pinTarget in pins)
		List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_0 = __this->get_pins_6();
		NullCheck(L_0);
		Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  L_1 = List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B(L_0, /*hidden argument*/List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0010:
		{
			// foreach (Pin pinTarget in pins)
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_2 = Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_inline((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_RuntimeMethod_var);
			V_2 = L_2;
			// if (pinTarget.PinTargetExists(target, pin))
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_3 = V_2;
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_4 = ___target0;
			int32_t L_5 = ___pin1;
			NullCheck(L_3);
			bool L_6 = Pin_PinTargetExists_m266E03042BDEE701F9445B143F570C34723C0CF5(L_3, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			// readVal = pinTarget.SendRead(bundle, digital: true);
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_7 = V_2;
			String_t* L_8 = ___bundle2;
			NullCheck(L_7);
			int32_t L_9 = VirtFuncInvoker3< int32_t, String_t*, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, bool >::Invoke(6 /* System.Int32 Uduino.Pin::SendRead(System.String,System.Action`1<System.String>,System.Boolean) */, L_7, L_8, (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)NULL, (bool)1);
			V_0 = L_9;
		}

IL_002c:
		{
			// foreach (Pin pinTarget in pins)
			bool L_10 = Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0010;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// return readVal;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 Uduino.UduinoManager::digitalRead(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_digitalRead_m835F260FB7CC1F4685EE95E13383C2E412CEF8D0 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, String_t* ___bundle1, const RuntimeMethod* method)
{
	{
		// return digitalRead(null, pin, bundle);
		int32_t L_0 = ___pin0;
		String_t* L_1 = ___bundle1;
		int32_t L_2 = UduinoManager_digitalRead_mE4C62A301C1961318771DE9FCFB2B9852F1D4D41(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Uduino.UduinoManager::digitalRead(Uduino.AnalogPin,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_digitalRead_mF51FACBD212DA6547F72C3CA15874E11FDEE3BD3 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, String_t* ___bundle1, const RuntimeMethod* method)
{
	{
		// return digitalRead(null, PinValueToBoardValue(pin), bundle);
		int32_t L_0 = ___pin0;
		int32_t L_1 = UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1(__this, L_0, (-1), /*hidden argument*/NULL);
		String_t* L_2 = ___bundle1;
		int32_t L_3 = UduinoManager_digitalRead_mE4C62A301C1961318771DE9FCFB2B9852F1D4D41(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Uduino.UduinoManager::digitalRead(Uduino.UduinoDevice,Uduino.AnalogPin,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_digitalRead_m90091C343E79B8A9458F47461C2E3E84F9D2A7BE (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, String_t* ___bundle2, const RuntimeMethod* method)
{
	{
		// return digitalRead(target, PinValueToBoardValue(pin, target._boardType), bundle);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		int32_t L_1 = ___pin1;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__boardType_1();
		int32_t L_4 = UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1(__this, L_1, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___bundle2;
		int32_t L_6 = UduinoManager_digitalRead_mE4C62A301C1961318771DE9FCFB2B9852F1D4D41(__this, L_0, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 Uduino.UduinoManager::analogRead(Uduino.UduinoDevice,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_analogRead_mB3D252FAD4DA539F88D5BD79C1156E7049B4655A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, String_t* ___bundle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_analogRead_mB3D252FAD4DA539F88D5BD79C1156E7049B4655A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// int readVal = -1;
		V_0 = (-1);
		// foreach (Pin pinTarget in pins)
		List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_0 = __this->get_pins_6();
		NullCheck(L_0);
		Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  L_1 = List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B(L_0, /*hidden argument*/List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0010:
		{
			// foreach (Pin pinTarget in pins)
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_2 = Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_inline((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_RuntimeMethod_var);
			V_2 = L_2;
			// if (pinTarget.PinTargetExists(target, pin))
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_3 = V_2;
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_4 = ___target0;
			int32_t L_5 = ___pin1;
			NullCheck(L_3);
			bool L_6 = Pin_PinTargetExists_m266E03042BDEE701F9445B143F570C34723C0CF5(L_3, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			// readVal = pinTarget.SendRead(bundle);
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_7 = V_2;
			String_t* L_8 = ___bundle2;
			NullCheck(L_7);
			int32_t L_9 = VirtFuncInvoker3< int32_t, String_t*, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, bool >::Invoke(6 /* System.Int32 Uduino.Pin::SendRead(System.String,System.Action`1<System.String>,System.Boolean) */, L_7, L_8, (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)NULL, (bool)0);
			V_0 = L_9;
		}

IL_002c:
		{
			// foreach (Pin pinTarget in pins)
			bool L_10 = Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0010;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// return readVal;
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 Uduino.UduinoManager::analogRead(Uduino.UduinoDevice,Uduino.AnalogPin,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_analogRead_m96507277F055CCB6597948A35963BB2A4B9A963D (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, String_t* ___bundle2, const RuntimeMethod* method)
{
	{
		// return analogRead(target, PinValueToBoardValue(pin, target._boardType), bundle);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		int32_t L_1 = ___pin1;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__boardType_1();
		int32_t L_4 = UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1(__this, L_1, L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___bundle2;
		int32_t L_6 = UduinoManager_analogRead_mB3D252FAD4DA539F88D5BD79C1156E7049B4655A(__this, L_0, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 Uduino.UduinoManager::analogRead(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_analogRead_mA39EFF4EEB6144A7828D1E6A6EAE9F2BAFFA7177 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, String_t* ___bundle1, const RuntimeMethod* method)
{
	{
		// return analogRead(null, pin, bundle);
		int32_t L_0 = ___pin0;
		String_t* L_1 = ___bundle1;
		int32_t L_2 = UduinoManager_analogRead_mB3D252FAD4DA539F88D5BD79C1156E7049B4655A(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Uduino.UduinoManager::analogRead(Uduino.AnalogPin,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_analogRead_mABB32F64CFB1D3DC48D579D988DC8DB649C510EA (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, String_t* ___bundle1, const RuntimeMethod* method)
{
	{
		// return analogRead(null, PinValueToBoardValue(pin), bundle);
		int32_t L_0 = ___pin0;
		int32_t L_1 = UduinoManager_PinValueToBoardValue_mB5F33DB667F904A1CF9679EB009279EC3E5DA6A1(__this, L_0, (-1), /*hidden argument*/NULL);
		String_t* L_2 = ___bundle1;
		int32_t L_3 = UduinoManager_analogRead_mB3D252FAD4DA539F88D5BD79C1156E7049B4655A(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Uduino.UduinoManager::dispatchValueForPin(Uduino.UduinoDevice,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UduinoManager_dispatchValueForPin_m6D32245429ED04FC269CFE01D8FC4E0A8C5666DA (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, int32_t ___pin1, int32_t ___readVal2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_dispatchValueForPin_m6D32245429ED04FC269CFE01D8FC4E0A8C5666DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Pin pinTarget in pins)
		List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_0 = __this->get_pins_6();
		NullCheck(L_0);
		Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  L_1 = List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B(L_0, /*hidden argument*/List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0027;
		}

IL_000e:
		{
			// foreach (Pin pinTarget in pins)
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_2 = Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_inline((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_RuntimeMethod_var);
			V_1 = L_2;
			// if (pinTarget.PinTargetExists(target, pin))
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_3 = V_1;
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_4 = ___target0;
			int32_t L_5 = ___pin1;
			NullCheck(L_3);
			bool L_6 = Pin_PinTargetExists_m266E03042BDEE701F9445B143F570C34723C0CF5(L_3, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0027;
			}
		}

IL_0020:
		{
			// pinTarget.lastReadValue = readVal;
			Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_7 = V_1;
			int32_t L_8 = ___readVal2;
			NullCheck(L_7);
			L_7->set_lastReadValue_11(L_8);
		}

IL_0027:
		{
			// foreach (Pin pinTarget in pins)
			bool L_9 = Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		// return readVal;
		int32_t L_10 = ___readVal2;
		return L_10;
	}
}
// System.String Uduino.UduinoManager::Read(Uduino.UduinoDevice,System.String,System.Action`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UduinoManager_Read_m1BE4693449C189D481796CAEFD0ED53615F5FC48 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___message1, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___action2, String_t* ___bundle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_Read_m1BE4693449C189D481796CAEFD0ED53615F5FC48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	String_t* V_1 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// string readVal = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (bundle != null)
		String_t* L_0 = ___bundle3;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		// if(GetBoard(target,out devices))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_1 = ___target0;
		bool L_2 = UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716(__this, L_1, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		// foreach(UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0038;
	}

IL_001b:
	{
		// foreach(UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// device.callback = action;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_8 = L_7;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_9 = ___action2;
		NullCheck(L_8);
		L_8->set_callback_5(L_9);
		// device.AddToBundle(message, bundle);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_10 = L_8;
		String_t* L_11 = ___message1;
		String_t* L_12 = ___bundle3;
		NullCheck(L_10);
		UduinoDevice_AddToBundle_m7B1004685A71B9263CDAC2C1185CE66F2105D427(L_10, L_11, L_12, /*hidden argument*/NULL);
		// readVal =  device.lastRead;
		NullCheck(L_10);
		String_t* L_13 = L_10->get_lastRead_2();
		V_1 = L_13;
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0038:
	{
		// foreach(UduinoDevice device in devices)
		int32_t L_15 = V_3;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		goto IL_006d;
	}

IL_0040:
	{
		// if (GetBoard(target, out devices))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_17 = ___target0;
		bool L_18 = UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716(__this, L_17, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_19 = V_0;
		V_2 = L_19;
		V_3 = 0;
		goto IL_0067;
	}

IL_0051:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		// device.callback = action;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_24 = L_23;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_25 = ___action2;
		NullCheck(L_24);
		L_24->set_callback_5(L_25);
		// readVal = device.ReadFromArduino(message);
		String_t* L_26 = ___message1;
		NullCheck(L_24);
		String_t* L_27 = VirtFuncInvoker2< String_t*, String_t*, bool >::Invoke(8 /* System.String Uduino.UduinoDevice::ReadFromArduino(System.String,System.Boolean) */, L_24, L_26, (bool)0);
		V_1 = L_27;
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0067:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_29 = V_3;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_30 = V_2;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))))
		{
			goto IL_0051;
		}
	}

IL_006d:
	{
		// return readVal;
		String_t* L_31 = V_1;
		return L_31;
	}
}
// System.Void Uduino.UduinoManager::Read(System.String,System.Action`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_Read_m884ACDF65D0E068B209C6CEE7CC6924CE4EDC24F (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___message0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___action1, String_t* ___bundle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_Read_m884ACDF65D0E068B209C6CEE7CC6924CE4EDC24F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (bundle != null)
		String_t* L_0 = ___bundle2;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// if (GetBoard("", out devices))
		bool L_1 = UduinoManager_GetBoard_m18EF75FF7775B2F78E91214B4B84B481748F4491(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0065;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_2 = V_0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_002d;
	}

IL_0018:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// device.callback = action;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_7 = L_6;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_8 = ___action1;
		NullCheck(L_7);
		L_7->set_callback_5(L_8);
		// device.AddToBundle(message, bundle);
		String_t* L_9 = ___message0;
		String_t* L_10 = ___bundle2;
		NullCheck(L_7);
		UduinoDevice_AddToBundle_m7B1004685A71B9263CDAC2C1185CE66F2105D427(L_7, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002d:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_12 = V_2;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}

IL_0034:
	{
		// if (GetBoard("", out devices))
		bool L_14 = UduinoManager_GetBoard_m18EF75FF7775B2F78E91214B4B84B481748F4491(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_15 = V_0;
		V_1 = L_15;
		V_2 = 0;
		goto IL_005f;
	}

IL_0049:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// device.callback = action;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_20 = L_19;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_21 = ___action1;
		NullCheck(L_20);
		L_20->set_callback_5(L_21);
		// device.ReadFromArduino(message);
		String_t* L_22 = ___message0;
		NullCheck(L_20);
		VirtFuncInvoker2< String_t*, String_t*, bool >::Invoke(8 /* System.String Uduino.UduinoDevice::ReadFromArduino(System.String,System.Boolean) */, L_20, L_22, (bool)0);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_005f:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_24 = V_2;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))))
		{
			goto IL_0049;
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.String Uduino.UduinoManager::DirectReadFromArduino(Uduino.UduinoDevice,System.String,System.Action`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UduinoManager_DirectReadFromArduino_m407E6605F28FEBCD6110A257CCFBE9EFC836C059 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___targetDevice0, String_t* ___message1, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___action2, String_t* ___bundle3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_DirectReadFromArduino_m407E6605F28FEBCD6110A257CCFBE9EFC836C059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_1 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// string val = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (bundle != null)
		String_t* L_0 = ___bundle3;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		// if (GetBoard(targetDevice, out devices))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_1 = ___targetDevice0;
		bool L_2 = UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716(__this, L_1, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_1), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = V_1;
		V_2 = L_3;
		V_3 = 0;
		goto IL_002a;
	}

IL_001b:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// device.AddToBundle(message, bundle);
		String_t* L_8 = ___message1;
		String_t* L_9 = ___bundle3;
		NullCheck(L_7);
		UduinoDevice_AddToBundle_m7B1004685A71B9263CDAC2C1185CE66F2105D427(L_7, L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002a:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_11 = V_3;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		goto IL_005f;
	}

IL_0032:
	{
		// if (GetBoard(targetDevice, out devices))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_13 = ___targetDevice0;
		bool L_14 = UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716(__this, L_13, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_1), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_15 = V_1;
		V_2 = L_15;
		V_3 = 0;
		goto IL_0059;
	}

IL_0043:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_16 = V_2;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// device.callback = action;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_20 = L_19;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_21 = ___action2;
		NullCheck(L_20);
		L_20->set_callback_5(L_21);
		// val = device.ReadFromArduino(message);
		String_t* L_22 = ___message1;
		NullCheck(L_20);
		String_t* L_23 = VirtFuncInvoker2< String_t*, String_t*, bool >::Invoke(8 /* System.String Uduino.UduinoDevice::ReadFromArduino(System.String,System.Boolean) */, L_20, L_22, (bool)0);
		V_0 = L_23;
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0059:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_25 = V_3;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_26 = V_2;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0043;
		}
	}

IL_005f:
	{
		// return val;
		String_t* L_27 = V_0;
		return L_27;
	}
}
// System.Void Uduino.UduinoManager::Read(System.Int32,System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_Read_m7CF31292F0B3711A911EE46B50FC9CA90827926F (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, String_t* ___target1, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___action2, const RuntimeMethod* method)
{
	{
		// DirectReadFromArduino(action: action);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = ___action2;
		UduinoManager_DirectReadFromArduino_m407E6605F28FEBCD6110A257CCFBE9EFC836C059(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, (String_t*)NULL, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::Read(System.Int32,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_Read_m7A67F91C71003896747DE655F6415E45D84CC6A7 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, int32_t ___pin0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___action1, const RuntimeMethod* method)
{
	{
		// DirectReadFromArduino(action: action);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = ___action1;
		UduinoManager_DirectReadFromArduino_m407E6605F28FEBCD6110A257CCFBE9EFC836C059(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, (String_t*)NULL, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Uduino.UduinoManager::sendCommand(Uduino.UduinoDevice,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_sendCommand_m88C831CAC933468BAF9EFB5F4674C0D86E2E84D5 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___message1, String_t* ___bundle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_sendCommand_m88C831CAC933468BAF9EFB5F4674C0D86E2E84D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_1 = NULL;
	int32_t V_2 = 0;
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * V_3 = NULL;
	{
		// if (GetBoard(target, out devices))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		bool L_1 = UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716(__this, L_0, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_2 = V_0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0045;
	}

IL_0011:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if (bundle != null || limitSendRate)
		String_t* L_7 = ___bundle2;
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		bool L_8 = __this->get_limitSendRate_17();
		if (!L_8)
		{
			goto IL_0039;
		}
	}

IL_0020:
	{
		// if (limitSendRate) bundle = "LimitSend";
		bool L_9 = __this->get_limitSendRate_17();
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		// if (limitSendRate) bundle = "LimitSend";
		___bundle2 = _stringLiteral7C44F53BDF1812B01853B656B2653CCFF07D2F1D;
	}

IL_002f:
	{
		// device.AddToBundle(message, bundle);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_10 = V_3;
		String_t* L_11 = ___message1;
		String_t* L_12 = ___bundle2;
		NullCheck(L_10);
		UduinoDevice_AddToBundle_m7B1004685A71B9263CDAC2C1185CE66F2105D427(L_10, L_11, L_12, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0039:
	{
		// device.WriteToArduino(message);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_13 = V_3;
		String_t* L_14 = ___message1;
		NullCheck(L_13);
		VirtFuncInvoker3< bool, String_t*, RuntimeObject *, bool >::Invoke(6 /* System.Boolean Uduino.UduinoDevice::WriteToArduino(System.String,System.Object,System.Boolean) */, L_13, L_14, NULL, (bool)0);
		// return true;
		return (bool)1;
	}

IL_0045:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_15 = V_2;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0011;
		}
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Uduino.UduinoManager::sendCommand(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_sendCommand_m929F85FE4F32C66D4AE02750F1244646BB3264E1 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___command0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_sendCommand_m929F85FE4F32C66D4AE02750F1244646BB3264E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		NullCheck(L_0);
		Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  L_1 = Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_000e:
		{
			// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
			KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  L_2 = Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_inline((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_RuntimeMethod_var);
			V_1 = L_2;
			// uduino.Value.WriteToArduino(command, BuildMessageParameters(value));
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_3 = KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_inline((KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_RuntimeMethod_var);
			String_t* L_4 = ___command0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = ___value1;
			IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
			String_t* L_6 = UduinoManager_BuildMessageParameters_mD5853C2857D9874B87AA3CE84C5CB8A687D3C500(L_5, /*hidden argument*/NULL);
			NullCheck(L_3);
			VirtFuncInvoker3< bool, String_t*, RuntimeObject *, bool >::Invoke(6 /* System.Boolean Uduino.UduinoDevice::WriteToArduino(System.String,System.Object,System.Boolean) */, L_3, L_4, L_6, (bool)0);
		}

IL_002b:
		{
			// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
			bool L_7 = Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_000e;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x44, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::sendCommand(Uduino.UduinoDevice,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_sendCommand_m690A6959077A4D1890ED5F10AE6805A533105D80 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___command1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_sendCommand_m690A6959077A4D1890ED5F10AE6805A533105D80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.WriteToArduino(command, BuildMessageParameters(value));
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		String_t* L_1 = ___command1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		String_t* L_3 = UduinoManager_BuildMessageParameters_mD5853C2857D9874B87AA3CE84C5CB8A687D3C500(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtFuncInvoker3< bool, String_t*, RuntimeObject *, bool >::Invoke(6 /* System.Boolean Uduino.UduinoDevice::WriteToArduino(System.String,System.Object,System.Boolean) */, L_0, L_1, L_3, (bool)0);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::Write(System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_Write_m682E013196DD740549F81EF08229F1FE629C2A7D (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, String_t* ___command1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___value2, const RuntimeMethod* method)
{
	{
		// sendCommand(GetBoard(target), command, value);
		String_t* L_0 = ___target0;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_1 = UduinoManager_GetBoard_m3935921AA593BC3353009C89A92728EFDF4FE000(__this, L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___command1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___value2;
		UduinoManager_sendCommand_m690A6959077A4D1890ED5F10AE6805A533105D80(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::Write(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_Write_mCE5A24ECF2A8BD06DC1C425A1F8E1B92E080E67E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, String_t* ___message1, String_t* ___bundle2, const RuntimeMethod* method)
{
	{
		// sendCommand(GetBoard(target), message, bundle);
		String_t* L_0 = ___target0;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_1 = UduinoManager_GetBoard_m3935921AA593BC3353009C89A92728EFDF4FE000(__this, L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___message1;
		String_t* L_3 = ___bundle2;
		UduinoManager_sendCommand_m88C831CAC933468BAF9EFB5F4674C0D86E2E84D5(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Uduino.UduinoManager::BuildMessageParameters(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UduinoManager_BuildMessageParameters_mD5853C2857D9874B87AA3CE84C5CB8A687D3C500 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_BuildMessageParameters_mD5853C2857D9874B87AA3CE84C5CB8A687D3C500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string outputMessage = null;
		V_0 = (String_t*)NULL;
		// for(int i =0;i < parameters.Length;i++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0006:
	{
		// outputMessage += parameters[i];
		String_t* L_0 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___parameters0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (i != parameters.Length - 1)
		int32_t L_6 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = ___parameters0;
		NullCheck(L_7);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))), (int32_t)1)))))
		{
			goto IL_0024;
		}
	}
	{
		// outputMessage += parametersDelimiter;
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		String_t* L_9 = ((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->get_parametersDelimiter_32();
		String_t* L_10 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0024:
	{
		// for(int i =0;i < parameters.Length;i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0028:
	{
		// for(int i =0;i < parameters.Length;i++)
		int32_t L_12 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = ___parameters0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		// return outputMessage;
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Void Uduino.UduinoManager::SetReadCallback(Uduino.UduinoDevice,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SetReadCallback_m43568A6575F59B1E4E6EF0892331441EFC640A9A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_SetReadCallback_m43568A6575F59B1E4E6EF0892331441EFC640A9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// if (GetBoard(target, out devices))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		bool L_1 = UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716(__this, L_0, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_2 = V_0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_001e;
	}

IL_0011:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// device.callback = callback;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_7 = ___callback1;
		NullCheck(L_6);
		L_6->set_callback_5(L_7);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001e:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_9 = V_2;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0011;
		}
	}
	{
		// } else
		return;
	}

IL_0025:
	{
		// string targetName = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (target != null)
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_11 = ___target0;
		if (!L_11)
		{
			goto IL_0035;
		}
	}
	{
		// targetName = target.name;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_12 = ___target0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_name_0();
		V_3 = L_13;
	}

IL_0035:
	{
		// callbacksList.Add(targetName, callback);
		Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * L_14 = __this->get_callbacksList_7();
		String_t* L_15 = V_3;
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_16 = ___callback1;
		NullCheck(L_14);
		Dictionary_2_Add_m11F9F2E8D36516D60DABA163D11EC44F2BBDCBC5(L_14, L_15, L_16, /*hidden argument*/Dictionary_2_Add_m11F9F2E8D36516D60DABA163D11EC44F2BBDCBC5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::SetReadCallback(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SetReadCallback_m6AD0835B0968DF9E7890665728F6FDE4F0FC6DDF (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback0, const RuntimeMethod* method)
{
	{
		// SetReadCallback(null, callback);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = ___callback0;
		UduinoManager_SetReadCallback_m43568A6575F59B1E4E6EF0892331441EFC640A9A(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::SendBundle(Uduino.UduinoDevice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SendBundle_mF11EA0C8655BF1D3CA65D3126450F8A55EF2A889 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, String_t* ___bundleName1, const RuntimeMethod* method)
{
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (GetBoard(target, out devices))
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		bool L_1 = UduinoManager_GetBoard_m448A94ED39A012B2C93F7AEF31641C9BF6C42716(__this, L_0, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_2 = V_0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_001e;
	}

IL_0011:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// device.SendBundle(bundleName);
		String_t* L_7 = ___bundleName1;
		NullCheck(L_6);
		UduinoDevice_SendBundle_m9B96F1BA51D74455B55DCA804C54DB05BBA70182(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001e:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_9 = V_2;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0011;
		}
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::SendBundle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_SendBundle_mFFE5A9AD21380F26047A303712275AF77238CCA8 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___bundleName0, const RuntimeMethod* method)
{
	{
		// SendBundle(null, bundleName);
		String_t* L_0 = ___bundleName0;
		UduinoManager_SendBundle_mF11EA0C8655BF1D3CA65D3126450F8A55EF2A889(__this, (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)NULL, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Uduino.UduinoManager::AutoSendBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UduinoManager_AutoSendBundle_mC99135E59DF662CD5F95336D766C05EFA560F22C (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_AutoSendBundle_mC99135E59DF662CD5F95336D766C05EFA560F22C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * L_0 = (U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 *)il2cpp_codegen_object_new(U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9_il2cpp_TypeInfo_var);
		U3CAutoSendBundleU3Ed__152__ctor_mCA4C32C8C0AE32D5E84B31457A5B93C0903C6FCD(L_0, 0, /*hidden argument*/NULL);
		U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Uduino.UduinoManager::AlwaysRead(System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_AlwaysRead_mF25173CE92EFF4C76314FDBAD4A3ACD1F813BE82 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___action1, const RuntimeMethod* method)
{
	{
		// public void AlwaysRead(string target, Action<string> action) { }
		return;
	}
}
// System.Void Uduino.UduinoManager::AlwaysRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_AlwaysRead_mA9A9769961E2F5E7BAD0FFB9A2AE701D48F0FC99 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, const RuntimeMethod* method)
{
	{
		// public void AlwaysRead(string target) { }
		return;
	}
}
// System.Boolean Uduino.UduinoManager::ExtensionIsPresentAndActive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_ExtensionIsPresentAndActive_m25004AFFAF438F2452F94C67A7395863E9798366 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___extensionName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_ExtensionIsPresentAndActive_m25004AFFAF438F2452F94C67A7395863E9798366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool isPresent = false;
		V_0 = (bool)0;
		// bool isActive = false;
		V_1 = (bool)0;
		// presentExtentionsMap.TryGetValue(extensionName, out isPresent);
		IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0 * L_0 = __this->get_presentExtentionsMap_10();
		String_t* L_1 = ___extensionName0;
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m398F95668B9B305770A66F5AD04AF5D425CAAAB7(L_0, L_1, (bool*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m398F95668B9B305770A66F5AD04AF5D425CAAAB7_RuntimeMethod_var);
		// if(isPresent)
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// activeExtentionsMap.TryGetValue(extensionName, out isActive);
		IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E * L_3 = __this->get_activeExtentionsMap_9();
		String_t* L_4 = ___extensionName0;
		NullCheck(L_3);
		Dictionary_2_TryGetValue_m398F95668B9B305770A66F5AD04AF5D425CAAAB7(L_3, L_4, (bool*)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m398F95668B9B305770A66F5AD04AF5D425CAAAB7_RuntimeMethod_var);
	}

IL_0025:
	{
		// return isPresent && isActive;
		bool L_5 = V_0;
		bool L_6 = V_1;
		return (bool)((int32_t)((int32_t)L_5&(int32_t)L_6));
	}
}
// System.Void Uduino.UduinoManager::StartReading(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_StartReading_m178093CC7BC5AD23C21B9DF44DC2F479DF435365 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, const RuntimeMethod* method)
{
	{
		// if (readingMethod == HardwareReading.Coroutines)
		int32_t L_0 = __this->get_readingMethod_16();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		// StartCoroutine(CoroutineRead(target));
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_1 = ___target0;
		RuntimeObject* L_2 = UduinoManager_CoroutineRead_m91EA8433553A457BB4F46162492300AB6E4B1476(__this, L_1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0018:
	{
		// StartThread();
		UduinoManager_StartThread_mB043025F5281A496920A2EC453A0C44884B5C7E3(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::StartThread(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_StartThread_mB043025F5281A496920A2EC453A0C44884B5C7E3 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, bool ___isForced0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_StartThread_mB043025F5281A496920A2EC453A0C44884B5C7E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (isForced && threadRestartTrials > 10)
		bool L_0 = ___isForced0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_threadRestartTrials_57();
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0019;
		}
	}
	{
		// Log.Error("Thread cannot restart.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Error_m2205626C83BD88E6A7F3BD4404994CC3F4DAC42D(_stringLiteralB470B345BD0F060653D2C5E64AFB6464E5BA253E, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// if (Application.isPlaying && _thread == null && readingMethod == HardwareReading.Thread && !IsRunning())
		bool L_2 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_009e;
		}
	}
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_3 = __this->get__thread_55();
		if (L_3)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_4 = __this->get_readingMethod_16();
		if (L_4)
		{
			goto IL_009e;
		}
	}
	{
		bool L_5 = UduinoManager_IsRunning_mC1B8002F69AE86A87126E07CBC5C891C0C6035BB_inline(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_009e;
		}
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			// if(isForced)
			bool L_6 = ___isForced0;
			if (!L_6)
			{
				goto IL_0054;
			}
		}

IL_003b:
		{
			// Log.Warning("Resarting Thread");
			IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
			Log_Warning_m7FC7B8CC24EEA8D85D60FA0BFB581628525CD3AC(_stringLiteral4F294E7F34581EA65A554CFE3B47D012CB376FE2, (bool)0, /*hidden argument*/NULL);
			// threadRestartTrials++;
			int32_t L_7 = __this->get_threadRestartTrials_57();
			__this->set_threadRestartTrials_57(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		}

IL_0054:
		{
			// Log.Debug("Starting Uduino read/write thread.");
			IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
			Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA(_stringLiteral449BBA9A341A8B4C54E693A64883A04DD00C3658, (bool)0, /*hidden argument*/NULL);
			// _thread = new Thread(new ThreadStart(ReadPorts));
			ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_8 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_8, __this, (intptr_t)((intptr_t)UduinoManager_ReadPorts_m4A24858DE4486789AF974FB3631946D315B091FB_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_9 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
			Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_9, L_8, /*hidden argument*/NULL);
			__this->set__thread_55(L_9);
			// threadRunning = true;
			__this->set_threadRunning_56((bool)1);
			// _thread.Start();
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_10 = __this->get__thread_55();
			NullCheck(L_10);
			Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_10, /*hidden argument*/NULL);
			// _thread.IsBackground = true;
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_11 = __this->get__thread_55();
			NullCheck(L_11);
			Thread_set_IsBackground_mF62551A195DCB09D44E512F52916145E39362D39(L_11, (bool)1, /*hidden argument*/NULL);
			// }
			goto IL_00a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0096;
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		// Log.Error(e);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Error_m2205626C83BD88E6A7F3BD4404994CC3F4DAC42D(((Exception_t *)__exception_local), (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00a9;
	} // end catch (depth: 1)

IL_009e:
	{
		// Log.Debug("Uduino read/write thread is already started.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Debug_m193B4FCB585013E75E8D60AEC7416FD1034F7AEA(_stringLiteral221FCFB346E423B58ADDB0D97C8533152F3720DB, (bool)0, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::StopThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_StopThread_m3485B77BE063E41C62BC10323FD24E0712F34AB9 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// threadRunning = false;
		__this->set_threadRunning_56((bool)0);
		// _thread = null;
		__this->set__thread_55((Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)NULL);
		// }
		return;
	}
}
// System.Boolean Uduino.UduinoManager::IsRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UduinoManager_IsRunning_mC1B8002F69AE86A87126E07CBC5C891C0C6035BB (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// return threadRunning;
		bool L_0 = __this->get_threadRunning_56();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_Update_mFCC80ED63178092419B8AEBBD0A71825D475A651 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_Update_mFCC80ED63178092419B8AEBBD0A71825D475A651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
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
		// Action tmpAction = null;
		V_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL;
		// lock (_lockAsync)
		RuntimeObject * L_0 = __this->get__lockAsync_12();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (_callbacksAsync != null)
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = __this->get__callbacksAsync_13();
			if (!L_2)
			{
				goto IL_0029;
			}
		}

IL_001b:
		{
			// tmpAction = _callbacksAsync;
			Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = __this->get__callbacksAsync_13();
			V_0 = L_3;
			// _callbacksAsync = null;
			__this->set__callbacksAsync_13((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL);
		}

IL_0029:
		{
			// }
			IL2CPP_LEAVE(0x35, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			RuntimeObject * L_5 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x35, IL_0035)
	}

IL_0035:
	{
		// if (tmpAction != null) tmpAction();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// if (tmpAction != null) tmpAction();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = V_0;
		NullCheck(L_7);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_7, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// if (_thread != null && !isApplicationQuiting &&
		//     _thread.ThreadState == ThreadState.Stopped)
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_8 = __this->get__thread_55();
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		bool L_9 = __this->get_isApplicationQuiting_58();
		if (L_9)
		{
			goto IL_006a;
		}
	}
	{
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_10 = __this->get__thread_55();
		NullCheck(L_10);
		int32_t L_11 = Thread_get_ThreadState_m8F398B10B485BC5FC7499B53452230A604989C10(L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_006a;
		}
	}
	{
		// StopThread();
		UduinoManager_StopThread_m3485B77BE063E41C62BC10323FD24E0712F34AB9(__this, /*hidden argument*/NULL);
		// StartThread(true);
		UduinoManager_StartThread_mB043025F5281A496920A2EC453A0C44884B5C7E3(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// if(autoReconnect && shouldReconnect)
		bool L_12 = __this->get_autoReconnect_36();
		if (!L_12)
		{
			goto IL_00a2;
		}
	}
	{
		bool L_13 = __this->get_shouldReconnect_38();
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		// StartCoroutine("DiscoverWithDelay", 5.0f);
		float L_14 = (5.0f);
		RuntimeObject * L_15 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_14);
		MonoBehaviour_StartCoroutine_mCD250A96284E3C39D579CEC447432681DE8D1E44(__this, _stringLiteralE608486DEBB915711FE32538288521A3DBB86963, L_15, /*hidden argument*/NULL);
		// shouldReconnect = false;
		__this->set_shouldReconnect_38((bool)0);
		// Log.Warning("No Board detected. Reconnecting.");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Warning_m7FC7B8CC24EEA8D85D60FA0BFB581628525CD3AC(_stringLiteralEB7E56F7206F85F5B191811C40B51F15EAA19B04, (bool)0, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::ReadPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_ReadPorts_m4A24858DE4486789AF974FB3631946D315B091FB (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_ReadPorts_m4A24858DE4486789AF974FB3631946D315B091FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * V_0 = NULL;
	bool V_1 = false;
	Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		goto IL_008a;
	}

IL_0005:
	{
		// lock (uduinoDevices)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_2 = __this->get_uduinoDevices_5();
			NullCheck(L_2);
			Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  L_3 = Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632_RuntimeMethod_var);
			V_2 = L_3;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0047;
			}

IL_0024:
			{
				// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
				KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  L_4 = Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_inline((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_RuntimeMethod_var);
				V_3 = L_4;
				// uduino.Value.WriteToArduinoLoop();
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_5 = KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_inline((KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_RuntimeMethod_var);
				NullCheck(L_5);
				VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Uduino.UduinoDevice::WriteToArduinoLoop() */, L_5);
				// uduino.Value.ReadFromArduinoLoop();
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_inline((KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_RuntimeMethod_var);
				NullCheck(L_6);
				VirtFuncInvoker1< bool, bool >::Invoke(9 /* System.Boolean Uduino.UduinoDevice::ReadFromArduinoLoop(System.Boolean) */, L_6, (bool)0);
			}

IL_0047:
			{
				// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
				bool L_7 = Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0024;
				}
			}

IL_0050:
			{
				IL2CPP_LEAVE(0x6A, FINALLY_0052);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0052;
		}

FINALLY_0052:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0_RuntimeMethod_var);
			IL2CPP_END_FINALLY(82)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(82)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x6A, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_1;
			if (!L_8)
			{
				goto IL_0069;
			}
		}

IL_0063:
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_9 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_9, /*hidden argument*/NULL);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		// Thread.Sleep(threadFrequency);
		int32_t L_10 = __this->get_threadFrequency_21();
		Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF(L_10, /*hidden argument*/NULL);
		// if (limitSendRate) Thread.Sleep((int)sendRateSpeed / 2);
		bool L_11 = __this->get_limitSendRate_17();
		if (!L_11)
		{
			goto IL_008a;
		}
	}
	{
		// if (limitSendRate) Thread.Sleep((int)sendRateSpeed / 2);
		int32_t L_12 = __this->get_sendRateSpeed_28();
		Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF(((int32_t)((int32_t)L_12/(int32_t)2)), /*hidden argument*/NULL);
	}

IL_008a:
	{
		// while (IsRunning() && !isApplicationQuiting)
		bool L_13 = UduinoManager_IsRunning_mC1B8002F69AE86A87126E07CBC5C891C0C6035BB_inline(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		bool L_14 = __this->get_isApplicationQuiting_58();
		if (!L_14)
		{
			goto IL_0005;
		}
	}

IL_009d:
	{
		// _thread = null;
		__this->set__thread_55((Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::ReadWriteArduino(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_ReadWriteArduino_m993F2D7B08CFA7A25FD73712B348E233369A1DE4 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_ReadWriteArduino_m993F2D7B08CFA7A25FD73712B348E233369A1DE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if(target != null)
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___target0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// target.WriteToArduinoLoop();
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_1 = ___target0;
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Uduino.UduinoDevice::WriteToArduinoLoop() */, L_1);
		// target.ReadFromArduinoLoop();
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_2 = ___target0;
		NullCheck(L_2);
		VirtFuncInvoker1< bool, bool >::Invoke(9 /* System.Boolean Uduino.UduinoDevice::ReadFromArduinoLoop(System.Boolean) */, L_2, (bool)0);
		// }
		return;
	}

IL_0013:
	{
		// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_3 = __this->get_uduinoDevices_5();
		NullCheck(L_3);
		Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997  L_4 = Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m98CAA4B3C46CE6A946C54AFD46B5F653EE7C2632_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_0021:
		{
			// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
			KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949  L_5 = Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_inline((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2CB7CC7A06B4E90CA6D9C9989534C300E640BA4C_RuntimeMethod_var);
			V_1 = L_5;
			// uduino.Value.WriteToArduinoLoop();
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_inline((KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_RuntimeMethod_var);
			NullCheck(L_6);
			VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Uduino.UduinoDevice::WriteToArduinoLoop() */, L_6);
			// uduino.Value.ReadFromArduinoLoop();
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_7 = KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_inline((KeyValuePair_2_t308F6D3F0E45438E587C00AC86AF50033D173949 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mD736EDDED33732173DCE6F6F94246B1C29647227_RuntimeMethod_var);
			NullCheck(L_7);
			VirtFuncInvoker1< bool, bool >::Invoke(9 /* System.Boolean Uduino.UduinoDevice::ReadFromArduinoLoop(System.Boolean) */, L_7, (bool)0);
		}

IL_0044:
		{
			// foreach (KeyValuePair<string, UduinoDevice> uduino in uduinoDevices)
			bool L_8 = Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8C73C0F172A07BCA8308CB22F92DCC59434B7DD7_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0021;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0((Enumerator_t12DAB88DF1E603ADFF1F26AD2879B37F7F956997 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m94D807CC4D08B79DC80607FDE01D91071AE3EDB0_RuntimeMethod_var);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Uduino.UduinoManager::CoroutineRead(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UduinoManager_CoroutineRead_m91EA8433553A457BB4F46162492300AB6E4B1476 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_CoroutineRead_m91EA8433553A457BB4F46162492300AB6E4B1476_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * L_0 = (U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 *)il2cpp_codegen_object_new(U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113_il2cpp_TypeInfo_var);
		U3CCoroutineReadU3Ed__166__ctor_m32497998675242462CE0AA8181536976A4D6390A(L_0, 0, /*hidden argument*/NULL);
		U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * L_2 = L_1;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_3 = ___target0;
		NullCheck(L_2);
		L_2->set_target_2(L_3);
		return L_2;
	}
}
// System.Void Uduino.UduinoManager::TriggerEvent(System.String,Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_TriggerEvent_m77EC98A63109D6630BA7699B02ED9204CC842073 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___data0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_TriggerEvent_m77EC98A63109D6630BA7699B02ED9204CC842073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * L_0 = (U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass167_0__ctor_mAA9712FD0C5B8D876D9E0A933A6D86EE730D0FDA(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * L_2 = V_0;
		String_t* L_3 = ___data0;
		NullCheck(L_2);
		L_2->set_data_1(L_3);
		U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * L_4 = V_0;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_5 = ___device1;
		NullCheck(L_4);
		L_4->set_device_2(L_5);
		// InvokeAsync(() =>
		// {
		//     if (OnDataReceived != null)
		//         OnDataReceived(data, device);
		//     if (OnValueReceived != null)
		//     {
		//         Log.Warning("OnValueReceived is deprecated. Please use OnDataRecevied instead");
		//         OnValueReceived(data, device);
		//     }
		//     OnDataReceivedEvent.Invoke(data, device);
		// });
		U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * L_6 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_7 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass167_0_U3CTriggerEventU3Eb__0_m795BA9045CFA30D88C540237D4FE29DED43A8C44_RuntimeMethod_var), /*hidden argument*/NULL);
		UduinoManager_InvokeAsync_mFEB9BFC5336473111AAC45DDF2E3EC468530371A(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::InvokeAsync(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_InvokeAsync_mFEB9BFC5336473111AAC45DDF2E3EC468530371A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_InvokeAsync_mFEB9BFC5336473111AAC45DDF2E3EC468530371A_MetadataUsageId);
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
		// lock (_lockAsync)
		RuntimeObject * L_0 = __this->get__lockAsync_12();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// _callbacksAsync += callback;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_2 = __this->get__callbacksAsync_13();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___callback0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		__this->set__callbacksAsync_13(((Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)CastclassSealed((RuntimeObject*)L_4, Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var)));
		// }
		IL2CPP_LEAVE(0x34, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_6, /*hidden argument*/NULL);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::CloseAllPorts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_CloseAllPorts_m635E48604E3BCF6259B074C30936A3A6EC91798E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// public void CloseAllPorts() { CloseAllDevices(); }
		UduinoManager_CloseAllDevices_m0F268F039DC29CD4A25AF1719718BEED728F32C7(__this, /*hidden argument*/NULL);
		// public void CloseAllPorts() { CloseAllDevices(); }
		return;
	}
}
// System.Void Uduino.UduinoManager::CloseAllDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_CloseAllDevices_m0F268F039DC29CD4A25AF1719718BEED728F32C7 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_CloseAllDevices_m0F268F039DC29CD4A25AF1719718BEED728F32C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * V_0 = NULL;
	bool V_1 = false;
	Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (uduinoDevices.Count == 0)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_0, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// lock (uduinoDevices) // the lock here is creating delays when closing
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_2 = __this->get_uduinoDevices_5();
		V_0 = L_2;
		V_1 = (bool)0;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_3 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_3, (bool*)(&V_1), /*hidden argument*/NULL);
			// List<string> devicesNames = new List<string>(uduinoDevices.Keys);
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_4 = __this->get_uduinoDevices_5();
			NullCheck(L_4);
			KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2 * L_5 = Dictionary_2_get_Keys_mE9851C6F91B0565530E84534A4E69C8D3431C86A(L_4, /*hidden argument*/Dictionary_2_get_Keys_mE9851C6F91B0565530E84534A4E69C8D3431C86A_RuntimeMethod_var);
			List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
			List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599(L_6, L_5, /*hidden argument*/List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599_RuntimeMethod_var);
			// foreach (string deviceName in devicesNames)
			NullCheck(L_6);
			Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  L_7 = List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E(L_6, /*hidden argument*/List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E_RuntimeMethod_var);
			V_2 = L_7;
		}

IL_0035:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0051;
			}

IL_0037:
			{
				// foreach (string deviceName in devicesNames)
				String_t* L_8 = Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_inline((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_RuntimeMethod_var);
				V_3 = L_8;
				// CloseDevice(uduinoDevices[deviceName]);
				Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_9 = __this->get_uduinoDevices_5();
				String_t* L_10 = V_3;
				NullCheck(L_9);
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_11 = Dictionary_2_get_Item_m6A96CE2CA53893FBAF20C4D6D63BAB5C64B3B596(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m6A96CE2CA53893FBAF20C4D6D63BAB5C64B3B596_RuntimeMethod_var);
				UduinoManager_CloseDevice_mDCBE077F50325DC4B564D2D6CC6389A0328B652E(__this, L_11, /*hidden argument*/NULL);
			}

IL_0051:
			{
				// foreach (string deviceName in devicesNames)
				bool L_12 = Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0037;
				}
			}

IL_005a:
			{
				IL2CPP_LEAVE(0x6A, FINALLY_005c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_005c;
		}

FINALLY_005c:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978_RuntimeMethod_var);
			IL2CPP_END_FINALLY(92)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(92)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x6A, IL_006a)
		}

IL_006a:
		{
			// uduinoDevices.Clear();
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_13 = __this->get_uduinoDevices_5();
			NullCheck(L_13);
			Dictionary_2_Clear_mBA447A76DA2E06DCBF2B1F8FA1F04B73017A45FA(L_13, /*hidden argument*/Dictionary_2_Clear_mBA447A76DA2E06DCBF2B1F8FA1F04B73017A45FA_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x81, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_1;
			if (!L_14)
			{
				goto IL_0080;
			}
		}

IL_007a:
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_15 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_15, /*hidden argument*/NULL);
		}

IL_0080:
		{
			IL2CPP_END_FINALLY(119)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::CloseDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_CloseDevice_mA13987062550B2F32EFF89734B28DEFDC06953FE (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, String_t* ___target0, const RuntimeMethod* method)
{
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_0 = NULL;
	UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* V_1 = NULL;
	int32_t V_2 = 0;
	UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * V_3 = NULL;
	{
		// if (GetBoard(target, out devices))
		String_t* L_0 = ___target0;
		bool L_1 = UduinoManager_GetBoard_m18EF75FF7775B2F78E91214B4B84B481748F4491(__this, L_0, (UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771**)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_2 = V_0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0020;
	}

IL_0011:
	{
		// foreach (UduinoDevice device in devices)
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// CloseDevice(device);
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_7 = V_3;
		UduinoManager_CloseDevice_mDCBE077F50325DC4B564D2D6CC6389A0328B652E(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		// foreach (UduinoDevice device in devices)
		int32_t L_9 = V_2;
		UduinoDeviceU5BU5D_t16A85A0599A6AE1D268E3A901BC24B9E65B6B771* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0011;
		}
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::CloseDevice(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_CloseDevice_mDCBE077F50325DC4B564D2D6CC6389A0328B652E (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_CloseDevice_mDCBE077F50325DC4B564D2D6CC6389A0328B652E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if (device.boardStatus == BoardStatus.Closed)
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___device0;
			NullCheck(L_0);
			int32_t L_1 = L_0->get_boardStatus_6();
			if ((!(((uint32_t)L_1) == ((uint32_t)4))))
			{
				goto IL_000e;
			}
		}

IL_0009:
		{
			// return;
			goto IL_00f2;
		}

IL_000e:
		{
			// if (stopAllOnQuit)
			bool L_2 = __this->get_stopAllOnQuit_34();
			if (!L_2)
			{
				goto IL_005c;
			}
		}

IL_0016:
		{
			// foreach (Pin pinTarget in pins)
			List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_3 = __this->get_pins_6();
			NullCheck(L_3);
			Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB  L_4 = List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B(L_3, /*hidden argument*/List_1_GetEnumerator_m35E0F3E30B5BE326C84AC91D12D8EFAEA03DFC9B_RuntimeMethod_var);
			V_0 = L_4;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0043;
			}

IL_0024:
			{
				// foreach (Pin pinTarget in pins)
				Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_5 = Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_inline((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4A615D844433C50BE2D71759F82F23E861CE56D3_RuntimeMethod_var);
				V_1 = L_5;
				// if (pinTarget.device == device || pinTarget.device == null)
				Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_6 = V_1;
				NullCheck(L_6);
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_7 = L_6->get_device_1();
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_8 = ___device0;
				if ((((RuntimeObject*)(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)L_7) == ((RuntimeObject*)(UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *)L_8)))
				{
					goto IL_003d;
				}
			}

IL_0035:
			{
				Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_9 = V_1;
				NullCheck(L_9);
				UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_10 = L_9->get_device_1();
				if (L_10)
				{
					goto IL_0043;
				}
			}

IL_003d:
			{
				// pinTarget.Destroy();
				Pin_tCA13A6E61822241A72D937ED2217785A334EF455 * L_11 = V_1;
				NullCheck(L_11);
				Pin_Destroy_m7EAB0E0AE1CACEDB8177C135C7F8095DF91C33AF(L_11, /*hidden argument*/NULL);
			}

IL_0043:
			{
				// foreach (Pin pinTarget in pins)
				bool L_12 = Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0BED85B7C8A9B5A813AE1703AA49D52574C3B88B_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0024;
				}
			}

IL_004c:
			{
				IL2CPP_LEAVE(0x5C, FINALLY_004e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004e;
		}

FINALLY_004e:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3((Enumerator_tF5C034CFCB2EF94365EF1B4B07B18EF5D300D2DB *)(&V_0), /*hidden argument*/Enumerator_Dispose_m6346802EEC8CE269F45D4FC86AF144B903EDD5F3_RuntimeMethod_var);
			IL2CPP_END_FINALLY(78)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(78)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5C, IL_005c)
		}

IL_005c:
		{
			// device.SendBundle("destroy");
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_13 = ___device0;
			NullCheck(L_13);
			UduinoDevice_SendBundle_m9B96F1BA51D74455B55DCA804C54DB05BBA70182(L_13, _stringLiteral6870010883A79E8B2A508909DC21A05CC8FF73B8, /*hidden argument*/NULL);
			// device.Stopping();
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_14 = ___device0;
			NullCheck(L_14);
			VirtActionInvoker0::Invoke(15 /* System.Void Uduino.UduinoDevice::Stopping() */, L_14);
			// device.Close();
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_15 = ___device0;
			NullCheck(L_15);
			VirtActionInvoker0::Invoke(16 /* System.Void Uduino.UduinoDevice::Close() */, L_15);
			// if (!isApplicationQuiting)
			bool L_16 = __this->get_isApplicationQuiting_58();
			if (L_16)
			{
				goto IL_009b;
			}
		}

IL_007b:
		{
			// Interface.Instance.RemoveDeviceButton(device.name);
			IL2CPP_RUNTIME_CLASS_INIT(Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7_il2cpp_TypeInfo_var);
			Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 * L_17 = Interface_get_Instance_m8962A680AFECDC5D3DE7050B3699988B7844F5AC(/*hidden argument*/NULL);
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_18 = ___device0;
			NullCheck(L_18);
			String_t* L_19 = L_18->get_name_0();
			NullCheck(L_17);
			Interface_RemoveDeviceButton_mD94443FC5210392CB55B8B76467DAE9179A56EF8(L_17, L_19, /*hidden argument*/NULL);
			// Interface.Instance.UduinoDisconnected(device.name);
			Interface_t79E51BE68574DFC7E7ECAADEF84B7A0446539FE7 * L_20 = Interface_get_Instance_m8962A680AFECDC5D3DE7050B3699988B7844F5AC(/*hidden argument*/NULL);
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_21 = ___device0;
			NullCheck(L_21);
			String_t* L_22 = L_21->get_name_0();
			NullCheck(L_20);
			Interface_UduinoDisconnected_m8880D5546D0694CB98FBD16B41541C658EA86E58(L_20, L_22, /*hidden argument*/NULL);
		}

IL_009b:
		{
			// if (OnBoardDisconnected != null)
			OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_23 = __this->get_OnBoardDisconnected_46();
			if (!L_23)
			{
				goto IL_00af;
			}
		}

IL_00a3:
		{
			// OnBoardDisconnected(device);
			OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * L_24 = __this->get_OnBoardDisconnected_46();
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_25 = ___device0;
			NullCheck(L_24);
			OnBoardDisconnectedDelegate_Invoke_m0175464886F111F63E829902031FB5EB2F9DA7B4(L_24, L_25, /*hidden argument*/NULL);
		}

IL_00af:
		{
			// OnBoardDisconnectedEvent.Invoke(device);
			eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * L_26 = __this->get_OnBoardDisconnectedEvent_42();
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_27 = ___device0;
			NullCheck(L_26);
			UnityEvent_1_Invoke_m17062A6318EC9C67FE24E1FCE80196587551711B(L_26, L_27, /*hidden argument*/UnityEvent_1_Invoke_m17062A6318EC9C67FE24E1FCE80196587551711B_RuntimeMethod_var);
			// uduinoDevices.Remove(device.name);
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_28 = __this->get_uduinoDevices_5();
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_29 = ___device0;
			NullCheck(L_29);
			String_t* L_30 = L_29->get_name_0();
			NullCheck(L_28);
			Dictionary_2_Remove_m57865BAC70A924D938AD3AC56D3FF534D1942D1E(L_28, L_30, /*hidden argument*/Dictionary_2_Remove_m57865BAC70A924D938AD3AC56D3FF534D1942D1E_RuntimeMethod_var);
			// if (!isApplicationQuiting && uduinoDevices.Count == 0)
			bool L_31 = __this->get_isApplicationQuiting_58();
			if (L_31)
			{
				goto IL_00e8;
			}
		}

IL_00d5:
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_32 = __this->get_uduinoDevices_5();
			NullCheck(L_32);
			int32_t L_33 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_32, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_00e8;
			}
		}

IL_00e2:
		{
			// StopThread();
			UduinoManager_StopThread_m3485B77BE063E41C62BC10323FD24E0712F34AB9(__this, /*hidden argument*/NULL);
		}

IL_00e8:
		{
			// }
			goto IL_00f2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ea;
		throw e;
	}

CATCH_00ea:
	{ // begin catch(System.Exception)
		// Log.Error(e);
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Error_m2205626C83BD88E6A7F3BD4404994CC3F4DAC42D(((Exception_t *)__exception_local), (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00f2;
	} // end catch (depth: 1)

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_OnApplicationQuit_m81C654372B1D815F8A24666DF2F42A5441CDB94A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// isApplicationQuiting = true;
		__this->set_isApplicationQuiting_58((bool)1);
		// FullReset();
		UduinoManager_FullReset_m721742D5D556F512D813B05C9E08708D8909F2C3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_OnDestroy_m8639B3429A8FB23A2FF67288522982C8E354EB0A (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// isApplicationQuiting = true;
		__this->set_isApplicationQuiting_58((bool)1);
		// FullReset();
		UduinoManager_FullReset_m721742D5D556F512D813B05C9E08708D8909F2C3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_OnDisable_m19C9D55F601DDA4641B2A9995E07283F5CFD75FE (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// isApplicationQuiting = true;
		__this->set_isApplicationQuiting_58((bool)1);
		// FullReset();
		UduinoManager_FullReset_m721742D5D556F512D813B05C9E08708D8909F2C3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::FullReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_FullReset_m721742D5D556F512D813B05C9E08708D8909F2C3 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager_FullReset_m721742D5D556F512D813B05C9E08708D8909F2C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (uduinoDevices.Count != 0)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = __this->get_uduinoDevices_5();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_0, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// CloseAllDevices();
		UduinoManager_CloseAllDevices_m0F268F039DC29CD4A25AF1719718BEED728F32C7(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// if (boardConnection != null)
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_2 = __this->get_boardConnection_11();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// boardConnection.Stop();
		UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 * L_3 = __this->get_boardConnection_11();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(16 /* System.Void Uduino.UduinoConnection::Stop() */, L_3);
	}

IL_0026:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_mA5469BB7BBB59B8A94BB86590B051E0DFACC12DD(__this, /*hidden argument*/NULL);
		// DisableThread();
		UduinoManager_DisableThread_mD62037C8E57381C76F0CB2FE6265E4913DF7CB02(__this, /*hidden argument*/NULL);
		// boardConnection = null;
		__this->set_boardConnection_11((UduinoConnection_tDC6CC1ACAFD4C23A8AD5F8ADCBAD46782B7218E7 *)NULL);
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::DisableThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager_DisableThread_mD62037C8E57381C76F0CB2FE6265E4913DF7CB02 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// StopThread();
		UduinoManager_StopThread_m3485B77BE063E41C62BC10323FD24E0712F34AB9(__this, /*hidden argument*/NULL);
		// if (_thread != null)
		Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_0 = __this->get__thread_55();
		// lock (uduinoDevices)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_1 = __this->get_uduinoDevices_5();
		V_0 = L_1;
		V_1 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_2 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_2, (bool*)(&V_1), /*hidden argument*/NULL);
		// _thread = null;
		__this->set__thread_55((Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)NULL);
		// }
		IL2CPP_LEAVE(0x31, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_4 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Uduino.UduinoManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager__ctor_m9EF1C6FE638830EB632DAF091752E3DCC4D53993 (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager__ctor_m9EF1C6FE638830EB632DAF091752E3DCC4D53993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<string, UduinoDevice> uduinoDevices = new Dictionary<string, UduinoDevice>();
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_0 = (Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 *)il2cpp_codegen_object_new(Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m945D436495A8F3935777DC059EA8D3079477F6B9(L_0, /*hidden argument*/Dictionary_2__ctor_m945D436495A8F3935777DC059EA8D3079477F6B9_RuntimeMethod_var);
		__this->set_uduinoDevices_5(L_0);
		// public List<Pin> pins = new List<Pin>();
		List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 * L_1 = (List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785 *)il2cpp_codegen_object_new(List_1_t7F4A2A4A11EBA2D6ECE22A2F5F93D04F98095785_il2cpp_TypeInfo_var);
		List_1__ctor_m11F8123E0FF743303C1CA5F9566A36673D608C13(L_1, /*hidden argument*/List_1__ctor_m11F8123E0FF743303C1CA5F9566A36673D608C13_RuntimeMethod_var);
		__this->set_pins_6(L_1);
		// public Dictionary<string, Action<string>> callbacksList = new Dictionary<string, Action<string>>();
		Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A * L_2 = (Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A *)il2cpp_codegen_object_new(Dictionary_2_tADD10327ABE5DBCB39DA5BE64CB9E1DF77E9033A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4F95054FE102D7014045D0A2B578F427C703A930(L_2, /*hidden argument*/Dictionary_2__ctor_m4F95054FE102D7014045D0A2B578F427C703A930_RuntimeMethod_var);
		__this->set_callbacksList_7(L_2);
		// public Dictionary<string, string> existingExtensionsMap = new Dictionary<string, string>()
		// {
		//     { "UduinoDevice_DesktopSerial", "Desktop Serial" },
		//     { "UduinoDevice_DesktopBluetoothLE", "Desktop BLE" },
		//     { "UduinoDevice_AndroidBluetoothLE", "Android BLE" },
		//     { "UduinoDevice_AndroidSerial", "Android Serial" },
		//     { "UduinoDevice_Wifi", "Wifi" },
		// };
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_3 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_3, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_4, _stringLiteralB0715E3222A66EC3D40A41D074FC7586B7310574, _stringLiteralC6A3DE7E362AF3C28E58BE98004C7BF75D43F783, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_5, _stringLiteralDF8014D12117F29AC124C97D0B005C03F8EB041C, _stringLiteralF495EF2B0E3EA63EE88B6B55E75AD68ECFF5B735, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_6, _stringLiteral835A17A1181E411161D6E7D4E07A03059AF13A48, _stringLiteralA89F3250DBC77042068080A89795F3074F9220CC, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_7, _stringLiteralDE9138A21442C68129A92392BE16C647F350D36A, _stringLiteral05DF82A810AD66949483301CA58664C53D850FA1, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_8, _stringLiteralA95B1923A5C3E14C03B2F43A2431793205757469, _stringLiteral3D43511C30D2D711D7E5CE8FA9F15DDA6F4941EB, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		__this->set_existingExtensionsMap_8(L_8);
		// public IsActiveDictionnary activeExtentionsMap = new IsActiveDictionnary();
		IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E * L_9 = (IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E *)il2cpp_codegen_object_new(IsActiveDictionnary_t57FD02F6649F3FA214BAB2B4682A9EE1E9FE376E_il2cpp_TypeInfo_var);
		IsActiveDictionnary__ctor_m0A3E01EBF831BFB1765884498846596B66CB0C80(L_9, /*hidden argument*/NULL);
		__this->set_activeExtentionsMap_9(L_9);
		// public IsPresentDictionnary presentExtentionsMap = new IsPresentDictionnary();
		IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0 * L_10 = (IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0 *)il2cpp_codegen_object_new(IsPresentDictionnary_t2EE38B9E618C040FD2A44E9B5F7D5D3756344FB0_il2cpp_TypeInfo_var);
		IsPresentDictionnary__ctor_m9ACF3929979A6FC80DA4A323D4EBAC9A7437F756(L_10, /*hidden argument*/NULL);
		__this->set_presentExtentionsMap_10(L_10);
		// private object _lockAsync = new object();
		RuntimeObject * L_11 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_11, /*hidden argument*/NULL);
		__this->set__lockAsync_12(L_11);
		// private int baudRate = 9600;
		__this->set_baudRate_15(((int32_t)9600));
		// public int readTimeout = 30;
		__this->set_readTimeout_19(((int32_t)30));
		// public int writeTimeout = 30;
		__this->set_writeTimeout_20(((int32_t)30));
		// public int threadFrequency = 16; //16 for 60fps
		__this->set_threadFrequency_21(((int32_t)16));
		// public bool alwaysRead = true;
		__this->set_alwaysRead_22((bool)1);
		// public bool readAfterCommand = true;
		__this->set_readAfterCommand_23((bool)1);
		// public int messageQueueLength = 10;
		__this->set_messageQueueLength_25(((int32_t)10));
		// private int sendRateSpeed = 20;
		__this->set_sendRateSpeed_28(((int32_t)20));
		// private int discoverTries = 10;
		__this->set_discoverTries_29(((int32_t)10));
		// public bool autoDiscover = true;
		__this->set_autoDiscover_30((bool)1);
		// public float delayBeforeDiscover = 0.5f;
		__this->set_delayBeforeDiscover_31((0.5f));
		// public bool stopAllOnQuit = true;
		__this->set_stopAllOnQuit_34((bool)1);
		// public bool autoReconnect = true;
		__this->set_autoReconnect_36((bool)1);
		// public float autoReconnectDelay = 5.0f;
		__this->set_autoReconnectDelay_37((5.0f));
		// private List<string> blackListedPorts = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_12 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_12, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_blackListedPorts_39(L_12);
		// public bool autoConnectToLastDevice = true;
		__this->set_autoConnectToLastDevice_50((bool)1);
		// public int bleScanDuration = 3;
		__this->set_bleScanDuration_51(3);
		// public UduinoInterfaceType interfaceType = UduinoInterfaceType.Full; // Full, Minimal, None
		__this->set_interfaceType_52(2);
		// public string uduinoIpAddress = "192.168.x.x";
		__this->set_uduinoIpAddress_53(_stringLiteral3EAA821148A0C69AED3E5A54A20F2D4166A33D41);
		// public int uduinoWifiPort = 4222;
		__this->set_uduinoWifiPort_54(((int32_t)4222));
		// private bool threadRunning = true;
		__this->set_threadRunning_56((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Uduino.UduinoManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoManager__cctor_mFE47E69BB1953D6F0E634B26423338FF70704F2D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoManager__cctor_mFE47E69BB1953D6F0E634B26423338FF70704F2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static UduinoManager _instance = null;
		((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->set__instance_4((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 *)NULL);
		// public static string parametersDelimiter = " ";
		((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->set_parametersDelimiter_32(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		// public static string bundleDelimiter = "-";
		((UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_StaticFields*)il2cpp_codegen_static_fields_for(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var))->set_bundleDelimiter_33(_stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9);
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
// System.Void Uduino.UduinoManager/<>c__DisplayClass167_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass167_0__ctor_mAA9712FD0C5B8D876D9E0A933A6D86EE730D0FDA (U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Uduino.UduinoManager/<>c__DisplayClass167_0::<TriggerEvent>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass167_0_U3CTriggerEventU3Eb__0_m795BA9045CFA30D88C540237D4FE29DED43A8C44 (U3CU3Ec__DisplayClass167_0_t886E0E45742CC741F38660D96145B13D24C3193C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass167_0_U3CTriggerEventU3Eb__0_m795BA9045CFA30D88C540237D4FE29DED43A8C44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnDataReceived != null)
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_1 = L_0->get_OnDataReceived_44();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// OnDataReceived(data, device);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * L_3 = L_2->get_OnDataReceived_44();
		String_t* L_4 = __this->get_data_1();
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_5 = __this->get_device_2();
		NullCheck(L_3);
		OnDataReceivedDelegate_Invoke_m45ADB303544F62AD260517648196701E979ADA87(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (OnValueReceived != null)
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_7 = L_6->get_OnValueReceived_43();
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		// Log.Warning("OnValueReceived is deprecated. Please use OnDataRecevied instead");
		IL2CPP_RUNTIME_CLASS_INIT(Log_t2981FE7592169E1ED060B5E6DFBCDC31284EE752_il2cpp_TypeInfo_var);
		Log_Warning_m7FC7B8CC24EEA8D85D60FA0BFB581628525CD3AC(_stringLiteral9E4574266DACDC0582DEF1405BF5D9F7C70B58D6, (bool)0, /*hidden argument*/NULL);
		// OnValueReceived(data, device);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_8 = __this->get_U3CU3E4__this_0();
		NullCheck(L_8);
		OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * L_9 = L_8->get_OnValueReceived_43();
		String_t* L_10 = __this->get_data_1();
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_11 = __this->get_device_2();
		NullCheck(L_9);
		OnValueReceivedDelegate_Invoke_mFB8EF6F35664E23EE1013C11D81E523953BA6DFE(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// OnDataReceivedEvent.Invoke(data, device);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		eventValueReceived_t8130A3E2DE2BCEC0FA5F327D9C1A9B0E880E747E * L_13 = L_12->get_OnDataReceivedEvent_40();
		String_t* L_14 = __this->get_data_1();
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_15 = __this->get_device_2();
		NullCheck(L_13);
		UnityEvent_2_Invoke_m324264A40386ECA3265553AD462245E9151C24E9(L_13, L_14, L_15, /*hidden argument*/UnityEvent_2_Invoke_m324264A40386ECA3265553AD462245E9151C24E9_RuntimeMethod_var);
		// });
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
// System.Void Uduino.UduinoManager/<AutoSendBundle>d__152::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoSendBundleU3Ed__152__ctor_mCA4C32C8C0AE32D5E84B31457A5B93C0903C6FCD (U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Uduino.UduinoManager/<AutoSendBundle>d__152::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoSendBundleU3Ed__152_System_IDisposable_Dispose_mFAE13E7031AC305A1350809A6AFAE15DDDB4A916 (U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Uduino.UduinoManager/<AutoSendBundle>d__152::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAutoSendBundleU3Ed__152_MoveNext_m5A12A8180D35363391CFBD9BF635B68203514431 (U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAutoSendBundleU3Ed__152_MoveNext_m5A12A8180D35363391CFBD9BF635B68203514431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * V_1 = NULL;
	Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0069;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0029:
	{
		// if (!LimitSendRate)
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = UduinoManager_get_LimitSendRate_mD771F5DC1D2BC8D2E93EAB1432D991195AFA64AB_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0048;
		}
	}
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0048:
	{
		// yield return new WaitForSeconds(sendRateSpeed / 1000.0f);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_sendRateSpeed_28();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_7 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_7, ((float)((float)(((float)((float)L_6)))/(float)(1000.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0069:
	{
		__this->set_U3CU3E1__state_0((-1));
		// List<string> keys = new List<string>(uduinoDevices.Keys);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_8 = V_1;
		NullCheck(L_8);
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_9 = L_8->get_uduinoDevices_5();
		NullCheck(L_9);
		KeyCollection_t49103ACE0E3DBEBB65A37FADA7F827CE7B0C18B2 * L_10 = Dictionary_2_get_Keys_mE9851C6F91B0565530E84534A4E69C8D3431C86A(L_9, /*hidden argument*/Dictionary_2_get_Keys_mE9851C6F91B0565530E84534A4E69C8D3431C86A_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_11 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599(L_11, L_10, /*hidden argument*/List_1__ctor_mE9FDDA3E872C3CB2DBDC8562E9ABA76CA3124599_RuntimeMethod_var);
		// foreach (string key in keys)
		NullCheck(L_11);
		Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813  L_12 = List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E(L_11, /*hidden argument*/List_1_GetEnumerator_mDFFBEE5A0B86EF1F068C4ED0ABC0F39B7CA7677E_RuntimeMethod_var);
		V_2 = L_12;
	}

IL_0086:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0088:
		{
			// foreach (string key in keys)
			String_t* L_13 = Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_inline((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m894E7226842A0AB920967095678A311EFF7C5737_RuntimeMethod_var);
			V_3 = L_13;
			// uduinoDevices[key].SendAllBundles();
			UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_14 = V_1;
			NullCheck(L_14);
			Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_15 = L_14->get_uduinoDevices_5();
			String_t* L_16 = V_3;
			NullCheck(L_15);
			UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_17 = Dictionary_2_get_Item_m6A96CE2CA53893FBAF20C4D6D63BAB5C64B3B596(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_m6A96CE2CA53893FBAF20C4D6D63BAB5C64B3B596_RuntimeMethod_var);
			NullCheck(L_17);
			UduinoDevice_SendAllBundles_m3AA0B34A59AB5F75640AAFDC6DE087AE52B4BC85(L_17, /*hidden argument*/NULL);
		}

IL_00a1:
		{
			// foreach (string key in keys)
			bool L_18 = Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m129741E497FB617DC9845CFEE4CB27B84C86301A_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0088;
			}
		}

IL_00aa:
		{
			IL2CPP_LEAVE(0x29, FINALLY_00af);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978((Enumerator_tBBAAE521602D26DCD42E467CF939632DC01EF813 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mD9B1DB257A9F9A3CEA69542101B953689A4AD978_RuntimeMethod_var);
		IL2CPP_END_FINALLY(175)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}
	{
		return (bool)0;
	}
}
// System.Object Uduino.UduinoManager/<AutoSendBundle>d__152::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAutoSendBundleU3Ed__152_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE6371005129CB302837EE62BD5203AD6C6048063 (U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager/<AutoSendBundle>d__152::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoSendBundleU3Ed__152_System_Collections_IEnumerator_Reset_m0DAED64503A8E1A6924041EB70F7A167068A7812 (U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAutoSendBundleU3Ed__152_System_Collections_IEnumerator_Reset_m0DAED64503A8E1A6924041EB70F7A167068A7812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAutoSendBundleU3Ed__152_System_Collections_IEnumerator_Reset_m0DAED64503A8E1A6924041EB70F7A167068A7812_RuntimeMethod_var);
	}
}
// System.Object Uduino.UduinoManager/<AutoSendBundle>d__152::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAutoSendBundleU3Ed__152_System_Collections_IEnumerator_get_Current_m400FD9FBDBAD0F1F49F7B9E9A2AF7246F350958F (U3CAutoSendBundleU3Ed__152_tFBAEFBBB299D17B3CCEBB1AAA60C959CC0E2FCF9 * __this, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoManager/<CoroutineRead>d__166::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineReadU3Ed__166__ctor_m32497998675242462CE0AA8181536976A4D6390A (U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Uduino.UduinoManager/<CoroutineRead>d__166::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineReadU3Ed__166_System_IDisposable_Dispose_m180ADC9A535966FF883F37BE94C06239858E66C8 (U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Uduino.UduinoManager/<CoroutineRead>d__166::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineReadU3Ed__166_MoveNext_m7CE513F9BDA78D2925455BF398832BECA0C0762C (U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCoroutineReadU3Ed__166_MoveNext_m7CE513F9BDA78D2925455BF398832BECA0C0762C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_009d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0029:
	{
		// if (target != null)
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_3 = __this->get_target_2();
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// target.WriteToArduinoLoop();
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_4 = __this->get_target_2();
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Uduino.UduinoDevice::WriteToArduinoLoop() */, L_4);
		// target.ReadFromArduinoLoop();
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_5 = __this->get_target_2();
		NullCheck(L_5);
		VirtFuncInvoker1< bool, bool >::Invoke(9 /* System.Boolean Uduino.UduinoDevice::ReadFromArduinoLoop(System.Boolean) */, L_5, (bool)0);
	}

IL_004a:
	{
		// if (limitSendRate)
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->get_limitSendRate_17();
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		// yield return new WaitForSeconds(sendRateSpeed / 1000.0f);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_sendRateSpeed_28();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_10 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_10, ((float)((float)(((float)((float)L_9)))/(float)(1000.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0073:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0029;
	}

IL_007c:
	{
		// yield return new WaitForSeconds(threadFrequency/1000.0f);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_threadFrequency_21();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_13 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_13, ((float)((float)(((float)((float)L_12)))/(float)(1000.0f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_009d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0029;
	}
}
// System.Object Uduino.UduinoManager/<CoroutineRead>d__166::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineReadU3Ed__166_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDC71777F3AC3F76691BFD8B54F43490E76533BB1 (U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager/<CoroutineRead>d__166::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineReadU3Ed__166_System_Collections_IEnumerator_Reset_m5EB9024EE0E8C8247C737D961AD6F49DE4D569F3 (U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCoroutineReadU3Ed__166_System_Collections_IEnumerator_Reset_m5EB9024EE0E8C8247C737D961AD6F49DE4D569F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CCoroutineReadU3Ed__166_System_Collections_IEnumerator_Reset_m5EB9024EE0E8C8247C737D961AD6F49DE4D569F3_RuntimeMethod_var);
	}
}
// System.Object Uduino.UduinoManager/<CoroutineRead>d__166::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoroutineReadU3Ed__166_System_Collections_IEnumerator_get_Current_mAAB361AD82CBDC5A3C0C0544945D4AF35C8FEA97 (U3CCoroutineReadU3Ed__166_t5F0F4A5FAC34FA649988D4CAACC8E9AD727F0113 * __this, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoManager/<DelayedDiscover>d__89::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDiscoverU3Ed__89__ctor_m7E394E9B30657288D1CAE916E10417EC41E79EB5 (U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Uduino.UduinoManager/<DelayedDiscover>d__89::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDiscoverU3Ed__89_System_IDisposable_Dispose_m169A52A41D634D2336379E7C48584E389956FFFB (U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Uduino.UduinoManager/<DelayedDiscover>d__89::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayedDiscoverU3Ed__89_MoveNext_m9FA410729D41480CE33D0D39C42FB637A4C00532 (U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedDiscoverU3Ed__89_MoveNext_m9FA410729D41480CE33D0D39C42FB637A4C00532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (delay == -1) delay = delayBeforeDiscover;
		float L_4 = __this->get_delay_2();
		if ((!(((float)L_4) == ((float)(-1.0f)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (delay == -1) delay = delayBeforeDiscover;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_delayBeforeDiscover_31();
		__this->set_delay_2(L_6);
	}

IL_0037:
	{
		// yield return new WaitForSeconds(delay);
		float L_7 = __this->get_delay_2();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_8 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0051:
	{
		__this->set_U3CU3E1__state_0((-1));
		// DiscoverPorts();
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_9 = V_1;
		NullCheck(L_9);
		UduinoManager_DiscoverPorts_mDA817C0313CCA4C1313B961E98E29F5B88F1919A(L_9, /*hidden argument*/NULL);
		// if(autoReconnect)
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->get_autoReconnect_36();
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		// StartCoroutine("RestartIfBoardNotDetected");
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_12 = V_1;
		NullCheck(L_12);
		MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD(L_12, _stringLiteral8A2A4E099BCAB523C092A5C08EA1E044AC059E36, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return (bool)0;
	}
}
// System.Object Uduino.UduinoManager/<DelayedDiscover>d__89::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDiscoverU3Ed__89_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m002EC74C537900BFABC5679060852E7707610543 (U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager/<DelayedDiscover>d__89::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayedDiscoverU3Ed__89_System_Collections_IEnumerator_Reset_m50D275E6D55378A6A36BC35677CDA0CDC55227F4 (U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayedDiscoverU3Ed__89_System_Collections_IEnumerator_Reset_m50D275E6D55378A6A36BC35677CDA0CDC55227F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDelayedDiscoverU3Ed__89_System_Collections_IEnumerator_Reset_m50D275E6D55378A6A36BC35677CDA0CDC55227F4_RuntimeMethod_var);
	}
}
// System.Object Uduino.UduinoManager/<DelayedDiscover>d__89::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayedDiscoverU3Ed__89_System_Collections_IEnumerator_get_Current_m3CD7D5FD0E8AFA7C7A7E1910B1F66B2212B95BF0 (U3CDelayedDiscoverU3Ed__89_tB99ADA013D1CF0132E6CE951B2BC6711A518CB54 * __this, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartIfBoardNotDetectedU3Ed__90__ctor_mF97C754143D0A9BCBA72C399720574D6124916F1 (U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartIfBoardNotDetectedU3Ed__90_System_IDisposable_Dispose_mCD3D7A37B6F30671853671B7C8D85C434F875ACC (U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRestartIfBoardNotDetectedU3Ed__90_MoveNext_m469AEAF8BCA9F5738D1C656E91B92E851E7C5A89 (U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestartIfBoardNotDetectedU3Ed__90_MoveNext_m469AEAF8BCA9F5738D1C656E91B92E851E7C5A89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(autoReconnectDelay);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_autoReconnectDelay_37();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (uduinoDevices.Count == 0) shouldReconnect = true;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_7 = V_1;
		NullCheck(L_7);
		Dictionary_2_t0C99270665855A242A42730A3148C9010FD41049 * L_8 = L_7->get_uduinoDevices_5();
		NullCheck(L_8);
		int32_t L_9 = Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321(L_8, /*hidden argument*/Dictionary_2_get_Count_m6ADF40F60A76F496FA9144404475C3FCB9762321_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		// if (uduinoDevices.Count == 0) shouldReconnect = true;
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_10 = V_1;
		NullCheck(L_10);
		L_10->set_shouldReconnect_38((bool)1);
	}

IL_0053:
	{
		// }
		return (bool)0;
	}
}
// System.Object Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartIfBoardNotDetectedU3Ed__90_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBE6784A63824E3962FDC7E233DD1491E88C28957 (U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRestartIfBoardNotDetectedU3Ed__90_System_Collections_IEnumerator_Reset_mA17B3E320E6FD89E93BFEBCE98A636AFCE2269DE (U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestartIfBoardNotDetectedU3Ed__90_System_Collections_IEnumerator_Reset_mA17B3E320E6FD89E93BFEBCE98A636AFCE2269DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CRestartIfBoardNotDetectedU3Ed__90_System_Collections_IEnumerator_Reset_mA17B3E320E6FD89E93BFEBCE98A636AFCE2269DE_RuntimeMethod_var);
	}
}
// System.Object Uduino.UduinoManager/<RestartIfBoardNotDetected>d__90::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRestartIfBoardNotDetectedU3Ed__90_System_Collections_IEnumerator_get_Current_m6A47649906B77EF75E86AADC302B82D621961A8A (U3CRestartIfBoardNotDetectedU3Ed__90_t37C45D0F031D93F74ECFB47340CA06DC11E85EC2 * __this, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoManager/BoardAlreadyExistException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardAlreadyExistException__ctor_m1B54CDF66C8D82DF511C08B18F728159B8D6492A (BoardAlreadyExistException_t7FA252A04F70FB74F0362FA40DF4DD48E0918A78 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardAlreadyExistException__ctor_m1B54CDF66C8D82DF511C08B18F728159B8D6492A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public class BoardAlreadyExistException : Exception { public BoardAlreadyExistException(string msg) : base(msg) { } }
		String_t* L_0 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		// public class BoardAlreadyExistException : Exception { public BoardAlreadyExistException(string msg) : base(msg) { } }
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
// System.Void Uduino.UduinoManager/OnBoardConnectedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBoardConnectedDelegate__ctor_m8647E0EF10FEDF62CA0DB6829F867A18F507E848 (OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Uduino.UduinoManager/OnBoardConnectedDelegate::Invoke(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBoardConnectedDelegate_Invoke_m219314AF6A3A131459C1528782E1DB53739A09A1 (OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___device0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___device0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___device0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___device0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___device0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___device0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___device0, targetMethod);
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
						GenericInterfaceActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, targetThis, ___device0);
					else
						GenericVirtActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, targetThis, ___device0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___device0);
					else
						VirtActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___device0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___device0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___device0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___device0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Uduino.UduinoManager/OnBoardConnectedDelegate::BeginInvoke(Uduino.UduinoDevice,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnBoardConnectedDelegate_BeginInvoke_m7E4F3594DE1BE750DB3822E0E925C0523E998622 (OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___device0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Uduino.UduinoManager/OnBoardConnectedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBoardConnectedDelegate_EndInvoke_m3719CEB7B034BD0E365F21D5D0BE7763D304B5A4 (OnBoardConnectedDelegate_t8989F11BA710D178753A04AAF0374C9AF4CC3384 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoManager/OnBoardDisconnectedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBoardDisconnectedDelegate__ctor_m2A2525E27157FB7F4B05499CD77151C05FC4E06E (OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Uduino.UduinoManager/OnBoardDisconnectedDelegate::Invoke(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBoardDisconnectedDelegate_Invoke_m0175464886F111F63E829902031FB5EB2F9DA7B4 (OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___device0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___device0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___device0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___device0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___device0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___device0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___device0, targetMethod);
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
						GenericInterfaceActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, targetThis, ___device0);
					else
						GenericVirtActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, targetThis, ___device0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___device0);
					else
						VirtActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___device0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___device0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___device0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___device0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Uduino.UduinoManager/OnBoardDisconnectedDelegate::BeginInvoke(Uduino.UduinoDevice,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnBoardDisconnectedDelegate_BeginInvoke_mA8A2F50E70DDCA967BA2DCF722FFB40090D82D89 (OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___device0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Uduino.UduinoManager/OnBoardDisconnectedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBoardDisconnectedDelegate_EndInvoke_m9648B2C6D5297B1B330C7C2FE891BB87ACAD7844 (OnBoardDisconnectedDelegate_t7FCF4D4AA0ADB7F6E9B0AA7FA15D2A295B146F40 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoManager/OnDataReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDataReceivedDelegate__ctor_mA0D0CC60D8FBDAF447567AA63AE69B92C50985A7 (OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Uduino.UduinoManager/OnDataReceivedDelegate::Invoke(System.String,Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDataReceivedDelegate_Invoke_m45ADB303544F62AD260517648196701E979ADA87 (OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * __this, String_t* ___data0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___device1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___device1, targetMethod);
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
						GenericInterfaceActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, ___data0, ___device1);
					else
						GenericVirtActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, ___data0, ___device1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0, ___device1);
					else
						VirtActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0, ___device1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___device1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___device1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, targetThis, ___data0, ___device1);
					else
						GenericVirtActionInvoker2< String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, targetThis, ___data0, ___device1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___device1);
					else
						VirtActionInvoker2< String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___device1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___data0) - 1), ___device1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, ___device1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___device1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Uduino.UduinoManager/OnDataReceivedDelegate::BeginInvoke(System.String,Uduino.UduinoDevice,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDataReceivedDelegate_BeginInvoke_m8A029951B0CC6F00764A08F4726B5238A991BD85 (OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * __this, String_t* ___data0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___data0;
	__d_args[1] = ___device1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Uduino.UduinoManager/OnDataReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDataReceivedDelegate_EndInvoke_m27D603AEC5C82FD02A41B05635F351B16D053AAD (OnDataReceivedDelegate_t3BF7574A9F04547E46A0A406FE91C86C34CBFA92 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoManager/OnValueReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueReceivedDelegate__ctor_m1B014BF02A58AE6AA69C2B06965B8D9F0538BF74 (OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Uduino.UduinoManager/OnValueReceivedDelegate::Invoke(System.String,Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueReceivedDelegate_Invoke_mFB8EF6F35664E23EE1013C11D81E523953BA6DFE (OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * __this, String_t* ___data0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___device1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___device1, targetMethod);
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
						GenericInterfaceActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, ___data0, ___device1);
					else
						GenericVirtActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, ___data0, ___device1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0, ___device1);
					else
						VirtActionInvoker1< UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0, ___device1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___device1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___device1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, targetThis, ___data0, ___device1);
					else
						GenericVirtActionInvoker2< String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(targetMethod, targetThis, ___data0, ___device1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___device1);
					else
						VirtActionInvoker2< String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___device1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___data0) - 1), ___device1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, ___device1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___device1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Uduino.UduinoManager/OnValueReceivedDelegate::BeginInvoke(System.String,Uduino.UduinoDevice,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnValueReceivedDelegate_BeginInvoke_mC2587EC48D886DCEAFA85B50580F6FE9DA79795E (OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * __this, String_t* ___data0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___data0;
	__d_args[1] = ___device1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Uduino.UduinoManager/OnValueReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueReceivedDelegate_EndInvoke_m214C313A147BDE0A6ED239262DFB49876EB7A5AF (OnValueReceivedDelegate_t26A5DF64987A61268382C55E80ED83B72C193544 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Uduino.UduinoManager/eventBoard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void eventBoard__ctor_m9B6E2E770D4950D70366F309A453B6566229DF4F (eventBoard_t8BC0918006535568A2223543B6AF4B4631765609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (eventBoard__ctor_m9B6E2E770D4950D70366F309A453B6566229DF4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m2425BF6294B29967F7EF6C91B0019D28577FA2BD(__this, /*hidden argument*/UnityEvent_1__ctor_m2425BF6294B29967F7EF6C91B0019D28577FA2BD_RuntimeMethod_var);
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
// System.Void Uduino.UduinoManager/eventValueReceived::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void eventValueReceived__ctor_mA3E6D276900772654354D8C7075928D63E638F68 (eventValueReceived_t8130A3E2DE2BCEC0FA5F327D9C1A9B0E880E747E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (eventValueReceived__ctor_mA3E6D276900772654354D8C7075928D63E638F68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m09DCA4D04F7E62BF2F027663F420E933039BEE78(__this, /*hidden argument*/UnityEvent_2__ctor_m09DCA4D04F7E62BF2F027663F420E933039BEE78_RuntimeMethod_var);
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
// System.String Uduino.UduinoVersion::getVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UduinoVersion_getVersion_m645347C686E3143416AC559A8594B9ED9C600B04 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoVersion_getVersion_m645347C686E3143416AC559A8594B9ED9C600B04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return major + "." + minor + "." + patch;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var);
		int32_t L_2 = ((UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields*)il2cpp_codegen_static_fields_for(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var))->get_major_0();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		int32_t L_7 = ((UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields*)il2cpp_codegen_static_fields_for(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var))->get_minor_1();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		int32_t L_12 = ((UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields*)il2cpp_codegen_static_fields_for(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var))->get_patch_2();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String Uduino.UduinoVersion::lastUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UduinoVersion_lastUpdate_mF194F6EDF8EE3CFF7FEF610E24713C2C54849E8D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoVersion_lastUpdate_mF194F6EDF8EE3CFF7FEF610E24713C2C54849E8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return update;
		IL2CPP_RUNTIME_CLASS_INIT(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var);
		String_t* L_0 = ((UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields*)il2cpp_codegen_static_fields_for(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var))->get_update_3();
		return L_0;
	}
}
// System.Void Uduino.UduinoVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoVersion__cctor_m7C670201BB5521466D97098F3E9D0A670B2A7352 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoVersion__cctor_m7C670201BB5521466D97098F3E9D0A670B2A7352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int major = 3;
		((UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields*)il2cpp_codegen_static_fields_for(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var))->set_major_0(3);
		// static int minor = 0;
		((UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields*)il2cpp_codegen_static_fields_for(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var))->set_minor_1(0);
		// static int patch = 3;
		((UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields*)il2cpp_codegen_static_fields_for(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var))->set_patch_2(3);
		// static string update = "May 2019";
		((UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_StaticFields*)il2cpp_codegen_static_fields_for(UduinoVersion_t4C3A85DC2951BA5266C254BE97CD278D36B37F9A_il2cpp_TypeInfo_var))->set_update_3(_stringLiteralC215392D2EF3AF35DF5D17EA8987D1AA2A34EE95);
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
// System.Void UduinoEventsReceiver::DataReceived(System.String,Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoEventsReceiver_DataReceived_m58D73DB2B96EA2299C0FC5AE68966B49E9599C46 (UduinoEventsReceiver_t1850846D8D3AF37704E855AC1EB3487AF199CF8A * __this, String_t* ___message0, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoEventsReceiver_DataReceived_m58D73DB2B96EA2299C0FC5AE68966B49E9599C46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Event: Message :\"" + message + "\" , received from board " + device.name);
		String_t* L_0 = ___message0;
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_1 = ___device1;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_name_0();
		String_t* L_3 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral71AA0ABF0D7DD219818E1A1DA63F5CB29B4DDD75, L_0, _stringLiteral1BCEA69475048CF070EC94BED7A2EF98011885B6, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UduinoEventsReceiver::BoardConnected(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoEventsReceiver_BoardConnected_mBB1568163211C00FD74B3665252173025C417608 (UduinoEventsReceiver_t1850846D8D3AF37704E855AC1EB3487AF199CF8A * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoEventsReceiver_BoardConnected_mBB1568163211C00FD74B3665252173025C417608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Event: Board " + device.name +" connected");
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___device0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralF826223C9018BB726AFEE1CC3A2EBFAA33104D3E, L_1, _stringLiteral9AD7224DB7E64CF4AE2F340AA628897952DD63F5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UduinoEventsReceiver::BoardDisconnected(Uduino.UduinoDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoEventsReceiver_BoardDisconnected_mA8E80A82588EE31EC95A0AED902DC7B7294F581C (UduinoEventsReceiver_t1850846D8D3AF37704E855AC1EB3487AF199CF8A * __this, UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * ___device0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoEventsReceiver_BoardDisconnected_mA8E80A82588EE31EC95A0AED902DC7B7294F581C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Event: Board " + device.name + " disconnected.");
		UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * L_0 = ___device0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		String_t* L_2 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralF826223C9018BB726AFEE1CC3A2EBFAA33104D3E, L_1, _stringLiteral093E1DF21527B696EDC9F87022E89A766E1477CF, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UduinoEventsReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoEventsReceiver__ctor_mEDBD8C327D1AC9B7ACE32177387AE84C569B4EE4 (UduinoEventsReceiver_t1850846D8D3AF37704E855AC1EB3487AF199CF8A * __this, const RuntimeMethod* method)
{
	{
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
// System.Void UduinoShortCall::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoShortCall_Update_m7EE01C2BB47D4D86ABD956286D35E1E7B574AEC4 (UduinoShortCall_t11A361FA6058666855C8B07FCDF873A0B9B7117C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UduinoShortCall_Update_m7EE01C2BB47D4D86ABD956286D35E1E7B574AEC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UduinoManager.Instance.Read("mySensor", action: (string data) => sensorOne = int.Parse(data));
		IL2CPP_RUNTIME_CLASS_INIT(UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073_il2cpp_TypeInfo_var);
		UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * L_0 = UduinoManager_get_Instance_m036AE23776A07A1939EBFBD59416A802466C25A2(/*hidden argument*/NULL);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)il2cpp_codegen_object_new(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0_il2cpp_TypeInfo_var);
		Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3(L_1, __this, (intptr_t)((intptr_t)UduinoShortCall_U3CUpdateU3Eb__2_0_mF5C6E9314D4F648B58D8CE67A92EF7CFBC030934_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m4F1B6EE6AB328B8B63B3B2CD8FB89A119C3143F3_RuntimeMethod_var);
		NullCheck(L_0);
		UduinoManager_Read_m884ACDF65D0E068B209C6CEE7CC6924CE4EDC24F(L_0, _stringLiteralA5667FE2AB8054BAE9CDD965F752E1CC2A62A4A6, L_1, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UduinoShortCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoShortCall__ctor_mD57EF1FBC5389BA6D05345AA37E859E80C3AD636 (UduinoShortCall_t11A361FA6058666855C8B07FCDF873A0B9B7117C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UduinoShortCall::<Update>b__2_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UduinoShortCall_U3CUpdateU3Eb__2_0_mF5C6E9314D4F648B58D8CE67A92EF7CFBC030934 (UduinoShortCall_t11A361FA6058666855C8B07FCDF873A0B9B7117C * __this, String_t* ___data0, const RuntimeMethod* method)
{
	{
		// UduinoManager.Instance.Read("mySensor", action: (string data) => sensorOne = int.Parse(data));
		String_t* L_0 = ___data0;
		int32_t L_1 = Int32_Parse_m5807B6243415790250FC25168F767C08FC16FDEA(L_0, /*hidden argument*/NULL);
		__this->set_sensorOne_5(L_1);
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
// System.Void YawAndRollControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YawAndRollControl_Start_mAEDEC7A61B2DAB099EBB666AB0DC9FF262581EA8 (YawAndRollControl_tACC3C41B12A01D48D8933A51383115B0DE3301AB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void YawAndRollControl::CallUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YawAndRollControl_CallUpdate_m12D68E87522A338E286E499DDA9239D8AEE44685 (YawAndRollControl_tACC3C41B12A01D48D8933A51383115B0DE3301AB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void YawAndRollControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YawAndRollControl__ctor_m556E35C9D8A0929B9DFCE75746E21CEF0C774130 (YawAndRollControl_tACC3C41B12A01D48D8933A51383115B0DE3301AB * __this, const RuntimeMethod* method)
{
	{
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
// System.Void chairTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chairTest_Start_m945082CFDA614721AD13E12CE93CA1F55D1A3AB4 (chairTest_tEAC4726426BE3DFB379794519D7CEE1C12A90B40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (chairTest_Start_m945082CFDA614721AD13E12CE93CA1F55D1A3AB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animation = this.GetComponent<Animation>();
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = Component_GetComponent_TisAnimation_tCFC171459D159DDEC6500B55543A76219D49BB9C_mA47DE57327917E1273751CB3892224AAFDBB7CF0(__this, /*hidden argument*/Component_GetComponent_TisAnimation_tCFC171459D159DDEC6500B55543A76219D49BB9C_mA47DE57327917E1273751CB3892224AAFDBB7CF0_RuntimeMethod_var);
		__this->set_animation_4(L_0);
		// }
		return;
	}
}
// System.Void chairTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chairTest_Update_m13B72658911E92DE9195B47FFF5376F0CE13059A (chairTest_tEAC4726426BE3DFB379794519D7CEE1C12A90B40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (chairTest_Update_m13B72658911E92DE9195B47FFF5376F0CE13059A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey(KeyCode.F1))
		bool L_0 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)282), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// if (!animation.IsPlaying("RotLR"))
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_1 = __this->get_animation_4();
		NullCheck(L_1);
		bool L_2 = Animation_IsPlaying_m7E78EE738A3A1F0B2B0365171EFE2B55B1E421A0(L_1, _stringLiteral7FE0F3C6F1200F90D8400E857F47B24B6DEAF4D4, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		// animation.Play("RotLR");
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_3 = __this->get_animation_4();
		NullCheck(L_3);
		Animation_Play_m743CCCF04B64977460915D9E7007B0859BDF6AE9(L_3, _stringLiteral7FE0F3C6F1200F90D8400E857F47B24B6DEAF4D4, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// if (Input.GetKey(KeyCode.F2))
		bool L_4 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)283), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		// if (!animation.IsPlaying("RotFB"))
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_5 = __this->get_animation_4();
		NullCheck(L_5);
		bool L_6 = Animation_IsPlaying_m7E78EE738A3A1F0B2B0365171EFE2B55B1E421A0(L_5, _stringLiteral2E2C4A3EBC1C1E72B1CE04B0ED674CBBFD8BE644, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		// animation.Play("RotFB");
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_7 = __this->get_animation_4();
		NullCheck(L_7);
		Animation_Play_m743CCCF04B64977460915D9E7007B0859BDF6AE9(L_7, _stringLiteral2E2C4A3EBC1C1E72B1CE04B0ED674CBBFD8BE644, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// if (Input.GetKey(KeyCode.F3))
		bool L_8 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)284), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		// this.transform.Rotate(0, -2, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9(L_9, (0.0f), (-2.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_0084:
	{
		// if (Input.GetKey(KeyCode.F4))
		bool L_10 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)285), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00aa;
		}
	}
	{
		// this.transform.Rotate(0, 2, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9(L_11, (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void chairTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void chairTest__ctor_mD9FB103B9DE6C48DAA2E244F3F47C38F11435FA9 (chairTest_tEAC4726426BE3DFB379794519D7CEE1C12A90B40 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_Start_m53350D0C9B2B3AA72950FBC77CEC6640573077C5 (test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void test::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test_Update_mCFF7C1353EBC9F01ACB6D86615739414EA290B58 (test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void test__ctor_mABCF8736B1B2838F5F8F1AE6C4D399AF0EB9C769 (test_tBCA4AC3C1D45BA0DD176A21EC1F45D70CE6F1246 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void tiltControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tiltControl_Start_m9687F676D99A99BC95D767FCA9391B4217234427 (tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void tiltControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tiltControl_Update_m7A85586B1C3D5A06FF76A2636CEE507344ADC964 (tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (tiltControl_Update_m7A85586B1C3D5A06FF76A2636CEE507344ADC964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 cameraRot = GetCameraRotation();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = tiltControl_GetCameraRotation_m612981BF747F37CC4DC1F90F6A58544A48DB4BCD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// print("Camera at " + cameraRot);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = L_1;
		RuntimeObject * L_3 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral9CF959B5D826CDD0D8F001FBB43DA511CC300929, L_3, /*hidden argument*/NULL);
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_4, /*hidden argument*/NULL);
		// cubeRef.transform.rotation = Quaternion.Euler(cameraRot);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_cubeRef_8();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_6, L_8, /*hidden argument*/NULL);
		// this.transform.forward = Quaternion.Euler(0f, rotMult * cubeRef.transform.rotation.z, 0f) * this.transform.forward;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_10 = __this->get_rotMult_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_cubeRef_8();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_z_2();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_14)), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_forward_m02858E8B3313B27174B19E9113F24EF25FBCEC7F(L_9, L_18, /*hidden argument*/NULL);
		// cubeRef.transform.GetChild(0).forward = Quaternion.Euler(0f, rotMult * cubeRef.transform.rotation.z, 0f) * cubeRef.transform.GetChild(0).forward;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_cubeRef_8();
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_20, 0, /*hidden argument*/NULL);
		float L_22 = __this->get_rotMult_7();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = __this->get_cubeRef_8();
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_z_2();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), ((float)il2cpp_codegen_multiply((float)L_22, (float)L_26)), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_cubeRef_8();
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_29, 0, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_27, L_31, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_forward_m02858E8B3313B27174B19E9113F24EF25FBCEC7F(L_21, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 tiltControl::GetCameraRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  tiltControl_GetCameraRotation_m612981BF747F37CC4DC1F90F6A58544A48DB4BCD (tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (tiltControl_GetCameraRotation_m612981BF747F37CC4DC1F90F6A58544A48DB4BCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 centerToCamera = playerCam.transform.localPosition - Vector3.zero;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_playerCam_9();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Debug.DrawRay(Vector3.zero, 5f * centerToCamera, Color.green);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((5.0f), L_6, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_5, L_7, L_8, /*hidden argument*/NULL);
		// Debug.DrawRay(Vector3.zero, 5f * this.transform.forward, Color.blue);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((5.0f), L_11, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_13 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_9, L_12, L_13, /*hidden argument*/NULL);
		// Debug.DrawRay(Vector3.zero, 5f * Vector3.up, Color.red);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((5.0f), L_15, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_17 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_14, L_16, L_17, /*hidden argument*/NULL);
		// return new Vector3(
		//     maxZAngle * rotMult * Mathf.Clamp(centerToCamera.z, -maxHeadsetDist, maxHeadsetDist),
		//     0.0f,
		//     maxXAngle * rotMult * Mathf.Clamp(centerToCamera.x, -maxHeadsetDist, maxHeadsetDist)
		//     );
		float L_18 = __this->get_maxZAngle_6();
		float L_19 = __this->get_rotMult_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = L_20.get_z_4();
		float L_22 = __this->get_maxHeadsetDist_4();
		float L_23 = __this->get_maxHeadsetDist_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_24 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_21, ((-L_22)), L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_maxXAngle_5();
		float L_26 = __this->get_rotMult_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		float L_28 = L_27.get_x_2();
		float L_29 = __this->get_maxHeadsetDist_4();
		float L_30 = __this->get_maxHeadsetDist_4();
		float L_31 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_28, ((-L_29)), L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_32), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), (float)L_24)), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)), (float)L_31)), /*hidden argument*/NULL);
		return L_32;
	}
}
// UnityEngine.Vector3 tiltControl::GetCameraOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  tiltControl_GetCameraOffset_m2A0FFA6806A4AF2ECA9549F4F286F43096CF9411 (tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (tiltControl_GetCameraOffset_m2A0FFA6806A4AF2ECA9549F4F286F43096CF9411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 centerToCamera = playerCam.transform.position - this.transform.position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_playerCam_9();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// return new Vector3(
		//     Mathf.Clamp(centerToCamera.x, -maxHeadsetDist, maxHeadsetDist),
		//     Mathf.Clamp(centerToCamera.y, -maxHeadsetDist, maxHeadsetDist),
		//     Mathf.Clamp(centerToCamera.z, -maxHeadsetDist, maxHeadsetDist)
		//     );
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		float L_8 = __this->get_maxHeadsetDist_4();
		float L_9 = __this->get_maxHeadsetDist_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_7, ((-L_8)), L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		float L_13 = __this->get_maxHeadsetDist_4();
		float L_14 = __this->get_maxHeadsetDist_4();
		float L_15 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_12, ((-L_13)), L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_0;
		float L_17 = L_16.get_z_4();
		float L_18 = __this->get_maxHeadsetDist_4();
		float L_19 = __this->get_maxHeadsetDist_4();
		float L_20 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_17, ((-L_18)), L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), L_10, L_15, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void tiltControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tiltControl__ctor_m54FFBA3930F3F8A82F50A899034E40F6D31D9DF3 (tiltControl_t161DFDDD46BFF31E04EE55E1A59A0A152A0EBF57 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float maxHeadsetDist = 3f, maxXAngle = 40f, maxZAngle = 40f, rotMult = 2.8f;
		__this->set_maxHeadsetDist_4((3.0f));
		// [SerializeField] private float maxHeadsetDist = 3f, maxXAngle = 40f, maxZAngle = 40f, rotMult = 2.8f;
		__this->set_maxXAngle_5((40.0f));
		// [SerializeField] private float maxHeadsetDist = 3f, maxXAngle = 40f, maxZAngle = 40f, rotMult = 2.8f;
		__this->set_maxZAngle_6((40.0f));
		// [SerializeField] private float maxHeadsetDist = 3f, maxXAngle = 40f, maxZAngle = 40f, rotMult = 2.8f;
		__this->set_rotMult_7((2.8f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* UduinoDevice_getIdentity_mCB7CF214F38F20E6D9140850B801831C5786A502_inline (UduinoDevice_t8209B9A4C493921AB3482E6A30748F9F2778DE9A * __this, const RuntimeMethod* method)
{
	{
		// return identity;
		String_t* L_0 = __this->get_identity_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool UduinoManager_IsRunning_mC1B8002F69AE86A87126E07CBC5C891C0C6035BB_inline (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// return threadRunning;
		bool L_0 = __this->get_threadRunning_56();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool UduinoManager_get_LimitSendRate_mD771F5DC1D2BC8D2E93EAB1432D991195AFA64AB_inline (UduinoManager_tF833B6AFD52CB17839EDD3EEA2014FB2BF947073 * __this, const RuntimeMethod* method)
{
	{
		// get { return limitSendRate; }
		bool L_0 = __this->get_limitSendRate_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_0 = (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )__this->get_current_3();
		return (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
