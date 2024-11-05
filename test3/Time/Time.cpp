#include <stdlib.h>
#include <iostream>
using namespace std;
#include <cstring>
#include "Time.h"

namespace planning
{
	Time::Time()
	{
		sethour(0);
		setmin(0);
	}

	Time::Time(int h, int m)
	{
		sethour(h);
		setmin(m);
	}

	Time::Time(int m)
	{
		int hour, minute;
		hour = m / 60;
		minute = m % 60;

		sethour(hour);
		setmin(minute);
	}

	Time::Time(const Time & cop)
	{
		sethour(cop.gethour());
		setmin(cop.getmin());
	}

	void Time::sethour(int h)
	{
		if (h<0) return;
		this->hour = h;
	}

	void Time::setmin(int m)
	{
		if (m<0) return;
		this->min = m;
	}

	int Time::gethour()const
	{
		return hour;
	}

	int Time::getmin()const
	{
		return min;
	}

	void Time::display() const
	{
		if(hour<10)
		{
			cout <<"0"<< hour;		
		}
		else
		{
			cout << hour;
		}

		cout << "h";

		if(min<10)
			cout<< "0"<< min;
		else
			cout << min;
	}

	Time::~Time(){}

	Time Time::operator+(Time t, int n)
	{
		Time temps(t);

		int hours, minutes;
		hours = n / 60;
		minutes = n % 60;
		
		if((temps.min + minutes)>=60)
		{
			hours += (temps.min + minutes)/60;
			temps.min = (temps.min + minutes) % 60;
		}
		else
			temps.min += minutes;

		if((temps.hour + hours) >= 24)
		{
			temps.hour = (temps.hour + hours) % 24;
		}
		else
			temps.hour += hours;

		return temps;
	}

	Time Time::operator+(int min, Time t)
	{
		return t + min;
	}

	Time Time::operator+(Time t, Time t2)
	{
		Time temps(t);
		Time temps2(t2);

		if((temps.min + temps2.min)>=60)
		{
			temps.min = (temps.min + temps2.min) % 60;
			temps.hour += (temps.min + temps2.min) / 60;
		}
		else
			temps.min += temps2.min;

		if((temps.hour + temps2.hour)>=24)
		{
			temps.hour = (temps.hour + temps2.hour) % 24;
		}
		else
			temps.hour += temps2.hour;
	}

	Time Time::operator-(Time t, int min)
	{
		Time temps(t);

		int hours, minutes, temp;
		hours = n / 60;
		minutes = n % 60;

		if((temps.min - min)<0)
		{
			temp = min - temps.min; 
			if((temp % 60 >= 0))
			{
				temps.hour - (temp % 60);
				min = temp / 60;
				if((temps.min - min)<0)
				{
					min = min - temps.min;
					temps.hour - 1;
					temps.min = 60 - min;
				}
				else 
					temps.min -= min;
			}
			else 
				temps.min -= min;
		}
		else
			temps.min -= min;
	}

	Time Time::operator-(int min, Time t)
	{
		return t-min;
	}

	Time Time::operator-(Time t, Time t2)
	{
		Time temps(t);

		int hours, minutes, temp;
		hours = n / 60;
		minutes = n % 60;

		if((temps.min - min)<0)
		{
			temp = min - temps.min; 
			if((temp % 60 >= 0))
			{
				temps.hour - (temp % 60);
				min = temp / 60;
				if((temps.min - min)<0)
				{
					min = min - temps.min;
					temps.hour - 1;
					temps.min = 60 - min;
				}
				else 
					temps.min -= min;
			}
			else 
				temps.min -= min;
		}
		else
			temps.min -= min;
	}

	Time& Time::operator=(Time t)
	{
		hour = t.hour;
		min = t.min;
		return(*this);
	}

}

