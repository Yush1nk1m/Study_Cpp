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
    this->id = id;
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setGpa(double gpa)
{
    this->gpa = gpa;
}

int main()
{
    Student std1(1, "Yushin1", 4.0);
    Student std2(10, "Yushin2", 3.92);
    Student std3(5, "Yushin3", 3.1);
    Student std4(71, "Yushin4", 3.12);
    Student std5(100, "Yushin5", 3.86);
    Student students[] = {std1, std2, std3, std4, std5};

    ofstream os;
    os.open("output.txt");
    if (!os.is_open())
    {
        cout << "Cannot open the file." << endl;
        assert(false);
    }

    for (int i = 0; i < 5; i++)
    {
        os << setw(10) << right << setfill('0') << students[i].getId();
        os << setw(10) << left << setfill(' ') << students[i].getName();
        os << setw(10) << showpoint << setprecision(2) << left << setfill('0') << students[i].getGpa();
        os << endl;
    }
    return 0;
}