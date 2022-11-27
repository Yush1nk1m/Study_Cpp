/* Sum from 1 to 10 */
#include <iostream>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 10; i++) {
        sum += i;
    }

    std::cout << "Sum : " << sum << std::endl;

    return 0;
}