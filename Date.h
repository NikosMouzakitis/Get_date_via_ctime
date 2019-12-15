#ifndef _DATE_
#define _DATE_

class Date {

	private:
		int day, month, year;
	public:

		void init(int m, int d, int y);
		void init(void);
		void print(void);
};

#endif 
