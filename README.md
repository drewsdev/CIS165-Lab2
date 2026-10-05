# Lab 2: C++ Exercises - Chapter 2

### CIS-165-W198.2026FA

In this lab, you will write two short C++ programs, test them, and put your source code in a GitHub repository. You may use AI to help you learn and develop your code. You are responsible for checking the result and explaining how it works.

This is a 100-point programming assignment. Submitting a repository or AI-generated code alone does not earn full credit. Your score comes from the code, tests, explanations, and reflection described below.

Program 1 — Sum of Two Numbers: Store the integers 50 and 100 in variables. Calculate their sum and store it in a variable named total. Display total with a clear label. Save this program as sum.cpp.

Program 2 — Miles Per Gallon: A car holds 16 gallons of gasoline and can travel 312 miles before refueling. Store these values in variables, calculate the miles per gallon, and store the result in a variable before displaying it. Choose data types that preserve a fractional result. Label the output and include the units. Save this program as mpg.cpp.

## Pre-Planning

sum.cpp

Start

Declare variable FIRST\_NUMBER

Store 50 in FIRST\_NUMBER

Declar variable SECOND\_NUMBER

Store 100 in SECOND\_NUMBER

Total = FIRST\_NUMBER + SECOND\_NUMBER

Output Total

End

mpg.cpp

Start

Declare variable GALLONS

Store 16 in GALLONS

Declare variable MILES

Store 312 in MILES

mpg = MILES / GALLONS

Output mpg

End

## Run the Program

Compile and run each program separately

Use g++

```
g++ -std=c++17 -Wall -Wextra sum.cpp -o sum
./sum
g++ -std=c++17 -Wall -Wextra mpg.cpp -o mpg
./mpg
```

## Testing

| Program | Values Used | Expected Result Before Running | Actual Output | Match or Fix |
| --- | --- | --- | --- | --- |
| sum.cpp | 50 | 100 | 150 | 150 | Match |
| sum.cpp | 75 | 125 | 200 | 200 | Match |
| mpg.cpp | 16 | 312 | 19.5 | 19.5 | Match |
| mpg.cpp | 20 | 375 | 18.75 | 18.75 | Match |

### Final Testing

After completing the testing with other values, I inputted the original values to retest the results.

sum.cpp outputs "Total: 150"

mpg.cpp outputs "Miles per gallon: 19.5 MPG"

| Program | Values Used | Expected Result Before Running | Actual Output | Match or Fix |
| --- | --- | --- | --- | --- |
| sum.cpp | 50 | 100 | 150 | 150 | Match |
| mpg.cpp | 16 | 312 | 19.5 | 19.5 | Match |

## Explanation

*   **For sum.cpp: explain how the starting values move through your calculation into total and then to the output. Why store the calculation in total before printing?**
    *   The program begins by storing the correct values in 'FIRST\_NUMBER' and 'SECOND\_NUMBER'. The calculation happens through "int total = FIRST\_NUMBER + SECOND\_NUMBER;" by adding the two stored values. The "cout" statement finally prints the result back to the user. Storing the calculation before printing makes it easier to read. It also allows me to easily use that variable in other places if needed, like another calculation if I decided to add one.
*   **For mpg.cpp: explain the formula, the data types you chose, and what can happen if C++ performs division using two integer operands. Trace your changed-value test from the values through the result.**
    *   The program begins by storing the correct values in 'GALLONS' and 'MILES'. The calculation happens through "double miles\_per\_gallon = MILES / GALLONS;" and divides the two stored values. The calculation is also declared as a double to preserve the remainder of the division. The "cout" statement finally prints the result back to the user with the correct units.  
        If I were to make 'miles\_per\_gallon' an int instead of keeping it as a double, using the original values of 312 and 16, the result would be 19 without any of the decimal points. C++ willl truncate the solution. This is important to keep in mind when doing calculations in C++.  
        For my changed-value test, I changed 'GALLONS' to 20 and the 'MILES' to 375. Using a calculator, I am able to expect the result to be 18.75 MPG before running the numbers through mpg.cpp. After changing the variables in mpg.cpp, the result in the variable 'miles\_per\_gallon' had the expected result of '18.75 MPG.'