#import "@preview/grape-suite:1.0.0": exercise
#import exercise: project, task, subtask

#let task = task.with(numbering-format: (..n) => numbering("1", ..n))
#let subtask = subtask.with(markers: ("a)", "1)"))

#show: project.with(
    title: "Exercise 2: Primzahlen",

    university: [University of Duisburg-Essen],
    institute: [Distributed Systems],
    seminar: [Objektorientied Programming in C++],

    abstract: [In dieser Aufgabe geht es alle Primzahlen bis zu einer nutzerspezifizierten Grenze zu finden. Viel Erfolg!
    
    Bei Fragen oder Problemen schreiben Sie gerne im Moodle!],
    

    author: "Peter Zdankin",

    show-solutions: false,
    show-hints: true,
    task-type: [Aufgabe],
)

#task[Primzahlen][

    #subtask[
        Öffnen Sie #link("https://git.uni-due.de/vs.ude/objektorientierte-programmierung-cpp"). Nutzen Sie git um das Repository zu _clonen_ und importieren Sie das Projekt in 02_Primes.
    ]

    #subtask[
        Vervollständigen Sie den Quelltext sodass die is_prime Methode `true` zurückgibt, falls die übergebene Zahl eine Primzahl ist, und ansonsten `false`.
        Eine Primzahl ist eine Zahl die genau 2 Teiler hat.
    ]
][]