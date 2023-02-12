#include <iostream>
#include <fstream>
#include <cassert>
#include <iomanip>
using namespace std;

class Student
{
    private:
        int id;
        string name;
        double gpa;
    public:
        Student();
        Student(int id, string name, double gpa);
        ~Student();
        int getId() const;
        string getName() const;
        double getGpa() const;
        void setId(int id);
        void setName(string name);
        void setGpa(double gpa);
};

Student::Student()
{
}

Student::Student(int id, string name, double gpa)
: id(id), name(name), gpa(gpa)
{
    assert(id >= 0 && id <= 100);
    assert(gpa >= 0.0 && gpa <= 4.0);
}

Student::~Student()
{
}

int Student::getId() const
{
    return id;
}

string Student::getName() const
{
    return name;
}

double Student::getGpa() const
{
    return gpa;
}

void Student::setId(int id)
{
    assert(id >= 0 && id <= 100);
    this->id = id;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setGpa(double gpa)
{
    assert(gpa >= 0.0 && gpa <= 4.0);
    this->gpa = gpa;
}

int main()
{
    ifstream is;
    is.open("output.txt");
    if (!is.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }
    
    Student student[5];
    for (int i = 0; i < 5; i++)
    {
        int id;
        string name;
        double gpa;
        string line;
        getline(is, line);
        istringstream iss(line);

        iss >> id;
        iss >> name;
        iss >> gpa;

        student[i].setId(id);
        student[i].setName(name);
        student[i].setGpa(gpa);

        cout << "Student " << (i + 1) << endl;
        cout << "ID : " << student[i].getId() << endl;
        cout << "Name : " << student[i].getName() << endl;
        cout << "GPA : " << student[i].getGpa() << endl << endl;
    }
    is.close();
    
    return 0;
}