/****************************************************************************
 * An application file which checks Person, Student, Professor, TA classes  *
****************************************************************************/
#include "ta.h"

int main()
{
    // Person class usage
    Person person("John");
    person.print();
    // Student class usage
    Student student("Anne", 3.9);
    student.print();
    // Professor class usage
    Professor professor("Lucie", 78000);
    professor.print();
    // TA class usage
    TA ta("George", 3.2, 20000);
    ta.print();
    return 0;
}