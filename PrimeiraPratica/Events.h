#pragma once

class string;

class Events
{

public:
	Events();

	void SetEventName(std::string* TempName);

	std::string GetEventName() const;

protected:

private:
	std::string* Name;

};
