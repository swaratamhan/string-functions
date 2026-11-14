#include <stdio.h>
#include <string.h>

int main()
{
char str[] = "Hello World";
char * ptr = strstr(str, "World");
if(ptr !=NULL)
printf("%s", ptr);
else
printf("Not Found");
return 0;
}
