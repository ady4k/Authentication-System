#pragma once

class User
{
    private:
        static int userIds;
        int m_userId;
        char* m_UserName;
        char* m_Password;
    public:
        
    private:
        char* getUserName();
        void setUserName(char* userName);

        char* getPassword();
        void setPassword(char* password);

        char* hashPassword(char* password);
        char* encryptPassword(char* hash);
        bool verifyPassword(char* password);
    public:
        User();
        User(char* userName, char* password);
        ~User();

        int getUserId();
        void setUserId(int userId);
        bool checkUserId(int userId);

        static User getUserById(int userId);

        static int getGeneratorUserId();
        static void setGeneratorUserId(int genId);
};
