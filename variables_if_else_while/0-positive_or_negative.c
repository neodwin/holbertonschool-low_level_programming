#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main — a test c file
*description - bla
*Return — 0 signifying program success
*/

int main(void)
{
int n;
srand(time(0));
n = rand() — RAND_MAX / 2;
printf(“ % d”, n);
if (n > 0)
{
puts(“ is positive”);
}
else if (n == 0)
{
puts(“ is zero”);
}
else
{
puts(“ is negative”);
}
return (0);

}
