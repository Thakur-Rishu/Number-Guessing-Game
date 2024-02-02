#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int compiler,user,i=1;
   
   printf("~~~~~~~~~🤔Gussing Game🤔~~~~~~~~~\n");
   

   printf("\n\nGuess a number between 1-100\n");

   srand(time(0));
   compiler=(rand()%100)+1;

   //printf("%d\n",compiler);
 
   while(i!=0)
    {
    
   printf("\n\nEnter the guessed number: ",i);
   scanf("%d",&user);
    
   
   if(user==compiler)
   {
    printf("\n\n🎉Congratulations.....You guessed right ✨");
    break;
   }
     
   else
      {
        if(user>compiler)
         {
           printf("\n     Wrong guess...guess a smaller number");
         }
     
        else
         {
           printf("\n     Wrong guess...guess a bigger number");
         }
       }
   i++;
 }

  printf("\n\nYou guessed it in %d moves\n\n",i);
  return 0; 
}