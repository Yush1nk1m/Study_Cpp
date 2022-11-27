/* Delete local variable */
#include <iostream>

int main() {
    int a = 5;

    delete &a;
    
    return 0;
}

/* Error occurs because of freeing place where is not the heap. */