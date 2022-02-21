#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int peopleofA,peopleofB,peopleofC; //declaration of variables
        scanf("%d %d %d",&peopleofA,&peopleofB,&peopleofC);
        fflush(stdin);
        
        if((peopleofA + peopleofC)>peopleofB)
        {
            printf("%d\n",peopleofA + peopleofC);
        }
        else
        {
            printf("%d\n",peopleofB);
        }
    }
    return 0;
}
//code by bhumika nayak