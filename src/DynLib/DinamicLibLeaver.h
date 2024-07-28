#pragma once
#include <iostream>

#ifndef LEAVER_LIB
 #define LEAVER_LIB_API __declspec(dllexport)
#else
 #define LEAVER_LIB_API __declspec(dllimport)
#endif



class Leaver
{
private:
    std::string Leaving_Name;

public:
    Leaver(std::string Entering_Name) : Leaving_Name(Entering_Name) {}

LEAVER_LIB_API void Show_Leavings();
};
