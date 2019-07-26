#pragma once

#include "Rain/Core.h"

namespace Rain {

	class RN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT.
	Application* CreateApplication();
}