#include <stdio.h>
int main()
{
    int x=45;
    float y=10.5;
    char ch='s';
    char cha[50]="sks";

    printf("The value is: %d \n",x);
    printf("The value is: %f \n",y);
    printf("The character is: %c \n",ch);
    printf("The string is: %s \n\n",cha);

    x+=20;
    y+=20.5;
    ch+='k';
    cha[50]+="sathya";
    printf("The value is: %d \n",x);
    printf("The value is: %f \n",y);
    printf("The character is: %c \n",ch);
    printf("The string is: %s \n",cha);
}
