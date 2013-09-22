// Array_Buffer.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "Q3dphylony_AirTunes.h"

ChannelType channelType;
	
extern "C" __declspec( dllexport ) ChannelType* __cdecl GetType() {
	ZeroMemory(channelType.name, 80);
	StringCbCopy(channelType.name,  79, Q3DPHYLONY_AIRTUNES_NAME); 
	channelType.version			= Q3DPHYLONY_AIRTUNES_VERSION;
	channelType.guid			= Q3DPHYLONY_AIRTUNES_GUID;
	channelType.baseguid		= Q3DPHYLONY_AIRTUNES_GUID;
	channelType.minimumEdition 	= EDITION_LEVEL_ALL;		// All Quest3D Editions

	return &channelType;
}

Q3DPHYLONY_AIRTUNESDLL_EXPORTS

Q3dphylony_AirTunes::Q3dphylony_AirTunes() {
	SetChannelName(Q3DPHYLONY_AIRTUNES_NAME);
	BeginMusic();
	//TODO: Add construction logic here
}

Q3dphylony_AirTunes::~Q3dphylony_AirTunes()
{
	//TODO:: Add destruction logic here
	EndMusic();
}


// Overlodaed save channel
bool Q3dphylony_AirTunes::SaveChannel(A3dFileSaver& saver) {
	if(!A3d_Channel::SaveChannel(saver))
		return false;
	//TODO: Add your logic to save persistent data here
	return true;
}

bool Q3dphylony_AirTunes::LoadChannel(A3dFileLoader& loader, A3d_ChannelGroup *group) {
	if(!A3d_Channel::LoadChannel(loader, group))
		return false;
	//TODO: Add your logic to load persistent data here
	return true;
}

void Q3dphylony_AirTunes::DoDependencyInit(A3d_List* currentDependList) 
{

}

void Q3dphylony_AirTunes::CallChannel()
{
	//TODO: Add call channel logic here
}

