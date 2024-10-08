// c program for age calculator 
#include <stdio.h> 
#include <stdlib.h> 
 
void findAge(int cdate, int cmonth, 
			int cyear, int bdate, 
			int birth_month, int byear) 
{ 
 
	int month[] = { 31, 28, 31, 30, 31, 30, 
					31, 31, 30, 31, 30, 31 }; 
 
	if (bdate > cdate) { 
		cdate 
			= cdate + month[birth_month - 1]; 
		cmonth = cmonth - 1; 
	} 

 
	if (birth_month > cmonth) { 
		cyear = cyear - 1; 
		cmonth = cmonth + 12; 
	} 

	// calculate date, month, year 
	int calculated_date = cdate - bdate; 
	int calculated_month = cmonth - birth_month; 
	int calculated_year = cyear - byear; 

	// print the present age 
	printf("Present Age\nYears: %d Months: %d Days:"
		" %d\n", 
		calculated_year, calculated_month, 
		calculated_date); 
} 

// driver code to check the above function 
int main() 
{ 
	// current dd// mm/yyyy 
	int cdate = 7; 
	int cmonth = 12; 
	int cyear = 2017; 

	// birth dd// mm// yyyy 
	int bdate = 16; 
	int birth_month = 12; 
	int byear = 2009; 

	// function call to print age 
	findAge(cdate, cmonth, cyear, 
			bdate, birth_month, byear); 
	return 0; 
}
