#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<SimpleGDPRConsent.GDPRSection>
struct List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<SimpleGDPRConsent.PrivacyPolicyLink>
struct List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<GDPRConsentDialog/Section>
struct List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Text.Encoding[]
struct EncodingU5BU5D_t5B701849305EF21A2CEB2067EE359A169247A72D;
// SimpleGDPRConsent.GDPRSection[]
struct GDPRSectionU5BU5D_tC853EC79F87E5EF31260ACE97A6B33DA3908F94B;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// SimpleGDPRConsent.PrivacyPolicyLink[]
struct PrivacyPolicyLinkU5BU5D_tBBDEB8BF470D58C96E5CD4AB67D65DFAB6E4A7D0;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// GDPRConsentDialog/Section[]
struct SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// SimpleGDPRConsent.EventSystemHandler
struct EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// SimpleGDPRConsent.GDPRConsentCanvas
struct GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D;
// GDPRConsentDialog
struct GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE;
// SimpleGDPRConsent.GDPRSection
struct GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IGDPRDialog
struct IGDPRDialog_t8BE2BDBB43722F32BDC1FAA5465298ED5D88C763;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// SimpleGDPRConsent.PrivacyPolicyLink
struct PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SimpleGDPRConsent.SlidingToggle
struct SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TermsOfServiceDialog
struct TermsOfServiceDialog_t98D56EE532ABBB56518494594212B4CDB2A79E76;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebClient
struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// SimpleGDPR/<WaitForDialog>d__14
struct U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C;
// SimpleGDPR/ButtonClickDelegate
struct ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A;
// SimpleGDPR/DialogClosedDelegate
struct DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A;
// System.Net.WebClient/ProgressData
struct ProgressData_t1F3811B736C88415412A94F03AB8FE615640F96F;

IL2CPP_EXTERN_C RuntimeClass* ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGDPRDialog_t8BE2BDBB43722F32BDC1FAA5465298ED5D88C763_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0D13F733895387386FF7D78CBB8B0B20838120;
IL2CPP_EXTERN_C String_t* _stringLiteral422C9A3883B0965E705DCE8EF254102A0E3BC26A;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral875EC94E4F097EF5186CA36B6096EBE3BB6D0E5E;
IL2CPP_EXTERN_C String_t* _stringLiteral87F43E59B3E01BCA33572B918DA5A720D0894ED4;
IL2CPP_EXTERN_C String_t* _stringLiteral88120EBA47DDBE54FA31E84F4C62A4196C169A97;
IL2CPP_EXTERN_C String_t* _stringLiteral9F570E562250D08C335B6D55FC58DEE572E3BFFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA7477E22AD99F139F15B4AADC14A80DF8EA3628C;
IL2CPP_EXTERN_C String_t* _stringLiteralBBABD1F29E26189AA7581CE6614D6ED565A439BA;
IL2CPP_EXTERN_C String_t* _stringLiteralBE0BE7CD91F6E28D492824F7843C9D2830F3652C;
IL2CPP_EXTERN_C String_t* _stringLiteralE50188CA98E77FD90115FA923FFC6B12E5596702;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSystemHandler_OnSceneLoaded_m04ED34D60B874229A2F7F9172FD9DAF6F29506F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSystemHandler_OnSceneUnloaded_m6319997DCC70982891D5301DB95F16FEE815AD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GDPRConsentCanvas_OnAcceptTermsButtonClicked_mDB880BC911DA368BFDB1B166CD26E7F2CE7DF9F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GDPRConsentCanvas_OnCloseDialogButtonClicked_m226738B9C47722EC643FA3B080304A5A5A18C6BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GDPRSection_OnButtonClicked_mC6491AAC0E640352D97C3A2D00B0F804BD353A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_mCFB0404E6F277BDFA4C1FAF3F4C3A8AF22C696DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0B45D5DEDC49F8DEF921B0AF8E483628935C3727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0EE81D98A7EDC174882EA2B81DE8D50C1C98BE5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDF3B653E3587226F17CA2C4321EBC07476094894_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1E04FEBB17B530C57C45E29BB2EF9A063E5D3932_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2F6D3BD67313C6AF3EC9CD0F1403025BA764ACB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m66DC97C21D85EE59DA848F00667A609E69D473D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC34F5E3306FF04CF2997E93F03C8DD693B79A52B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE39875D1E7CFF58F489D56014080EDA48E4AA878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m260263186236269AE737E3537B243317A3C5614C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE986DF7FE8DC13D1FE80783B9325EFE9C682B3AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_m9D7A7469144BDBD4CBAD7A2B3EB1B75D47FA1E99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0_m06284FB021F0D418445AEDA1144A4FCB5A298C0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisPrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03_mD10297D2A68AA0A6B45301C1EFBF5108AF93466D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0653332855B1383E4F34F39986D52E40939985F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForDialogU3Ed__14_System_Collections_IEnumerator_Reset_m56748934559E6622FA5C8D1D8398AA2E4D0BFDF8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFACCD2F1945215B241EA5EDD0249E0C59AD19158 
{
};

// System.Collections.Generic.List`1<SimpleGDPRConsent.GDPRSection>
struct List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GDPRSectionU5BU5D_tC853EC79F87E5EF31260ACE97A6B33DA3908F94B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GDPRSectionU5BU5D_tC853EC79F87E5EF31260ACE97A6B33DA3908F94B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<SimpleGDPRConsent.PrivacyPolicyLink>
struct List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PrivacyPolicyLinkU5BU5D_tBBDEB8BF470D58C96E5CD4AB67D65DFAB6E4A7D0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PrivacyPolicyLinkU5BU5D_tBBDEB8BF470D58C96E5CD4AB67D65DFAB6E4A7D0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GDPRConsentDialog/Section>
struct List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// GDPRConsentDialog
struct GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<GDPRConsentDialog/Section> GDPRConsentDialog::sections
	List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* ___sections_0;
	// System.Collections.Generic.List`1<System.String> GDPRConsentDialog::privacyPolicyLinks
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___privacyPolicyLinks_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TermsOfServiceDialog
struct TermsOfServiceDialog_t98D56EE532ABBB56518494594212B4CDB2A79E76  : public RuntimeObject
{
	// System.String TermsOfServiceDialog::termsOfServiceLink
	String_t* ___termsOfServiceLink_0;
	// System.String TermsOfServiceDialog::privacyPolicyLink
	String_t* ___privacyPolicyLink_1;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// SimpleGDPR/<WaitForDialog>d__14
struct U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C  : public RuntimeObject
{
	// System.Int32 SimpleGDPR/<WaitForDialog>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SimpleGDPR/<WaitForDialog>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// IGDPRDialog SimpleGDPR/<WaitForDialog>d__14::dialog
	RuntimeObject* ___dialog_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// GDPRConsentDialog/Section
struct Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 
{
	// System.String GDPRConsentDialog/Section::description
	String_t* ___description_0;
	// System.String GDPRConsentDialog/Section::title
	String_t* ___title_1;
	// System.String GDPRConsentDialog/Section::identifier
	String_t* ___identifier_2;
	// System.Boolean GDPRConsentDialog/Section::initialConsentValue
	bool ___initialConsentValue_3;
	// System.String GDPRConsentDialog/Section::buttonLabel
	String_t* ___buttonLabel_4;
	// SimpleGDPR/ButtonClickDelegate GDPRConsentDialog/Section::onButtonClicked
	ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* ___onButtonClicked_5;
};
// Native definition for P/Invoke marshalling of GDPRConsentDialog/Section
struct Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshaled_pinvoke
{
	char* ___description_0;
	char* ___title_1;
	char* ___identifier_2;
	int32_t ___initialConsentValue_3;
	char* ___buttonLabel_4;
	Il2CppMethodPointer ___onButtonClicked_5;
};
// Native definition for COM marshalling of GDPRConsentDialog/Section
struct Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshaled_com
{
	Il2CppChar* ___description_0;
	Il2CppChar* ___title_1;
	Il2CppChar* ___identifier_2;
	int32_t ___initialConsentValue_3;
	Il2CppChar* ___buttonLabel_4;
	Il2CppMethodPointer ___onButtonClicked_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// SimpleGDPR
struct SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8  : public RuntimeObject
{
};

struct SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_StaticFields
{
	// System.Nullable`1<System.Boolean> SimpleGDPR::m_isGDPRApplicable
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_isGDPRApplicable_1;
};

// System.Net.WebClient
struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Uri System.Net.WebClient::_baseAddress
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____baseAddress_4;
	// System.Net.ICredentials System.Net.WebClient::_credentials
	RuntimeObject* ____credentials_5;
	// System.Net.WebHeaderCollection System.Net.WebClient::_headers
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ____headers_6;
	// System.Collections.Specialized.NameValueCollection System.Net.WebClient::_requestParameters
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____requestParameters_7;
	// System.Net.WebResponse System.Net.WebClient::_webResponse
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ____webResponse_8;
	// System.Net.WebRequest System.Net.WebClient::_webRequest
	WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* ____webRequest_9;
	// System.Text.Encoding System.Net.WebClient::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_10;
	// System.String System.Net.WebClient::_method
	String_t* ____method_11;
	// System.Int64 System.Net.WebClient::_contentLength
	int64_t ____contentLength_12;
	// System.Boolean System.Net.WebClient::_canceled
	bool ____canceled_13;
	// System.Net.WebClient/ProgressData System.Net.WebClient::_progress
	ProgressData_t1F3811B736C88415412A94F03AB8FE615640F96F* ____progress_14;
	// System.Net.IWebProxy System.Net.WebClient::_proxy
	RuntimeObject* ____proxy_15;
	// System.Boolean System.Net.WebClient::_proxySet
	bool ____proxySet_16;
	// System.Int32 System.Net.WebClient::_callNesting
	int32_t ____callNesting_17;
	// System.Net.Cache.RequestCachePolicy System.Net.WebClient::<CachePolicy>k__BackingField
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___U3CCachePolicyU3Ek__BackingField_18;
};

struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_StaticFields
{
	// System.Char[] System.Net.WebClient::s_parseContentTypeSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_parseContentTypeSeparators_19;
	// System.Text.Encoding[] System.Net.WebClient::s_knownEncodings
	EncodingU5BU5D_t5B701849305EF21A2CEB2067EE359A169247A72D* ___s_knownEncodings_20;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// SimpleGDPR/ButtonClickDelegate
struct ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A  : public MulticastDelegate_t
{
};

// SimpleGDPR/DialogClosedDelegate
struct DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A  : public MulticastDelegate_t
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// SimpleGDPRConsent.EventSystemHandler
struct EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SimpleGDPRConsent.EventSystemHandler::embeddedEventSystem
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___embeddedEventSystem_4;
};

// SimpleGDPRConsent.GDPRConsentCanvas
struct GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SimpleGDPRConsent.PrivacyPolicyLink SimpleGDPRConsent.GDPRConsentCanvas::_termsOfService
	PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* ____termsOfService_5;
	// SimpleGDPRConsent.PrivacyPolicyLink SimpleGDPRConsent.GDPRConsentCanvas::_privacyPolicy
	PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* ____privacyPolicy_6;
	// UnityEngine.UI.Button SimpleGDPRConsent.GDPRConsentCanvas::acceptButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___acceptButton_7;
	// SimpleGDPRConsent.GDPRSection SimpleGDPRConsent.GDPRConsentCanvas::sectionPrefab
	GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* ___sectionPrefab_8;
	// UnityEngine.RectTransform SimpleGDPRConsent.GDPRConsentCanvas::horizontalLinePrefab
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___horizontalLinePrefab_9;
	// SimpleGDPRConsent.PrivacyPolicyLink SimpleGDPRConsent.GDPRConsentCanvas::privacyPolicyPrefab
	PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* ___privacyPolicyPrefab_10;
	// UnityEngine.RectTransform SimpleGDPRConsent.GDPRConsentCanvas::sectionsParent
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___sectionsParent_11;
	// UnityEngine.RectTransform SimpleGDPRConsent.GDPRConsentCanvas::privacyPoliciesParent
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___privacyPoliciesParent_12;
	// UnityEngine.UI.Button SimpleGDPRConsent.GDPRConsentCanvas::closeButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___closeButton_13;
	// UnityEngine.RectTransform SimpleGDPRConsent.GDPRConsentCanvas::dialog
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___dialog_14;
	// UnityEngine.CanvasGroup SimpleGDPRConsent.GDPRConsentCanvas::dialogCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___dialogCanvasGroup_15;
	// UnityEngine.UI.ScrollRect SimpleGDPRConsent.GDPRConsentCanvas::scrollView
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollView_16;
	// UnityEngine.RectTransform SimpleGDPRConsent.GDPRConsentCanvas::termsView
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___termsView_17;
	// UnityEngine.RectTransform SimpleGDPRConsent.GDPRConsentCanvas::consentView
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___consentView_18;
	// UnityEngine.Vector2 SimpleGDPRConsent.GDPRConsentCanvas::dialogPadding
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dialogPadding_19;
	// System.Collections.Generic.List`1<SimpleGDPRConsent.GDPRSection> SimpleGDPRConsent.GDPRConsentCanvas::sectionsUI
	List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* ___sectionsUI_20;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> SimpleGDPRConsent.GDPRConsentCanvas::sectionSeparatorsUI
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___sectionSeparatorsUI_21;
	// System.Collections.Generic.List`1<SimpleGDPRConsent.PrivacyPolicyLink> SimpleGDPRConsent.GDPRConsentCanvas::privacyPoliciesUI
	List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* ___privacyPoliciesUI_22;
	// SimpleGDPR/DialogClosedDelegate SimpleGDPRConsent.GDPRConsentCanvas::onDialogClosed
	DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed_23;
	// System.Int32 SimpleGDPRConsent.GDPRConsentCanvas::dimensionsChangeCountdown
	int32_t ___dimensionsChangeCountdown_24;
	// System.Single SimpleGDPRConsent.GDPRConsentCanvas::contentPaddingY
	float ___contentPaddingY_25;
};

struct GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields
{
	// SimpleGDPRConsent.GDPRConsentCanvas SimpleGDPRConsent.GDPRConsentCanvas::m_instance
	GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* ___m_instance_4;
};

// SimpleGDPRConsent.GDPRSection
struct GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SimpleGDPRConsent.GDPRSection::title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___title_4;
	// UnityEngine.UI.Text SimpleGDPRConsent.GDPRSection::buttonLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonLabel_5;
	// UnityEngine.UI.Text SimpleGDPRConsent.GDPRSection::description
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___description_6;
	// UnityEngine.UI.Button SimpleGDPRConsent.GDPRSection::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_7;
	// SimpleGDPRConsent.SlidingToggle SimpleGDPRConsent.GDPRSection::toggleHolder
	SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* ___toggleHolder_8;
	// UnityEngine.GameObject SimpleGDPRConsent.GDPRSection::toggle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___toggle_9;
	// GDPRConsentDialog/Section SimpleGDPRConsent.GDPRSection::section
	Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 ___section_10;
};

