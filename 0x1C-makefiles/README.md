# 0x1C. C - Makefiles

This project teaches you how to use **make** and **Makefiles** to automate the compilation of C programs. Makefiles are files that contain rules and commands for building executable files from source code. They can save you time and effort by only recompiling the files that have changed since the last build. 🛠️

## Learning Objectives

* What are `make`, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## Requirements

* OS: Ubuntu 14.04 LTS
* Version of `gcc`: 4.8.4
* Version of `make`: GNU Make 3.81

## Installation

To use this project, you need to have **gcc** and **make** installed on your system. You can check if you have them by typing:

```bash
gcc --version
make --version
```
If you don’t have them, you can install them by following the instructions on their respective websites:
[gcc](https://github.com/Brainstorma/alx-low_level_programming/blob/master/0x1C-makefiles/README.md)
[make](https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/)

##Usage

To compile a C program using a **Makefile**, you need to place the **Makefile** and the source files in the same directory. Then, you can run the **make** command with the name of the executable file as an argument. For example, if you want to compile a program called hello.c and generate an executable file called hello, you can use the following Makefile:
```bash
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
RM = rm -f
NAME = hello
SRC = hello.c

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(NAME)
```

Then, you can run:

```bash
make hello
```

This will compile the **hello.c** file and create the **hello** executable file. You can run the executable file by typing:

```bash
./hello
```

This will print “Hello, world!” on the terminal.

To remove the executable file, you can run:

```bash
make clean
```

This will delete the hello file.

You can also use the make command without any arguments to compile the default executable file, which is usually the first one defined in the Makefile. For example, if you have a Makefile like this:

```bash
CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
RM = rm -f
NAME1 = hello
NAME2 = bye
SRC1 = hello.c
SRC2 = bye.c

$(NAME1): $(SRC1)
	$(CC) $(CFLAGS) -o $(NAME1) $(SRC1)

$(NAME2): $(SRC2)
	$(CC) $(CFLAGS) -o $(NAME2) $(SRC2)

clean:
	$(RM) $(NAME1) $(NAME2)
```

You can run:

```bash
make
```

This will compile the **hello.c** file and create the **hello** executable file, since it is the first one defined in the **Makefile**. You can also run:

```bash
make bye
```
This will compile the **bye.c** file and create the **bye** executable file.

##Tasks

This project consists of several tasks that require you to write different Makefiles with different variables, rules, and dependencies. You will learn how to use the **make** command, the **.PHONY** rule, the **all**, **clean**, **oclean**, **fclean**, and **re** rules, the **$(RM)** variable, and the **-Wall**, **-Werror**, **-Wextra**, and **-pedantic** flags.

The tasks are as follows:

* 0.[make -f 0-Makefile](https://github.com/Samia8Asim/alx-low_level_programming/blob/master/0x1C-makefiles/0-Makefile): Create your first Makefile.
* 1.[make -f 1-Makefile](https://github.com/Samia8Asim/alx-low_level_programming/blob/master/0x1C-makefiles/1-Makefile): Add the `CC` and `SRC` variables to your Makefile.
* 2.[make -f 2-Makefile](https://github.com/Samia8Asim/alx-low_level_programming/blob/master/0x1C-makefiles/2-Makefile): Add the `OBJ` and `NAME` variables to your Makefile.
* 3.[make -f 3-Makefile](https://github.com/Samia8Asim/alx-low_level_programming/blob/master/0x1C-makefiles/3-Makefile): Add the `clean`, `oclean`, `fclean`, and `re` rules to your Makefile.
* 4.[A complete Makefile](https://github.com/Samia8Asim/alx-low_level_programming/blob/master/0x1C-makefiles/4-Makefile): Add the `CFLAGS` and `RM` variables to your Makefile.
* 5.[Island Perimeter](https://github.com/Samia8Asim/alx-low_level_programming/blob/master/0x1C-makefiles/5-island_perimeter.py): Write a Python function that returns the perimeter of an island described by a grid.


##Contributing

This project is part of the alx program, which is a software engineering training program that aims to empower young Africans with the skills and mindset to succeed in the digital age. If you are interested in joining the program or learning more about it, you can visit their website or contact them at info@alx.app.
