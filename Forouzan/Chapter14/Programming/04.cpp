#include <iostream>
#include <stdexcept>
using namespace std;

class HExcept : public out_of_range
{
    public:
        HExcept(const string& message);
};

class MExcept : public out_of_range
{
    public:
        MExcept(const string& message);
};

class SExcept : public out_of_range
{
    public:
        SExcept(const string& message);
};

HExcept::HExcept(const string& message)
: out_of_range(message)
{
}

MExcept::MExcept(const string& message)
: out_of_range(message)
{
}

SExcept::SExcept(const string& message)
: out_of_range(message)
{
}

int main() throw(HExcept, MExcept, SExcept)
{
    int hour, minute, second;
    
    try
    {
        cout << "Enter the hour : ";
        cin >> hour;
        if (hour < 0) throw HExcept("Hour is out of range.");

        cout << "Enter the minute : ";
        cin >> minute;
        if (minute < 0 || minute > 59) throw MExcept("Minute is out of range.");

        cout << "Enter the second : ";
        cin >> second;
        if (second < 0 || second > 59) throw SExcept("Second is out of range.");
    }
    catch (HExcept h)
    {
        cout << h.what() << endl;
    }
    catch (MExcept m)
    {
        cout << m.what() << endl;
    }
    catch (SExcept s)
    {
        cout << s.what() << endl;
    }
    return 0;
}