// SimpleGDPRConsent.PrivacyPolicyLink
struct PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SimpleGDPRConsent.PrivacyPolicyLink::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// System.String SimpleGDPRConsent.PrivacyPolicyLink::url
	String_t* ___url_5;
};

// SimpleGDPRConsent.SlidingToggle
struct SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform SimpleGDPRConsent.SlidingToggle::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_4;
	// UnityEngine.UI.Image SimpleGDPRConsent.SlidingToggle::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_5;
	// UnityEngine.Sprite SimpleGDPRConsent.SlidingToggle::backgroundOn
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___backgroundOn_6;
	// UnityEngine.Sprite SimpleGDPRConsent.SlidingToggle::backgroundOff
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___backgroundOff_7;
	// System.Boolean SimpleGDPRConsent.SlidingToggle::m_value
	bool ___m_value_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GDPRConsentDialog/Section[]
struct SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F  : public RuntimeArray
{
	ALIGN_FIELD (8) Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 m_Items[1];

	inline Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___identifier_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___buttonLabel_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___onButtonClicked_5), (void*)NULL);
		#endif
	}
	inline Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___identifier_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___buttonLabel_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___onButtonClicked_5), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<GDPRConsentDialog/Section>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2F6D3BD67313C6AF3EC9CD0F1403025BA764ACB5_gshared (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GDPRConsentDialog/Section>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0B45D5DEDC49F8DEF921B0AF8E483628935C3727_gshared_inline (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF_gshared (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<GDPRConsentDialog/Section>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_gshared_inline (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<GDPRConsentDialog/Section>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 List_1_get_Item_m260263186236269AE737E3537B243317A3C5614C_gshared (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GDPRConsentDialog/Section>::.ctor(System.Int32)
inline void List_1__ctor_m2F6D3BD67313C6AF3EC9CD0F1403025BA764ACB5 (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315*, int32_t, const RuntimeMethod*))List_1__ctor_m2F6D3BD67313C6AF3EC9CD0F1403025BA764ACB5_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<GDPRConsentDialog/Section>::Add(T)
inline void List_1_Add_m0B45D5DEDC49F8DEF921B0AF8E483628935C3727_inline (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315*, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511, const RuntimeMethod*))List_1_Add_m0B45D5DEDC49F8DEF921B0AF8E483628935C3727_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void GDPRConsentDialog/Section::.ctor(System.String,System.String,System.String,System.Boolean,System.String,SimpleGDPR/ButtonClickDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m175A7A307FF47B43E5241145D2056483A8A028A4 (Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* __this, String_t* ___description0, String_t* ___title1, String_t* ___identifier2, bool ___initialConsentValue3, String_t* ___buttonLabel4, ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* ___onButtonClicked5, const RuntimeMethod* method) ;
// GDPRConsentDialog GDPRConsentDialog::AddSection(GDPRConsentDialog/Section)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* GDPRConsentDialog_AddSection_m40DF07C04D2AB18B87D1A3DF0083D55B130917E2 (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 ___section0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Boolean GDPRConsentDialog::ContainsPrivacyPolicy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDPRConsentDialog_ContainsPrivacyPolicy_m5DE10699B78A10ADD01986023EB189C548D2AF23 (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, String_t* ___link0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// GDPRConsentDialog GDPRConsentDialog::AddPrivacyPolicy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* GDPRConsentDialog_AddPrivacyPolicy_m7A1913AE634FBD10CF679BFA23DBCB405C1C9BBA (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, String_t* ___link0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// SimpleGDPRConsent.GDPRConsentCanvas SimpleGDPRConsent.GDPRConsentCanvas::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* GDPRConsentCanvas_get_Instance_mCD2BD49A835D22014F7BD5C3A5560382E536A8B3 (const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::ShowConsentDialog(System.Collections.Generic.List`1<GDPRConsentDialog/Section>,System.Collections.Generic.List`1<System.String>,SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_ShowConsentDialog_mF8CA808CCDD619B257BA76FA887E7D9D13041EBB (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* ___sections0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___privacyPolicyLinks1, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed2, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::ShowTermsOfServiceDialog(System.String,System.String,SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_ShowTermsOfServiceDialog_m323BDEB4340208C1DB89BAB0CAE0E0D9A34F4244 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, String_t* ___termsOfServiceLink0, String_t* ___privacyPolicyLink1, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed2, const RuntimeMethod* method) ;
// System.Boolean SimpleGDPRConsent.GDPRConsentCanvas::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDPRConsentCanvas_get_IsVisible_m84E60CD4F4F808E1C30E5D6314387FB195056C07 (const RuntimeMethod* method) ;
// SimpleGDPR/ConsentState SimpleGDPRConsent.GDPRConsentCanvas::GetTermsOfServiceState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDPRConsentCanvas_GetTermsOfServiceState_m163C22FA057DC6CD79A6D57F050E3CEF905DEBC8 (const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Void System.Net.WebClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient__ctor_mC6890BD603C98D56E8D475D0D11180980F228C3F (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, const RuntimeMethod* method) ;
// System.String System.Net.WebClient::DownloadString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebClient_DownloadString_mB577DB8FBE9A1118C5815271C6F6403C64D4894C (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::TrimStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m69C2400B208C8F3D1DE6A3E24B4A1095F2B8EDEA (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// SimpleGDPR/ConsentState SimpleGDPRConsent.GDPRConsentCanvas::GetConsentState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDPRConsentCanvas_GetConsentState_m9C80B322B07BFE14079890993233114DAAD7C862 (String_t* ___identifier0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void SimpleGDPR/<WaitForDialog>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDialogU3Ed__14__ctor_m9C62A72543120F3FC22372FD0196E2AE7438B98F (U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean SimpleGDPR::get_IsDialogVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleGDPR_get_IsDialogVisible_m122D27AD808B5B519545C75256FCCD6E89D7339B (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneUnloaded(UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneUnloaded_mAE3FCD9113413A6B067527A0D2B01525CC5D631A (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneUnloaded(UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneUnloaded_mDFA2FD86D583E308417C3FF7753C92AAE11B99FA (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* ___value0, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.EventSystemHandler::ActivateEventSystemIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_ActivateEventSystemIfNeeded_mA14510FD78A2E07DF21FE358CDA3DA3FF892B415 (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.EventSystemHandler::DeactivateEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_DeactivateEventSystem_mF552795CEDA623314D5574BE0CD4D6320085BA8F (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// T UnityEngine.GameObject::GetComponent<SimpleGDPRConsent.GDPRConsentCanvas>()
inline GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* GameObject_GetComponent_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_mCFB0404E6F277BDFA4C1FAF3F4C3A8AF22C696DE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<SimpleGDPRConsent.GDPRConsentCanvas>(T)
inline GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* Object_Instantiate_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_m9D7A7469144BDBD4CBAD7A2B3EB1B75D47FA1E99 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* ___original0, const RuntimeMethod* method)
{
	return ((  GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* (*) (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.RectTransform>(T,UnityEngine.Transform,System.Boolean)
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0653332855B1383E4F34F39986D52E40939985F0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
inline void List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_inline (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.CanvasScaler>()
inline CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.CanvasScaler::set_screenMatchMode(UnityEngine.UI.CanvasScaler/ScreenMatchMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasScaler_set_screenMatchMode_m926C437B408D2F2CA4900723BEEEE09504A6768F_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.PrivacyPolicyLink::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyLink_Initialize_m3359B747A03483975BFFC306BD6AAB27B7417777 (PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* __this, String_t* ___text0, String_t* ___url1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_content_m01BF6FE0205985CBD16C6D3BB4B6F345B3AF484E_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___value0, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::OnDialogShown(SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_OnDialogShown_mCB905806F02DD5D78BDDF2C1F89769B4FACD3ACB (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<GDPRConsentDialog/Section>::get_Count()
inline int32_t List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_inline (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315*, const RuntimeMethod*))List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<SimpleGDPRConsent.GDPRSection>::get_Count()
inline int32_t List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_inline (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<SimpleGDPRConsent.GDPRSection>(T,UnityEngine.Transform,System.Boolean)
inline GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* Object_Instantiate_TisGDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0_m06284FB021F0D418445AEDA1144A4FCB5A298C0C (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* (*) (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.Void System.Collections.Generic.List`1<SimpleGDPRConsent.GDPRSection>::Add(T)
inline void List_1_Add_mDF3B653E3587226F17CA2C4321EBC07476094894_inline (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* __this, GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9*, GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<SimpleGDPRConsent.GDPRSection>::get_Item(System.Int32)
inline GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69 (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* (*) (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<GDPRConsentDialog/Section>::get_Item(System.Int32)
inline Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 List_1_get_Item_m260263186236269AE737E3537B243317A3C5614C (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 (*) (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315*, int32_t, const RuntimeMethod*))List_1_get_Item_m260263186236269AE737E3537B243317A3C5614C_gshared)(__this, ___index0, method);
}
// System.Void SimpleGDPRConsent.GDPRSection::Initialize(GDPRConsentDialog/Section)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRSection_Initialize_mB2FA35E3DB95A842D5A954314123ED90A927DD73 (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* __this, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 ___section0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<SimpleGDPRConsent.PrivacyPolicyLink>::get_Count()
inline int32_t List_1_get_Count_mE39875D1E7CFF58F489D56014080EDA48E4AA878_inline (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<SimpleGDPRConsent.PrivacyPolicyLink>(T,UnityEngine.Transform,System.Boolean)
inline PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* Object_Instantiate_TisPrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03_mD10297D2A68AA0A6B45301C1EFBF5108AF93466D (PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* (*) (PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// System.Void System.Collections.Generic.List`1<SimpleGDPRConsent.PrivacyPolicyLink>::Add(T)
inline void List_1_Add_m0EE81D98A7EDC174882EA2B81DE8D50C1C98BE5F_inline (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* __this, PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F*, PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<SimpleGDPRConsent.PrivacyPolicyLink>::get_Item(System.Int32)
inline PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* List_1_get_Item_mE986DF7FE8DC13D1FE80783B9325EFE9C682B3AF (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* (*) (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::SetTermsOfServiceState(SimpleGDPR/ConsentState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_SetTermsOfServiceState_m96448362A705D8E32593D42A3C1ACE94A2C45554 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::OnDialogClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_OnDialogClosed_m77319E1AA3824A8D9910AB834EB4CBB7D1FA9F54 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.GDPRSection::SaveConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRSection_SaveConsent_m675D0FF09F58626BCF14BCA5719D70A5DB9C9B6F (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_OnRectTransformDimensionsChange_mA79445A97C7C59778B7708B6774DDB5F6ACCE796 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB (const RuntimeMethod* method) ;
// System.Void SimpleGDPR/DialogClosedDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_inline (DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SimpleGDPRConsent.GDPRSection>::.ctor(System.Int32)
inline void List_1__ctor_m66DC97C21D85EE59DA848F00667A609E69D473D3 (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
inline void List_1__ctor_mC34F5E3306FF04CF2997E93F03C8DD693B79A52B (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<SimpleGDPRConsent.PrivacyPolicyLink>::.ctor(System.Int32)
inline void List_1__ctor_m1E04FEBB17B530C57C45E29BB2EF9A063E5D3932 (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.SlidingToggle::set_Value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlidingToggle_set_Value_mD6CADA77A4B1C7992A913CFC71F4F29E6CEDD882 (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SimpleGDPR/ButtonClickDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_inline (ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleGDPRConsent.SlidingToggle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SlidingToggle_get_Value_mAAD4499285ED62FF09E74AD633008ABDD6C0CA0A_inline (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::SetConsentState(System.String,SimpleGDPR/ConsentState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_SetConsentState_m338B7959555159DF4A14DDEA7D2BA84255A806E9 (String_t* ___identifier0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void SimpleGDPR::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleGDPR_OpenURL_m7C6BC5F9A3C7382BD04A03CA75C8C57D234431F3 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void SimpleGDPRConsent.SlidingToggle::UpdateHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlidingToggle_UpdateHandle_m81C5211998A0A1716F1383543020B2F4516DF3CE (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
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
// System.Void GDPRConsentDialog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentDialog__ctor_m4FE08BB3622436437D7997E65AFE4932CBAB99A3 (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, const RuntimeMethod* method) 
{
	{
		// public GDPRConsentDialog()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// { }
		return;
	}
}
// GDPRConsentDialog GDPRConsentDialog::AddSection(GDPRConsentDialog/Section)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* GDPRConsentDialog_AddSection_m40DF07C04D2AB18B87D1A3DF0083D55B130917E2 (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 ___section0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0B45D5DEDC49F8DEF921B0AF8E483628935C3727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2F6D3BD67313C6AF3EC9CD0F1403025BA764ACB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( sections == null )
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_0 = __this->___sections_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// sections = new List<Section>( 2 );
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_1 = (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315*)il2cpp_codegen_object_new(List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m2F6D3BD67313C6AF3EC9CD0F1403025BA764ACB5(L_1, 2, List_1__ctor_m2F6D3BD67313C6AF3EC9CD0F1403025BA764ACB5_RuntimeMethod_var);
		__this->___sections_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sections_0), (void*)L_1);
	}

IL_0014:
	{
		// sections.Add( section );
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_2 = __this->___sections_0;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_3 = ___section0;
		NullCheck(L_2);
		List_1_Add_m0B45D5DEDC49F8DEF921B0AF8E483628935C3727_inline(L_2, L_3, List_1_Add_m0B45D5DEDC49F8DEF921B0AF8E483628935C3727_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GDPRConsentDialog GDPRConsentDialog::AddSectionWithToggle(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* GDPRConsentDialog_AddSectionWithToggle_m42E1B9ACD4215E403E01BA4155A8A073216E5F25 (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, String_t* ___identifier0, String_t* ___title1, String_t* ___description2, bool ___initialConsentValue3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F43E59B3E01BCA33572B918DA5A720D0894ED4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( identifier ) )
		String_t* L_0 = ___identifier0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Error: 'GDPR.identifier' was empty!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral87F43E59B3E01BCA33572B918DA5A720D0894ED4, NULL);
		// return this;
		return __this;
	}

IL_0014:
	{
		// return AddSection( new Section( description, title, identifier, initialConsentValue, null, null ) );
		String_t* L_2 = ___description2;
		String_t* L_3 = ___title1;
		String_t* L_4 = ___identifier0;
		bool L_5 = ___initialConsentValue3;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Section__ctor_m175A7A307FF47B43E5241145D2056483A8A028A4((&L_6), L_2, L_3, L_4, L_5, (String_t*)NULL, (ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A*)NULL, /*hidden argument*/NULL);
		GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* L_7;
		L_7 = GDPRConsentDialog_AddSection_m40DF07C04D2AB18B87D1A3DF0083D55B130917E2(__this, L_6, NULL);
		return L_7;
	}
}
// GDPRConsentDialog GDPRConsentDialog::AddSectionWithButton(SimpleGDPR/ButtonClickDelegate,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* GDPRConsentDialog_AddSectionWithButton_m3295E8BF36C4E07EE19AAA806D411B8F44B66541 (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* ___onButtonClicked0, String_t* ___title1, String_t* ___description2, String_t* ___buttonLabel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE50188CA98E77FD90115FA923FFC6B12E5596702);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( onButtonClicked == null )
		ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* L_0 = ___onButtonClicked0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Debug.LogError( "Error: 'GDPR.onButtonClicked' was empty!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralE50188CA98E77FD90115FA923FFC6B12E5596702, NULL);
		// return this;
		return __this;
	}

IL_000f:
	{
		// return AddSection( new Section( description, title, null, true, buttonLabel, onButtonClicked ) );
		String_t* L_1 = ___description2;
		String_t* L_2 = ___title1;
		String_t* L_3 = ___buttonLabel3;
		ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* L_4 = ___onButtonClicked0;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Section__ctor_m175A7A307FF47B43E5241145D2056483A8A028A4((&L_5), L_1, L_2, (String_t*)NULL, (bool)1, L_3, L_4, /*hidden argument*/NULL);
		GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* L_6;
		L_6 = GDPRConsentDialog_AddSection_m40DF07C04D2AB18B87D1A3DF0083D55B130917E2(__this, L_5, NULL);
		return L_6;
	}
}
// GDPRConsentDialog GDPRConsentDialog::AddPrivacyPolicy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* GDPRConsentDialog_AddPrivacyPolicy_m7A1913AE634FBD10CF679BFA23DBCB405C1C9BBA (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, String_t* ___link0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7477E22AD99F139F15B4AADC14A80DF8EA3628C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( link ) )
		String_t* L_0 = ___link0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Error: 'GDPR.link' was empty!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralA7477E22AD99F139F15B4AADC14A80DF8EA3628C, NULL);
		// return this;
		return __this;
	}

IL_0014:
	{
		// if( privacyPolicyLinks == null )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___privacyPolicyLinks_1;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// privacyPolicyLinks = new List<string>( 4 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_3, 4, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___privacyPolicyLinks_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___privacyPolicyLinks_1), (void*)L_3);
	}

IL_0028:
	{
		// if( !ContainsPrivacyPolicy( link ) )
		String_t* L_4 = ___link0;
		bool L_5;
		L_5 = GDPRConsentDialog_ContainsPrivacyPolicy_m5DE10699B78A10ADD01986023EB189C548D2AF23(__this, L_4, NULL);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		// privacyPolicyLinks.Add( link );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->___privacyPolicyLinks_1;
		String_t* L_7 = ___link0;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_003d:
	{
		// return this;
		return __this;
	}
}
// GDPRConsentDialog GDPRConsentDialog::AddPrivacyPolicies(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* GDPRConsentDialog_AddPrivacyPolicies_m52736A9A95D596C4AF59D348DA21E96109706BA1 (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___links0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE0BE7CD91F6E28D492824F7843C9D2830F3652C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if( links == null || links.Length == 0 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___links0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___links0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0013;
		}
	}

IL_0007:
	{
		// Debug.LogError( "Error: 'GDPR.links' was empty!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralBE0BE7CD91F6E28D492824F7843C9D2830F3652C, NULL);
		// return this;
		return __this;
	}

IL_0013:
	{
		// if( privacyPolicyLinks == null )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___privacyPolicyLinks_1;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// privacyPolicyLinks = new List<string>( links.Length );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___links0;
		NullCheck(L_3);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_4, ((int32_t)(((RuntimeArray*)L_3)->max_length)), List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___privacyPolicyLinks_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___privacyPolicyLinks_1), (void*)L_4);
	}

IL_0029:
	{
		// for( int i = 0; i < links.Length; i++ )
		V_0 = 0;
		goto IL_003b;
	}

IL_002d:
	{
		// AddPrivacyPolicy( links[i] );
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___links0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* L_9;
		L_9 = GDPRConsentDialog_AddPrivacyPolicy_m7A1913AE634FBD10CF679BFA23DBCB405C1C9BBA(__this, L_8, NULL);
		// for( int i = 0; i < links.Length; i++ )
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		// for( int i = 0; i < links.Length; i++ )
		int32_t L_11 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___links0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_002d;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean GDPRConsentDialog::ContainsPrivacyPolicy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDPRConsentDialog_ContainsPrivacyPolicy_m5DE10699B78A10ADD01986023EB189C548D2AF23 (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, String_t* ___link0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if( privacyPolicyLinks == null )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___privacyPolicyLinks_1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// for( int i = 0; i < privacyPolicyLinks.Count; i++ )
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		// if( privacyPolicyLinks[i] == link )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___privacyPolicyLinks_1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_1, L_2, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_4 = ___link0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0024:
	{
		// for( int i = 0; i < privacyPolicyLinks.Count; i++ )
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		// for( int i = 0; i < privacyPolicyLinks.Count; i++ )
		int32_t L_7 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->___privacyPolicyLinks_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_8, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void GDPRConsentDialog::IGDPRDialog.ShowDialog(SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentDialog_IGDPRDialog_ShowDialog_m256952F4E33AB1ED1BCE1242073F1B4BD4C9323E (GDPRConsentDialog_t2FBA00F887185308E2985168660849599E0A7CAE* __this, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed0, const RuntimeMethod* method) 
{
	{
		// GDPRConsentCanvas.Instance.ShowConsentDialog( sections, privacyPolicyLinks, onDialogClosed );
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_0;
		L_0 = GDPRConsentCanvas_get_Instance_mCD2BD49A835D22014F7BD5C3A5560382E536A8B3(NULL);
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_1 = __this->___sections_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___privacyPolicyLinks_1;
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* L_3 = ___onDialogClosed0;
		NullCheck(L_0);
		GDPRConsentCanvas_ShowConsentDialog_mF8CA808CCDD619B257BA76FA887E7D9D13041EBB(L_0, L_1, L_2, L_3, NULL);
		// }
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
// Conversion methods for marshalling of: GDPRConsentDialog/Section
IL2CPP_EXTERN_C void Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshal_pinvoke(const Section_t880A926D8D22EE71045671E57F1D52FB94D7B511& unmarshaled, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshaled_pinvoke& marshaled)
{
	marshaled.___description_0 = il2cpp_codegen_marshal_string(unmarshaled.___description_0);
	marshaled.___title_1 = il2cpp_codegen_marshal_string(unmarshaled.___title_1);
	marshaled.___identifier_2 = il2cpp_codegen_marshal_string(unmarshaled.___identifier_2);
	marshaled.___initialConsentValue_3 = static_cast<int32_t>(unmarshaled.___initialConsentValue_3);
	marshaled.___buttonLabel_4 = il2cpp_codegen_marshal_string(unmarshaled.___buttonLabel_4);
	marshaled.___onButtonClicked_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___onButtonClicked_5));
}
IL2CPP_EXTERN_C void Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshal_pinvoke_back(const Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshaled_pinvoke& marshaled, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___description_0 = il2cpp_codegen_marshal_string_result(marshaled.___description_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___description_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___description_0));
	unmarshaled.___title_1 = il2cpp_codegen_marshal_string_result(marshaled.___title_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___title_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___title_1));
	unmarshaled.___identifier_2 = il2cpp_codegen_marshal_string_result(marshaled.___identifier_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___identifier_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___identifier_2));
	bool unmarshaledinitialConsentValue_temp_3 = false;
	unmarshaledinitialConsentValue_temp_3 = static_cast<bool>(marshaled.___initialConsentValue_3);
	unmarshaled.___initialConsentValue_3 = unmarshaledinitialConsentValue_temp_3;
	unmarshaled.___buttonLabel_4 = il2cpp_codegen_marshal_string_result(marshaled.___buttonLabel_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___buttonLabel_4), (void*)il2cpp_codegen_marshal_string_result(marshaled.___buttonLabel_4));
	unmarshaled.___onButtonClicked_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A>(marshaled.___onButtonClicked_5, ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___onButtonClicked_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A>(marshaled.___onButtonClicked_5, ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: GDPRConsentDialog/Section
IL2CPP_EXTERN_C void Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshal_pinvoke_cleanup(Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___description_0);
	marshaled.___description_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___identifier_2);
	marshaled.___identifier_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___buttonLabel_4);
	marshaled.___buttonLabel_4 = NULL;
}
// Conversion methods for marshalling of: GDPRConsentDialog/Section
IL2CPP_EXTERN_C void Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshal_com(const Section_t880A926D8D22EE71045671E57F1D52FB94D7B511& unmarshaled, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshaled_com& marshaled)
{
	marshaled.___description_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___description_0);
	marshaled.___title_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___title_1);
	marshaled.___identifier_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___identifier_2);
	marshaled.___initialConsentValue_3 = static_cast<int32_t>(unmarshaled.___initialConsentValue_3);
	marshaled.___buttonLabel_4 = il2cpp_codegen_marshal_bstring(unmarshaled.___buttonLabel_4);
	marshaled.___onButtonClicked_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___onButtonClicked_5));
}
IL2CPP_EXTERN_C void Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshal_com_back(const Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshaled_com& marshaled, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___description_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___description_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___description_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___description_0));
	unmarshaled.___title_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___title_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___title_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___title_1));
	unmarshaled.___identifier_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___identifier_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___identifier_2));
	bool unmarshaledinitialConsentValue_temp_3 = false;
	unmarshaledinitialConsentValue_temp_3 = static_cast<bool>(marshaled.___initialConsentValue_3);
	unmarshaled.___initialConsentValue_3 = unmarshaledinitialConsentValue_temp_3;
	unmarshaled.___buttonLabel_4 = il2cpp_codegen_marshal_bstring_result(marshaled.___buttonLabel_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___buttonLabel_4), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___buttonLabel_4));
	unmarshaled.___onButtonClicked_5 = il2cpp_codegen_marshal_function_ptr_to_delegate<ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A>(marshaled.___onButtonClicked_5, ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___onButtonClicked_5), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A>(marshaled.___onButtonClicked_5, ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: GDPRConsentDialog/Section
IL2CPP_EXTERN_C void Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshal_com_cleanup(Section_t880A926D8D22EE71045671E57F1D52FB94D7B511_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___description_0);
	marshaled.___description_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___title_1);
	marshaled.___title_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___identifier_2);
	marshaled.___identifier_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___buttonLabel_4);
	marshaled.___buttonLabel_4 = NULL;
}
// System.Void GDPRConsentDialog/Section::.ctor(System.String,System.String,System.String,System.Boolean,System.String,SimpleGDPR/ButtonClickDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m175A7A307FF47B43E5241145D2056483A8A028A4 (Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* __this, String_t* ___description0, String_t* ___title1, String_t* ___identifier2, bool ___initialConsentValue3, String_t* ___buttonLabel4, ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* ___onButtonClicked5, const RuntimeMethod* method) 
{
	{
		// this.description = description;
		String_t* L_0 = ___description0;
		__this->___description_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_0), (void*)L_0);
		// this.title = title;
		String_t* L_1 = ___title1;
		__this->___title_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_1), (void*)L_1);
		// this.identifier = identifier;
		String_t* L_2 = ___identifier2;
		__this->___identifier_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___identifier_2), (void*)L_2);
		// this.initialConsentValue = initialConsentValue;
		bool L_3 = ___initialConsentValue3;
		__this->___initialConsentValue_3 = L_3;
		// this.buttonLabel = buttonLabel;
		String_t* L_4 = ___buttonLabel4;
		__this->___buttonLabel_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonLabel_4), (void*)L_4);
		// this.onButtonClicked = onButtonClicked;
		ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* L_5 = ___onButtonClicked5;
		__this->___onButtonClicked_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onButtonClicked_5), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Section__ctor_m175A7A307FF47B43E5241145D2056483A8A028A4_AdjustorThunk (RuntimeObject* __this, String_t* ___description0, String_t* ___title1, String_t* ___identifier2, bool ___initialConsentValue3, String_t* ___buttonLabel4, ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* ___onButtonClicked5, const RuntimeMethod* method)
{
	Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Section_t880A926D8D22EE71045671E57F1D52FB94D7B511*>(__this + _offset);
	Section__ctor_m175A7A307FF47B43E5241145D2056483A8A028A4(_thisAdjusted, ___description0, ___title1, ___identifier2, ___initialConsentValue3, ___buttonLabel4, ___onButtonClicked5, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TermsOfServiceDialog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TermsOfServiceDialog__ctor_mF696426079290C6EFDDC3ECE926875DAEC997E7F (TermsOfServiceDialog_t98D56EE532ABBB56518494594212B4CDB2A79E76* __this, const RuntimeMethod* method) 
{
	{
		// public TermsOfServiceDialog()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// { }
		return;
	}
}
// TermsOfServiceDialog TermsOfServiceDialog::SetTermsOfServiceLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TermsOfServiceDialog_t98D56EE532ABBB56518494594212B4CDB2A79E76* TermsOfServiceDialog_SetTermsOfServiceLink_mC02BA631E9F25E5F0F090173D960DF8082B09DCD (TermsOfServiceDialog_t98D56EE532ABBB56518494594212B4CDB2A79E76* __this, String_t* ___termsOfServiceLink0, const RuntimeMethod* method) 
{
	{
		// this.termsOfServiceLink = termsOfServiceLink;
		String_t* L_0 = ___termsOfServiceLink0;
		__this->___termsOfServiceLink_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___termsOfServiceLink_0), (void*)L_0);
		// return this;
		return __this;
	}
}
// TermsOfServiceDialog TermsOfServiceDialog::SetPrivacyPolicyLink(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TermsOfServiceDialog_t98D56EE532ABBB56518494594212B4CDB2A79E76* TermsOfServiceDialog_SetPrivacyPolicyLink_m3A13BD8EA1602BA1B5273D7DB9AA7F7DA8F38996 (TermsOfServiceDialog_t98D56EE532ABBB56518494594212B4CDB2A79E76* __this, String_t* ___privacyPolicyLink0, const RuntimeMethod* method) 
{
	{
		// this.privacyPolicyLink = privacyPolicyLink;
		String_t* L_0 = ___privacyPolicyLink0;
		__this->___privacyPolicyLink_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___privacyPolicyLink_1), (void*)L_0);
		// return this;
		return __this;
	}
}
// System.Void TermsOfServiceDialog::IGDPRDialog.ShowDialog(SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TermsOfServiceDialog_IGDPRDialog_ShowDialog_m81338954FDE2AB6A5B9D93F93E1A04676516FC9C (TermsOfServiceDialog_t98D56EE532ABBB56518494594212B4CDB2A79E76* __this, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed0, const RuntimeMethod* method) 
{
	{
		// GDPRConsentCanvas.Instance.ShowTermsOfServiceDialog( termsOfServiceLink, privacyPolicyLink, onDialogClosed );
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_0;
		L_0 = GDPRConsentCanvas_get_Instance_mCD2BD49A835D22014F7BD5C3A5560382E536A8B3(NULL);
		String_t* L_1 = __this->___termsOfServiceLink_0;
		String_t* L_2 = __this->___privacyPolicyLink_1;
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* L_3 = ___onDialogClosed0;
		NullCheck(L_0);
		GDPRConsentCanvas_ShowTermsOfServiceDialog_m323BDEB4340208C1DB89BAB0CAE0E0D9A34F4244(L_0, L_1, L_2, L_3, NULL);
		// }
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
// System.Boolean SimpleGDPR::get_IsDialogVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleGDPR_get_IsDialogVisible_m122D27AD808B5B519545C75256FCCD6E89D7339B (const RuntimeMethod* method) 
{
	{
		// public static bool IsDialogVisible { get { return GDPRConsentCanvas.IsVisible; } }
		bool L_0;
		L_0 = GDPRConsentCanvas_get_IsVisible_m84E60CD4F4F808E1C30E5D6314387FB195056C07(NULL);
		return L_0;
	}
}
// System.Boolean SimpleGDPR::get_IsTermsOfServiceAccepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleGDPR_get_IsTermsOfServiceAccepted_mCBDBDDF778AF61BD357CD94A39D457A0AEC5E9C9 (const RuntimeMethod* method) 
{
	{
		// public static bool IsTermsOfServiceAccepted { get { return GDPRConsentCanvas.GetTermsOfServiceState() == ConsentState.Yes; } }
		int32_t L_0;
		L_0 = GDPRConsentCanvas_GetTermsOfServiceState_m163C22FA057DC6CD79A6D57F050E3CEF905DEBC8(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean SimpleGDPR::get_IsGDPRApplicable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleGDPR_get_IsGDPRApplicable_mDB7E0D9161B23C3DC0B2AD973D80DF9CFEB022DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0D13F733895387386FF7D78CBB8B0B20838120);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral422C9A3883B0965E705DCE8EF254102A0E3BC26A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		s_Il2CppMethodInitialized = true;
	}
	WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B7_0 = 0;
	{
		// if( !m_isGDPRApplicable.HasValue )
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&((SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_il2cpp_TypeInfo_var))->___m_isGDPRApplicable_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0092;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// using( WebClient webClient = new WebClient() )
			WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_1 = (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268*)il2cpp_codegen_object_new(WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			WebClient__ctor_mC6890BD603C98D56E8D475D0D11180980F228C3F(L_1, NULL);
			V_0 = L_1;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0074_1:
				{// begin finally (depth: 2)
					{
						WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_2 = V_0;
						if (!L_2)
						{
							goto IL_007d_1;
						}
					}
					{
						WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_3 = V_0;
						NullCheck(L_3);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					}

IL_007d_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// string response = webClient.DownloadString( EU_QUERY_URL );
					WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_4 = V_0;
					NullCheck(L_4);
					String_t* L_5;
					L_5 = WebClient_DownloadString_mB577DB8FBE9A1118C5815271C6F6403C64D4894C(L_4, _stringLiteral1F0D13F733895387386FF7D78CBB8B0B20838120, NULL);
					V_1 = L_5;
					// int index = response.IndexOf( "is_request_in_eea_or_unknown\":" );
					String_t* L_6 = V_1;
					NullCheck(L_6);
					int32_t L_7;
					L_7 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_6, _stringLiteral422C9A3883B0965E705DCE8EF254102A0E3BC26A, NULL);
					V_2 = L_7;
					// if( index < 0 )
					int32_t L_8 = V_2;
					if ((((int32_t)L_8) >= ((int32_t)0)))
					{
						goto IL_003e_2;
					}
				}
				{
					// m_isGDPRApplicable = true;
					Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_9;
					memset((&L_9), 0, sizeof(L_9));
					Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_9), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
					((SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_il2cpp_TypeInfo_var))->___m_isGDPRApplicable_1 = L_9;
					goto IL_0072_2;
				}

IL_003e_2:
				{
					// index += 30;
					int32_t L_10 = V_2;
					V_2 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)30)));
					// m_isGDPRApplicable = index >= response.Length || !response.Substring( index ).TrimStart().StartsWith( "false" );
					int32_t L_11 = V_2;
					String_t* L_12 = V_1;
					NullCheck(L_12);
					int32_t L_13;
					L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
					if ((((int32_t)L_11) >= ((int32_t)L_13)))
					{
						goto IL_0067_2;
					}
				}
				{
					String_t* L_14 = V_1;
					int32_t L_15 = V_2;
					NullCheck(L_14);
					String_t* L_16;
					L_16 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_14, L_15, NULL);
					NullCheck(L_16);
					String_t* L_17;
					L_17 = String_TrimStart_m69C2400B208C8F3D1DE6A3E24B4A1095F2B8EDEA(L_16, NULL);
					NullCheck(L_17);
					bool L_18;
					L_18 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_17, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
					G_B7_0 = ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
					goto IL_0068_2;
				}

