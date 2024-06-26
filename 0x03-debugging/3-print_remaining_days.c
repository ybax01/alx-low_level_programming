#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of year
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	/* Correct leap year calculation */
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		/* Leap year */
		if (month > 2 || (month == 2 && day == 60))
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		/* Not a leap year */
		if (month == 2 && day == 60)
		{
			/* Invalid date: February 29 in a non-leap year */
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
