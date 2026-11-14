#include <stdio.h>
#include <string.h>

int main()
{
cha str[]= "12345abc";
printf("lenght = %zu",
strspn(str, "0123456789"));
return 0;
}
