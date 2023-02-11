#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void readRecord(const char* filename, int& id, string& name, double& gpa)
{
    ifstream is;
    is.open(filename);
    if (!is.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    is >> id;
    is >> name;
    is >> gpa;

    is.close();
}

// test
int main()
{
    int id;
    string name;
    double gpa;
    readRecord("test.txt", id, name, gpa);
    cout << "id : " << id << endl;
    cout << "name : " << name << endl;
    cout << "gpa : " << gpa << endl;
    return 0;
}