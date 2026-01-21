#ifndef __USERREPOSITORY_H__
#define __USERREPOSITORY_H__

#include "BaseRepository.hpp"
#include "../models/User.hpp"

#include <string>
#include <fstream>

using namespace std;

class UserRepository : public BaseRepository
{
private:
public:
    UserRepository()
    {
        this->path += "users.txt";
    }
    ~UserRepository();

    void add(User user)
    {
        ofstream f{this->path, ios::app};

        if (f.is_open())
        {
            f << user.getId() << " " << user.getFirstname() << " " << user.getLastname() << " " << user.getEmail() << " " << user.getPassword() << endl;
        }
        f.close();
    }
};

#endif //__USERREPOSITORY_H