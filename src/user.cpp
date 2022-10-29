#include "user.h"
// TO DO: log everything, audit service

int User::User::userIds = 0;

User::User()
{
    // log
}

User::User(char* userName, char* password)
{
    char* hash = hashPassword(password);
    char* ciphertext = encryptPassword(hash);
    this->setPassword(ciphertext);

    this->setUserName(userName);
    this->setUserId(User::userIds++);

    delete hash, ciphertext;
}

User::~User()
{
    delete this;
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

void User::setPassword(char* ciphertext)
{
    this->m_Password = ciphertext;
}

char* User::hashPassword(char* password)
{
    char* hash;
    // TO DO: hashing function

    return hash;
}

char* User::encryptPassword(char* hash)
{
    char* ciphertext;
    // TO DO: encryption function

    return ciphertext;
}

bool User::verifyPassword(char* password)
{
    char* hash = hashPassword(password);
    delete hash;
    char* ciphertext = encryptPassword(hash);
    if (this->getPassword() == ciphertext)
    {
        delete ciphertext;
        return true;
    }
    else
    {
        delete ciphertext;
        return false;
    }
}

bool User::checkUserId(int userId)
{
    // TO DO: check existent user id function
    return true;
}

int User::getUserId()
{
    return this->m_userId;
}

void User::setUserId(int userId)
{
    if (checkUserId(userId) == true)
    {
        // log
        this->m_userId = userId;
    }
    else
    {
        // TO DO: log function to avoid adding iostream to each file
        return;
    }
}

int User::getGeneratorUserId()
{
    return User::userIds;
}

void User::setGeneratorUserId(int genId)
{
    if (genId < User::userIds)
    {
        // log error
    }
    else if (genId == User::userIds)
    {
        // log warning / information
    }
    else
    {
        // log information
        User::userIds = genId;
    }
    
}

User User::getUserById(int userId)
{
    User user;
    // TO DO: function
    return user;
}