#include <stdio.h>,

int main()
{
    int amt,a,b,c,d,e,f,g,h;
    //hey bro nice code namsaste
    printf("Enter amount in rupees = ");
    scanf("%d",&amt);

    if(amt>=500)
    {
        a=amt/500;
        amt=amt-(a*500);
        printf("\nNo. of 500 Rupee notes needed = %d",a);
    }
    if(amt>=100)
    {
        b=amt/100;
        amt=amt-(b*100);
        printf("\nNo. of 100 Rupee notes needed = %d",b);
    }
    if(amt>=50)
    {
        c=amt/50;
        amt=amt-(c*50);
        printf("\nNo. of 50  Rupee notes needed = %d",c);
    }
    if(amt>=20)
    {
        d=amt/20;
        amt=amt-(d*20);
        printf("\nNo. of 20  Rupee notes needed = %d",d);
    }
    if(amt>=10)
    {
        e=amt/10;
        amt=amt-(e*10);
        printf("\nNo. of 10  Rupee notes needed = %d",e);
    }
    if(amt>=5)
    {
        f=amt/5;
        amt=amt-(f*5);
        printf("\nNo. of 5   Rupee notes needed = %d",f);
    }
    if(amt>=2)
    {
        g=amt/2;
        amt=amt-(g*2);
        printf("\nNo. of 2   Rupee notes needed = %d",g);
    }
    if(amt=1)
    {
        h=amt/1;
        amt=amt-(h*1);
        printf("\nNo. of 1   Rupee notes needed = %d",h);
    }
    return 0;
}
