/** LogFp Ver1.0 diliverUnicorn Copy LEFT Nothing RIGHTS**/
/*
Features:
    1.logs events.
    2.UTC time with in.
    3.Auto end line detect.
    4.print by printf.
*/
#include<stdio.h>

#include "logFp.h"

int main()
{
    char string[]="logs events here,\n";

    logFp(0,string);
    logFp(0,"or you can just type in string.");
    logFp(1,"first arg 1 to print the string by printf");

    return 0;
}
