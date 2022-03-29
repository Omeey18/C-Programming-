
#include<stdio.h> 
#include<time.h>
#include<stdlib.h> 


int main(){    
    int num1,num2,ans,user_ans,digit=1;
    int chances=5;
    srand(time(0));


	
    do{
		num1 = 1+rand()%10*digit;
		num2 = 1+rand()%10*digit;

		while(num1!>digit)
		{
			num1 = 1+rand()%10*digit;
		}
		while(num2!>digit)
		{
			num2 = 1+rand()%10*digit;
		}
		ans = num1+num2;
							printf("for dev: %d\n",ans);
    printf("Add %d + %d: \n",num1,num2);
    scanf("%d",&user_ans);
    
    if(user_ans == ans)
    {
        printf("Good Answer LEVEL UP\n");
        digit*=10;
        chances=5;
    }
    else
    {
        printf("Answer is wrong Try Again:\n");
        chances--;
	printf("Chances left %d\n",chances);
    }
        
    }while(chances!=0);
    
   
    
 return 0;    
}  
