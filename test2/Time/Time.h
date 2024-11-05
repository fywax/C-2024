#include <stdlib.h>
#include <iostream>
using namespace std;
#include <cstring>

namespace planning
{
	#ifndef TIME // définis le début
	#define TIME

	class Time{
		private : 
			int hour;
			int min;
		public :
			Time();
			Time (int h, int m);
			Time (int m2);
			Time(const Time & cop);
			~Time();

			void sethour(int h);
			int gethour() const;

			void setmin(int m);
			int getmin() const;

			void display() const;
	};

	#endif
}