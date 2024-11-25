#import "@preview/grape-suite:1.0.0": exercise
#import exercise: project, task, subtask
#import math

#let task = task.with(numbering-format: (..n) => numbering("1", ..n))
#let subtask = subtask.with(markers: ("a)", "1)"))

#show: project.with(
    title: "Exercise 6 - Simple Stack",

    university: [University of Duisburg-Essen],
    institute: [Distributed Systems],
    seminar: [Objektorientied Programming in C++],

    abstract: [

    _Based on our struct `Element` from last weeks exercise sheet, we are going to implement a stack-like structure._
    
    If you have any questions or problems, please write in the Moodle!
  ],
    

    author: "Thies Josten",

    show-solutions: false,
    show-hints: true,
    task-type: [Exercise],
)

#task[Groundwork][
  
  For this Exercise write your methods into `Stack.cpp`. Declare your methods in `Stack.h`. \ Try out your code as usual in `main.cpp`. \ \

  To get started, have a look at `Stack.h`, in which you will find the `class Stack` . Examine the private fields of the given `class` and the struct declaration of `Element`. 
  \ ]
  #subtask[
    Write the method `void push(int value)`, which creates a new `Element` holding the given `value`. That `Element` is than pushed to the beginning of the stack. i.E. `head` points to the new `Element` and the `next` pointer of the new `Element` points to where the head was previously pointing to. Remember to also change the length of your stack. \ 
    _Hint: You can use `new Element{value}` to create a new Element with the passed value._ \ \
  ]
  #subtask[
    Complete the method `void pop()` you can find in `Stack.cpp`. The method should properly remove the current `head Element` from the `Stack`. Therefore the previously `second Element` of the `Stack` shall now be stored in `head`. Remember to also change the length of your stack. \ 

    _Hint: `delete <object-pointer>` will `free` the object from the `heap`. Leaving you with just a `Pointer` to an invalid object._
    
  ]
    #subtask[
    Write the method `int size()` returning the `length` of the `stack`. \ \
  ]
    

#task[Useful functionalities][
 
  For this Exercise write your methods into `Stack.cpp`. Declare your functions in `Stack.h`. \ Try out your code as usual in `main.cpp`. \ \ ]
 
  #subtask[
    Write the method `void print()` iterating over the entire `Stack` and printing each `value` stored.  _Format your output as seen below:_
    `
      Stack my_Stack;
      my_Stack.push(3);
      my_Stack.push(2);
      my_Stack.push(1);
      my_Stack.print();
      
    `
    Output: [1,2,3]
  ]
  #subtask[
    In `main.cpp` write a function `Stack primeStack(int upper_bound)` returning a Stack filled with all `prime numbers` less than the `upper_bound`. \ \
    _You can use your `isPrime function` from previous exercises or our implementation provided in `main.cpp`._ \ \
  ]

  #subtask[
    Finally write the `deconstructor: ~Stack()` using the `delete <object-pointer>` again. The method shall iterate over the `Stack` freeing all `Elements` from the `heap`.  \ \
    _You might want to print a message inside of the `deconstructor`, so you can see when it is automatically invoked when running your code._
    
  ]
   
 