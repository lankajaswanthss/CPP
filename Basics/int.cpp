/*
short int, int, long int, long long int
unsigned short int, unsigned int, unsigned long int, unsigned long long int

sizeof() for knowing the size of datatype
*/

/*
linux and windows machines use different size, to make it standard we use
#include<cstdint>
int64_t for signed and uint64_t for unsigned

0b for binary
0x for hexadecimal
*/

#include <iostream>
#include <cstdint>
using namespace std;
int main(){
    cout<<"the size of int is "<<sizeof(int)<<endl;
    cout<<"the size of stdint is "<<sizeof(int64_t);
    return 0;
}