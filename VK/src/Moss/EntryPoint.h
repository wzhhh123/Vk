#pragma once


#ifdef MOSS_PLATFORM_WINDOWS

extern  Moss::Application*  Moss::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Moss::CreateApplication();
	app->Run();
	delete app;
}


#endif