#include <stdio.h>
int main()
{
    int mark=0;
    printf("Enter your mark: ");
    scanf("%d",&mark);
    if(mark>=85 && mark<=100)
    {
    printf("Your mark is %d \n",mark);
    printf("You are in Grade A,KEEP IT UP.");
    }
    else if(mark>=70&& mark<=84)
    {

    printf("Your mark is %d \n",mark);
    printf("VERY GOOD,you are in Grade B.");
    }
    else if(mark>=55&& mark<=69)
    {
    printf("Your mark is %d \n",mark);
    printf("GOOD,you are in Grade C.");
    }
    else if(mark>=40&& mark<=54)
    {
    printf("Your mark is %d \n",mark);
    printf("NOT BAD,you are in Grade D. ");
    }
    else if(mark<40 && mark>0)
    {
    printf("Your mark is %d \n",mark);
    printf("You are in Grade F,HOPE YOU WILL IMPROVE IT NEXT TIME.");
    }
    else
    {
    printf("Your mark is invalid");
    }

}
