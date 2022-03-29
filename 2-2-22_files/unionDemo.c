#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[20];
    float cpi;
    int backlog;
}s1;

union book{
    char title[20];
    char author[50];
    int pages;
    float price;
}u1;



int main()
{
    s1.id=1;
    strcpy(s1.name,"OmPatel");
    s1.cpi=7.7;
    s1.backlog=0;
    
    printf("Id= %d \nName = %s\nCPI = %f\nBacklog = %d\n\n",s1.id,s1.name,s1.cpi,s1.backlog);
    
    u1.pages=300;
    printf("Pages= %d\n",u1.pages);
    
    u1.price=500.00;
    printf("Pages= %d\n",u1.pages);
    printf("Price= %f\n",u1.price);

    return 0;
}

