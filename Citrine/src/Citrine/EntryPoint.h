#pragma once

#ifdef CR_PLATFORM_WINDOWS

extern Citrine::Application* Citrine::CreateApplication();

int main(int argc, char** argv) {
	printf("Citrine Engine\n");
	auto app = Citrine::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Citrine supports only Windows for now!
#endif // CR_PLATFORM_WINDOWS