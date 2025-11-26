#include "pch-cpp.hpp"





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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

struct Action_1_tB645F646DB079054A9500B09427CB02A88372D3F;
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
struct Action_3_t3638A0A401CA68AF6FECFB956B602BBF7B9EFA72;
struct Action_3_t8A9161BC98843636E3BF066B37CBCC15C593B73E;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Dictionary_2_tF0368534E8881FC0469B58E4901741C5B0CC1D79;
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
struct IEnumerable_1_tCF360FA8155395D7F2E3092E355BE18C4A37F7E0;
struct List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF;
struct List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607;
struct List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828;
struct List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506;
struct List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TimelineClipU5BU5D_t37945156A55BC896C442C4FE59198216769A4E64;
struct TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
struct TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113;
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IPropertyCollector_tB7A05EB96DC9D20D8FE2EB89ECD2F7575BEA72BA;
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct String_t;
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5;
struct TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF;
struct TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513;
struct TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t44877D8D04925D34B22F68437910395720E9A8BB;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
struct MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6FDE33B59D9949459B1D79F3F1DEAC42F74FCFD0____A889722566D9D006B88D6D0EB9FD9EE515D07333C383EFE6B61D89E35EB77219_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6FDE33B59D9949459B1D79F3F1DEAC42F74FCFD0____B6FEE3FE2F422B93E3AC3E5F7C31C0950281084DEDC43F351538E05063969A07_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05F149EA0A525B173C9E0FD6F86C52BE8453528E;
IL2CPP_EXTERN_C String_t* _stringLiteral247A552A2DA9B9582E31F2E010964110C077923B;
IL2CPP_EXTERN_C String_t* _stringLiteral4992D52460026F57A2D8AE9410FAEFAEA7DC6D07;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m05076661DA9B3B8F581371724ECA46B635F075DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m18D691131C03BF3883EBCFAC7A77B15300F2956B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m256EDA8AF27DE9691364BE889E1E888503C07807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_m4E7559A75049AFE42082FDF98A440B3B6522170F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_Create_mCD07B00F9C48483ACEB20D788AA1A1B46D12E998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Explicit_m7ECF25111FEF56BD1CEFE440E3D1E734442B039B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_m6BB882FE09D116FA6696646905CE5944FB71FD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptPlayable_1_op_Implicit_mCC145BB9A940A69A02669BEBC7A21A60E7B0F22A_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tB929F5422740F27B477C4DB88CF7180DA27481EC 
{
};
struct U3CPrivateImplementationDetailsU3E_t6FDE33B59D9949459B1D79F3F1DEAC42F74FCFD0  : public RuntimeObject
{
};
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t44877D8D04925D34B22F68437910395720E9A8BB  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 
{
	int64_t ___m_DiscreteTime;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698 
{
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache;
	bool ___m_CacheDirty;
	bool ___m_HasNotifications;
};
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698_marshaled_pinvoke
{
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache;
	int32_t ___m_CacheDirty;
	int32_t ___m_HasNotifications;
};
struct MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698_marshaled_com
{
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Objects;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___m_Cache;
	int32_t ___m_CacheDirty;
	int32_t ___m_HasNotifications;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D158_tF14425E76F709347D17A8171A37CB4E65B8F8402 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D158_tF14425E76F709347D17A8171A37CB4E65B8F8402__padding[158];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D346_t6E3E8E8F9FCAF9ACFCD1504390AAA67E04704425 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D346_t6E3E8E8F9FCAF9ACFCD1504390AAA67E04704425__padding[346];
	};
};
#pragma pack(pop, tp)
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F 
{
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList;
};
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F_marshaled_pinvoke
{
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList;
};
struct TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F_marshaled_com
{
	List_1_t6908BEEFB57470CB30420983896AA06BFB8796F0* ___trackList;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___clipList;
	List_1_tB481045C42962DD282E8A89B2AF0246A4042EADF* ___markerList;
};
struct MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct ClipCaps_t5A4215235745856AF28238667B359DD8C4BD76DE 
{
	int32_t ___value__;
};
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	int32_t ___value__;
};
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	int32_t ___value__;
};
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	int32_t ___value__;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
};
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	int32_t ___value__;
};
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	int32_t ___value__;
};
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	int32_t ___value__;
};
struct TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
	int32_t ___fontSize;
	String_t* ___text;
};
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	int32_t ___value__;
};
struct TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C  : public PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DefaultColor;
	float ___m_DefaultFontSize;
	String_t* ___m_DefaultText;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TrackBinding;
};
struct TextWrappingModes_t982BC65D6DA703E73C04B99286285ECD3DDF207E 
{
	int32_t ___value__;
};
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	int32_t ___value__;
};
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight;
};
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	int32_t ___value__;
};
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	int32_t ___value__;
};
struct Flags_t2C5061856AF2866A2D50CA6D30BF307A12966CFE 
{
	int32_t ___value__;
};
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	int32_t ___value__;
};
struct ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___visibleSpaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 
{
	uint64_t ___m_FrameID;
	double ___m_DeltaTime;
	float ___m_Weight;
	float ___m_EffectiveWeight;
	double ___m_EffectiveParentDelay;
	float ___m_EffectiveParentSpeed;
	float ___m_EffectiveSpeed;
	int32_t ___m_Flags;
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_Output;
};
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack;
	int32_t ___index;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___played;
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___paused;
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___stopped;
};
struct TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* ___template;
};
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96  : public PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E
{
	int32_t ___m_Version;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_AnimClip;
	bool ___m_Locked;
	bool ___m_Muted;
	String_t* ___m_CustomPlayableFullTypename;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___m_Curves;
	PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___m_Parent;
	List_1_tF941E9C3FEB6F1C2D20E73A90AA7F6319EB3F828* ___m_Children;
	int32_t ___m_ItemsHash;
	TimelineClipU5BU5D_t37945156A55BC896C442C4FE59198216769A4E64* ___m_ClipsCache;
	DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 ___m_Start;
	DiscreteTime_t1598D60B0B2432F702E2A6120D04369EE54600A6 ___m_End;
	bool ___m_CacheSorted;
	bool ___m_BlendsValid;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_SupportsNotifications;
	RuntimeObject* ___m_ChildTrackCache;
	List_1_tD78196B4DE777C4B74ADAD24051A9978F5191506* ___m_Clips;
	MarkerList_tD4B632EBA98CE678EB8D108A1AF559F734FA7698 ___m_Markers;
};
struct TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513  : public TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96
{
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	String_t* ___m_text;
	bool ___m_IsTextBackingStringDirty;
	RuntimeObject* ___m_TextPreprocessor;
	bool ___m_isRightToLeft;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset;
	bool ___m_isSDFShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial;
	int32_t ___m_currentMaterialIndex;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials;
	bool ___m_isMaterialDirty;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_HighlightState;
	bool ___m_ConvertToLinearSpace;
	bool ___m_enableVertexGradient;
	int32_t ___m_colorMode;
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset;
	bool ___m_tintAllSprites;
	bool ___m_tintSprite;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor;
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet;
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle;
	int32_t ___m_TextStyleHashCode;
	bool ___m_overrideHtmlColors;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor;
	float ___m_outlineWidth;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_currentEnvMapRotation;
	bool ___m_hasEnvMapProperty;
	float ___m_fontSize;
	float ___m_currentFontSize;
	float ___m_fontSizeBase;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack;
	int32_t ___m_fontWeight;
	int32_t ___m_FontWeightInternal;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack;
	bool ___m_enableAutoSizing;
	float ___m_maxFontSize;
	float ___m_minFontSize;
	int32_t ___m_AutoSizeIterationCount;
	int32_t ___m_AutoSizeMaxIterationCount;
	bool ___m_IsAutoSizePointSizeSet;
	float ___m_fontSizeMin;
	float ___m_fontSizeMax;
	int32_t ___m_fontStyle;
	int32_t ___m_FontStyleInternal;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack;
	bool ___m_isUsingBold;
	int32_t ___m_HorizontalAlignment;
	int32_t ___m_VerticalAlignment;
	int32_t ___m_textAlignment;
	int32_t ___m_lineJustification;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners;
	float ___m_characterSpacing;
	float ___m_cSpacing;
	float ___m_monoSpacing;
	bool ___m_duoSpace;
	float ___m_wordSpacing;
	float ___m_lineSpacing;
	float ___m_lineSpacingDelta;
	float ___m_lineHeight;
	bool ___m_IsDrivenLineSpacing;
	float ___m_lineSpacingMax;
	float ___m_paragraphSpacing;
	float ___m_charWidthMaxAdj;
	float ___m_charWidthAdjDelta;
	int32_t ___m_TextWrappingMode;
	bool ___m_isCharacterWrappingEnabled;
	bool ___m_isNonBreakingSpace;
	bool ___m_isIgnoringAlignment;
	float ___m_wordWrappingRatios;
	int32_t ___m_overflowMode;
	int32_t ___m_firstOverflowCharacterIndex;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent;
	bool ___m_isTextTruncated;
	bool ___m_enableKerning;
	int32_t ___m_LastBaseGlyphIndex;
	List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607* ___m_ActiveFontFeatures;
	bool ___m_enableExtraPadding;
	bool ___checkPaddingRequired;
	bool ___m_isRichText;
	bool ___m_EmojiFallbackSupport;
	bool ___m_parseCtrlCharacters;
	bool ___m_isOverlay;
	bool ___m_isOrthographic;
	bool ___m_isCullingEnabled;
	bool ___m_isMaskingEnabled;
	bool ___isMaskUpdateRequired;
	bool ___m_ignoreCulling;
	int32_t ___m_horizontalMapping;
	int32_t ___m_verticalMapping;
	float ___m_uvLineOffset;
	int32_t ___m_renderMode;
	int32_t ___m_geometrySortingOrder;
	bool ___m_IsTextObjectScaleStatic;
	bool ___m_VertexBufferAutoSizeReduction;
	int32_t ___m_firstVisibleCharacter;
	int32_t ___m_maxVisibleCharacters;
	int32_t ___m_maxVisibleWords;
	int32_t ___m_maxVisibleLines;
	bool ___m_useMaxVisibleDescender;
	int32_t ___m_pageToDisplay;
	bool ___m_isNewPage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin;
	float ___m_marginLeft;
	float ___m_marginRight;
	float ___m_marginWidth;
	float ___m_marginHeight;
	float ___m_width;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo;
	bool ___m_havePropertiesChanged;
	bool ___m_isUsingLegacyAnimationComponent;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition;
	bool ___U3CautoSizeTextContainerU3Ek__BackingField;
	bool ___m_autoSizeTextContainer;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh;
	bool ___m_isVolumetricText;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText;
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator;
	float ___m_flexibleHeight;
	float ___m_flexibleWidth;
	float ___m_minWidth;
	float ___m_minHeight;
	float ___m_maxWidth;
	float ___m_maxHeight;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement;
	float ___m_preferredWidth;
	float ___m_RenderedWidth;
	bool ___m_isPreferredWidthDirty;
	float ___m_preferredHeight;
	float ___m_RenderedHeight;
	bool ___m_isPreferredHeightDirty;
	bool ___m_isCalculatingPreferredValues;
	int32_t ___m_layoutPriority;
	bool ___m_isLayoutDirty;
	bool ___m_isAwake;
	bool ___m_isWaitingOnResourceLoad;
	int32_t ___m_inputSource;
	float ___m_fontScaleMultiplier;
	float ___tag_LineIndent;
	float ___tag_Indent;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack;
	bool ___tag_NoParsing;
	bool ___m_isTextLayoutPhase;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_FXRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FXScale;
	TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113* ___m_TextProcessingArray;
	int32_t ___m_InternalTextProcessingArraySize;
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo;
	int32_t ___m_totalCharacterCount;
	int32_t ___m_characterCount;
	int32_t ___m_firstCharacterOfLine;
	int32_t ___m_firstVisibleCharacterOfLine;
	int32_t ___m_lastCharacterOfLine;
	int32_t ___m_lastVisibleCharacterOfLine;
	int32_t ___m_lineNumber;
	int32_t ___m_lineVisibleCharacterCount;
	int32_t ___m_lineVisibleSpaceCount;
	int32_t ___m_pageNumber;
	float ___m_PageAscender;
	float ___m_maxTextAscender;
	float ___m_maxCapHeight;
	float ___m_ElementAscender;
	float ___m_ElementDescender;
	float ___m_maxLineAscender;
	float ___m_maxLineDescender;
	float ___m_startOfLineAscender;
	float ___m_startOfLineDescender;
	float ___m_lineOffset;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack;
	bool ___m_colorGradientPresetIsTinted;
	float ___m_tabSpacing;
	float ___m_spacing;
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks;
	int32_t ___m_TextStyleStackDepth;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack;
	int32_t ___m_ItalicAngle;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack;
	float ___m_padding;
	float ___m_baselineOffset;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack;
	float ___m_xAdvance;
	int32_t ___m_textElementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset;
	int32_t ___m_spriteCount;
	int32_t ___m_spriteIndex;
	int32_t ___m_spriteAnimationID;
	bool ___m_ignoreActiveState;
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power;
};
struct U3CPrivateImplementationDetailsU3E_t6FDE33B59D9949459B1D79F3F1DEAC42F74FCFD0_StaticFields
{
	__StaticArrayInitTypeSizeU3D158_tF14425E76F709347D17A8171A37CB4E65B8F8402 ___A889722566D9D006B88D6D0EB9FD9EE515D07333C383EFE6B61D89E35EB77219;
	__StaticArrayInitTypeSizeU3D346_t6E3E8E8F9FCAF9ACFCD1504390AAA67E04704425 ___B6FEE3FE2F422B93E3AC3E5F7C31C0950281084DEDC43F351538E05063969A07;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000_StaticFields
{
	ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ___m_NullPlayable;
};
struct ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_StaticFields
{
	ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 ___m_NullPlayable;
};
struct ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B_StaticFields
{
	ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B ___m_NullPlayable;
};
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable;
};
struct TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_StaticFields
{
	TransientBuildData_t3BE8EF6B5113561AEE7D53FDF3DB331D39BE194F ___s_BuildData;
	Action_3_t3638A0A401CA68AF6FECFB956B602BBF7B9EFA72* ___OnClipPlayableCreate;
	Action_3_t8A9161BC98843636E3BF066B37CBCC15C593B73E* ___OnTrackAnimationPlayableCreate;
	TrackAssetU5BU5D_tE6935AFD32D0BE4B0C69D1CCE96B55D383BCF88C* ___s_EmptyCache;
	Dictionary_2_tF0368534E8881FC0469B58E4901741C5B0CC1D79* ___s_TrackBindingTypeAttributeCache;
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh;
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite;
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest;
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest;
	MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6* ___OnMissingCharacter;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag;
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState;
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2;
	float ___k_LargePositiveFloat;
	float ___k_LargeNegativeFloat;
	int32_t ___k_LargePositiveInt;
	int32_t ___k_LargeNegativeInt;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_Create_m12EAFFE4BC3AB282C243F00E4B458AD7F97B5767_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, RuntimeObject* ___1_template, int32_t ___2_inputCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_mC5BF7D6D41B426031320B88C15B4D46C8298EEFE_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ___0_playable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_Create_m21924558E94732FC0180915B07EEF695750A17A3_gshared (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m05076661DA9B3B8F581371724ECA46B635F075DA_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m18D691131C03BF3883EBCFAC7A77B15300F2956B_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, int32_t ___1_inputIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m256EDA8AF27DE9691364BE889E1E888503C07807_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, int32_t ___1_inputPort, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000 ScriptPlayable_1_op_Explicit_m6607A44CAE72D8B0AC20C3B99B60EC5CDDCC7EE7_gshared (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared (ScriptPlayable_1_t5E80E6495A91412DAAE85DA280EE5A75E2A89000* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 ScriptPlayable_1_Create_m4E7559A75049AFE42082FDF98A440B3B6522170F (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* ___1_template, int32_t ___2_inputCount, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF*, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_m12EAFFE4BC3AB282C243F00E4B458AD7F97B5767_gshared)(___0_graph, ___1_template, ___2_inputCount, method);
}
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_m6BB882FE09D116FA6696646905CE5944FB71FD54 (ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 ___0_playable, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_mC5BF7D6D41B426031320B88C15B4D46C8298EEFE_gshared)(___0_playable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlayableBehaviour__ctor_m8948F09D22074E68620442A5D083CCC862719479 (TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) ;
inline ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B ScriptPlayable_1_Create_mCD07B00F9C48483ACEB20D788AA1A1B46D12E998 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, int32_t ___1_inputCount, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B (*) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, int32_t, const RuntimeMethod*))ScriptPlayable_1_Create_m21924558E94732FC0180915B07EEF695750A17A3_gshared)(___0_graph, ___1_inputCount, method);
}
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ScriptPlayable_1_op_Implicit_mCC145BB9A940A69A02669BEBC7A21A60E7B0F22A (ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B ___0_playable, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B, const RuntimeMethod*))ScriptPlayable_1_op_Implicit_mC5BF7D6D41B426031320B88C15B4D46C8298EEFE_gshared)(___0_playable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PlayableDirector_GetGenericBinding_mEA8A86CEFAD08BEC596E06C3E1B1E0095E69D020 (PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset_GatherProperties_m09C1A335FCE1ABA158748583AF4A641FF2EBB09D (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* ___0_director, RuntimeObject* ___1_driver, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackAsset__ctor_mC05CAAD737449BAF26721F82EA1972843F86FE9A (TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_SetDefaults_mB57E54B94E176DB4A314C5E95B486F7E8109AD88 (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___0_text, const RuntimeMethod* method) ;
inline int32_t PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m05076661DA9B3B8F581371724ECA46B635F075DA (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m05076661DA9B3B8F581371724ECA46B635F075DA_gshared)(___0_playable, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
inline float PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m18D691131C03BF3883EBCFAC7A77B15300F2956B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, int32_t ___1_inputIndex, const RuntimeMethod* method)
{
	return ((  float (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, int32_t, const RuntimeMethod*))PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m18D691131C03BF3883EBCFAC7A77B15300F2956B_gshared)(___0_playable, ___1_inputIndex, method);
}
inline Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m256EDA8AF27DE9691364BE889E1E888503C07807 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, int32_t ___1_inputPort, const RuntimeMethod* method)
{
	return ((  Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, int32_t, const RuntimeMethod*))PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m256EDA8AF27DE9691364BE889E1E888503C07807_gshared)(___0_playable, ___1_inputPort, method);
}
inline ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 ScriptPlayable_1_op_Explicit_m7ECF25111FEF56BD1CEFE440E3D1E734442B039B (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method)
{
	return ((  ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 (*) (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, const RuntimeMethod*))ScriptPlayable_1_op_Explicit_m6607A44CAE72D8B0AC20C3B99B60EC5CDDCC7EE7_gshared)(___0_playable, method);
}
inline TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD (ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348* __this, const RuntimeMethod* method)
{
	return ((  TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* (*) (ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348*, const RuntimeMethod*))ScriptPlayable_1_GetBehaviour_m86713AAFF1D1F7D4FB370489F71AE4228741EFE8_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_RestoreDefaults_m373958A1F01030E05B210BC57020C3944C93CB2A (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// Method Definition Index: 85484
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m44AA10D37276B21E419A7CB6B4E6F28C3F6C58EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6FDE33B59D9949459B1D79F3F1DEAC42F74FCFD0____A889722566D9D006B88D6D0EB9FD9EE515D07333C383EFE6B61D89E35EB77219_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6FDE33B59D9949459B1D79F3F1DEAC42F74FCFD0____B6FEE3FE2F422B93E3AC3E5F7C31C0950281084DEDC43F351538E05063969A07_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)346));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6FDE33B59D9949459B1D79F3F1DEAC42F74FCFD0____B6FEE3FE2F422B93E3AC3E5F7C31C0950281084DEDC43F351538E05063969A07_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)158));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6FDE33B59D9949459B1D79F3F1DEAC42F74FCFD0____A889722566D9D006B88D6D0EB9FD9EE515D07333C383EFE6B61D89E35EB77219_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 4;
		(&V_0)->___TotalTypes = 4;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 85485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mDFB6F31EF8124A972D637B6E3B68C59E8D21133A (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t44877D8D04925D34B22F68437910395720E9A8BB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshal_pinvoke(const MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4& unmarshaled, MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshal_pinvoke_back(const MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshaled_pinvoke& marshaled, MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshal_pinvoke_cleanup(MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshal_com(const MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4& unmarshaled, MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshal_com_back(const MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshaled_com& marshaled, MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshal_com_cleanup(MonoScriptData_t90BE81115A319F7F7CBF25BFA9EBD3829C779DF4_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 85486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextPlayableAsset_get_clipCaps_m1FDCDE5A7C4A7A5FEA95CAFA737FB66A9FF639F1 (TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextPlayableAsset.cs:21>
		return (int32_t)(((int32_t)16));
	}
}
// Method Definition Index: 85487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F TextPlayableAsset_CreatePlayable_mA7FA91555DDB697F95EB6E5D008D966EF6FCF82E (TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_m4E7559A75049AFE42082FDF98A440B3B6522170F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_m6BB882FE09D116FA6696646905CE5944FB71FD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextPlayableAsset.cs:28>
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_1 = __this->___template;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 L_2;
		L_2 = ScriptPlayable_1_Create_m4E7559A75049AFE42082FDF98A440B3B6522170F(L_0, L_1, 0, ScriptPlayable_1_Create_m4E7559A75049AFE42082FDF98A440B3B6522170F_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = ScriptPlayable_1_op_Implicit_m6BB882FE09D116FA6696646905CE5944FB71FD54(L_2, ScriptPlayable_1_op_Implicit_m6BB882FE09D116FA6696646905CE5944FB71FD54_RuntimeMethod_var);
		return L_3;
	}
}
// Method Definition Index: 85488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlayableAsset__ctor_m0B11B1C7A2BE93D132488BD3A681D51DC99ACBB8 (TextPlayableAsset_t9F527FDA75AFFE649D37E54EE3D432ADB323D4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextPlayableAsset.cs:16>
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_0 = (TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF*)il2cpp_codegen_object_new(TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF_il2cpp_TypeInfo_var);
		TextPlayableBehaviour__ctor_m8948F09D22074E68620442A5D083CCC862719479(L_0, NULL);
		__this->___template = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___template), (void*)L_0);
		PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8(__this, NULL);
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
// Method Definition Index: 85489
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextPlayableBehaviour__ctor_m8948F09D22074E68620442A5D083CCC862719479 (TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextPlayableBehaviour.cs:15>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color = L_0;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextPlayableBehaviour.cs:18>
		__this->___fontSize = ((int32_t)14);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextPlayableBehaviour.cs:21>
		__this->___text = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A(__this, NULL);
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
// Method Definition Index: 85490
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F TextTrack_CreateTrackMixer_m6CAF01C6FF890D88ED8ECBB8FADDBF14DEC06F31 (TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_go, int32_t ___2_inputCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_Create_mCD07B00F9C48483ACEB20D788AA1A1B46D12E998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Implicit_mCC145BB9A940A69A02669BEBC7A21A60E7B0F22A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:26>
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___0_graph;
		int32_t L_1 = ___2_inputCount;
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B_il2cpp_TypeInfo_var);
		ScriptPlayable_1_tBE60267A18616265646AECA425BB54A4D04D7A0B L_2;
		L_2 = ScriptPlayable_1_Create_mCD07B00F9C48483ACEB20D788AA1A1B46D12E998(L_0, L_1, ScriptPlayable_1_Create_mCD07B00F9C48483ACEB20D788AA1A1B46D12E998_RuntimeMethod_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = ScriptPlayable_1_op_Implicit_mCC145BB9A940A69A02669BEBC7A21A60E7B0F22A(L_2, ScriptPlayable_1_op_Implicit_mCC145BB9A940A69A02669BEBC7A21A60E7B0F22A_RuntimeMethod_var);
		return L_3;
	}
}
// Method Definition Index: 85491
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrack_GatherProperties_m36C2DE7FC562DECC83C35EE952228573661CEC94 (TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513* __this, PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* ___0_director, RuntimeObject* ___1_driver, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05F149EA0A525B173C9E0FD6F86C52BE8453528E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral247A552A2DA9B9582E31F2E010964110C077923B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4992D52460026F57A2D8AE9410FAEFAEA7DC6D07);
		s_Il2CppMethodInitialized = true;
	}
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* V_0 = NULL;
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:33>
		PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* L_0 = ___0_director;
		NullCheck(L_0);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = PlayableDirector_GetGenericBinding_mEA8A86CEFAD08BEC596E06C3E1B1E0095E69D020(L_0, __this, NULL);
		V_0 = ((TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9*)IsInstClass((RuntimeObject*)L_1, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var));
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:34>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:35>
		return;
	}

IL_0017:
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:39>
		RuntimeObject* L_4 = ___1_driver;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_4);
		GenericInterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t* >::Invoke(IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var, L_4, L_6, _stringLiteral4992D52460026F57A2D8AE9410FAEFAEA7DC6D07);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:40>
		RuntimeObject* L_7 = ___1_driver;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_7);
		GenericInterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t* >::Invoke(IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var, L_7, L_9, _stringLiteral247A552A2DA9B9582E31F2E010964110C077923B);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:41>
		RuntimeObject* L_10 = ___1_driver;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = V_0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_10);
		GenericInterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t* >::Invoke(IPropertyCollector_AddFromName_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mFD1A39B15BA27F5ADA40C31F6BF9F62912B6029A_RuntimeMethod_var, L_10, L_12, _stringLiteral05F149EA0A525B173C9E0FD6F86C52BE8453528E);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:43>
		PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475* L_13 = ___0_director;
		RuntimeObject* L_14 = ___1_driver;
		TrackAsset_GatherProperties_m09C1A335FCE1ABA158748583AF4A641FF2EBB09D(__this, L_13, L_14, NULL);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrack.cs:44>
		return;
	}
}
// Method Definition Index: 85492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrack__ctor_mA740D3C94175546CFFDD2A0C6723F20E7841A46E (TextTrack_tAD711D2554FB1FC450C0D09BB770B73F649E7513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TrackAsset_t31E19BE900C90F6616C0D337652C8614CD833B96_il2cpp_TypeInfo_var);
		TrackAsset__ctor_mC05CAAD737449BAF26721F82EA1972843F86FE9A(__this, NULL);
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
// Method Definition Index: 85493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_ProcessFrame_mA241225864E82C32B4439FA6D884BEF15B2DF75D (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, RuntimeObject* ___2_playerData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m05076661DA9B3B8F581371724ECA46B635F075DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m18D691131C03BF3883EBCFAC7A77B15300F2956B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m256EDA8AF27DE9691364BE889E1E888503C07807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_op_Explicit_m7ECF25111FEF56BD1CEFE440E3D1E734442B039B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 V_8;
	memset((&V_8), 0, sizeof(V_8));
	TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* V_9 = NULL;
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:22>
		RuntimeObject* L_0 = ___2_playerData;
		TextTrackMixerBehaviour_SetDefaults_mB57E54B94E176DB4A314C5E95B486F7E8109AD88(__this, ((TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9*)IsInstClass((RuntimeObject*)L_0, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_il2cpp_TypeInfo_var)), NULL);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:23>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_TrackBinding;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:24>
		return;
	}

