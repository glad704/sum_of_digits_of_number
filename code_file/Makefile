#########################################################################
# FILE		: Makefile
# DESCRIPTION	: Program to print the sum of digits of a given number.
# AUTHOR	: GLADSON HANSDA
# DATED		: 18/07/2020
# #######################################################################


execute_file:	sum_of_digits_of_a_number.o DigitSum.o
		gcc -o execute_file sum_of_digits_of_a_number.o DigitSum.o

sum_of_digits_of_a_number.o:	sum_of_digits_of_a_number.c
				gcc -c sum_of_digits_of_a_number.c

DigitSum.o:	DigitSum.c
		gcc -c DigitSum.c

clean:	
	rm -rf execute_file
	rm -rf /home/gladson/Desktop/Practice/program_practice/recursion/sum_of_digits_of_number/obj/*.o

putobj:	
	mv *.o /home/gladson/Desktop/Practice/program_practice/recursion/sum_of_digits_of_number/obj/




##########################################################################
		 	#End of file: Makefile#
##########################################################################
