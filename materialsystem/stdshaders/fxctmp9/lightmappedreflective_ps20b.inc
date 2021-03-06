// ALL SKIP STATEMENTS THAT AFFECT THIS SHADER!!!
// defined $PIXELFOGTYPE && defined $WRITEWATERFOGTODESTALPHA && ( $PIXELFOGTYPE != 1 ) && $WRITEWATERFOGTODESTALPHA
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPTINT && $LIGHTING_PREVIEW && $FASTPATHENVMAPTINT
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPCONTRAST && $LIGHTING_PREVIEW && $FASTPATHENVMAPCONTRAST
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH
// ($FLASHLIGHT || $FLASHLIGHTSHADOWS) && $LIGHTING_PREVIEW
// defined $PIXELFOGTYPE && defined $WRITEWATERFOGTODESTALPHA && ( $PIXELFOGTYPE != 1 ) && $WRITEWATERFOGTODESTALPHA
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPTINT && $LIGHTING_PREVIEW && $FASTPATHENVMAPTINT
// defined $LIGHTING_PREVIEW && defined $FASTPATHENVMAPCONTRAST && $LIGHTING_PREVIEW && $FASTPATHENVMAPCONTRAST
// defined $LIGHTING_PREVIEW && defined $FASTPATH && $LIGHTING_PREVIEW && $FASTPATH
// ($FLASHLIGHT || $FLASHLIGHTSHADOWS) && $LIGHTING_PREVIEW
#include "shaderlib/cshader.h"
class lightmappedreflective_ps20b_Static_Index
{
private:
	int m_nBASETEXTURE;
#ifdef _DEBUG
	bool m_bBASETEXTURE;
#endif
public:
	void SetBASETEXTURE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nBASETEXTURE = i;
#ifdef _DEBUG
		m_bBASETEXTURE = true;
#endif
	}
	void SetBASETEXTURE( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nBASETEXTURE = i ? 1 : 0;
#ifdef _DEBUG
		m_bBASETEXTURE = true;
#endif
	}
private:
	int m_nREFLECT;
#ifdef _DEBUG
	bool m_bREFLECT;
#endif
public:
	void SetREFLECT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nREFLECT = i;
#ifdef _DEBUG
		m_bREFLECT = true;
#endif
	}
	void SetREFLECT( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nREFLECT = i ? 1 : 0;
#ifdef _DEBUG
		m_bREFLECT = true;
#endif
	}
private:
	int m_nREFRACT;
#ifdef _DEBUG
	bool m_bREFRACT;
#endif
public:
	void SetREFRACT( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nREFRACT = i;
#ifdef _DEBUG
		m_bREFRACT = true;
#endif
	}
	void SetREFRACT( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nREFRACT = i ? 1 : 0;
#ifdef _DEBUG
		m_bREFRACT = true;
#endif
	}
private:
	int m_nENVMAPMASK;
#ifdef _DEBUG
	bool m_bENVMAPMASK;
#endif
public:
	void SetENVMAPMASK( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nENVMAPMASK = i;
#ifdef _DEBUG
		m_bENVMAPMASK = true;
#endif
	}
	void SetENVMAPMASK( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nENVMAPMASK = i ? 1 : 0;
#ifdef _DEBUG
		m_bENVMAPMASK = true;
#endif
	}
