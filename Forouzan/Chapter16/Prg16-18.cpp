/********************************************************************
 * An application program which prints Student object on the file,  *
 * reads sequentially in binary mode, and prints on the monitor     *
********************************************************************/
#include "student.h"

int main()
{
    // open File.dat as binary output
    fstream stdStream1;
    stdStream1.open("File.dat", ios::binary | ios::out);
    if (!stdStream1.is_open())
    {
        cout << "Cannot open File.dat." << endl;
        assert(false);
    }
    // instantiation 5 objects
    Student std1(1, "John", 3.91);
    Student std2(2, "Mary", 3.82);
    Student std3(3, "Lucie", 4.00);
    Student std4(4, "Edward", 3.71);
    Student std5(5, "Richard", 3.85);
    // print 5 objects on the file and close the file
    stdStream1.write(reinterpret_cast<char*>(&std1), sizeof(Student));
    stdStream1.write(reinterpret_cast<char*>(&std2), sizeof(Student));
    stdStream1.write(reinterpret_cast<char*>(&std3), sizeof(Student));
    stdStream1.write(reinterpret_cast<char*>(&std4), sizeof(Student));
    stdStream1.write(reinterpret_cast<char*>(&std5), sizeof(Student));
    stdStream1.close();
    // open File.dat as binary input
    fstream stdStream2;
    stdStream2.open("File.dat", ios::binary | ios::in);
    if (!stdStream2.is_open())
    {
        cout << "Cannot open File.dat." << endl;
        assert(false);
    }
    // read and print the information of students in File.dat
    cout << left << setw(4) << "ID" << " ";
    cout << left << setw(15) << "Name" << " ";
    cout << setw(4) << "GPA" << endl;
    Student std;
    for (int i = 0; i < 5; i++)
    {
        stdStream2.read(reinterpret_cast<char*>(&std), sizeof(Student));
        cout << left << setw(4) << std.getId() << " ";
        cout << left << setw(15) << std.getName() << " ";
        cout << fixed << setprecision(2) << setw(4) << std.getGpa() << endl;
    }
    stdStream2.close();
}