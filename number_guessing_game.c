#include<stdio.h>
int main(){
int c,n,a;
while(1)
{
   printf("\nNUMBER GUESSING GAME\n");
   printf("ENTER 1 TO START GAME\n");
   printf("ENTER 2 TO EXIT\n");
   printf("enter choice:\n");
   scanf("%d",&c);
   if (c==2)
   break;
   else if(c==1)
   {
    printf("enter your guess:\n");
    scanf("%d",&n);
       if(n<=50)
          a=n+32;
       if (n>50)
          a=n-31;

     while(n!=a)
     {
     printf("WRONG GUESS\n");
       if(a>n)
        printf("HINT:guess higher\n");
       else
        printf("HINT:guess lower\n");
     printf("TRY AGAIN!\n\n");

     printf("enter your guess:\n");
     scanf("%d",&n);
     }
     if(n==a)
     printf("CONGRATS YOU GUESSED THE NUMBER RIGHT!\n");
     printf("the correct number is %d",a);}
    else
     printf("invalid choice\n");


   }


return 0;

}
