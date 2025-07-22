# Conway's Game of Life in C

This project implements a simplified version of Conway's Game of Life in C, a cellular automaton that simulates the evolution of cell populations on a 10x10 grid. The goal was to consolidate knowledge in Computer Engineering, such as matrix manipulation and random number generation, and to demonstrate how programming can be applied to study complex systems. The project was developed by João Paulo Nunes Andrade, João Victor Neder, Caíque Andraus, and Gabriel Oliveira.

Features and Rules
The system generates an initial random grid and allows the simulation of cell evolution over a user-defined number of generations. The classic Game of Life rules are applied:

Live cells with fewer than 2 or more than 3 neighbors die.

Live cells with 2 or 3 neighbors survive.

Dead cells with exactly 3 neighbors are born.

Technical Details
Developed in C, the project uses static 10x10 matrices (tabuleiro and tabuleiroNovo) to manage cell states. Functions such as rand() and srand() from <stdlib.h> and <time.h> are used for randomness. Control structures (for, if/else, while) and careful index manipulation to avoid boundary errors were essential. The <locale.h> library is used to ensure proper display of Portuguese characters. The project relies solely on C standard libraries.

How to Run
To compile and execute the project, use a C compiler (e.g., GCC):

Save the code as game_of_life.c.

Compile: gcc game_of_life.c -o game_of_life

Run: ./game_of_life

The program will prompt the user for the desired number of generations.

