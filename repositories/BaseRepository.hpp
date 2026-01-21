#ifndef __BASEREPOSITORY_H__
#define __BASEREPOSITORY_H__

#include <string>
#include <fstream>

using namespace std;

class BaseRepository
{
private:
    int id;

protected:
    string path;

public:
    BaseRepository()
    {
        this->id = 0;
        this->path = "../datas/";
    }
    ~BaseRepository();

    int getLastInsertId()
    {
        return this->loadLastInsertId();
    }

    void setLastInsertId(int id)
    {
        ofstream f{this->path + "lastUserInsertId.txt"};

        if (f.is_open())
        {
            f << id;
        }
        f.close();
    }

    int loadLastInsertId()
    {
        ifstream f{this->path + "lastUserInsertId.txt"};

        if (f.is_open())
        {
            f >> this->id;
        }
        f.close();
        return this->id;
    }
};

#endif //__BASEREPOSITORY_H__