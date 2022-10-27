#pragma once

class User
{
    private:
        char* m_UserName;
        char* m_Password;
    public:
        
    private:
        User(char* userName, char* password);
        ~User();

        char* getUserName();
        void setUserName(char* userName);

        char* getPassword();
        void setPassword(char* password);
};
