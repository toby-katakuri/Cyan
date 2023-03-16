#pragma once

#include "Core.h"

namespace Cyan {

	class CYAN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

