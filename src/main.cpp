#include <iostream>
#include <fstream>
#include "user/user.h"
#include "menu/menu.h"

int main()
{
    while(true)
    {
        showMainMenu();
        std::cin.get();
    }

    return 0;
}