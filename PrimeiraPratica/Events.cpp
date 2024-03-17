#include <string>
#include <memory>
#include "Events.h"

Events::Events()
{

}

void Events::SetEventName(std::string* TempName) {
    Name = TempName;
}

std::string Events::GetEventName() const 
{
	return *Name;
}