IL_001b:
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:26>
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3 = ___0_playable;
		int32_t L_4;
		L_4 = PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m05076661DA9B3B8F581371724ECA46B635F075DA(L_3, PlayableExtensions_GetInputCount_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m05076661DA9B3B8F581371724ECA46B635F075DA_RuntimeMethod_var);
		V_0 = L_4;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:28>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		V_1 = L_5;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:29>
		V_2 = (0.0f);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:30>
		V_3 = (0.0f);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:31>
		V_4 = (0.0f);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:32>
		String_t* L_6 = __this->___m_DefaultText;
		V_5 = L_6;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:34>
		V_6 = 0;
		goto IL_00ab;
	}

IL_0048:
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:36>
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7 = ___0_playable;
		int32_t L_8 = V_6;
		float L_9;
		L_9 = PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m18D691131C03BF3883EBCFAC7A77B15300F2956B(L_7, L_8, PlayableExtensions_GetInputWeight_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m18D691131C03BF3883EBCFAC7A77B15300F2956B_RuntimeMethod_var);
		V_7 = L_9;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:37>
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_10 = ___0_playable;
		int32_t L_11 = V_6;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_12;
		L_12 = PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m256EDA8AF27DE9691364BE889E1E888503C07807(L_10, L_11, PlayableExtensions_GetInput_TisPlayable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_m256EDA8AF27DE9691364BE889E1E888503C07807_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348_il2cpp_TypeInfo_var);
		ScriptPlayable_1_t036352639872B343809CF5C71267551BADD5A348 L_13;
		L_13 = ScriptPlayable_1_op_Explicit_m7ECF25111FEF56BD1CEFE440E3D1E734442B039B(L_12, ScriptPlayable_1_op_Explicit_m7ECF25111FEF56BD1CEFE440E3D1E734442B039B_RuntimeMethod_var);
		V_8 = L_13;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:38>
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_14;
		L_14 = ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD((&V_8), ScriptPlayable_1_GetBehaviour_m86B1E82FB6F2F8F8A6CC84762635A40FB5D314DD_RuntimeMethod_var);
		V_9 = L_14;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:40>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_1;
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_16 = V_9;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16->___color;
		float L_18 = V_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_17, L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_15, L_19, NULL);
		V_1 = L_20;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:41>
		float L_21 = V_2;
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_22 = V_9;
		NullCheck(L_22);
		int32_t L_23 = L_22->___fontSize;
		float L_24 = V_7;
		V_2 = ((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(((float)L_23), L_24))));
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:42>
		float L_25 = V_3;
		float L_26 = V_7;
		V_3 = ((float)il2cpp_codegen_add(L_25, L_26));
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:45>
		float L_27 = V_7;
		float L_28 = V_4;
		if ((!(((float)L_27) > ((float)L_28))))
		{
			goto IL_00a5;
		}
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:47>
		TextPlayableBehaviour_t072A772BCFEDF7D5623E9E1260DB85F5FB5F43BF* L_29 = V_9;
		NullCheck(L_29);
		String_t* L_30 = L_29->___text;
		V_5 = L_30;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:48>
		float L_31 = V_7;
		V_4 = L_31;
	}

