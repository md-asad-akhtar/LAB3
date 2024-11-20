#include <iostream>
//2


//1a

void increment(int* address_to_number){

}

void increment(int& number){
}

//1b
struct Element{


};


int main() {
    Teacher bob = {"Bob"};
    Student alice = {"Alice", bob};
    //std::cout << alice.teacher.isBooked << std::endl;
    //alice.bookAppointment();
    //std::cout << bob.isBooked << std::endl;
    Element first = {1, nullptr};
    Element second = {2,&first};
    std::cout << second.next->value << std::endl;
    std::cout << second.next->next << std::endl;

    int i = 5;
    increment(&i);
    std::cout << i << std::endl;
    increment(i);
    std::cout << i << std::endl;
    increment(&i);
    std::cout << i << std::endl;
}
