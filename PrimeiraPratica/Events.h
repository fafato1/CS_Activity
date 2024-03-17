#pragma once

class memory;
class string;

class Events
{

public:
	Events();

	void SetEventName(const char* TempName);

	std::string GetEventName() const;

protected:

private:
	std::unique_ptr<std::string> Name;

};
