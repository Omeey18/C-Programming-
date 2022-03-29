

#include <stdio.h>

void createUser();
int check(int,int);
int withdraw(int,int,int);
int diposit(int,int,int);
int checkBal(int,int);

//global variables
int attempt=3,n;

struct user{
    int acc_num;
    int pin;
    int balance;
}u[];



int main()
{
    printf("Enter How Many coustomer you want to create: \n");
    scanf("%d",&n);
    int acc_num, pin,ope,flag=0,wd;
    createUser();
    //checking and geeting account number & PIN
    int temp = 1;
        while(temp != 0)
        {
            if(attempt==0)
            {
                printf("Card Blocked....!\n");
                return 0;
            }
            printf("\n\nEnter Account number & pin: ");
            scanf("%d %d",&acc_num,&pin);
            temp = check(acc_num,pin);
        }
        
    //performing banking operations
    while(flag!=1)
    {
        printf("\n\nEnter 1 for check balance: \nEnter 2 for withdraw: \nEnter 3 for deposit: \nEnter 4 for Quit:\n");
        scanf("%d",&ope);
        
        switch(ope)
        {
            case 1:
                printf("Your balance = %d\n",checkBal(acc_num,pin));
                break;
                
            case 2:
                
                printf("Enter withdraw amount : \n");
                scanf("%d",&wd);
                printf("Your remaining bal = %d\n",withdraw(acc_num,pin,wd));
                break;
                
            case 3:
                printf("Enter diposit amount : \n");
                scanf("%d",&wd);
                printf("Your balance = %d\n",diposit(acc_num,pin,wd));
                break;
            
            case 4:
                flag = 1;
                break;
            default:
                break;
        }
    }


    return 0;
}

int check(int acc_num,int pin)
{
    for(int i=0;i<n;i++)
    {
        
            if(u[i].acc_num == acc_num && u[i].pin == pin)
            {
                printf("Login succesfully\n");
                return 0;
            }
    }
    printf("Login Failed...\n");
    attempt--;
    printf("%d attempts remaining...\n",attempt);
}

//creating user account 
void createUser()
{
    for(int i=0;i<n;i++)
    {
        printf("Enter Account number,balance & pin: ");
        
            scanf("%d %d %d",&u[i].acc_num,&u[i].balance,&u[i].pin);
    }
}

//deposite fun
int diposit(int acc_num,int pin,int amount)
{
     for(int i=0;i<n;i++)
    {
        
            if(u[i].acc_num == acc_num && u[i].pin == pin)
            {
                
                u[i].balance = u[i].balance+amount;
                printf("Deposit succesfully..\n");
                return u[i].balance; 
            }
                
            
    }
}

//checkBal
int checkBal(int acc_num,int pin)
{
    for(int i=0;i<n;i++)
    {
        
            if(u[i].acc_num == acc_num && u[i].pin == pin)
            {
                return u[i].balance;
            }
            
    }
}

//withdraw money
int withdraw(int acc_num,int pin,int wd)
{
    for(int i=0;i<n;i++)
    {
        
            if(u[i].acc_num == acc_num && u[i].pin == pin)
            {
                if(wd<=u[i].balance)
                {
                    u[i].balance = u[i].balance-wd;
                    printf("Withdraw succesfully..\n");
                    return u[i].balance; 
                }
                else{
                   printf("Low balance\n");
                   return u[i].balance;
                }
            }
    }
    
    
}



