#include <stdlib.h>
#include <iostream>
using namespace std;
#include <cstring>
#include "TimeException.h"

int TimeException::INVALID_HOUR = 1;
int TimeException::INVALID_MINUTE = 2;
int TimeException::OVERFLOW = 3;

TimeException::TimeException()
{
	setCode(0);
}

TimeException::TimeException(code)
{
	setCode(code);
}

TimeException::TimeException(const TimeException& cop)
{
    setCode(cop.getCode());
}

void TimeException::setCode(code)
{
	this->code = code;
}

int TimeException::getCode() const
{
	return this->code;
}

TimeException::~TimeException() {}