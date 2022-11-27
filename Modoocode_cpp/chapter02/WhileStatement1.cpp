/* while statement */
#include <iostream>

int main() {
    int i = 1, sum = 0;

    while (i <= 10) {
        sum += i;
        i++;
    }

    std::cout << "Sum : " << sum << std::endl;

    return 0;
}