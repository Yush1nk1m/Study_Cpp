#include <iostream>
#include <string>

class Employee {
    protected :
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

        void print_info() {
            std::cout << name << " (" << position << " , " << age << ") ==> " << calculate_pay() << " (10,000 WON)" << std::endl;
        }

        int calculate_pay() { return 200 + rank * 50; }
};

class Manager : public Employee {
    private :
        int year_of_service;

    public :
        Manager(std::string name, int age, std::string position, int rank, int year_of_service)
        : Employee(name, age, position, rank), year_of_service(year_of_service) {}

        // copy constructor
        Manager(const Manager& manager) : Employee(manager.name, manager.age, manager.position, manager.rank) {
            year_of_service = manager.year_of_service;
        }

        // default constructor
        Manager() : Employee() {}

        int calculate_pay() { return 200 + rank * 50 + 5 * year_of_service; }

        void print_info() {
            std::cout << name << " (" << position << " , " << age << " , " << 
            year_of_service << " years) ==> " << calculate_pay() << " (10,000 WON)" << std::endl;
        }
};

class EmployeeList {
    private :
        int alloc_employee;

        int current_employee;
        int current_manager;

        Employee** employee_list;
        Manager** manager_list;

    public :
        EmployeeList(int alloc_employee) : alloc_employee(alloc_employee) {
            employee_list = new Employee*[alloc_employee];
            manager_list = new Manager*[alloc_employee];

            current_employee = 0;
            current_manager = 0;
        }

        void add_employee(Employee* employee) {
            employee_list[current_employee++] = employee;
        }

        void add_manager(Manager* manager) {
            manager_list[current_manager++] = manager;
        }

        int current_employee_num() { return current_employee + current_manager; }

        void print_employee_info() {
            int total_pay = 0;

            for (int i = 0; i < current_employee; i++) {
                employee_list[i]->print_info();
                total_pay += employee_list[i]->calculate_pay();
            }

            for (int i = 0; i < current_manager; i++) {
                manager_list[i]->print_info();
                total_pay += manager_list[i]->calculate_pay();
            }

            std::cout << "Total pay : " << total_pay << " (10,000 WON)" << std::endl;
        }

        ~EmployeeList() {
            for (int i = 0; i < current_employee; i++) delete employee_list[i];

            for (int i = 0; i < current_manager; i++) delete manager_list[i];

            delete[] employee_list;
            delete[] manager_list;
        }
};

int main() {
    EmployeeList emp_list(10);

    emp_list.add_employee(new Employee("NO", 34, "Normal", 1));
    emp_list.add_employee(new Employee("HA", 34, "Normal", 1));
    emp_list.add_manager(new Manager("YU", 41, "Chief manager", 7, 12));
    emp_list.add_manager(new Manager("JUNG", 43, "Staff", 4, 15));

    emp_list.print_employee_info();

    return 0;
}