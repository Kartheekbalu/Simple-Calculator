#include<stdio.h>

int main()
{
    int n1,n2,sum,sub,mul,div,i,j;
    printf("Hello world!\nEnter two no:\n");
    scanf("%d %d",&n1,&n2);
    
    printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
    scanf("%d",&i);
    
    switch(i)
    {
    
    case(1):
    sum=n1+n2;
    printf("value is %d",sum);
    break;
    
    case(2):
    sub=n1-n2;
    printf("value is %d",sub);
    break;
    
    case(3):
    mul=n1*n2;
    printf("value is %d",mul);
    break;
    
    case(4):
    div=n1/n2;
    printf("value is %d",div);
    break;
    
    }
    
    return 0;
}