public:
	// CONSTRUCTOR
	lightmappedreflective_ps20b_Static_Index( IShaderShadow *pShaderShadow, IMaterialVar **params )
	{
#ifdef _DEBUG
		m_bBASETEXTURE = false;
#endif // _DEBUG
		m_nBASETEXTURE = 0;
#ifdef _DEBUG
		m_bREFLECT = false;
#endif // _DEBUG
		m_nREFLECT = 0;
#ifdef _DEBUG
		m_bREFRACT = false;
#endif // _DEBUG
		m_nREFRACT = 0;
#ifdef _DEBUG
		m_bENVMAPMASK = false;
#endif // _DEBUG
		m_nENVMAPMASK = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllStaticVarsDefined = m_bBASETEXTURE && m_bREFLECT && m_bREFRACT && m_bENVMAPMASK;
		Assert( bAllStaticVarsDefined );
#endif // _DEBUG
		return ( 4 * m_nBASETEXTURE ) + ( 8 * m_nREFLECT ) + ( 16 * m_nREFRACT ) + ( 32 * m_nENVMAPMASK ) + 0;
	}
};
#define shaderStaticTest_lightmappedreflective_ps20b psh_forgot_to_set_static_BASETEXTURE + psh_forgot_to_set_static_REFLECT + psh_forgot_to_set_static_REFRACT + psh_forgot_to_set_static_ENVMAPMASK + 0
class lightmappedreflective_ps20b_Dynamic_Index
{
private:
	int m_nPIXELFOGTYPE;
#ifdef _DEBUG
	bool m_bPIXELFOGTYPE;
#endif
public:
	void SetPIXELFOGTYPE( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nPIXELFOGTYPE = i;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif
	}
	void SetPIXELFOGTYPE( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nPIXELFOGTYPE = i ? 1 : 0;
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif
	}
private:
	int m_nWRITE_DEPTH_TO_DESTALPHA;
#ifdef _DEBUG
	bool m_bWRITE_DEPTH_TO_DESTALPHA;
#endif
public:
	void SetWRITE_DEPTH_TO_DESTALPHA( int i )
	{
		Assert( i >= 0 && i <= 1 );
		m_nWRITE_DEPTH_TO_DESTALPHA = i;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = true;
#endif
	}
	void SetWRITE_DEPTH_TO_DESTALPHA( bool i )
	{
		Assert( ( i ? 1 : 0 ) >= 0 && ( i ? 1 : 0 ) <= 1 );
		m_nWRITE_DEPTH_TO_DESTALPHA = i ? 1 : 0;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = true;
#endif
	}
public:
	// CONSTRUCTOR
	lightmappedreflective_ps20b_Dynamic_Index( IShaderDynamicAPI *pShaderAPI )
	{
#ifdef _DEBUG
		m_bPIXELFOGTYPE = true;
#endif // _DEBUG
		m_nPIXELFOGTYPE = ( pShaderAPI->GetSceneFogMode() == MATERIAL_FOG_LINEAR_BELOW_FOG_Z ) ;
#ifdef _DEBUG
		m_bWRITE_DEPTH_TO_DESTALPHA = false;
#endif // _DEBUG
		m_nWRITE_DEPTH_TO_DESTALPHA = 0;
	}
	int GetIndex()
	{
		// Asserts to make sure that we aren't using any skipped combinations.
		// Asserts to make sure that we are setting all of the combination vars.
#ifdef _DEBUG
		bool bAllDynamicVarsDefined = m_bPIXELFOGTYPE && m_bWRITE_DEPTH_TO_DESTALPHA;
		Assert( bAllDynamicVarsDefined );
#endif // _DEBUG
		return ( 1 * m_nPIXELFOGTYPE ) + ( 2 * m_nWRITE_DEPTH_TO_DESTALPHA ) + 0;
	}
};
#define shaderDynamicTest_lightmappedreflective_ps20b psh_forgot_to_set_dynamic_WRITE_DEPTH_TO_DESTALPHA + 0

static const ShaderComboInformation_t s_DynamicComboArray_lightmappedreflective_ps20b[2] = 
{
	{ "PIXELFOGTYPE", 0, 1 },
	{ "WRITE_DEPTH_TO_DESTALPHA", 0, 1 },
};

static const ShaderComboInformation_t s_StaticComboArray_lightmappedreflective_ps20b[4] = 
{
	{ "BASETEXTURE", 0, 1 },
	{ "REFLECT", 0, 1 },
	{ "REFRACT", 0, 1 },
	{ "ENVMAPMASK", 0, 1 },
};
static const ShaderComboSemantics_t lightmappedreflective_ps20b_combos =
{
	"lightmappedreflective_ps20b", s_DynamicComboArray_lightmappedreflective_ps20b, 2, s_StaticComboArray_lightmappedreflective_ps20b, 4 
};

class ConstructMe_lightmappedreflective_ps20b
{
public:
	ConstructMe_lightmappedreflective_ps20b()
	{
		GetShaderDLL()->AddShaderComboInformation( &lightmappedreflective_ps20b_combos );
	}
};

static ConstructMe_lightmappedreflective_ps20b s_ConstructMe_lightmappedreflective_ps20b;
