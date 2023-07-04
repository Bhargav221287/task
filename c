#include<stdio.h>
#include<stdlib.h>
void main ()
{
        int i,n,j,fact;
        system("clear");
        printf("\n ENTER THE RANGE OF NUMBER : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                fact=0;
                for(j=1;j<=n;j++)
                     {
                            if(i%j==0)
                            fact++;
                     }
                if(fact==2)
                printf("%d\t\n",i);
        }


	#include<stdio.h>
#include<stdlib.h>
void main()
{
   double number1,number2,product;
   system("clear");
   printf("\n ENTER NUMBER ONE : ");
   scanf("\n %lf",&number1);
   printf("\n ENTER NUMBER TWO : ");
   scanf("\n %lf",&number2);
   product=number1*number2;
   printf("\n THE PRODUCT OF TWO NUMBERS IS %.2lf \n ",product);
}



#include<stdio.h>
#include<stdlib.h>
void main()
{
       int i,j,number,column;
       system("clear");
       printf("\n ENTER HOW MANY TABLES U WANT : ");
       scanf("%d",&number);
       for(i=1;i<=number;i++)
       {
	       for(j=0;j<=10;j++)
	       {
	                printf("\n %d * %d = %d \n",i,j,i*j);
	       }
	       printf("\n");
       }

}
c is computer language 
c is one of the computer language
there are so many computer languages c is one of them
Dennis Ritchie invented c language in 1972
c is a very dificult language 
pyton is also a computer language

