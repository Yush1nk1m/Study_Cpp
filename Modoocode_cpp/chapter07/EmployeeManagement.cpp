#include <iostream>
#include <string>

class Employee {
    private :
        std::string name;
        int age;

        std::string position;
        int rank;

    public :
        Employee(std::string name, int age, std::string position, int rank)
        : name(name), age(age), position(position), rank(rank) {}

        // copy constructor
        Employee(const Employee& employee) {
            name = employee.name;
            age = employee.age;
            position = employee.position;
            rank = employee.rank;
        }

        // default constructor
        Employee() {}

        void print_info() const {
            std::cout << name << " (" << position << " , " << age << ") ==> " << calculate_pay() << " (10,000 WON)" << std::endl;
        }

        int calculate_pay() const { return 200 + rank * 50; }
};

class EmployeeList {
    private :
        int alloc_employee;                 
        int current_employee;               
        Employee** employee_list;
    
    public :
        EmployeeList(int alloc_employee) : alloc_employee(alloc_employee) {
            employee_list = new Employee*[alloc_employee];
            current_employee = 0;
        }

        void add_employee(Employee* employee) {
            employee_list[current_employee++] = employee;
        }

        int current_employee_num() const { return current_employee; }

        void print_employee_info() const {
            int total_pay = 0;
            for (int i = 0; i < current_employee; i++) {
                employee_list[i]->print_info();
                total_pay += employee_list[i]->calculate_pay();
            }

            std::cout << "Total pay : " << total_pay << " (10,000 WON)" << std::endl;
        }

        ~EmployeeList() {
            for (int i = 0; i < current_employee; i++) {
                delete employee_list[i];
            }
            delete[] employee_list;
        }
};

int main() {
    EmployeeList emp_list(10);

    emp_list.add_employee(new Employee("no", 34, "normal", 1));
    emp_list.add_employee(new Employee("ha", 34, "normal", 1));
    emp_list.add_employee(new Employee("yu", 41, "staff", 7));
    emp_list.add_employee(new Employee("jungj", 43, "chief", 4));
    emp_list.add_employee(new Employee("park", 43, "manager", 5));
    emp_list.add_employee(new Employee("jungh", 36, "staff", 2));
    emp_list.add_employee(new Employee("gil", 36, "beginner", -2));
    emp_list.print_employee_info();

    return 0;
}