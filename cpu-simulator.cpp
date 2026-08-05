#include <iostream>
#include <string>
using namespace std;

int registers[4] = {0, 0, 0, 0}; // R0, R1, R2, R3
int memory[16]   = {0};           // 16 memory slots

void printState() {
    cout << "\n--- CPU State ---" << endl;
    for (int i = 0; i < 4; i++)
        cout << "R" << i << " = " << registers[i] << endl;
    cout << "Memory: ";
    for (int i = 0; i < 16; i++)
        cout << "[" << i << "]=" << memory[i] << " ";
    cout << endl;
}

int main() {
    int choice, reg, reg2, addr, val;

    cout << "==============================" << endl;
    cout << "      Simple CPU Simulator    " << endl;
    cout << "==============================" << endl;
    cout << "Registers: R0, R1, R2, R3" << endl;
    cout << "Memory: 16 slots [0-15]" << endl;
    cout << "------------------------------" << endl;
    cout << "1. LOAD  (load value into register)" << endl;
    cout << "2. ADD   (R_dest = R_a + R_b)" << endl;
    cout << "3. SUB   (R_dest = R_a - R_b)" << endl;
    cout << "4. STORE (store register to memory)" << endl;
    cout << "5. PRINT (print register value)" << endl;
    cout << "6. VIEW  (view all registers & memory)" << endl;
    cout << "------------------------------" << endl;

    while (true) {
        cout << "\nEnter instruction (1-6) or 0 to exit: ";
        cin >> choice;

        if (choice == 0) { cout << "CPU Halted. Goodbye!" << endl; break; }

        if (choice == 1) {
            cout << "Load into register (0-3): "; cin >> reg;
            cout << "Enter value: "; cin >> val;
            registers[reg] = val;
            cout << "R" << reg << " = " << val << endl;
        } else if (choice == 2) {
            cout << "Destination register (0-3): "; cin >> reg;
            cout << "Source register A (0-3): "; cin >> reg2;
            int ra = registers[reg2];
            cout << "Source register B (0-3): "; cin >> reg2;
            registers[reg] = ra + registers[reg2];
            cout << "R" << reg << " = " << registers[reg] << endl;
        } else if (choice == 3) {
            cout << "Destination register (0-3): "; cin >> reg;
            cout << "Source register A (0-3): "; cin >> reg2;
            int ra = registers[reg2];
            cout << "Source register B (0-3): "; cin >> reg2;
            registers[reg] = ra - registers[reg2];
            cout << "R" << reg << " = " << registers[reg] << endl;
        } else if (choice == 4) {
            cout << "Store register (0-3): "; cin >> reg;
            cout << "Memory address (0-15): "; cin >> addr;
            memory[addr] = registers[reg];
            cout << "Memory[" << addr << "] = " << memory[addr] << endl;
        } else if (choice == 5) {
            cout << "Print register (0-3): "; cin >> reg;
            cout << "R" << reg << " = " << registers[reg] << endl;
        } else if (choice == 6) {
            printState();
        } else {
            cout << "Invalid instruction." << endl;
        }
    }
    return 0;
}
