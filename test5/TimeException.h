#include <stdlib.h>
#include <iostream>
using namespace std;
#include <cstring>
#include "Exception.h"

#ifndef TIMEEXCEPTION // définis le début
#define TIMEEXCEPTION

class TimeException : public Exception{
    private:
        int code;

    public:
    static int INVALID_HOUR;
    static int INVALID_MINUTE;
    static int OVERFLOW;
     
	TimeException();
	TimeException(int id, const string& nom);
    TimeException(const TimeException& cop);
    ~TimeException();  

    void setCode(int code);
    int getCode();
};

#endif