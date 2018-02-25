#include <iostream>
#include "Log.h"
#include "Interface.h"
#include "SearchInterface.h"
#include "MenuInterface.h"

using namespace std;

int main(int argc, char *argv[])
{
	if (Interface::loadMap(R"(.\Language\Fr_fr.lng)"))
	{
		Log::info("�a d�marre");
		Interface::start();
		Log::info("�a termine");
	}

	return 0;
}
