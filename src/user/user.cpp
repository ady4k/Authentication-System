#include "user.h"

User::User(char* userName, char* password)
{

}

User::~User()
{

}

char* User::getUserName()
{
    return this->m_UserName;
}

void User::setUserName(char* userName)
{
    this->m_UserName = userName;
}

char* User::getPassword()
{
    return this->m_Password;
}

void User::setPassword(char* password)
{
    this->m_Password = password;
}