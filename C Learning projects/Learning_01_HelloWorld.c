#include <stdio.h>

int main()
{

    // \n is new line \t is tab it's called escape sequence

    char b = 127; // signed char contain values from -128 up to +127 %d or %c
    unsigned d = 255; // unsigned charactes can't contain negative value and will overflow if over +255 (reset to minimum)
    short c = 32768; // integer -32768 to +32768
    unsigned short int f = 65535; //+65535 is max value

    //standard integer is over 2b number

    long long int l; //this is the largest datatype for integer -9 to 9 quintillion
    unsigned long long int ul; // 18 quintillion


    int Data = 32;
    printf("This is DATA: %i\n\"Hello world!\"\n\tAnd bye!\n\t\tDouble tabs!!!", Data);

    return 0;
}