#import "@preview/grape-suite:1.0.0": exercise
#import exercise: project, task, subtask

#let task = task.with(numbering-format: (..n) => numbering("1", ..n))
#let subtask = subtask.with(markers: ("a)", "1)"))

#show: project.with(
    title: "Übungsblatt 3 - Betrachten von Ganzzahlen und Ihrer Binärdarstellung",

    university: [University of Duisburg-Essen],
    institute: [Distributed Systems],
    seminar: [Objektorientied Programming in C++],

    abstract: [
      Das Übungsblatt dieser Woche wird sich genauer mit dem Integer Datentyp beschäftigen sowie dessen binärer Repräsentation. Außerdem werdet ihr selbstständig die ersten Funktionen schreiben.
      
     
    
    Solltet ihr Fragen oder Probleme haben, meldet euch im Moodle!
  ],
    

    author: "Thies Josten",

    show-solutions: false,
    show-hints: true,
    task-type: [Exercise],
)

#task[][
    Gib wie in der Vorlesung gezeigt das Zweier-Komplement der folgenden Zahlen an:
    
    #subtask[
        
         (+) 13
       ]
       #subtask[
         (-) 8
       ]
      #subtask[
        (+) 0
      ] 
        _Geht davon aus, dass jede Nummer mit 8 Bits, also einem Byte repräsentiert wird. Beispielsweise gilt also für die 13 der äquivalente binäre Darstellung 00001101._
        
      ]

#task[][

    #subtask[
        _Öffnet #link("https://git.uni-due.de/vs.ude/objektorientierte-programmierung-cpp"). Nutzt git um das Repository mit _clone_ zu importieren und speichert dieses in 03_Integers._ \
        In der 'main.cpp' - Datei werdet ihr eine Funktion namens 'nth_bit_is_zero' finden. Beschreibt die einzelnen Zeilen der Funktion mit Hilfe von Kommentaren, indem ihr `//` benutzt. \
        _Wozu dient der Inhalt von `temp`? Welchen Wert wird die Funktion jeweils zurückgeben?_
        
    ]
    #subtask[
      Implementieren Sie die Funktion `print_int_as_binary` die, wie der Name bereits vermuten lässt, eine übergebene Ganzzahl als Ihre binäre Repräsentation wiedergibt. \
      _Tipp: `sizeof(<Datentyp>)` berechnet die Größe des übergebenen Datentypes in Byte._\
      
    ]

  ]