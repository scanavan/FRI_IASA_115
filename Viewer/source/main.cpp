#include "Viewer.h"
#include <memory>

int main()
{
	std::unique_ptr<Viewer> viewer(new Viewer("Stream Viewer"));
	viewer->Run();
	return EXIT_SUCCESS;
}