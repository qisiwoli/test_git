#include<stdio.h>
#include "add.h"
#include "sub.h"

void main()
{
	int a=10, b=5,c;
	welcome();
	c=add(a,b);
	printf("%d+%d=%d\n",a,b,c);
	c=sub(a,b);
	printf("%d=%d=%d\n",a,b,c);
}
