#include<stdio.h>
int main()
{
    int i, roll, rollAyyar[10], tmp=0;
// to get  multiple input  from user
    for(i=0;i<4;i++)
    {
        printf("store students roll.number \n ");
        scanf("%d", &rollAyyar[i]);
    }
//end


//show these all number 
    for(i=0;i<4;i++)
    {
        printf("numbers are %d \t", rollAyyar[i]);
       
    }
//end


//enter roll.num to checkresult     
    printf("enter rol.number to search result\n");
    scanf("%d", &roll);
//end
// to checkcondition roll and rearch roll
    for ( i = 0; i < 4; i++)
    {
        if(rollAyyar[i]==roll)
        printf("pass!!");
        tmp=1;
        break;

    }
    if(tmp==0)
    {
        printf("faill!!");
    }
    
    
}