#include <iostream>



   

//forward declaration
void testReverse();
void testSort();
void testAdd(); 
void testSubscriptOperator();

int main() {
    std::cout << "Hello, World!" << std::endl;

    // run tests
    testSubscriptOperator();
    testAdd();
    testSort();
    testReverse();
}


