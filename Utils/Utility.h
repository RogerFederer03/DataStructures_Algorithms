#ifndef __UTILITY_H__
#define __UTILITY_H__

#include <cstring>      //standard string operations
#include <iostream>    //standard iostream operations
#include <climits>      //numeric limits
#include <cmath>        //mathematical functions
#include <fstream>     //file input and output
#include <cctype>       //character classification
#include <ctime>        //date and time function
#include <cstdlib>      //standard libray
#include <cstdio>       //standard I/O libray

enum Error_code{success, fail, underflow, overflow, range_error, duplicate};

enum Status_code {SUCCESS, FAIL, UNDER_FLOW, OVER_FLOW,RANGE_ERROR, DUPLICATE_ERROR,
	NOT_PRESENT, ENTRY_INSERTED, ENTRY_FOUND};

#ifndef DefaultListSize
#define DefaultListSize 1000
#endif  

#endif
