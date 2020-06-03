#include <stdio.h>
void f()
{
	char c1[100]= "Hello world in the master";
	char c2[100]= ", I am <your name here>";
	printf("%s\n", strcat(c1, c2));
	return 0;
}
