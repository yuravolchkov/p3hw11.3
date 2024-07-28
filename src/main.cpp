#include <iostream>
#include "DinamicLibLeaver.h"

int main()
{
    setlocale(LC_ALL, "Russian"); // задать русский текст
    std::system("chcp 1251"); // настроить кодировку консоли
    std::system("cls"); // очистить экран

    std::cout << "Введите имя: ";
    std::string Entering_Name_Main;
    std::cin >> Entering_Name_Main;
    Leaver BayMan(Entering_Name_Main);
    BayMan.Show_Leavings();
	std::system("pause");
    return 111;
}