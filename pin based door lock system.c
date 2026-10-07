#include <stdio.h>
#include <stdlib.h>

int main()
{
int correctpin = 1234;
int userpin;

printf("Enter Pin:",userpin);
scanf("%d", &userpin);
 //Please enter the Correct Password
if(userpin==correctpin)
    {
    printf("Granted Access");
    }

    else {
       printf("Access Denied");

   }
    return 0;
}
