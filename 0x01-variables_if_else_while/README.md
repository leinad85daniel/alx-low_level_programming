Requirements:


	- Vi, Vim, Emacs editors
	- Files must be compiled on Ubuntu 20.04
	- All files should end with a new line
	- A README.md file, at the root of the folder of the project
	- No errors and no warnings during compilation
	- Not allowed to use system
	- The code must be betty style
	

0. Positive anything is better than negative nothing

Q--> This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
	- You can find the source code here -> https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c
	- The variable n will store a different value every time you will run this program
	- You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
	- The output of the program should be:
		- The number, followed by
			- if the number is greater than 0: is positive
			- if the number is 0: is zero
			- if the number is less than 0: is negative
		- Followed by a new line
		
A--> 	#include <stdlib.h>
	#include <time.h>
	#include <stdio.h>

	/**
	*main - Entry point
	*Description: Positive or nagative
	*rand - pseudo-random number
	*Return: Always 0 (Success)
	*/
	
	int main(void)
	{
		int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else 
		{
			printf("%d is negative\n", n);
		}
		
		return (0);
	}
	
-----> 	-We use if else statement to determine if the generated number is positive or negative.
	- If the number is greater than zero (n > 0), it is a positive number.
	- If the number is equal to zero (n = 0), it is zero.
	- If the number is less than zero (n < 0), it is a negative number.
	
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------
	
1. The last digit

Q--> This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
	- You can find the source code here --> https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c
	- The variable n will store a different value every time you run this program
	- You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
	- The output of the program should be:
		- The string Last digit of, followed by
		- n, followed by
		- the string is, followed by
			- if the last digit of n is greater than 5: the string and is greater than 5
			- if the last digit of n is 0: the string and is 0
			- if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
		- followed by a new line
		
A--> 	#include <stdlib.h>
	#include <time.h>
	#include <stdio.h>

	/**
	*main - Entry point
	*description: The last digit 
	*rand - pseudo-random number 
	*Return: Always 0 (Success)
	*/
	
	int main(void)
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if ((n % 10) > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
		}
		else if ((n % 10) == 0)
		{
			printf("Last digit of %d is %d and is 0\n",n ,n % 10)
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
		}
		
		return (0);
	}

-----> 	- We use if else statement to determine if the last digit of a number is greater than 5, less than 6 or is eqauls to 6.
	- n % 10 can help us to determine the last digit of a number. because when number is divided by ten, the reminder is the last digit of the number.
	- Example: 123 / 10 = 12 reminder 3
	           346 / 10 = 34 reminder 6
	           987 / 10 = 98 reminder 7
	           
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------
	           
2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

Q--> Write a program that prints the alphabet in lowercase, followed by a new line.
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- All your code should be in the main function
	- You can only use putchar twice in your code
	
A--> 	#include <stdio.h>

	int main()
	{
		char alphabet;
		alphabet = 'a';

	while (alphabet <= 'z')
	{
	    	putchar(alphabet);
	   	alphabet++;
	}
		putchar('\n');
		return (0);
	}

-----> 	- We use while loop statement to repeate the alphabets.
	- First we set the character alphabet to 'a'
	- Then we will use the expression (alphabet <= 'z') to tell the command stop compiling when the character z reached.
	- We use incrementation (alphabet++) to increase the alphabet by one until the compiler stops (reach 'z')
	
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

3. alphABET

Q--> Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- All your code should be in the main function
	- You can only use putchar three times in your code
	
