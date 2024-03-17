// PrimeiraPratica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Events.h"

int main()
{
    std::cout << "Enter the event name: ";

    std::string test;

    std::cin >> test;

    auto TempEvent = new Events();
    TempEvent->SetEventName(&test);
    std::cout << TempEvent->GetEventName() <<" World!\n";

    return 0;
}
