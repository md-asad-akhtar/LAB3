#import "@preview/grape-suite:1.0.0": exercise
#import exercise: project, task, subtask

#let task = task.with(numbering-format: (..n) => numbering("1", ..n))
#let subtask = subtask.with(markers: ("a)", "1)"))

#show: project.with(
    title: "Praktikum 3: Hit Spheres",

    university: [University of Duisburg-Essen],
    institute: [Distributed Systems],
    seminar: [Objektorientied Programming in C++],

    abstract: [In dieser dritten Praktikumsaufgabe geht es darum den Raytracer mit einer Ray-Sphere Intersection auszustatten. Schauen Sie sich den neuen Quelltext an und verstehen Sie wie grundsätzlich Pixel für Pixel ein Ray erstellt wird, von dem Ursprung des Betrachters in Richtung eines virtuellen Bildschirms. Damit photorealistische Bilder gerendert werden können, müssen wir zunächst dafür sorgen dass wenn ein Ray ein Objekt trifft, wir die Farbe des Objektes ermitteln können welches getroffen wurde. Das machen wir uns dieses mal etwas einfach.   Viel Erfolg!
    
    Schauen Sie sich dazu an wie operator overloading in C++ funktioniert.

    Bei Fragen oder Problemen schreiben Sie gerne im Moodle!],
    

    author: "Peter Zdankin",

    show-solutions: false,
    show-hints: true,
    task-type: [Aufgabe],
)
    

    #task[Vectoren][]
#figure(
  image("screen.png", width: 50%),
  caption: [
    Das Ergebnis wenn die Ray-Sphere Intersection richtig implementiert wurde.
  ],
)

    #subtask[
        Öffnen Sie #link("https://git.uni-due.de/vs.ude/objektorientierte-programmierung-cpp"). Nutzen Sie git um das Repository zu _clonen_ und importieren Sie das Projekt in 03_HitSphere/.
    ]

    #subtask[
        Passen Sie den Quelltext so an, damit das Bild aus Figure 1 erreicht ist. In Ray.cpp finden Sie die `std::optional<Intersection> Ray::intersects(const Sphere& sphere) const {` Methode, welche entweder eine `Intersection` zurückgibt wenn eine Sphäre getroffen wurde, ansonsten nur `{}`. Überlegen Sie geometrisch und mathematisch, wie sie herausfinden ob und wo eine Gerade eine Kugel schneidet. Hinweis: Eine Gerade kann eine Kugel in 0 (kein Treffer), 1 (Tangente) oder 2 Punkten schneiden.
        Achten Sie darauf dass der vordere von 2 Punkten zurückgegeben wird, falls der Ray durch die Sphäre schießt.
    ]

    #subtask[
        Hinweis zur Abgabe: Die Abgabe soll ein .zip Archiv sein, welches nur C++ Quelltext enthält und eine Datei aus der hervorgeht wer die Gruppenmitglieder sind mit Vorname, Nachname und Matrikelnummer.
    ]
