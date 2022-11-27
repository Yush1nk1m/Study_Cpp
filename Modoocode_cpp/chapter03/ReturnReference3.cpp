#include <iostream>

int& function(int& a) {
    a = 5;
    return a;
}

int main() {
    int b = 2;
    int c = function(b);
    
    std::cout << "b : " << b << ", c : " << c << std::endl;
    return 0;
}