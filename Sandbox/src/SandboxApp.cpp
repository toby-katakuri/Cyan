
#include <Cyan.h>

class Sandbox : public Cyan::Application
{
public:
	Sandbox() 
	{

	}

	~Sandbox()
	{

	}
	
};


Cyan::Application* Cyan::CreateApplication()
{
	return new Sandbox();
}