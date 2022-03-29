#include <stdio.h>

int main()
{
   FILE *fp1,*oddfp,*evenfp;
   char num;
   
   fp1 = fopen("numbers.txt","r");
   oddfp = fopen("odd.txt","w");
   evenfp = fopen("even.txt","w");
   do{
       num = getc(fp1);
	if(num != ','){
       if(num%2==0)
       {
           fprintf(evenfp,"%c ",num);
       }else if(num%2!=0)
       {
           fprintf(oddfp,"%c ",num);
       }
	}
   }while(num!=EOF);
   
   fclose(fp1);
   fclose(evenfp);
   fclose(oddfp);
   
   

    return 0;
}

