#include <string>
#include <memory>
#include "Events.h"

Events::Events()
{

}

void Events::SetEventName(const char* TempName) {
    Events::Name = std::make_unique<std::string>(TempName);
}

std::string Events::GetEventName() const 
{
	return *Name;
}