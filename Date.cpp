#include "Date.h"
#include <iostream>
#include <ctime>

using namespace std;

void Date::init(int m, int d, int y) {

	month  = m;
	day = d; 
	year = y;
}

void Date::init(void){

	struct tm *ptr;
	time_t sec;

	time(&sec); //get present time
	ptr = localtime(&sec); // initialize a struct of type tm and a pointer to it.

	month  = ptr->tm_mon+1;
	day = ptr->tm_mday+1;
	year = ptr->tm_year+1900;


}

void Date::print(void) {
	cout << "Date: " << day << "/" << month << "/" << year <<endl;
}



