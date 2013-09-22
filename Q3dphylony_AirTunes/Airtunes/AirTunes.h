#define DYNAMIC_LIBRARY
#ifdef DYNAMIC_LIBRARY
	#define DLLEXPORT __declspec(dllexport)   
	#define DLLIMPORT __declspec(dllimport)
#else
	#define DLLEXPORT 
	#define DLLIMPORT   
#endif

extern DLLEXPORT void  BeginMusic();
extern DLLEXPORT void  EndMusic();