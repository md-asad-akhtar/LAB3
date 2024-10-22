#import "@preview/grape-suite:1.0.0": exercise
#import exercise: project, task, subtask

#let task = task.with(numbering-format: (..n) => numbering("1", ..n))
#let subtask = subtask.with(markers: ("a)", "1)"))

#show: project.with(
    title: "Exercise 1: Hello World",

    university: [University of Duisburg-Essen],
    institute: [Distributed Systems],
    seminar: [Objektorientied Programming in C++],

    abstract: [In dieser Aufgabe geht es darum CLion zu installieren und ein einfaches Hello World Programm zu verändern und auszuführen. Viel Erfolg!
    
    Bei Fragen oder Problemen schreiben Sie gerne im Moodle!],
    

    author: "Peter Zdankin",

    show-solutions: false,
    show-hints: true,
    task-type: [Aufgabe],
)

#task[Hello World][
    #subtask[
        Besuchen Sie #link("https://www.jetbrains.com/de-de/clion/") und laden Sie sich die Version für ihr Betriebssystem herunter. 
        Nutzen Sie die kostenlose Version für Studierende.
    ]

    #subtask[
        Folgen Sie den Installationsanweisungen und installieren Sie CLion auf Ihrem System.
    ]

    #subtask[
        Öffnen Sie #link("https://git.uni-due.de/vs.ude/objektorientierte-programmierung-cpp"). Nutzen Sie git um das Repository zu _clonen_ und importieren Sie das Projekt in 01_HelloWorld.
    ]

    #subtask[
        Führen Sie das Programm aus. Ändern Sie die Ausgabe von `"Hello World"` zu `"Hello <ihr name>"`, damit Sie gegrüßt werden. 
    ]
][]