#pragma once
#include "user.h"

class Admin
{
    private:
        int m_adminLevel;
        int m_adminId;
        User m_baseUser;
    private:
        Admin(int adminLevel, int adminId, int userId);
        ~Admin();
        
        
};