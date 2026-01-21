#ifndef __ETUDIANTS_H__
#define __ETUDIANTS_H__

#include <string>

using namespace std;

class Etudiant
{

private:
    static int id;
    string firstname;
    string lastname;
    int classeId;

public:
    Etudiant(string firstname, string lastname, int classeId)
    {
        this->firstname = firstname;
        this->lastname = lastname;
        this->classeId = classeId;
        this->id = ++Etudiant::id;
    };
};

#endif //__ETUDIANTS_H__