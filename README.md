#  C Scientific Calculator

A simple command-line scientific calculator written in **C** using functions and the `math.h` library.

This project was created as a beginner C programming project to practice **functions, conditional statements, user input, floating-point numbers, and mathematical operations**.

---

## 📌 Features

The calculator currently supports:

| Operator | Operation      | Example         |
| -------- | -------------- | --------------- |
| `+`      | Addition       | `10 + 5 = 15`   |
| `-`      | Subtraction    | `10 - 5 = 5`    |
| `*`      | Multiplication | `10 * 5 = 50`   |
| `/`      | Division       | `10 / 5 = 2`    |
| `%`      | Modulus        | `10 % 3 = 1`    |
| `^`      | Power          | `10 ^ 3 = 1000` |

### Additional features

* ✅ Uses separate functions for each mathematical operation
* ✅ Supports decimal numbers
* ✅ Division-by-zero protection
* ✅ Uses `fmod()` for floating-point modulus
* ✅ Uses `pow()` for exponentiation
* ✅ Command-line interface
* ✅ Beginner-friendly C structure

---

## 🛠️ Technologies Used

* **C**
* **GCC**
* **math.h**
* Command Line / Terminal
* Git & GitHub

---

## 📂 Project Structure

```text
C-Scientific-Calculator/
│
├── calculator.c
└── README.md
```

---

## 🧠 Concepts Practiced

This project helped me practice several important C programming concepts:

### 1. Functions

Each operation has its own function:

```c
float add(float a, float b){
    return a + b;
}
```

Other functions include:

```text
add()
subtract()
multiply()
divide()
modulus()
power()
```

Using separate functions makes the program easier to understand and maintain.

---

### 2. User Input

The program uses `scanf()` to receive input from the user.

```c
scanf(" %c", &op);
scanf("%f", &num1);
scanf("%f", &num2);
```

---

### 3. Conditional Statements

The calculator determines which operation to perform using `if`, `else if`, and `else`.

```c
if(op == '+'){
    result = add(num1, num2);
}
else if(op == '-'){
    result = subtract(num1, num2);
}
```

---

### 4. Floating-Point Numbers

The calculator uses the `float` data type so that it can work with decimal values.

```c
float num1, num2, result;
```

For example:

```text
5.5 + 2.5 = 8.00
```

---

### 5. The `math.h` Library

The program uses functions from C's mathematical library.

#### `fmod()`

Used for modulus with floating-point numbers:

```c
fmod(a, b);
```

#### `pow()`

Used for calculating powers:

```c
pow(a, b);
```

---

## 💻 Source Code

```c
#include <stdio.h>
#include <math.h>

float add(float a, float b){
    return a + b;
}

float subtract(float a, float b){
    return a - b;
}

float multiply(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}

float modulus(float a, float b){
    return fmod(a, b);
}

float power(float a, float b){
    return pow(a, b);
}

int main(){
    char op;
    float num1, num2, result;

    printf("Enter the mathematical operator using[+,-,*,/,%%,^]: ");
    scanf(" %c", &op);

    if(op == '^'){
        printf("Enter the value of Number: ");
        scanf("%f", &num1);

        printf("Enter the value of power: ");
        scanf("%f", &num2);
    }
    else{
        printf("Enter the value of Number 1: ");
        scanf("%f", &num1);

        printf("Enter the value of Number 2: ");
        scanf("%f", &num2);
    }

    if(op == '+'){
        result = add(num1, num2);
    }
    else if(op == '-'){
        result = subtract(num1, num2);
    }
    else if(op == '*'){
        result = multiply(num1, num2);
    }
    else if(op == '/'){
        if(num2 == 0){
            printf("Error: Cannot divide by zero.\n");
            return 1;
        }

        result = divide(num1, num2);
    }
    else if(op == '%'){
        result = modulus(num1, num2);
    }
    else if(op == '^'){
        result = power(num1, num2);
    }
    else{
        printf("Invalid Operator");
        result = 0;
    }

    printf("%.2f\n", result);

    return 0;
}
```

---

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/C-Scientific-Calculator.git
```

### 2. Enter the project directory

```bash
cd C-Scientific-Calculator
```

### 3. Compile the program

If you are using GCC:

```bash
gcc calculator.c -o calculator -lm
```

The `-lm` option links the C math library.

### 4. Run the program

On Linux/macOS:

```bash
./calculator
```

On Windows:

```bash
calculator.exe
```

---

## 🖥️ Example Usage

### Addition

```text
Enter the mathematical operator using[+,-,*,/,%,^]: +
Enter the value of Number 1: 25
Enter the value of Number 2: 15
40.00
```

### Multiplication

```text
Enter the mathematical operator using[+,-,*,/,%,^]: *
Enter the value of Number 1: 12
Enter the value of Number 2: 5
60.00
```

### Power

```text
Enter the mathematical operator using[+,-,*,/,%,^]: ^
Enter the value of Number: 10
Enter the value of power: 3
1000.00
```

### Division by zero

```text
Enter the mathematical operator using[+,-,*,/,%,^]: /
Enter the value of Number 1: 10
Enter the value of Number 2: 0
Error: Cannot divide by zero.
```

---

## ⚠️ Current Limitations

This is a beginner command-line calculator, so it currently has some limitations:

* It performs one calculation at a time.
* It does not have a graphical user interface.
* It does not support parentheses.
* It does not support advanced scientific functions such as `sin`, `cos`, and `sqrt`.
* It does not have a calculation history.
* Invalid numeric input is not fully handled yet.

---

## 🚀 Future Improvements

Possible upgrades for future versions:

* [ ] Add a calculation loop so the user can perform multiple calculations
* [ ] Add `sin()`, `cos()`, and `tan()`
* [ ] Add square root
* [ ] Add logarithms
* [ ] Add factorial
* [ ] Add better input validation
* [ ] Add calculation history
* [ ] Create a menu-based interface
* [ ] Separate functions into `.c` and `.h` files
* [ ] Create a GUI version
* [ ] Add unit tests

---

## 📚 What I Learned

Through this project, I learned how to:

* Create and call functions in C
* Pass values to functions
* Return values from functions
* Use `if-else` statements
* Take user input with `scanf()`
* Work with `float` variables
* Use the `math.h` library
* Handle division by zero
* Compile C programs using GCC
* Use Git and GitHub to manage a project

---

## 🎯 Project Goal

The goal of this project was to move beyond basic C syntax and start building an actual working program.

It is part of my journey toward learning **C programming, embedded systems, and hardware/Edge AI development**.

---

## 📈 Future Learning Path

After completing this project, I plan to continue learning:

```text
C Basics
   ↓
Functions & Data Structures
   ↓
Pointers
   ↓
Memory Management
   ↓
Data Structures & Algorithms
   ↓
Embedded C
   ↓
ESP32
   ↓
Digital Logic
   ↓
Microcontrollers
   ↓
FPGA
   ↓
Computer Architecture
   ↓
Edge AI / TinyML
```

---

## 👨‍💻 Author

**Shiddheesh Kannan**

This project is part of my journey of learning programming and building projects with C.

---

## ⭐ If You Found This Project Useful

Feel free to explore the code, suggest improvements, or use the project as a starting point for your own C programming journey.

**More projects coming soon! 🚀**
