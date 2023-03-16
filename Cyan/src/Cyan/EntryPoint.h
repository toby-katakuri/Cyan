#pragma once

#ifdef CA_PLATFORM_WINDOWS

extern Cyan::Application* Cyan::CreateApplication();

int main(int argc, char** argv)
{
	printf("Cyan Engine\n");
	auto app = Cyan::CreateApplication();
	app->Run();
	delete app;
}

#endif
