# 0x11. C - printf

## Description

A simple printf function built by Shukrah Yusuf and Abdul-Hafiz Aderemi for Alx software Engineering School. The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output. Returns the count of printed characters when the function is successful The available convertion specifiers are:

```
%c: Prints a single character.
%s: Prints a string of characters.
%d: Prints integers.
%i: Prints integers.
%b: Prints the binary representation of an unsigned decimal.
%u: Prints unsigned integers
%x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
%X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
%r: Prints a reversed string
```

## Usage

```
All the files are to be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
Include the "main.h" header file on the functions using the _printf()
```

## Examples

_printf("Hi, Shukrah\n") prints "Hi, Shukrah", followed by a new line
_printf("This is a number: %d", 11) prints "This is a number: 11"
_printf("%s", "We're Software Engineers!") prints "We're Software Engineers!"

# Requirements

## General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
*All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project