IL_00a5:
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:34>
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ab:
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:34>
		int32_t L_33 = V_6;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:53>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_35 = __this->___m_TrackBinding;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = __this->___m_DefaultColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = V_1;
		float L_38 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_36, L_37, L_38, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23, L_35, L_39);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:54>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_40 = __this->___m_TrackBinding;
		float L_41 = __this->___m_DefaultFontSize;
		float L_42 = V_2;
		float L_43 = V_3;
		float L_44;
		L_44 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_41, L_42, L_43, NULL);
		int32_t L_45;
		L_45 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_44, NULL);
		NullCheck(L_40);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_40, ((float)L_45), NULL);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:55>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_46 = __this->___m_TrackBinding;
		String_t* L_47 = V_5;
		NullCheck(L_46);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_46, L_47);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:56>
		return;
	}
}
// Method Definition Index: 85494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_OnPlayableDestroy_mA2AC8887DEE34D5C11CCB554E3AA76B57F086063 (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:62>
		TextTrackMixerBehaviour_RestoreDefaults_m373958A1F01030E05B210BC57020C3944C93CB2A(__this, NULL);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:63>
		return;
	}
}
// Method Definition Index: 85495
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_SetDefaults_mB57E54B94E176DB4A314C5E95B486F7E8109AD88 (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:67>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___0_text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___m_TrackBinding;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:68>
		return;
	}

