/********************************************
 * An application file which uses classes   *
********************************************/
#include "student3.h"
#include "professor2.h"
#include "ta2.h"

int main()
{
    // instantiation 4 objects
    Person person("John");
    Student student("Linda", 3.9);
    Professor professor("George", 89000);
    TA ta("Lucien", 3.8, 23000);
    // Person information output
    cout << "Person information" << endl;
    person.print();
    cout << endl << endl;
    // Student information output
    cout << "Student information" << endl;
    student.print();
    cout << endl << endl;
    // Professor information output
    cout << "Professor information" << endl;
    professor.print();
    cout << endl << endl;
    // TA information output
    cout << "TA information" << endl;
    ta.print();
    cout << endl << endl;
    return 0;
}