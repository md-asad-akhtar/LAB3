#import "@preview/grape-suite:1.0.0": exercise
#import exercise: project, task, subtask

#let task = task.with(numbering-format: (..n) => numbering("1", ..n))
#let subtask = subtask.with(markers: ("a)", "1)"))

#show: project.with(
    title: "Exercise 3 - Exploring Integers as Binaries",

    university: [University of Duisburg-Essen],
    institute: [Distributed Systems],
    seminar: [Objektorientied Programming in C++],

    abstract: [
      This weeks exercise sheet is focusing on the integer data type and its binary representation, as well as writing a few functions on your own.
    
    If you have any questions or problems, please write in the Moodle!
  ],
    

    author: "Thies Josten",

    show-solutions: false,
    show-hints: true,
    task-type: [Exercise],
)

#task[][
    Given the following numbers, determine the 2's complement as shown in the lecture:
    #subtask[
        
         (+) 13
       ]
       #subtask[
         (-) 8
       ]
      #subtask[
        (+) 0
      ] 
        _Assume each number to be represented with 8 Bits, which is 1 Byte, so 13 as binary for example would be equivalent to 00001101._
      ]

#task[][

    #subtask[
        _Open #link("https://git.uni-due.de/vs.ude/objektorientierte-programmierung-cpp"). Use git to _clone_ the repository and import the project into 03_Integers._ \
        Inside the 'main.cpp' - file you will find a function called 'nth_bit_is_zero'. Write down short comments using `//` to explain every step of the function. \
        _What will be stored in `temp`? What will the function return?_
        
    ]
    #subtask[
      Implement the function `print_int_as_binary` which, as the name suggests, prints a given integer number as its binary representation. \
      _Hint: `sizeof(<datatype>)` will evaluate the size of a given datatype in bytes._\
      
    ]

  ]