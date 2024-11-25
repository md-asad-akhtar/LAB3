//
// Created by Thies Josten on 12.11.24.
//

#ifndef EXERCISE_06_STACK_H
#define EXERCISE_06_STACK_H


class Stack {

private:
    struct Element{
        int value;
        Element* next;
    };
    Element* head{nullptr};
    int length{0};

public:
    Stack() = default;
    void push(int value);
    void pop();
    

};


#endif //EXERCISE_06_STACK_H
