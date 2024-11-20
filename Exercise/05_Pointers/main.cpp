#include <iostream>
//2

struct Teacher{
    std::string name;
    bool isBooked = false;
    void appointAppointment(){
        if(isBooked){
            std::cout << "I hate my Job." << std::endl;
            isBooked = false;
        } else{
            std::cout << "It ain't much, but it's honest work." << std::endl;
        }
    }
};

struct Student{
    std::string name;
    Teacher& teacher;
    void bookAppointment(){
        if(!teacher.isBooked){
            teacher.isBooked = true;
            std::cout << "Successfully booked a meeting with the teacher." << std::endl;
        } else{
            std::cout << "Teacher is unavailable this week, maybe try again later";
        }
    }
};

//1a

void increment(int* address_to_number){
    (*address_to_number)++;
}

void increment(int& number){
    number++;
}

//1b
struct Element{
    int value;
    Element* next;
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
