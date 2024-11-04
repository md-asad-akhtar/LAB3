#include <iostream>
bool nth_bit_is_zero(int, int);
void print_int_as_binary(int);


int main() {
    std::cout << "Hello, World!" << std::endl;

    print_int_as_binary(-8);
    print_int_as_binary(8);
    print_int_as_binary(0);
    return 0;
}

bool nth_bit_is_zero(int number, int n){
    int temp = 1 << n;
    return (number & temp) != 0;
}

// Implement the `print_int_as_binary`function here
// TODO