IL_000f:
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:70>
		TextTrackMixerBehaviour_RestoreDefaults_m373958A1F01030E05B210BC57020C3944C93CB2A(__this, NULL);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:72>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = ___0_text;
		__this->___m_TrackBinding = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrackBinding), (void*)L_3);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:73>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_TrackBinding;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:75>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___m_TrackBinding;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22, L_6);
		__this->___m_DefaultColor = L_7;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:76>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___m_TrackBinding;
		NullCheck(L_8);
		float L_9;
		L_9 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline(L_8, NULL);
		__this->___m_DefaultFontSize = L_9;
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:77>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___m_TrackBinding;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(65, L_10);
		__this->___m_DefaultText = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefaultText), (void*)L_11);
	}

IL_005d:
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:79>
		return;
	}
}
// Method Definition Index: 85496
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour_RestoreDefaults_m373958A1F01030E05B210BC57020C3944C93CB2A (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:83>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_TrackBinding;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:84>
		return;
	}

IL_000f:
	{
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:86>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___m_TrackBinding;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_DefaultColor;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23, L_2, L_3);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:87>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_TrackBinding;
		float L_5 = __this->___m_DefaultFontSize;
		NullCheck(L_4);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_4, L_5, NULL);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:88>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___m_TrackBinding;
		String_t* L_7 = __this->___m_DefaultText;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_6, L_7);
		//<source_info:C:/Users/samue/Documents/Projets Unity/Epitech/Demo Project/Assets/Samples/Timeline/1.8.9/Customization Samples/Text/TextTrackMixerBehaviour.cs:89>
		return;
	}
}
// Method Definition Index: 85497
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTrackMixerBehaviour__ctor_m2472CFF503F9A05B6DE9644845388138D177E63A (TextTrackMixerBehaviour_t6EE6820A33AB30E52AA27E28870D4CAAE13A7C9C* __this, const RuntimeMethod* method) 
{
	{
		PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 41969
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), NULL);
		return L_0;
	}
}
// Method Definition Index: 41961
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		return L_0;
	}
}
// Method Definition Index: 41944
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r;
		float L_2 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_a;
		float L_4 = L_3.___g;
		float L_5 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___b;
		float L_8 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___a;
		float L_11 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 41942
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 41947
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a;
		float L_29 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
// Method Definition Index: 42208
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 42203
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 62930
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731_inline (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.ugui@e375ff18e90f/Runtime/TMP/TMP_Text.cs:466>
		float L_0 = __this->___m_fontSize;
		return L_0;
	}
}
// Method Definition Index: 41935
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
// Method Definition Index: 42207
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
