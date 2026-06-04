
# 🚀 C Programming Lab Exercises

Welcome to this repository containing fundamental C programming exercises. These scripts cover introductory concepts including conditional logic, switch-case structures, nested loops, array manipulation, and basic pointer arithmetic.

This project is licensed under the open-source **MIT License**.

---

## 📂 Table of Contents
1. [Program 1 & 2: Menu-Driven Calculator (`switch-case`)](#-program-1--menu-driven-calculator)
2. [Program 3: Floyd's Triangle Variant (`nested loops`)](#-program-3-floyds-triangle-variant)
3. [Program 4: Array Element Cubing (`pointers & references`)](#-program-4-array-element-cubing)
4. [Program 5: Interactive Array Summation (`arrays & loops`)](#-program-5-interactive-array-summation)
5. [📜 MIT License](#-mit-license)

---

## 🧮 Program 1 : Menu-Driven Calculator
An interactive terminal calculator that prompts user selection to perform basic arithmetic operations using `switch-case` statements.

### 💻 Code
```c
#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");

    printf("choose the no.:");
    scanf("%d", &choice);

    printf("\nenter first no.:");
    scanf("%d", &a);

    printf("enter second no.:");
    scanf("%d", &b);

    switch (choice){
        case 1:
            printf("addition is :%d", a+b);
            break;
        case 2:
            printf("subtraction is :%d", a-b);
            break;
        case 3:
            printf("multiplication is :%d", a*b);
            break;
        case 4:
            printf("division is :%d", a/b);
            break;
        default:
            printf("invalid choice!!");
            break;
    }
}
🖥️ Sample Terminal Output
Plaintext
press 1 for addition
press 2 for subtraction
press 3 for multiplication
press 4 for division
choose the no.:1

enter first no.:2
enter second no.:3
addition is :5
📐 Program 3: Floyd's Triangle Variant
A pattern generation program utilizing nested loops to output a right-angled triangle format using sequential integers beginning at 11.

💻 Code
C
#include <stdio.h>

int main()
{
    int i, j, a=11;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
}
🖥️ Sample Terminal Output
Plaintext
11 
12 13 
14 15 16 
17 18 19 20 
21 22 23 24 25 
🔮 Program 4: Array Element Cubing
This script implements basic pointer arithmetic to increment through a standard 5-element array via memory offset referencing (*(p+i)) to evaluate numeric cubes.

⚠️ Development Note: Assigning a pointer to an array instance using p = &a; matches the base sequence type but creates a technical mismatch with an ordinary integer pointer type (int *). To completely clean compiler warnings, update this assignment to p = a; or p = &a[0];.

💻 Code
C
#include <stdio.h>

int main()
{
    int a[5]={1, 2, 3, 4, 5};
    int *p;

    p = a; // Cleaned from p=&a to handle integer pointer matching natively

    for(int i=0; i<5; i++){
        int t=*(p+i);
        printf("cube of 1st no.:%d\n", t*t*t);
    }
}
🖥️ Sample Terminal Output
Plaintext
cube of 1st no.:1
cube of 1st no.:8
cube of 1st no.:27
cube of 1st no.:64
cube of 1st no.:125
📊 Program 5: Interactive Array Summation
An implementation demonstrating user input runtime scanning to dynamically populate a collection index buffer and yield a combined mathematical total.

💻 Code
C
#include <stdio.h>

int main()
{
    int a[5];

    printf("enter no.:\n");
    for(int i=0; i<5; i++){
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    int t=a[0]+a[1]+a[2]+a[3]+a[4];
    printf("sum of array is:%d", t);
}
🖥️ Sample Terminal Output
Plaintext
enter no.:
a[0]=1
a[1]=2
a[2]=3
a[3]=4
a[4]=5
sum of array is:15
📜 MIT License
Plaintext
MIT License

Copyright (c) 2026

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
