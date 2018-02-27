#include "Log.h"
#include "Interface.h"

int main(int argc, char *argv[])
{
	if (Interface::loadMap(R"(.\Ressources\Fr_fr.lng)"))
	{
		Log::info("�a d�marre");
		Interface::start();
		Log::info("�a termine");
	}

	return 0;
}
