#include "admin.h"

Admin::Admin(int adminLevel, int adminId, int userId)
{
    this->m_adminLevel = adminLevel;
    this->m_adminId = adminId;
    this->m_baseUser = User::getUserById(userId);
}

Admin::~Admin()
{
    this->m_baseUser.~User();
    delete this;
}