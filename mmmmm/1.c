#include <stdio.h>
int main(){
    int Emno,Bs,NS,INC;

    printf("enter employee no");
    scanf("%d",&Emno);
    printf("enter Bacic salary");
    scanf("%d",&Bs);
    if (Bs>=1000)
    INC=Bs*0.25;
    else if(Bs>=750)
        INC=Bs*0.20;
    else if(Bs>=500)
        INC=Bs*0.15;
    else
    INC=Bs*0.10;
    NS=Bs+INC;
    printf("Employee number %d Grade %d \n",Emno,NS);
        }
