<h1 align=center> C++ Algorithm Implementations </h1>
<h2 align=center> A CSC211: Computer Programming by Zachary Breene </h2>
<h4 align=center> Created at The University of Rhode Island, March 2021 </h4>
</n>
<h4 align=center> *NO AI WAS USED IN THE CREATION OF THIS PROJECT* </h4>

## Introduction
A collection of small C++ command-line programs designed to demonstrate fundamental programming concepts, data manipulation, and algorithmic problem-solving. These independent programs handle a variety of tasks including string parsing, mathematical calculations, sequence verification, and input stream manipulation.

---

## Implementation + Functions
This repository contains 10 separate `.cpp` files, each addressing a specific computational problem. </n>

&emsp; ***Number and Sequence Processing***

*   `count_first.cpp`: Reads a sequence of inputs and counts how many times the initially provided integer appears in the rest of the sequence.
*   `sorted.cpp`: Analyzes an incoming sequence of up to 100 integers to determine if they are sorted in descending order.
*   `diameter.cpp`: Reads a set of 2D coordinates and calculates the maximum Euclidean distance (diameter) between any two points, returning the rounded-down result.

&emsp; ***String and Character Manipulation***

*   `palindrome.cpp`: Checks if an inputted string is a palindrome, utilizing a function that standardizes character cases to ensure case-insensitivity.
*   `reverse.cpp`: Reverses a provided string in-place using a two-pointer swapping approach passed by reference.
*   `filter_dups.cpp`: Iterates through a string and prints it while filtering out any consecutively duplicated characters.
*   `str_hash.cpp`: Calculates a basic hash by summing the integer ASCII values of all characters present in a string.
*   `unique.cpp`: Determines and outputs the total count of unique characters utilized within a given string.

&emsp; ***Parsing and Standardization***

*   `same_gmail.cpp`: Normalizes two space-separated email strings to determine if they route to the same Gmail address. It does this by stripping periods, standardizing case, and ignoring alias tags (everything between `+` and `@`).
*   `hostname.cpp`: Parses a URL string to extract its hostname. It normalizes the string to lowercase, bypasses the protocol (e.g., `//`), and captures the text up to the next `/` or `:`.

---

## How To Run
To execute any of these programs, you must compile the individual `.cpp` file using a standard C++ compiler, such as `g++`. Open your terminal, navigate to the directory containing the files, and compile a program by typing `g++ [filename].cpp -o [filename]`. Once compiled, you can run the executable from your command line by typing `./[filename]`. Because these programs rely heavily on standard input (`std::cin`), you will need to type your test inputs directly into the terminal window and press `Enter` to see the parsed outputs. 

---

## Contribution
As I was the sole member of this project, I contributed to the whole of the project. This contribution is as follows:
*   Implementation of all C++ program logic
*   String parsing, mathematical calculation, and sequence algorithms
*   In-place memory manipulation and reference passing
