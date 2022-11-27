#include <iostream>

class Date {
    private :
        int year_;
        int month_;
        int day_;
    
    public :
        void ShowDate();
    
    Date() {
        year_ = 2012;
        month_ = 7;
        day_ = 12;
    }
};

void Date::ShowDate() {
    std::cout << "Today is " << year_ << "-" << month_ << "-" << day_ << std::endl;
}

int main() {
    Date day = Date();
    Date day2;

    day.ShowDate();
    day2.ShowDate();

    return 0;
}
