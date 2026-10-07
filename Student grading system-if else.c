#include <stdio.h>
#include <stdlib.h>

int main()
{char registrationNumber;
 char name [40];
 double marks;
    printf("Please enter your registration Number.\n");
    scanf("%s",&registrationNumber);
    printf("Please enter your name.\n");
    scanf("%c",&name);
    printf("Please enter your marks.\n");
    scanf("%lf",&marks);
if(marks>=70 && marks<=100)
    {printf("Score %lf Grade A\n", marks);
    }
else if(marks>=69 && marks<=60)
    {printf("Score %lf Grade A\n", marks);
else if(marks>=59 && marks<=50)
    {printf("Score %lf Grade A\n", marks);
 else if(marks>=49 && marks<=40)
    {printf("Score %lf Grade A\n", marks);
else (marks<40)
    {printf("Score %lf Grade A\n", marks);


return 0;
}