IL_0067_2:
				{
					G_B7_0 = 1;
				}

IL_0068_2:
				{
					Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_19;
					memset((&L_19), 0, sizeof(L_19));
					Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_19), (bool)G_B7_0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
					((SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_il2cpp_TypeInfo_var))->___m_isGDPRApplicable_1 = L_19;
				}

IL_0072_2:
				{
					// }
					goto IL_007e_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_007e_1:
		{
			// }
			goto IL_0092;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0080;
		}
		throw e;
	}

CATCH_0080:
	{// begin catch(System.Exception)
		// Debug.LogException( e );
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// m_isGDPRApplicable = true;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_20), (bool)1, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var)));
		((SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_il2cpp_TypeInfo_var))))->___m_isGDPRApplicable_1 = L_20;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0092;
	}// end catch (depth: 1)

IL_0092:
	{
		// return m_isGDPRApplicable.Value;
		bool L_21;
		L_21 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&((SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_StaticFields*)il2cpp_codegen_static_fields_for(SimpleGDPR_t30A70A8A34C79B7EAE87A551E3ADDF80044FDEF8_il2cpp_TypeInfo_var))->___m_isGDPRApplicable_1), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		return L_21;
	}
}
// SimpleGDPR/ConsentState SimpleGDPR::GetConsentState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleGDPR_GetConsentState_mA3E31055D555B882C19C8669AA84FAD93B2B40EA (String_t* ___identifier0, const RuntimeMethod* method) 
{
	{
		// return GDPRConsentCanvas.GetConsentState( identifier );
		String_t* L_0 = ___identifier0;
		int32_t L_1;
		L_1 = GDPRConsentCanvas_GetConsentState_m9C80B322B07BFE14079890993233114DAAD7C862(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleGDPR::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleGDPR_OpenURL_m7C6BC5F9A3C7382BD04A03CA75C8C57D234431F3 (String_t* ___url0, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL( url );
		String_t* L_0 = ___url0;
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPR::ShowDialog(IGDPRDialog,SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleGDPR_ShowDialog_m5E5FBC57FF9273D1CE8B94AD4886806A466A06D4 (RuntimeObject* ___dialog0, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGDPRDialog_t8BE2BDBB43722F32BDC1FAA5465298ED5D88C763_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dialog.ShowDialog( onDialogClosed );
		RuntimeObject* L_0 = ___dialog0;
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* L_1 = ___onDialogClosed1;
		NullCheck(L_0);
		InterfaceActionInvoker1< DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* >::Invoke(0 /* System.Void IGDPRDialog::ShowDialog(SimpleGDPR/DialogClosedDelegate) */, IGDPRDialog_t8BE2BDBB43722F32BDC1FAA5465298ED5D88C763_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Collections.IEnumerator SimpleGDPR::WaitForDialog(IGDPRDialog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SimpleGDPR_WaitForDialog_m9D6B2341E6E0AAFCAF5C31E48E55F3A0D8CB3902 (RuntimeObject* ___dialog0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* L_0 = (U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C*)il2cpp_codegen_object_new(U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitForDialogU3Ed__14__ctor_m9C62A72543120F3FC22372FD0196E2AE7438B98F(L_0, 0, NULL);
		U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* L_1 = L_0;
		RuntimeObject* L_2 = ___dialog0;
		NullCheck(L_1);
		L_1->___dialog_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___dialog_2), (void*)L_2);
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
void ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_Multicast(ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* currentDelegate = reinterpret_cast<ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_OpenInst(ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_OpenStatic(ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_OpenStaticInvoker(ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_ClosedStaticInvoker(ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A (ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SimpleGDPR/ButtonClickDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickDelegate__ctor_m9900CBA7EB8210D1F6831DD2946CF2071D5B58E9 (ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_Multicast;
}
// System.Void SimpleGDPR/ButtonClickDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB (ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleGDPR/ButtonClickDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonClickDelegate_BeginInvoke_m646497EE835A3AB646B1E1710380A5DD65A44B72 (ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void SimpleGDPR/ButtonClickDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickDelegate_EndInvoke_mB563A5D6E0A6EEE41031E4AAC8AF8282AB13FE46 (ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_Multicast(DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* currentDelegate = reinterpret_cast<DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_OpenInst(DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_OpenStatic(DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_OpenStaticInvoker(DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_ClosedStaticInvoker(DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A (DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SimpleGDPR/DialogClosedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogClosedDelegate__ctor_m82F03A3D1C4EAB03DFAE6BB2DA5D9549D1D33340 (DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_Multicast;
}
// System.Void SimpleGDPR/DialogClosedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C (DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SimpleGDPR/DialogClosedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogClosedDelegate_BeginInvoke_m2F3EBD13B545FDC87C5DA7B5AC3978AD83F39601 (DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void SimpleGDPR/DialogClosedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogClosedDelegate_EndInvoke_m672C60A6B0422F68097535A48BE5ABF5E0BBDCB7 (DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void SimpleGDPR/<WaitForDialog>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDialogU3Ed__14__ctor_m9C62A72543120F3FC22372FD0196E2AE7438B98F (U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SimpleGDPR/<WaitForDialog>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDialogU3Ed__14_System_IDisposable_Dispose_m1947B954FC92119B95119FEC5CDA6A49552D1DDD (U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SimpleGDPR/<WaitForDialog>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForDialogU3Ed__14_MoveNext_mC11DDDEA1908928949D3E0E69025BDA9758F9CEF (U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGDPRDialog_t8BE2BDBB43722F32BDC1FAA5465298ED5D88C763_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// dialog.ShowDialog( null );
		RuntimeObject* L_3 = __this->___dialog_2;
		NullCheck(L_3);
		InterfaceActionInvoker1< DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* >::Invoke(0 /* System.Void IGDPRDialog::ShowDialog(SimpleGDPR/DialogClosedDelegate) */, IGDPRDialog_t8BE2BDBB43722F32BDC1FAA5465298ED5D88C763_il2cpp_TypeInfo_var, L_3, (DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A*)NULL);
		goto IL_003c;
	}

IL_0025:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0035:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_003c:
	{
		// while( IsDialogVisible )
		bool L_4;
		L_4 = SimpleGDPR_get_IsDialogVisible_m122D27AD808B5B519545C75256FCCD6E89D7339B(NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SimpleGDPR/<WaitForDialog>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForDialogU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3D504137DA14A441D5DB98516717FBFE8A65784F (U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleGDPR/<WaitForDialog>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForDialogU3Ed__14_System_Collections_IEnumerator_Reset_m56748934559E6622FA5C8D1D8398AA2E4D0BFDF8 (U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForDialogU3Ed__14_System_Collections_IEnumerator_Reset_m56748934559E6622FA5C8D1D8398AA2E4D0BFDF8_RuntimeMethod_var)));
	}
}
// System.Object SimpleGDPR/<WaitForDialog>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitForDialogU3Ed__14_System_Collections_IEnumerator_get_Current_m04E0CE0894AFA2596ACB6E36C21BF748292E05A4 (U3CWaitForDialogU3Ed__14_tA683B94BE09BC618B4AB71777EC2481334ECA69C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SimpleGDPRConsent.EventSystemHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_OnEnable_mD8F6B5A69EB4DEE5220BDCB912661777E1942C14 (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemHandler_OnSceneLoaded_m04ED34D60B874229A2F7F9172FD9DAF6F29506F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemHandler_OnSceneUnloaded_m6319997DCC70982891D5301DB95F16FEE815AD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)EventSystemHandler_OnSceneLoaded_m04ED34D60B874229A2F7F9172FD9DAF6F29506F1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155(L_0, NULL);
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_1 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_1, __this, (intptr_t)((void*)EventSystemHandler_OnSceneLoaded_m04ED34D60B874229A2F7F9172FD9DAF6F29506F1_RuntimeMethod_var), NULL);
		SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C(L_1, NULL);
		// SceneManager.sceneUnloaded -= OnSceneUnloaded;
		UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* L_2 = (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*)il2cpp_codegen_object_new(UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF(L_2, __this, (intptr_t)((void*)EventSystemHandler_OnSceneUnloaded_m6319997DCC70982891D5301DB95F16FEE815AD70_RuntimeMethod_var), NULL);
		SceneManager_remove_sceneUnloaded_mAE3FCD9113413A6B067527A0D2B01525CC5D631A(L_2, NULL);
		// SceneManager.sceneUnloaded += OnSceneUnloaded;
		UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* L_3 = (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*)il2cpp_codegen_object_new(UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF(L_3, __this, (intptr_t)((void*)EventSystemHandler_OnSceneUnloaded_m6319997DCC70982891D5301DB95F16FEE815AD70_RuntimeMethod_var), NULL);
		SceneManager_add_sceneUnloaded_mDFA2FD86D583E308417C3FF7753C92AAE11B99FA(L_3, NULL);
		// ActivateEventSystemIfNeeded();
		EventSystemHandler_ActivateEventSystemIfNeeded_mA14510FD78A2E07DF21FE358CDA3DA3FF892B415(__this, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.EventSystemHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_OnDisable_mC0199CAE346AF9BE857EBF1E816AB355FC42BDC8 (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemHandler_OnSceneLoaded_m04ED34D60B874229A2F7F9172FD9DAF6F29506F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemHandler_OnSceneUnloaded_m6319997DCC70982891D5301DB95F16FEE815AD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded -= OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)EventSystemHandler_OnSceneLoaded_m04ED34D60B874229A2F7F9172FD9DAF6F29506F1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m8840CC33052C4A09A52BF927C3738A7B66783155(L_0, NULL);
		// SceneManager.sceneUnloaded -= OnSceneUnloaded;
		UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C* L_1 = (UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C*)il2cpp_codegen_object_new(UnityAction_1_t9AA21AF4EE824B324F3F3897F91A2D460437F62C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityAction_1__ctor_m3D196ADE59DE13B9FDC5D827B1A6D00CBEF1F6DF(L_1, __this, (intptr_t)((void*)EventSystemHandler_OnSceneUnloaded_m6319997DCC70982891D5301DB95F16FEE815AD70_RuntimeMethod_var), NULL);
		SceneManager_remove_sceneUnloaded_mAE3FCD9113413A6B067527A0D2B01525CC5D631A(L_1, NULL);
		// DeactivateEventSystem();
		EventSystemHandler_DeactivateEventSystem_mF552795CEDA623314D5574BE0CD4D6320085BA8F(__this, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.EventSystemHandler::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_OnSceneLoaded_m04ED34D60B874229A2F7F9172FD9DAF6F29506F1 (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	{
		// ActivateEventSystemIfNeeded();
		EventSystemHandler_ActivateEventSystemIfNeeded_mA14510FD78A2E07DF21FE358CDA3DA3FF892B415(__this, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.EventSystemHandler::OnSceneUnloaded(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_OnSceneUnloaded_m6319997DCC70982891D5301DB95F16FEE815AD70 (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___current0, const RuntimeMethod* method) 
{
	{
		// DeactivateEventSystem();
		EventSystemHandler_DeactivateEventSystem_mF552795CEDA623314D5574BE0CD4D6320085BA8F(__this, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.EventSystemHandler::ActivateEventSystemIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_ActivateEventSystemIfNeeded_mA14510FD78A2E07DF21FE358CDA3DA3FF892B415 (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( embeddedEventSystem && !EventSystem.current )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___embeddedEventSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// embeddedEventSystem.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___embeddedEventSystem_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.EventSystemHandler::DeactivateEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler_DeactivateEventSystem_mF552795CEDA623314D5574BE0CD4D6320085BA8F (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( embeddedEventSystem )
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___embeddedEventSystem_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// embeddedEventSystem.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___embeddedEventSystem_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.EventSystemHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemHandler__ctor_m6D814149201D77BDE23BD809310CD6BB28448385 (EventSystemHandler_t4DDBA86CF4AB89CC74B7A2D390E2098765BBCDD8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// SimpleGDPRConsent.GDPRConsentCanvas SimpleGDPRConsent.GDPRConsentCanvas::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* GDPRConsentCanvas_get_Instance_mCD2BD49A835D22014F7BD5C3A5560382E536A8B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_mCFB0404E6F277BDFA4C1FAF3F4C3A8AF22C696DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_m9D7A7469144BDBD4CBAD7A2B3EB1B75D47FA1E99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F570E562250D08C335B6D55FC58DEE572E3BFFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_instance == null )
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_0 = ((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// m_instance = Instantiate( Resources.Load<GameObject>( "GDPRConsentCanvas" ).GetComponent<GDPRConsentCanvas>() );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720(_stringLiteral9F570E562250D08C335B6D55FC58DEE572E3BFFE, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCEBDEACE7062C5E4C71A9146FE8B42C9D5797720_RuntimeMethod_var);
		NullCheck(L_2);
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_3;
		L_3 = GameObject_GetComponent_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_mCFB0404E6F277BDFA4C1FAF3F4C3A8AF22C696DE(L_2, GameObject_GetComponent_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_mCFB0404E6F277BDFA4C1FAF3F4C3A8AF22C696DE_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_4;
		L_4 = Object_Instantiate_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_m9D7A7469144BDBD4CBAD7A2B3EB1B75D47FA1E99(L_3, Object_Instantiate_TisGDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_m9D7A7469144BDBD4CBAD7A2B3EB1B75D47FA1E99_RuntimeMethod_var);
		((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4), (void*)L_4);
	}

IL_0026:
	{
		// return m_instance;
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_5 = ((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4;
		return L_5;
	}
}
// System.Boolean SimpleGDPRConsent.GDPRConsentCanvas::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GDPRConsentCanvas_get_IsVisible_m84E60CD4F4F808E1C30E5D6314387FB195056C07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_instance == null || m_instance.Equals( null ) )
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_0 = ((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_2 = ((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return m_instance.gameObject.activeSelf;
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_4 = ((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_5, NULL);
		return L_6;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_Awake_m4764AE6303637CC9117F5162C1CB0D737D775DCD (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDPRConsentCanvas_OnAcceptTermsButtonClicked_mDB880BC911DA368BFDB1B166CD26E7F2CE7DF9F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDPRConsentCanvas_OnCloseDialogButtonClicked_m226738B9C47722EC643FA3B080304A5A5A18C6BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0653332855B1383E4F34F39986D52E40939985F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_instance == null )
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_0 = ((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_instance = this;
		((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4), (void*)__this);
		// DontDestroyOnLoad( gameObject );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		goto IL_0045;
	}

IL_002c:
	{
		// else if( this != m_instance )
		GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* L_4 = ((GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_StaticFields*)il2cpp_codegen_static_fields_for(GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D_il2cpp_TypeInfo_var))->___m_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(__this, L_4, NULL);
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// Destroy( gameObject );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
		// return;
		return;
	}

IL_0045:
	{
		// acceptButton.onClick.AddListener( OnAcceptTermsButtonClicked );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___acceptButton_7;
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)GDPRConsentCanvas_OnAcceptTermsButtonClicked_mDB880BC911DA368BFDB1B166CD26E7F2CE7DF9F9_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// closeButton.onClick.AddListener( OnCloseDialogButtonClicked );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___closeButton_13;
		NullCheck(L_10);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_11;
		L_11 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_10, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_12 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_12, __this, (intptr_t)((void*)GDPRConsentCanvas_OnCloseDialogButtonClicked_m226738B9C47722EC643FA3B080304A5A5A18C6BC_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_11, L_12, NULL);
		// sectionSeparatorsUI.Add( (RectTransform) Instantiate( horizontalLinePrefab, sectionsParent, false ) );
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_13 = __this->___sectionSeparatorsUI_21;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___horizontalLinePrefab_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___sectionsParent_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0653332855B1383E4F34F39986D52E40939985F0(L_14, L_15, (bool)0, Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0653332855B1383E4F34F39986D52E40939985F0_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_inline(L_13, L_16, List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_RuntimeMethod_var);
		// contentPaddingY = -( (RectTransform) scrollView.transform ).sizeDelta.y + 5f;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_17 = __this->___scrollView_16;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_18, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_18, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		float L_20 = L_19.___y_1;
		__this->___contentPaddingY_25 = ((float)il2cpp_codegen_add(((-L_20)), (5.0f)));
		// GetComponent<CanvasScaler>().screenMatchMode = CanvasScaler.ScreenMatchMode.Shrink;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_21;
		L_21 = Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE(__this, Component_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m82FD65AA44C2243A4866779598E55571D3576DAE_RuntimeMethod_var);
		NullCheck(L_21);
		CanvasScaler_set_screenMatchMode_m926C437B408D2F2CA4900723BEEEE09504A6768F_inline(L_21, 2, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_OnRectTransformDimensionsChange_mA79445A97C7C59778B7708B6774DDB5F6ACCE796 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	float G_B3_0 = 0.0f;
	{
		// dimensionsChangeCountdown = 2; // Wait for 2 Update cycles, UI system will rebuild the layout during this time
		__this->___dimensionsChangeCountdown_24 = 2;
		// Vector2 size = ( (RectTransform) transform ).rect.size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_2), NULL);
		V_0 = L_2;
		// float dialogTargetPaddingX = size.x < size.y ? dialogPadding.x : dialogPadding.y; // Swapping padding values on landscape orientation
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___y_1;
		if ((((float)L_4) < ((float)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___dialogPadding_19);
		float L_8 = L_7->___y_1;
		G_B3_0 = L_8;
		goto IL_0046;
	}

IL_003b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (&__this->___dialogPadding_19);
		float L_10 = L_9->___x_0;
		G_B3_0 = L_10;
	}

IL_0046:
	{
		V_1 = G_B3_0;
		// dialog.sizeDelta = new Vector2( size.x - dialogTargetPaddingX, dialog.sizeDelta.y );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___dialog_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		float L_13 = L_12.___x_0;
		float L_14 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___dialog_14;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_15, NULL);
		float L_17 = L_16.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), ((float)il2cpp_codegen_subtract(L_13, L_14)), L_17, /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_11, L_18, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_Update_m116085DF75D3273C785221287696FB019FAE1CB3 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B5_0 = 0.0f;
	float G_B7_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B8_2 = NULL;
	{
		// if( dimensionsChangeCountdown > 0 && --dimensionsChangeCountdown == 0 )
		int32_t L_0 = __this->___dimensionsChangeCountdown_24;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_1 = __this->___dimensionsChangeCountdown_24;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = V_0;
		__this->___dimensionsChangeCountdown_24 = L_2;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_00ef;
		}
	}
	{
		// Vector2 size = ( (RectTransform) transform ).rect.size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_4, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_4, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_5 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_5), NULL);
		V_1 = L_6;
		// float dialogTargetPaddingY = size.x < size.y ? dialogPadding.y : dialogPadding.x; // Swapping padding values on landscape orientation
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		float L_8 = L_7.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		float L_10 = L_9.___y_1;
		if ((((float)L_8) < ((float)L_10)))
		{
			goto IL_0057;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___dialogPadding_19);
		float L_12 = L_11->___x_0;
		G_B5_0 = L_12;
		goto IL_0062;
	}

IL_0057:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___dialogPadding_19);
		float L_14 = L_13->___y_1;
		G_B5_0 = L_14;
	}

IL_0062:
	{
		V_2 = G_B5_0;
		// float dialogMaxHeight = size.y - dialogTargetPaddingY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___y_1;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract(L_16, L_17));
		// float dialogTargetHeight = scrollView.content.rect.height + contentPaddingY;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_18 = __this->___scrollView_16;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_18, NULL);
		NullCheck(L_19);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		L_20 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_19, NULL);
		V_5 = L_20;
		float L_21;
		L_21 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		float L_22 = __this->___contentPaddingY_25;
		V_4 = ((float)il2cpp_codegen_add(L_21, L_22));
		// dialog.sizeDelta = new Vector2( dialog.sizeDelta.x, dialogTargetHeight < dialogMaxHeight ? dialogTargetHeight : dialogMaxHeight );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = __this->___dialog_14;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = __this->___dialog_14;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_24, NULL);
		float L_26 = L_25.___x_0;
		float L_27 = V_4;
		float L_28 = V_3;
		G_B6_0 = L_26;
		G_B6_1 = L_23;
		if ((((float)L_27) < ((float)L_28)))
		{
			G_B7_0 = L_26;
			G_B7_1 = L_23;
			goto IL_00ac;
		}
	}
	{
		float L_29 = V_3;
		G_B8_0 = L_29;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_00ae;
	}

IL_00ac:
	{
		float L_30 = V_4;
		G_B8_0 = L_30;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_00ae:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), G_B8_1, G_B8_0, /*hidden argument*/NULL);
		NullCheck(G_B8_2);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(G_B8_2, L_31, NULL);
		// if( dialogCanvasGroup.alpha < 1f )
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_32 = __this->___dialogCanvasGroup_15;
		NullCheck(L_32);
		float L_33;
		L_33 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_32, NULL);
		if ((!(((float)L_33) < ((float)(1.0f)))))
		{
			goto IL_00da;
		}
	}
	{
		// dialogCanvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_34 = __this->___dialogCanvasGroup_15;
		NullCheck(L_34);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_34, (1.0f), NULL);
	}

IL_00da:
	{
		// scrollView.OnScroll( new PointerEventData( EventSystem.current ) );
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_35 = __this->___scrollView_16;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_36;
		L_36 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_37 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_37, L_36, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(42 /* System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData) */, L_35, L_37);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// SimpleGDPR/ConsentState SimpleGDPRConsent.GDPRConsentCanvas::GetTermsOfServiceState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDPRConsentCanvas_GetTermsOfServiceState_m163C22FA057DC6CD79A6D57F050E3CEF905DEBC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88120EBA47DDBE54FA31E84F4C62A4196C169A97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (SimpleGDPR.ConsentState) PlayerPrefs.GetInt( "GDPR_Terms", (int) SimpleGDPR.ConsentState.Unknown );
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral88120EBA47DDBE54FA31E84F4C62A4196C169A97, 0, NULL);
		return (int32_t)(L_0);
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::SetTermsOfServiceState(SimpleGDPR/ConsentState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_SetTermsOfServiceState_m96448362A705D8E32593D42A3C1ACE94A2C45554 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88120EBA47DDBE54FA31E84F4C62A4196C169A97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt( "GDPR_Terms", (int) value );
		int32_t L_0 = ___value0;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral88120EBA47DDBE54FA31E84F4C62A4196C169A97, L_0, NULL);
		// }
		return;
	}
}
// SimpleGDPR/ConsentState SimpleGDPRConsent.GDPRConsentCanvas::GetConsentState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GDPRConsentCanvas_GetConsentState_m9C80B322B07BFE14079890993233114DAAD7C862 (String_t* ___identifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875EC94E4F097EF5186CA36B6096EBE3BB6D0E5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (SimpleGDPR.ConsentState) PlayerPrefs.GetInt( "GDPR_" + identifier, (int) SimpleGDPR.ConsentState.Unknown );
		String_t* L_0 = ___identifier0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral875EC94E4F097EF5186CA36B6096EBE3BB6D0E5E, L_0, NULL);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_1, 0, NULL);
		return (int32_t)(L_2);
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::SetConsentState(System.String,SimpleGDPR/ConsentState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_SetConsentState_m338B7959555159DF4A14DDEA7D2BA84255A806E9 (String_t* ___identifier0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875EC94E4F097EF5186CA36B6096EBE3BB6D0E5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt( "GDPR_" + identifier, (int) value );
		String_t* L_0 = ___identifier0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral875EC94E4F097EF5186CA36B6096EBE3BB6D0E5E, L_0, NULL);
		int32_t L_2 = ___value1;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::ShowTermsOfServiceDialog(System.String,System.String,SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_ShowTermsOfServiceDialog_m323BDEB4340208C1DB89BAB0CAE0E0D9A34F4244 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, String_t* ___termsOfServiceLink0, String_t* ___privacyPolicyLink1, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed2, const RuntimeMethod* method) 
{
	{
		// if( !string.IsNullOrEmpty( termsOfServiceLink ) )
		String_t* L_0 = ___termsOfServiceLink0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		// _termsOfService.Initialize( null, termsOfServiceLink );
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_2 = __this->____termsOfService_5;
		String_t* L_3 = ___termsOfServiceLink0;
		NullCheck(L_2);
		PrivacyPolicyLink_Initialize_m3359B747A03483975BFFC306BD6AAB27B7417777(L_2, (String_t*)NULL, L_3, NULL);
		// _termsOfService.gameObject.SetActive( true );
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_4 = __this->____termsOfService_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		goto IL_0039;
	}

IL_0028:
	{
		// _termsOfService.gameObject.SetActive( false );
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_6 = __this->____termsOfService_5;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_0039:
	{
		// if( !string.IsNullOrEmpty( privacyPolicyLink ) )
		String_t* L_8 = ___privacyPolicyLink1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		// _privacyPolicy.Initialize( null, privacyPolicyLink );
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_10 = __this->____privacyPolicy_6;
		String_t* L_11 = ___privacyPolicyLink1;
		NullCheck(L_10);
		PrivacyPolicyLink_Initialize_m3359B747A03483975BFFC306BD6AAB27B7417777(L_10, (String_t*)NULL, L_11, NULL);
		// _privacyPolicy.gameObject.SetActive( true );
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_12 = __this->____privacyPolicy_6;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		goto IL_0072;
	}

IL_0061:
	{
		// _privacyPolicy.gameObject.SetActive( false );
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_14 = __this->____privacyPolicy_6;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
	}

IL_0072:
	{
		// termsView.gameObject.SetActive( true );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___termsView_17;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// consentView.gameObject.SetActive( false );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___consentView_18;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// scrollView.content = termsView;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_20 = __this->___scrollView_16;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___termsView_17;
		NullCheck(L_20);
		ScrollRect_set_content_m01BF6FE0205985CBD16C6D3BB4B6F345B3AF484E_inline(L_20, L_21, NULL);
		// OnDialogShown( onDialogClosed );
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* L_22 = ___onDialogClosed2;
		GDPRConsentCanvas_OnDialogShown_mCB905806F02DD5D78BDDF2C1F89769B4FACD3ACB(__this, L_22, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::ShowConsentDialog(System.Collections.Generic.List`1<GDPRConsentDialog/Section>,System.Collections.Generic.List`1<System.String>,SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_ShowConsentDialog_mF8CA808CCDD619B257BA76FA887E7D9D13041EBB (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* ___sections0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___privacyPolicyLinks1, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0EE81D98A7EDC174882EA2B81DE8D50C1C98BE5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF3B653E3587226F17CA2C4321EBC07476094894_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE39875D1E7CFF58F489D56014080EDA48E4AA878_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m260263186236269AE737E3537B243317A3C5614C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE986DF7FE8DC13D1FE80783B9325EFE9C682B3AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0_m06284FB021F0D418445AEDA1144A4FCB5A298C0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisPrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03_mD10297D2A68AA0A6B45301C1EFBF5108AF93466D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0653332855B1383E4F34F39986D52E40939985F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if( sections == null || sections.Count == 0 )
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_0 = ___sections0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_1 = ___sections0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_inline(L_1, List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0021;
		}
	}

IL_000b:
	{
		// sectionsParent.gameObject.SetActive( false );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___sectionsParent_11;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		goto IL_0100;
	}

IL_0021:
	{
		// sectionsParent.gameObject.SetActive( true );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___sectionsParent_11;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// for( int i = sectionsUI.Count; i < sections.Count; i++ )
		List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* L_7 = __this->___sectionsUI_20;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_inline(L_7, List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_RuntimeMethod_var);
		V_0 = L_8;
		goto IL_007e;
	}

IL_0040:
	{
		// sectionsUI.Add( (GDPRSection) Instantiate( sectionPrefab, sectionsParent, false ) );
		List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* L_9 = __this->___sectionsUI_20;
		GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* L_10 = __this->___sectionPrefab_8;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___sectionsParent_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* L_12;
		L_12 = Object_Instantiate_TisGDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0_m06284FB021F0D418445AEDA1144A4FCB5A298C0C(L_10, L_11, (bool)0, Object_Instantiate_TisGDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0_m06284FB021F0D418445AEDA1144A4FCB5A298C0C_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_Add_mDF3B653E3587226F17CA2C4321EBC07476094894_inline(L_9, L_12, List_1_Add_mDF3B653E3587226F17CA2C4321EBC07476094894_RuntimeMethod_var);
		// sectionSeparatorsUI.Add( (RectTransform) Instantiate( horizontalLinePrefab, sectionsParent, false ) );
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_13 = __this->___sectionSeparatorsUI_21;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___horizontalLinePrefab_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___sectionsParent_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0653332855B1383E4F34F39986D52E40939985F0(L_14, L_15, (bool)0, Object_Instantiate_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0653332855B1383E4F34F39986D52E40939985F0_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_inline(L_13, L_16, List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_RuntimeMethod_var);
		// for( int i = sectionsUI.Count; i < sections.Count; i++ )
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_007e:
	{
		// for( int i = sectionsUI.Count; i < sections.Count; i++ )
		int32_t L_18 = V_0;
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_19 = ___sections0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_inline(L_19, List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0040;
		}
	}
	{
		// for( int i = 0; i < sectionsUI.Count; i++ )
		V_1 = 0;
		goto IL_00c9;
	}

IL_008b:
	{
		// bool isActive = i < sections.Count;
		int32_t L_21 = V_1;
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_22 = ___sections0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_inline(L_22, List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_21) < ((int32_t)L_23))? 1 : 0);
		// sectionsUI[i].gameObject.SetActive( isActive );
		List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* L_24 = __this->___sectionsUI_20;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* L_26;
		L_26 = List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69(L_24, L_25, List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69_RuntimeMethod_var);
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		bool L_28 = V_2;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, L_28, NULL);
		// sectionSeparatorsUI[i + 1].gameObject.SetActive( isActive );
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_29 = __this->___sectionSeparatorsUI_21;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31;
		L_31 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_29, ((int32_t)il2cpp_codegen_add(L_30, 1)), List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		bool L_33 = V_2;
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, L_33, NULL);
		// for( int i = 0; i < sectionsUI.Count; i++ )
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00c9:
	{
		// for( int i = 0; i < sectionsUI.Count; i++ )
		int32_t L_35 = V_1;
		List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* L_36 = __this->___sectionsUI_20;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_inline(L_36, List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_008b;
		}
	}
	{
		// for( int i = 0; i < sections.Count; i++ )
		V_3 = 0;
		goto IL_00f7;
	}

IL_00db:
	{
		// sectionsUI[i].Initialize( sections[i] );
		List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* L_38 = __this->___sectionsUI_20;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* L_40;
		L_40 = List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69(L_38, L_39, List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69_RuntimeMethod_var);
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_41 = ___sections0;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_43;
		L_43 = List_1_get_Item_m260263186236269AE737E3537B243317A3C5614C(L_41, L_42, List_1_get_Item_m260263186236269AE737E3537B243317A3C5614C_RuntimeMethod_var);
		NullCheck(L_40);
		GDPRSection_Initialize_mB2FA35E3DB95A842D5A954314123ED90A927DD73(L_40, L_43, NULL);
		// for( int i = 0; i < sections.Count; i++ )
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00f7:
	{
		// for( int i = 0; i < sections.Count; i++ )
		int32_t L_45 = V_3;
		List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* L_46 = ___sections0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_inline(L_46, List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00db;
		}
	}

IL_0100:
	{
		// if( privacyPolicyLinks == null || privacyPolicyLinks.Count == 0 )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48 = ___privacyPolicyLinks1;
		if (!L_48)
		{
			goto IL_010b;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49 = ___privacyPolicyLinks1;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_49, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (L_50)
		{
			goto IL_0121;
		}
	}

IL_010b:
	{
		// privacyPoliciesParent.gameObject.SetActive( false );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = __this->___privacyPoliciesParent_12;
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_51, NULL);
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)0, NULL);
		goto IL_01e0;
	}

IL_0121:
	{
		// privacyPoliciesParent.gameObject.SetActive( true );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = __this->___privacyPoliciesParent_12;
		NullCheck(L_53);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)1, NULL);
		// for( int i = privacyPoliciesUI.Count; i < privacyPolicyLinks.Count; i++ )
		List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* L_55 = __this->___privacyPoliciesUI_22;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = List_1_get_Count_mE39875D1E7CFF58F489D56014080EDA48E4AA878_inline(L_55, List_1_get_Count_mE39875D1E7CFF58F489D56014080EDA48E4AA878_RuntimeMethod_var);
		V_4 = L_56;
		goto IL_0164;
	}

IL_0141:
	{
		// privacyPoliciesUI.Add( (PrivacyPolicyLink) Instantiate( privacyPolicyPrefab, privacyPoliciesParent, false ) );
		List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* L_57 = __this->___privacyPoliciesUI_22;
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_58 = __this->___privacyPolicyPrefab_10;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_59 = __this->___privacyPoliciesParent_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_60;
		L_60 = Object_Instantiate_TisPrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03_mD10297D2A68AA0A6B45301C1EFBF5108AF93466D(L_58, L_59, (bool)0, Object_Instantiate_TisPrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03_mD10297D2A68AA0A6B45301C1EFBF5108AF93466D_RuntimeMethod_var);
		NullCheck(L_57);
		List_1_Add_m0EE81D98A7EDC174882EA2B81DE8D50C1C98BE5F_inline(L_57, L_60, List_1_Add_m0EE81D98A7EDC174882EA2B81DE8D50C1C98BE5F_RuntimeMethod_var);
		// for( int i = privacyPoliciesUI.Count; i < privacyPolicyLinks.Count; i++ )
		int32_t L_61 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0164:
	{
		// for( int i = privacyPoliciesUI.Count; i < privacyPolicyLinks.Count; i++ )
		int32_t L_62 = V_4;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_63 = ___privacyPolicyLinks1;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_63, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_0141;
		}
	}
	{
		// for( int i = 0; i < privacyPoliciesUI.Count; i++ )
		V_5 = 0;
		goto IL_019a;
	}

IL_0173:
	{
		// privacyPoliciesUI[i].gameObject.SetActive( i < privacyPolicyLinks.Count );
		List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* L_65 = __this->___privacyPoliciesUI_22;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_67;
		L_67 = List_1_get_Item_mE986DF7FE8DC13D1FE80783B9325EFE9C682B3AF(L_65, L_66, List_1_get_Item_mE986DF7FE8DC13D1FE80783B9325EFE9C682B3AF_RuntimeMethod_var);
		NullCheck(L_67);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_67, NULL);
		int32_t L_69 = V_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_70 = ___privacyPolicyLinks1;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_70, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		NullCheck(L_68);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_68, (bool)((((int32_t)L_69) < ((int32_t)L_71))? 1 : 0), NULL);
		// for( int i = 0; i < privacyPoliciesUI.Count; i++ )
		int32_t L_72 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_019a:
	{
		// for( int i = 0; i < privacyPoliciesUI.Count; i++ )
		int32_t L_73 = V_5;
		List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* L_74 = __this->___privacyPoliciesUI_22;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = List_1_get_Count_mE39875D1E7CFF58F489D56014080EDA48E4AA878_inline(L_74, List_1_get_Count_mE39875D1E7CFF58F489D56014080EDA48E4AA878_RuntimeMethod_var);
		if ((((int32_t)L_73) < ((int32_t)L_75)))
		{
			goto IL_0173;
		}
	}
	{
		// for( int i = 0; i < privacyPolicyLinks.Count; i++ )
		V_6 = 0;
		goto IL_01d6;
	}

IL_01ae:
	{
		// privacyPoliciesUI[i].Initialize( privacyPolicyLinks[i], privacyPolicyLinks[i] );
		List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* L_76 = __this->___privacyPoliciesUI_22;
		int32_t L_77 = V_6;
		NullCheck(L_76);
		PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* L_78;
		L_78 = List_1_get_Item_mE986DF7FE8DC13D1FE80783B9325EFE9C682B3AF(L_76, L_77, List_1_get_Item_mE986DF7FE8DC13D1FE80783B9325EFE9C682B3AF_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_79 = ___privacyPolicyLinks1;
		int32_t L_80 = V_6;
		NullCheck(L_79);
		String_t* L_81;
		L_81 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_79, L_80, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_82 = ___privacyPolicyLinks1;
		int32_t L_83 = V_6;
		NullCheck(L_82);
		String_t* L_84;
		L_84 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_82, L_83, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		NullCheck(L_78);
		PrivacyPolicyLink_Initialize_m3359B747A03483975BFFC306BD6AAB27B7417777(L_78, L_81, L_84, NULL);
		// for( int i = 0; i < privacyPolicyLinks.Count; i++ )
		int32_t L_85 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_01d6:
	{
		// for( int i = 0; i < privacyPolicyLinks.Count; i++ )
		int32_t L_86 = V_6;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_87 = ___privacyPolicyLinks1;
		NullCheck(L_87);
		int32_t L_88;
		L_88 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_87, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_86) < ((int32_t)L_88)))
		{
			goto IL_01ae;
		}
	}

IL_01e0:
	{
		// termsView.gameObject.SetActive( false );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_89 = __this->___termsView_17;
		NullCheck(L_89);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90;
		L_90 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_89, NULL);
		NullCheck(L_90);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_90, (bool)0, NULL);
		// consentView.gameObject.SetActive( true );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_91 = __this->___consentView_18;
		NullCheck(L_91);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92;
		L_92 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_91, NULL);
		NullCheck(L_92);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_92, (bool)1, NULL);
		// scrollView.content = consentView;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_93 = __this->___scrollView_16;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_94 = __this->___consentView_18;
		NullCheck(L_93);
		ScrollRect_set_content_m01BF6FE0205985CBD16C6D3BB4B6F345B3AF484E_inline(L_93, L_94, NULL);
		// OnDialogShown( onDialogClosed );
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* L_95 = ___onDialogClosed2;
		GDPRConsentCanvas_OnDialogShown_mCB905806F02DD5D78BDDF2C1F89769B4FACD3ACB(__this, L_95, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::OnAcceptTermsButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_OnAcceptTermsButtonClicked_mDB880BC911DA368BFDB1B166CD26E7F2CE7DF9F9 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) 
{
	{
		// SetTermsOfServiceState( SimpleGDPR.ConsentState.Yes );
		GDPRConsentCanvas_SetTermsOfServiceState_m96448362A705D8E32593D42A3C1ACE94A2C45554(2, NULL);
		// OnDialogClosed();
		GDPRConsentCanvas_OnDialogClosed_m77319E1AA3824A8D9910AB834EB4CBB7D1FA9F54(__this, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::OnCloseDialogButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_OnCloseDialogButtonClicked_m226738B9C47722EC643FA3B080304A5A5A18C6BC (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < sectionsUI.Count; i++ )
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// sectionsUI[i].SaveConsent();
		List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* L_0 = __this->___sectionsUI_20;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* L_2;
		L_2 = List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69(L_0, L_1, List_1_get_Item_mF3D7853B7BB41D3A867B07D0FAFD58EF2D8E5A69_RuntimeMethod_var);
		NullCheck(L_2);
		GDPRSection_SaveConsent_m675D0FF09F58626BCF14BCA5719D70A5DB9C9B6F(L_2, NULL);
		// for( int i = 0; i < sectionsUI.Count; i++ )
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		// for( int i = 0; i < sectionsUI.Count; i++ )
		int32_t L_4 = V_0;
		List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* L_5 = __this->___sectionsUI_20;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_inline(L_5, List_1_get_Count_mA21DF043D44EF7A272D2C81F17A498D26BEC84DE_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// OnDialogClosed();
		GDPRConsentCanvas_OnDialogClosed_m77319E1AA3824A8D9910AB834EB4CBB7D1FA9F54(__this, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::OnDialogShown(SimpleGDPR/DialogClosedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_OnDialogShown_mCB905806F02DD5D78BDDF2C1F89769B4FACD3ACB (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* ___onDialogClosed0, const RuntimeMethod* method) 
{
	{
		// this.onDialogClosed = onDialogClosed;
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* L_0 = ___onDialogClosed0;
		__this->___onDialogClosed_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDialogClosed_23), (void*)L_0);
		// scrollView.verticalNormalizedPosition = 1f;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->___scrollView_16;
		NullCheck(L_1);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_1, (1.0f), NULL);
		// dialogCanvasGroup.alpha = 0f; // To hide the annoying size flicker glitch
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___dialogCanvasGroup_15;
		NullCheck(L_2);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_2, (0.0f), NULL);
		// OnRectTransformDimensionsChange();
		GDPRConsentCanvas_OnRectTransformDimensionsChange_mA79445A97C7C59778B7708B6774DDB5F6ACCE796(__this, NULL);
		// gameObject.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::OnDialogClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas_OnDialogClosed_m77319E1AA3824A8D9910AB834EB4CBB7D1FA9F54 (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.Save();
		PlayerPrefs_Save_mCC9D4FCE00EA315AC967771D5D993E04CB742DFB(NULL);
		// gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if( onDialogClosed != null )
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* L_1 = __this->___onDialogClosed_23;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// onDialogClosed();
		DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* L_2 = __this->___onDialogClosed_23;
		NullCheck(L_2);
		DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_inline(L_2, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRConsentCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRConsentCanvas__ctor_m745227B1CC50F1656D91E7BBAA8497E01BBF1C7F (GDPRConsentCanvas_t6D35B0FFE2AFC2BABD0099878C72CA379AEA8C4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1E04FEBB17B530C57C45E29BB2EF9A063E5D3932_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m66DC97C21D85EE59DA848F00667A609E69D473D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC34F5E3306FF04CF2997E93F03C8DD693B79A52B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector2 dialogPadding = new Vector2( 40f, 100f );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (40.0f), (100.0f), /*hidden argument*/NULL);
		__this->___dialogPadding_19 = L_0;
		// private readonly List<GDPRSection> sectionsUI = new List<GDPRSection>( 4 );
		List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9* L_1 = (List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9*)il2cpp_codegen_object_new(List_1_t0C0C2FA790452E6DB26BB18C6BD2F9020DADBBA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m66DC97C21D85EE59DA848F00667A609E69D473D3(L_1, 4, List_1__ctor_m66DC97C21D85EE59DA848F00667A609E69D473D3_RuntimeMethod_var);
		__this->___sectionsUI_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sectionsUI_20), (void*)L_1);
		// private readonly List<RectTransform> sectionSeparatorsUI = new List<RectTransform>( 5 );
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_2 = (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*)il2cpp_codegen_object_new(List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC34F5E3306FF04CF2997E93F03C8DD693B79A52B(L_2, 5, List_1__ctor_mC34F5E3306FF04CF2997E93F03C8DD693B79A52B_RuntimeMethod_var);
		__this->___sectionSeparatorsUI_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sectionSeparatorsUI_21), (void*)L_2);
		// private readonly List<PrivacyPolicyLink> privacyPoliciesUI = new List<PrivacyPolicyLink>( 8 );
		List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F* L_3 = (List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F*)il2cpp_codegen_object_new(List_1_tBC751F60A9631B7DE6CD7F815A20DD10EC24E81F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m1E04FEBB17B530C57C45E29BB2EF9A063E5D3932(L_3, 8, List_1__ctor_m1E04FEBB17B530C57C45E29BB2EF9A063E5D3932_RuntimeMethod_var);
		__this->___privacyPoliciesUI_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___privacyPoliciesUI_22), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SimpleGDPRConsent.GDPRSection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRSection_Awake_mC3D7CB0F49A414A1D5872D8D4BB24960462DC115 (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GDPRSection_OnButtonClicked_mC6491AAC0E640352D97C3A2D00B0F804BD353A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.onClick.AddListener( OnButtonClicked );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___button_7;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)GDPRSection_OnButtonClicked_mC6491AAC0E640352D97C3A2D00B0F804BD353A1E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRSection::Initialize(GDPRConsentDialog/Section)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRSection_Initialize_mB2FA35E3DB95A842D5A954314123ED90A927DD73 (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* __this, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 ___section0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBABD1F29E26189AA7581CE6614D6ED565A439BA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B14_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B15_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B19_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B20_1 = NULL;
	{
		// this.section = section;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_0 = ___section0;
		__this->___section_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___section_10))->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___section_10))->___title_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___section_10))->___identifier_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___section_10))->___buttonLabel_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___section_10))->___onButtonClicked_5), (void*)NULL);
		#endif
		// if( !string.IsNullOrEmpty( section.description ) )
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_1 = ___section0;
		String_t* L_2 = L_1.___description_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		// description.text = section.description;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___description_6;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_5 = ___section0;
		String_t* L_6 = L_5.___description_0;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// description.gameObject.SetActive( true );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___description_6;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		goto IL_0049;
	}

IL_0038:
	{
		// description.gameObject.SetActive( false );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___description_6;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
	}

IL_0049:
	{
		// if( !string.IsNullOrEmpty( section.title ) )
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_11 = ___section0;
		String_t* L_12 = L_11.___title_1;
		bool L_13;
		L_13 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_12, NULL);
		if (L_13)
		{
			goto IL_007a;
		}
	}
	{
		// title.text = section.title;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___title_4;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_15 = ___section0;
		String_t* L_16 = L_15.___title_1;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// title.gameObject.SetActive( true );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___title_4;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		goto IL_008b;
	}

IL_007a:
	{
		// title.gameObject.SetActive( false );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___title_4;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
	}

IL_008b:
	{
		// if( !string.IsNullOrEmpty( section.identifier ) )
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_21 = ___section0;
		String_t* L_22 = L_21.___identifier_2;
		bool L_23;
		L_23 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_22, NULL);
		if (L_23)
		{
			goto IL_00df;
		}
	}
	{
		// toggle.gameObject.SetActive( true );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___toggle_9;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)1, NULL);
		// SimpleGDPR.ConsentState consentState = GDPRConsentCanvas.GetConsentState( section.identifier );
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_26 = ___section0;
		String_t* L_27 = L_26.___identifier_2;
		int32_t L_28;
		L_28 = GDPRConsentCanvas_GetConsentState_m9C80B322B07BFE14079890993233114DAAD7C862(L_27, NULL);
		V_0 = L_28;
		// if( consentState == SimpleGDPR.ConsentState.Unknown )
		int32_t L_29 = V_0;
		if (L_29)
		{
			goto IL_00cb;
		}
	}
	{
		// toggleHolder.Value = section.initialConsentValue;
		SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* L_30 = __this->___toggleHolder_8;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_31 = ___section0;
		bool L_32 = L_31.___initialConsentValue_3;
		NullCheck(L_30);
		SlidingToggle_set_Value_mD6CADA77A4B1C7992A913CFC71F4F29E6CEDD882(L_30, L_32, NULL);
		goto IL_00f0;
	}

IL_00cb:
	{
		// toggleHolder.Value = consentState != SimpleGDPR.ConsentState.No;
		SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* L_33 = __this->___toggleHolder_8;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		SlidingToggle_set_Value_mD6CADA77A4B1C7992A913CFC71F4F29E6CEDD882(L_33, (bool)((((int32_t)((((int32_t)L_34) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		goto IL_00f0;
	}

IL_00df:
	{
		// toggle.gameObject.SetActive( false );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___toggle_9;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_35, NULL);
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
	}

IL_00f0:
	{
		// if( section.onButtonClicked != null )
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_37 = ___section0;
		ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* L_38 = L_37.___onButtonClicked_5;
		if (!L_38)
		{
			goto IL_0130;
		}
	}
	{
		// buttonLabel.text = !string.IsNullOrEmpty( section.buttonLabel ) ? section.buttonLabel : "Configure";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___buttonLabel_5;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_40 = ___section0;
		String_t* L_41 = L_40.___buttonLabel_4;
		bool L_42;
		L_42 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_41, NULL);
		G_B13_0 = L_39;
		if (!L_42)
		{
			G_B14_0 = L_39;
			goto IL_0112;
		}
	}
	{
		G_B15_0 = _stringLiteralBBABD1F29E26189AA7581CE6614D6ED565A439BA;
		G_B15_1 = G_B13_0;
		goto IL_0118;
	}

IL_0112:
	{
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_43 = ___section0;
		String_t* L_44 = L_43.___buttonLabel_4;
		G_B15_0 = L_44;
		G_B15_1 = G_B14_0;
	}

IL_0118:
	{
		NullCheck(G_B15_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B15_1, G_B15_0);
		// button.gameObject.SetActive( true );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_45 = __this->___button_7;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)1, NULL);
		goto IL_0141;
	}

IL_0130:
	{
		// button.gameObject.SetActive( false );
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_47 = __this->___button_7;
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48;
		L_48 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_47, NULL);
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
	}

IL_0141:
	{
		// toggleHolder.gameObject.SetActive( toggle.gameObject.activeSelf || title.gameObject.activeSelf );
		SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* L_49 = __this->___toggleHolder_8;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___toggle_9;
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_51, NULL);
		NullCheck(L_52);
		bool L_53;
		L_53 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_52, NULL);
		G_B18_0 = L_50;
		if (L_53)
		{
			G_B19_0 = L_50;
			goto IL_0170;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = __this->___title_4;
		NullCheck(L_54);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_54, NULL);
		NullCheck(L_55);
		bool L_56;
		L_56 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_55, NULL);
		G_B20_0 = ((int32_t)(L_56));
		G_B20_1 = G_B18_0;
		goto IL_0171;
	}

IL_0170:
	{
		G_B20_0 = 1;
		G_B20_1 = G_B19_0;
	}

IL_0171:
	{
		NullCheck(G_B20_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B20_1, (bool)G_B20_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRSection::OnButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRSection_OnButtonClicked_mC6491AAC0E640352D97C3A2D00B0F804BD353A1E (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* __this, const RuntimeMethod* method) 
{
	{
		// if( section.onButtonClicked != null )
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* L_0 = (&__this->___section_10);
		ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* L_1 = L_0->___onButtonClicked_5;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// section.onButtonClicked();
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* L_2 = (&__this->___section_10);
		ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* L_3 = L_2->___onButtonClicked_5;
		NullCheck(L_3);
		ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_inline(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRSection::SaveConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRSection_SaveConsent_m675D0FF09F58626BCF14BCA5719D70A5DB9C9B6F (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* __this, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	String_t* G_B4_1 = NULL;
	{
		// if( !string.IsNullOrEmpty( section.identifier ) )
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* L_0 = (&__this->___section_10);
		String_t* L_1 = L_0->___identifier_2;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		// GDPRConsentCanvas.SetConsentState( section.identifier, toggleHolder.Value ? SimpleGDPR.ConsentState.Yes : SimpleGDPR.ConsentState.No );
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511* L_3 = (&__this->___section_10);
		String_t* L_4 = L_3->___identifier_2;
		SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* L_5 = __this->___toggleHolder_8;
		NullCheck(L_5);
		bool L_6;
		L_6 = SlidingToggle_get_Value_mAAD4499285ED62FF09E74AD633008ABDD6C0CA0A_inline(L_5, NULL);
		G_B2_0 = L_4;
		if (L_6)
		{
			G_B3_0 = L_4;
			goto IL_002d;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 2;
		G_B4_1 = G_B3_0;
	}

IL_002e:
	{
		GDPRConsentCanvas_SetConsentState_m338B7959555159DF4A14DDEA7D2BA84255A806E9(G_B4_1, G_B4_0, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.GDPRSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GDPRSection__ctor_m2E4F7F62E1ACA9630C3F478C2E42145F988338F8 (GDPRSection_tB8B904F87DDE307DB6E416445737CD9E320122E0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SimpleGDPRConsent.PrivacyPolicyLink::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyLink_Initialize_m3359B747A03483975BFFC306BD6AAB27B7417777 (PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* __this, String_t* ___text0, String_t* ___url1, const RuntimeMethod* method) 
{
	{
		// if( !string.IsNullOrEmpty( text ) )
		String_t* L_0 = ___text0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// this.text.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_4;
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
	}

IL_0014:
	{
		// this.url = url;
		String_t* L_4 = ___url1;
		__this->___url_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___url_5), (void*)L_4);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.PrivacyPolicyLink::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyLink_OnPointerClick_m11E38BD22E881CD155862C5B5C32E2657D54EDBC (PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// SimpleGDPR.OpenURL( url );
		String_t* L_0 = __this->___url_5;
		SimpleGDPR_OpenURL_m7C6BC5F9A3C7382BD04A03CA75C8C57D234431F3(L_0, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.PrivacyPolicyLink::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacyPolicyLink__ctor_mB71BD1E13EB6AC6E47677191DCFA8B91F87C96CA (PrivacyPolicyLink_tEFCEEBAA1FDBE99C6E7639E0763057FB12200E03* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean SimpleGDPRConsent.SlidingToggle::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SlidingToggle_get_Value_mAAD4499285ED62FF09E74AD633008ABDD6C0CA0A (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_value; }
		bool L_0 = __this->___m_value_8;
		return L_0;
	}
}
// System.Void SimpleGDPRConsent.SlidingToggle::set_Value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlidingToggle_set_Value_mD6CADA77A4B1C7992A913CFC71F4F29E6CEDD882 (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if( m_value != value )
		bool L_0 = __this->___m_value_8;
		bool L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// m_value = value;
		bool L_2 = ___value0;
		__this->___m_value_8 = L_2;
		// UpdateHandle();
		SlidingToggle_UpdateHandle_m81C5211998A0A1716F1383543020B2F4516DF3CE(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.SlidingToggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlidingToggle_OnPointerClick_m57F3800C3F2B4BC541C7E34B772B99A2FEA1A046 (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// Value = !Value;
		bool L_0;
		L_0 = SlidingToggle_get_Value_mAAD4499285ED62FF09E74AD633008ABDD6C0CA0A_inline(__this, NULL);
		SlidingToggle_set_Value_mD6CADA77A4B1C7992A913CFC71F4F29E6CEDD882(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.SlidingToggle::UpdateHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlidingToggle_UpdateHandle_m81C5211998A0A1716F1383543020B2F4516DF3CE (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, const RuntimeMethod* method) 
{
	{
		// if( Value )
		bool L_0;
		L_0 = SlidingToggle_get_Value_mAAD4499285ED62FF09E74AD633008ABDD6C0CA0A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0082;
		}
	}
	{
		// handle.anchorMin = new Vector2( 1f, 0f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_1, L_2, NULL);
		// handle.anchorMax = new Vector2( 1f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___handle_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_3, L_4, NULL);
		// handle.pivot = new Vector2( 1f, 0.5f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___handle_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (1.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_5, L_6, NULL);
		// handle.anchoredPosition = new Vector2( -1f, 0f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___handle_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), (-1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_7, L_8, NULL);
		// background.sprite = backgroundOn;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___background_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = __this->___backgroundOn_6;
		NullCheck(L_9);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_10, NULL);
		return;
	}

IL_0082:
	{
		// handle.anchorMin = new Vector2( 0f, 0f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___handle_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_11, L_12, NULL);
		// handle.anchorMax = new Vector2( 0f, 1f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___handle_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_13, L_14, NULL);
		// handle.pivot = new Vector2( 0f, 0.5f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handle_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), (0.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_15, L_16, NULL);
		// handle.anchoredPosition = new Vector2( 1f, 0f );
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___handle_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_17, L_18, NULL);
		// background.sprite = backgroundOff;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___background_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = __this->___backgroundOff_7;
		NullCheck(L_19);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_19, L_20, NULL);
		// }
		return;
	}
}
// System.Void SimpleGDPRConsent.SlidingToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlidingToggle__ctor_m33A245AF8835E62B9857B00EEE65301E32165CE6 (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, const RuntimeMethod* method) 
{
	{
		// private bool m_value = true;
		__this->___m_value_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasScaler_set_screenMatchMode_m926C437B408D2F2CA4900723BEEEE09504A6768F_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ScreenMatchMode screenMatchMode { get { return m_ScreenMatchMode; } set { m_ScreenMatchMode = value; } }
		int32_t L_0 = ___value0;
		__this->___m_ScreenMatchMode_8 = L_0;
		// public ScreenMatchMode screenMatchMode { get { return m_ScreenMatchMode; } set { m_ScreenMatchMode = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_content_m01BF6FE0205985CBD16C6D3BB4B6F345B3AF484E_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___value0, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___value0;
		__this->___m_Content_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Content_4), (void*)L_0);
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DialogClosedDelegate_Invoke_mA4D89198F6A4D730454EC9792E086EAB28BA336C_inline (DialogClosedDelegate_t09D63C568E35F55F08B1413B207E3570663DC33A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonClickDelegate_Invoke_m1714002953D14CD59CCDF4FFA68628B1AA4079FB_inline (ButtonClickDelegate_t887DDC186BAD6DEE1D676818306554BA94DDB32A* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SlidingToggle_get_Value_mAAD4499285ED62FF09E74AD633008ABDD6C0CA0A_inline (SlidingToggle_t435299A24DD2E170C30DF1371D9DD82E6DCC907F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_value; }
		bool L_0 = __this->___m_value_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0B45D5DEDC49F8DEF921B0AF8E483628935C3727_gshared_inline (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 ___item0, const RuntimeMethod* method) 
{
	SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F* L_1 = (SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SectionU5BU5D_t13C2E9B01F50854EB5B1C21D256D2EB54F9BC17F* L_6 = V_0;
		int32_t L_7 = V_1;
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Section_t880A926D8D22EE71045671E57F1D52FB94D7B511)L_8);
		return;
	}

IL_0034:
	{
		Section_t880A926D8D22EE71045671E57F1D52FB94D7B511 L_9 = ___item0;
		((  void (*) (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315*, Section_t880A926D8D22EE71045671E57F1D52FB94D7B511, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9FC82D0A83D3545519E93117221BA7707EEADEB4_gshared_inline (List_1_t776A5DEAF1FCD4C9BAD4D0DD9DFC9A53B226C315* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
