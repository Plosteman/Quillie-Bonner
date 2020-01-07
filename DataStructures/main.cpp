#include <iostream>
#include <crtdbg.h>

#define _CRTDBG_MAP_ALLOC

using std::cout;
using std::endl;


int main()
{
	{
		// Write your code in this inner scope
		// so that the memory checks happen after everything has
		// been garbage collected or destructed
		
		cout << "Hello WOU CS 260 Class!" << endl;
	}


	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();
}