A--> 	#include <stdio.h>
	/**
	 *main - print lowercase a-z
	 *Return: Always 0 (Success)
	 */
	int main()
	{
		char alphabet, ALPHABET;

		alphabet = 'a';
		ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while(alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
	}

-----> 	We use while loop statement to repeate the alphabets.
	- First we set the character alphabet to 'a'
	- Then we will use the expression (alphabet <= 'z') to tell the command stop compiling when the character z reached.
	- We use incrementation (alphabet++) to increase the alphabet by one until the compiler stops (reach 'z')
	- We repeat these steps by chenging small letters with capital letters.	

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

4. When I was having that alphabet soup, I never thought that it would pay off

Q--> Write a program that prints the alphabet in lowercase, followed by a new line.
	- Print all the letters except q and e
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- All your code should be in the main function
	- You can only use putchar twice in your code
	
A--> 	#include <stdio.h>

	int main()
	{
		char alphabet;

		alphabet = 'a';

	while (alphabet <= 'z')
	{
	  		if ((alphabet != 'q') && (alphabet != 'e'))
	  	{
	  		putchar(alphabet);
		}

		alphabet++;
	}
		return(0);
	}

-----> We use while loop statement to repeate the alphabets.
	- First we set the character alphabet to 'a'
	- Then we will use the expression (alphabet <= 'z') to tell the command stop compiling when the character z reached.
	- We use if statement to tell the compiler not to include q and e by using logical and operation.
	- We use incrementation (alphabet++) to increase the alphabet by one until the compiler stops (reach 'z')

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

5. Numbers

Q--> Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
	- All your code should be in the main function
	
A-->	 #include <stdio.h>

	/**
	 *main - print 0123456789
	 *Return: Always 0 (Success)
	 */

	int main(void)
	{
		int n = 0;

		while (n < 10)
		{
			printf("%d", n);
			n++;
		}
		putchar('\n');

		return (0);
	}

-----> 	- set n = 0
	- use while loop statement 
	- use n < 10 expression to tell the machine to stop compiling when it reach the number before 10.

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

6. Numberz

Q--> Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
	- You are not allowed to use any variable of type char
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- You can only use putchar twice in your code
	- All your code should be in the main function

A--> 	#include <stdio.h>

	/**
	 *main - print 0123456789 using putchar
	 *Return: Always 0 (Success)
	 */

	int main(void)
	{
		int n = '0';

		while (n <= '9')
		{
			putchar(n);
			n++;
		}
		putchar('\n');

		return (0);
	}

-----> 	- We have to assign numbers as a character by using single quotes '' (because we cannot use printf and we have to use putchar) .
 	- Then the same step as task 5
 	
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

7. Smile in the mirror

Q--> Write a program that prints the lowercase alphabet in reverse, followed by a new line.
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- All your code should be in the main function
	- You can only use putchar twice in your code

A--> 	#include <stdio.h>

	/**
	 *main - print alphabet reversed using putchar
	 *Return: Always 0 (Success)
	 */

	int main(void)
	{
		char alpha = 'z';

		while (alpha >= 'a')
		{
			putchar(alpha);
			alpha--;
		}
		putchar('\n');

		return (0);
	}

-----> No need of explanation(I described everything on the previous tasks. Just look at the code)

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

8. Hexadecimal

Q--> Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- All your code should be in the main function
	- You can only use putchar three times in your code

A--> 	#include <stdio.h>

	/**
	 *main - prints hexadecimal base 0123456789abcdef, using putchar
	 *Return: Always 0 (Success)
	 */

	int main(void)
	{
		int n = '0';
		int atof = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (atof <= 'f')
	{
		putchar(atof);
		atof++;
	}

	putchar('\n');

	return (0);
	}

-----> No need of explanation(Everything is described on the previous tasks. Just look at the code)

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

9. Patience, persistence and perspiration make an unbeatable combination for success

Q--> Write a program that prints all possible combinations of single-digit numbers.
	- Numbers must be separated by ,, followed by a space
	- Numbers should be printed in ascending order
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- All your code should be in the main function
	- You can only use putchar four times maximum in your code
	- You are not allowed to use any variable of type char
	
A--> 	#include <stdio.h>

	/**
	 *main - print 0-9 separated with commas, using putchar
	 *Return: Always 0 (Success)
	 */

	int main(void)
	{
		int n = '0';

		while (n <= '9')
		{
			putchar(n);
			if (n != '9')
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar('\n');

		return (0);
	}


-----> 	No need of explanation(Everything is described on the previous tasks. Just look at the code)

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

10. Inventing is a combination of brains and materials. The more brains you use, the less material you need

Q--> Write a program that prints all possible different combinations of two digits.
	- Numbers must be separated by ,, followed by a space
	- The two digits must be different
	- 01 and 10 are considered the same combination of the two digits 0 and 1
	- Print only the smallest combination of two digits
	- Numbers should be printed in ascending order, with two digits
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- You can only use putchar five times maximum in your code
	- You are not allowed to use any variable of type char
	- All your code should be in the main function

A--> 	#include <stdio.h>

	/**
	 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
	 *
	 *Return: Always 0 (Success)
	 */

	int main(void)
	{
		int ones;
		int tens;

		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = (tens + 1); ones <= '9'; ones++)
			{
				putchar(tens);
				putchar(ones);

				if (tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');

		return (0);
	}
	
-----> 	No need of explanation(Everything is described on the previous tasks. Just look at the code)

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

11. The success combination in business is: Do what you do better... and: do more of what you do...

Q--> Write a program that prints all possible different combinations of three digits.
	- Numbers must be separated by ,, followed by a space
	- The three digits must be different
	- 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
	- Print only the smallest combination of three digits
	- Numbers should be printed in ascending order, with three digits
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- You can only use putchar six times maximum in your code
	- You are not allowed to use any variable of type char
	- All your code should be in the main function
	
A--> 	#include <stdio.h>

	/**
	 *main - print all combinations of three different digits
	 *Return: Always 0 (Success)
	 */

	int main(void)
	{
		int one;
		int ten;
		int hundred;

		for (hundred = '0'; hundred <= '9'; hundred++)
		{
			for (ten = (hundred + 1); ten <= '9'; ten++)
			{
				for (one = (ten + 1); one <= '9'; one++)
				{
					putchar(hundred);
					putchar(ten);
					putchar(one);
					if (hundred != '7' || ten != '8' || one != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');

		return (0);
	}

----->	No need of explanation(Everything is described on the previous tasks. Just look at the code)

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------

12. Software is eating the World

Q--> Write a program that prints all possible combinations of two two-digit numbers.
	- The numbers should range from 0 to 99
	- The two numbers should be separated by a space
	- All numbers should be printed with two digits. 1 should be printed as 01
	- The combination of numbers must be separated by comma, followed by a space
	- The combinations of numbers should be printed in ascending order
	- 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
	- You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	- You can only use putchar eight times maximum in your code
	- You are not allowed to use any variable of type char
	- All your code should be in the main function
	
A--> 	#include <stdio.h>

	/**
	 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
	 *Return: Always 0 (Success)
	 */
	int main(void)
	{
		int num1, num2;

		for (num1 = 0; num1 <= 98; num1++)
		{
			for (num2 = num1 + 1; num2 <= 99; num2++)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 == 98 && num2 == 99)
					continue;

				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');

		return (0);
	}
	
----->	No need of explanation(Everything is described on the previous tasks. Just look at the code)

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
-------------------------------------------------------------------------------------------------------













	