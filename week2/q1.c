/*
Program name: opal
Author Name: Jatin Gupta
Written:  19.06.16 
*/ 

#include <stdio.h>
#include <stdlib.h>

typedef enum { 
	false,
	true 
} bool;

typedef struct {
	char day_name[3];
} Day_name;

typedef struct {
	int hour;
	int minute;
} Time;

typedef struct {
	int day;
	int month;
	int year;
} Date;

typedef struct {
	Day_name day_name;
	Time time;
	Date date;
} Date_time;

typedef struct {
	char stop[32];
} Stop;

typedef struct {
	int transaction_number;
	Date_time date_time;
	char mode;
	Stop start;
	Stop end;
	int journey_number;
	bool cap;
	float fare;
	float discount;
} Opal;

int main(void) {
	Opal o;
	printf(" The Opal data structure requires %lu bytes.  \n", sizeof(o));
	
	/*
	4
		3
		4 4
		4 4 4 
	1
	32
	32
	4
	4
	4
	4
	
	*/
	
	return EXIT_SUCCESS;
}
