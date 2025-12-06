# 🧬 Conway's Game of Life in C

![Language](https://img.shields.io/badge/Language-C-blue)
![Platform](https://img.shields.io/badge/Platform-Console-lightgrey)
![License](https://img.shields.io/badge/License-MIT-green)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

---

<img width="1918" height="1022" alt="Game of Life Preview" src="https://github.com/user-attachments/assets/06cb2303-ec8b-4e67-90a2-f28100c4eff0" />

---

## 📄 Overview

This project implements a simplified version of **Conway's Game of Life** in the C programming language.  
It simulates the evolution of cell populations on a **10x10 grid**, serving as a practical exercise in **Computer Engineering** concepts such as matrix manipulation, randomness, and algorithmic logic.

Developed collaboratively by **João Paulo Nunes Andrade**, **João Victor Neder**, **Caíque Andraus**, and **Gabriel Oliveira**, the project demonstrates how programming can be used to explore and model complex systems.

---

## 🧠 Features and Rules

The system generates an initial random grid and simulates cell evolution over a user-defined number of generations, applying the classic Game of Life rules:

- 🟥 **Underpopulation:** Live cells with fewer than 2 neighbors die  
- 🟩 **Survival:** Live cells with 2 or 3 neighbors survive  
- 🟦 **Reproduction:** Dead cells with exactly 3 neighbors become alive  

---

## ⚙️ Technical Details

- **Language:** C (using only standard libraries)  
- **Grid Size:** Static 10x10 matrices (`tabuleiro` and `tabuleiroNovo`)  
- **Randomness:** `rand()` and `srand()` from `<stdlib.h>` and `<time.h>`  
- **Control Structures:** `for`, `if/else`, `while` loops  
- **Boundary Handling:** Careful index checks to avoid out-of-bounds errors  
- **Localization:** `<locale.h>` used for proper display of Portuguese characters  

---

## ▶️ How to Run

1. Save the code as `game_of_life.c`  
2. Compile using GCC:
   ```bash
   gcc game_of_life.c -o game_of_life

## 📬 Contact Me
<div align="center"> <a href="https://www.linkedin.com/in/nunes-andrade" target="_blank"><img src="https://img.shields.io/badge/-LinkedIn-%230077B5?style=for-the-badge&logo=linkedin&logoColor=white"></a> <a href="https://instagram.com/jp_nunes.andrade" target="_blank"><img src="https://img.shields.io/badge/-Instagram-%23E4405F?style=for-the-badge&logo=instagram&logoColor=white"></a> <a href="mailto:jpnunesandrade26@gmail.com"><img src="https://img.shields.io/badge/-Gmail-%23333?style=for-the-badge&logo=gmail&logoColor=white"></a> <a href="https://www.alura.com.br/indica-dev/jpnunesandrade26" target="_blank"><img src="https://img.shields.io/badge/Alura-0077B5?style=for-the-badge&logo=alura&logoColor=white"></a> </div>
