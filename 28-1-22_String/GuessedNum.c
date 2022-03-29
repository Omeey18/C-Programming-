
#include<stdio.h>  
#include<time.h>
#include<stdlib.h>

int main(){ 
   
srand(time(0));
int num=1+rand()%100;
    
    
    int gussed_num;
   
    
    
    while(1)
    {
        scanf("%d",&gussed_num);
        if(gussed_num==num)
        {
            printf("Excellent you guessed right number..\n");
            break;
        }
        else if(gussed_num>num)
        {
            printf("Too high Try again..\n");
        }
        else if(gussed_num<num)
        {
            printf("Too low Try again..\n");
        }
    }
    
    
 return 0;    
}  
