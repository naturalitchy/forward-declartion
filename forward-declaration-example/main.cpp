//-----------------------------------------------------
// CRT (C Runtime Library)
//-----------------------------------------------------
#define _CRTDBG_MAP_ALLOC       // mapping (CRT heap function basic version -> debug version)
#include <stdlib.h>
#include <crtdbg.h>             // tracking (new and delete)


#include <iostream>
//#include "bottom.h"
//#include "top.h"
#include "middle.h"

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//Bottom bottom;

	//Top top;

	Middle middle;


	_CrtDumpMemoryLeaks();						// memory leak report (output to debug window)
	return 0;
}