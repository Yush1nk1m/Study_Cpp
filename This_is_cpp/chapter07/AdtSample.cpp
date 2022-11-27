#include "tchar.h"
#include <iostream>
using namespace std;

// ealry maker
#define DEFAULT_FARE 1000

class CPerson
{
public :
    CPerson() { }
    virtual ~CPerson() {
        cout << "virtual ~CPerson()" << endl;
    }

    // fare calculation interface (pure virtual function)
    virtual void CalcFare() = 0;

    virtual unsigned int GetFare() { return m_nFare; }

protected :
    unsigned int m_nFare = 0;
};

// earlier or later maker
class CBaby : public CPerson
{
public :
    // baby (0 ~ 7) fare calculation
    virtual void CalcFare() {
        m_nFare = 0;    // 0%
    }
};

class CChild : public CPerson
{
public :
    // child (8 ~ 13) fare calculation
    virtual void CalcFare() {
        m_nFare = DEFAULT_FARE * 50 / 100;  // 50%
    }
};

class CTeen : public CPerson
{
public :
    // teen (14 ~ 19) fare calculation
    virtual void CalcFare() {
        m_nFare = DEFAULT_FARE * 75 / 100;  // 75%
    }
};

class CAdult : public CPerson
{
public :
    // adult (20 ~) fare calculation
    virtual void CalcFare() {
        m_nFare = DEFAULT_FARE; // 100%
    }
};

// user's code
int _tmain(int argc, _TCHAR* argv[])
{
    CPerson* arList[3] = { 0 };
    int nAge = 0;

    // 1. data input : select object regarding user input
    for (auto &person : arList)
    {
        cout << "Enter age : ";
        cin >> nAge;
        if (nAge < 8)
            person = new CBaby;
        
        else if (nAge < 14)
            person = new CChild;
        
        else if (nAge < 20)
            person = new CTeen;
        
        else
            person = new CAdult;
        
        // fare is automatically calculated
        person->CalcFare();
    }

    // 2. print data : utilize calculated fare
    for (auto person : arList)
        cout << person->GetFare() << "won" << endl;
    
    // 3. delete data and exit
    for (auto person : arList)
        delete person;

    return 0;
}