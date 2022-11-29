#include <stdio.h>

int main ()
{
   char yourname[100];
   int yourage;

   printf("Whats your name?: ");
   scanf("%s",yourname); //i let you read the doc to avoid overflow :)
   printf("How old are you?: ");
   scanf("%d",&yourage);
   printf("You are %d years old and your name is %s \n",yourage,yourname);
}

// when you use scanf, %c is intended to get a single character. If you want to get a string, you need to use %s.
// Also, in C langage, string are just char arrays. So you need to declare a char array.