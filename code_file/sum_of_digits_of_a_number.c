/*************************************************************************
 * FILE		: sum_of_digits_of_a_number().c
 * DESCRIPTION	: Program to print sum of digit of given number.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 18/07/2020
 * **********************************************************************/

#include"/home/gladson/Desktop/Practice/program_practice/recursion/sum_of_digits_of_number/include/sum_of_digits_of_a_number.h"

int main()
{
	int n1, sum;
	printf("\n\nRecursion : Find the sum of digits of a given number :\n");
	printf("----------------------------------------------------------\n");
	printf("Input any number to find sum of digits: ");
	scanf("%d",&n1);
	sum = DigitSum(n1);
	printf("The sum of digits of %d = %d\n\n",n1,sum);
	return 0;
}





/*************************************************************************
		*End of file: sum_of_digit_of_number().c*
*************************************************************************/
