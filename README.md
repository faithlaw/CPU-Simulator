# CPU-Simulator
A C++ program that simulates a basic CPU with registers, memory and simple instructions (load, add, sub, store, print).

## 💡 Why this project?
Every electronic device runs on a CPU. Understanding how a processor executes instructions at the lowest level is core knowledge for Computer Architecture — a subject every Electrical Engineering student will encounter in their degree!

## ✨ Features
- 4 general-purpose registers (R0, R1, R2, R3)
- 16 memory slots (addresses 0–15)
- Supported instructions:
  - LOAD  — load a value directly into a register
  - ADD   — add two registers, store result
  - SUB   — subtract two registers, store result
  - STORE — save a register value to memory
  - PRINT — display a register's current value
  - VIEW  — display all registers and memory at once
- Interactive menu-driven interface
- Loops until the CPU is halted

## 🔧 Challenge Extensions
	•	Add MUL (multiply) and DIV (divide) instructions
	•	Add a JUMP instruction for simple loops
	•	Add an assembler — let the user type “ADD R0 R1 R2” as text
	•	Simulate a fetch-decode-execute cycle
	•	Add a program counter (PC) register
