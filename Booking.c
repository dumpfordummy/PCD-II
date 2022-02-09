#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#pragma warning(disable:4996)

void test();
//Hau Shien is here once again 9.37pm  9.41pm
//CY is here once again 9:48pm
//push and pull, here we go 10.08pm 123
typedef struct {
	char bookID[6];
	char status[11];
	struct tm* bookDT; //time when user book (use time())
	struct tm scheduleStartDT; //ask user input date time
	struct Member member; //struct instance for member
	struct Facility facility; //struct instance for facility
	int duration;
}Booking;


int main() {
	time_t now;
	time(&now);
	Booking book = {
		.bookID = "X0123", 
		.status = "approved", 
		.bookDT = localtime(&now), 
		.duration = 5
	};
	return 0;
}

void test() {
	int hours, minutes, seconds, day, month, year;
	time_t now;
	time(&now);
	struct tm* local = localtime(&now);
	hours = local->tm_hour; 		// get hours since midnight (0-23)
	minutes = local->tm_min;		// get minutes passed after the hour (0-59)
	seconds = local->tm_sec;		// get seconds passed after a minute (0-59)

	day = local->tm_mday;			// get day of month (1 to 31)
	month = local->tm_mon + 1;  	// get month of year (0 to 11)
	year = local->tm_year + 1900;   // get year since 1900

	// print local time
	if (hours < 12) {	// before midday
		printf("Time is %02d:%02d:%02d am\n", hours, minutes, seconds);
	}
	else {	// after midday
		printf("Time is %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
	}

	// print the current date
	printf("Date is : %02d/%02d/%d\n", day, month, year);
}
