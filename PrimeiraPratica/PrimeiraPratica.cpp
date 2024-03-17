// PrimeiraPratica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Events.h"

int main()
{
    auto TempEvent = new Events();
    TempEvent->SetEventName("Hello");
    std::cout << TempEvent->GetEventName() <<" World!\n";

    return 0;
}


