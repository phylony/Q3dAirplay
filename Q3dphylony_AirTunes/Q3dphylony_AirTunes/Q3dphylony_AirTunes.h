#pragma once

#ifdef Q3DPHYLONY_AIRTUNES_EXPORTS
#define Q3DPHYLONY_AIRTUNES_API __declspec(dllexport)
#else
#define Q3DPHYLONY_AIRTUNES_API __declspec(dllimport)
#endif




#define Q3DPHYLONY_AIRTUNES_NAME		"Q3dphylony_AirTunes"
#define Q3DPHYLONY_AIRTUNES_VERSION		1

//{05A3DC67-43B9-425B-9F66-B2833D8736A1}
static const GUID Q3DPHYLONY_AIRTUNES_GUID = { 0x05A3DC67, 0x43B9, 0x425B, { 0x9F, 0x66, 0xB2, 0x83, 0x3D, 0x87, 0x36, 0xA1 } };

class Q3DPHYLONY_AIRTUNES_API Q3dphylony_AirTunes: public A3d_Channel
{
public:
	Q3dphylony_AirTunes();
	virtual ~Q3dphylony_AirTunes();

	
	// Save persistent channel data in channel group
	virtual bool			SaveChannel(A3dFileSaver& saver);
	// Load persistent channel data from channel group
	virtual bool			LoadChannel(A3dFileLoader& loader, A3d_ChannelGroup *group);

	// Add needed dependencies for publishing
	virtual void			DoDependencyInit(A3d_List* currentDependList);

	//CallChannel function invoked by the engine
	virtual void 			CallChannel();
protected:

};

// Leave rest of header file intact!
#define Q3DPHYLONY_AIRTUNESDLL_EXPORTS extern "C" { \
__declspec(dllexport) DllInterface * __cdecl InitDLL() \
{ \
	return new Q3dphylony_AirTunes; \
} \
}

