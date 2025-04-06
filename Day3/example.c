#include<stdio.h>
#include<limits.h>

int main(){
	unsigned int ui = UINT_MAX;
	unsigned char a = UCHAR_MAX;
	ui += 2;
	a +=2;
	printf("Value after update %u \n",ui);
	printf("CHAR update max %u \n",a);
	return 0;
}
//In arithmetic operations with integers, overflows can occur.
//C specifies this behavior only for the unsigned integer types. For all other types,
//the result of an overflow is undefined. For example, the overflow may be ignored,
//or it may raise a signal that aborts the program if it is not caught.
