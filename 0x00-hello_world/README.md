0x00-hello_world

                    -----[Task 0 - 6 (Mandatory Tasks)]-----
0. Preprocessor

Q--> Write a script that runs a C file through the preprocessor and save the results into another file.
	- The C file name will be saved in the variable $CFILE
	- The output should be saved in the file c
	
A-->	#!/bin/bash 
	gcc -E $CFILE -o c

----->	gcc -E --> process the preprocessor 
	$CFILE --> The C file name
	-o --> save the output into
	C --> Destination
	
1. Compiler

Q--> Write a script that compiles a C file but does not link.
	- The C file name will be saved in the variable $CFILE
	- The output file shouls be named as the C file, but with extension .o insteead of c..
		Example: if the C file is main.c, the output file should be main.o
		
A-->	#!/bin/bash  
	gcc -c $CFILE

----->	gcc -c --> Says not to run the linker
	$CFILE --> The C file name
	/* The output will automatically be saved as $CFILE.o */
	
2. Assembler

Q--> Write a script that generates the assembly code of a C code and save it in an output file.
	- The C file name will be saved in the variable $CFILE
	- The output file should be named the same as the C fiel, but with the extension .s instead of .c.
	
A-->	#!/bin/bash  
	gcc -S $CFILE

----->	gcc -S --> generates assembly code
	$CFILE --> The C file name
	/* The output will automatically be saved as $CFILE.s */
	
3. Name

Q--> Write a script that compiles a C file and creates an executable named cisfun.
	-The C file name will be saved in the variable $CFILE
	
A-->	#!/bin/bash  
	gcc $CFILE -o cisfun
	
----->	gcc --> compile the source code
	$CFILE --> The C file name
	-o --> save the output into 
	cisfun --> Destination (executable file)
	
4. Hello,puts

Q--> Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
	- Use the function puts
	- You are not allowed to use printf
	- Your program should end with the value 0
	
A--> #include <stdio.h>
     /**
     *main - Entry point
     *Return: Always 0 (Success)
     */
     int main(void)
     {
     	char str[] = "\"Programming is like building a multilingual puzzle"
     	
     	puts(str)
     	return (0);
     }

----->	/* ... */ --> betty documentation
	char str[] --> Setting the variable str to the value "Programming ...
	\" --> Escapes the character " from being executed
	puts(Str) --> prints the value in the variable str
	
5. Hello,printf

Q--> Write a C program that prints exactly with proper grammar, but the outcome is a piece of art, ,followed by a new line.
	- Use the function printf
	- You are not allowed to use the function puts
	- Your program should return 0
	- Your program should compile without warning when using the -wall gcc option
	
A--> #include <stdio.h>
     /**
     *main - Entry point
     *Return: Always 0 (Success)
     */
     int main(void)
     {
     	printf("with proper grammar, but the outcome is a piece of art,\n");
     	return (0);
     }
	
-----> 	/* ... */ --> betty documentation
        printf() --> displays formatted output to stdout
        
6. Size is not grandeur, and territory does not make a nation

Q--> Write a C program that prints the size of vaarious types on the computer it is compiled and run on.
	- You should produce the exact same output as in the example
	- Warnings are allowed
	- Your program should return 0
	- You might have to install the package libc6-dev-i186 on your Linux to test the -m32 gcc option
	
A--> #include <stdio.h>
     /**
     *main - Entry point
     *Return: Always 0 (Success)
     */
     int main(void)
     {
     	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
     	printf("Size of an int: %zu byte(s)\n", sizeof(int));
     	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
     	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
     	printf("Size of a float: %zu\n", sizeof(float));
     	return (0);
     }
	
-----> /* ... */ --> betty documentation
       printf() --> displays formatted output to stdout
       %zu --> z is a length modifier and u stand for unsigned type.
       sizeof() --> evaluates the size in memory of the variable or type

                    -----[Task 7 - 8 (Advanced Tasks)]------

7. Intel

Q--> Write a script that generates the assembly code (intel syntax) of a C code and save it in an output file.
	- The C file name will be saved in the variable $CFILE
	- The output file should be named the same as the C file, but with the extension .s instead of .c.
		Example: If the C file is main.c, the output file should be main.s
		
A--> 	#!/bin/bash 
	gcc -S -masm=intel $CFILE
	
-----> gcc -S --> generate the assembly code
       -masm=intel --> generate file in intel syntax
       $CFILE --> The C file name
       
8. UNIX is basically a simple operating system, but you have to be a genus to understand the simplicity

Q--> Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
	- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
	- Your program should return 1
	- Your program should compile without any warnings using -wall gcc option
	
A--> #include <stdio.h>
     /**
     *main - Entry point
     *Return: Always 0 (Success)
     */
     int main(void)
     {
     	printf("and that peice of art is useful\" - Dora Korpar, 2015-10-19\n");
     	return (1);
     }
     
-----> /* ... */ --> betty documentation
       printf() --> displays formatted output to stdout
       \" --> escape the character " from being executed
       

        
	
	
	
	
	