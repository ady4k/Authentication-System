#include <iostream>

static char* loggedIn;

void showAdminMenu()
{
    std::cout << "2. Administrate Users\n";
}

void showMainMenu()
{
    if (loggedIn)
    {
        std::cout << "Currently logged in User:%c\n", loggedIn;
        std::cout << "1. Log Out\n";
        showAdminMenu();
    } 
    else
    {
        std::cout << "You are not logged in.\n";
        std::cout << "1. Login\n";
        std::cout << "2. Register\n";
    }
    std::cout << "0. Exit";
}

