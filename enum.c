#include <stdio.h>

int main()
{
   enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO=20,EBAY,MICROSOFT};

   enum Company C1=XEROX;
   enum Company C2=GOOGLE;
   enum Company C3=EBAY;
   
   printf("XEROX is %i\n",C1);
   printf("GOOGLE is %i\n",C2);
   printf("EBAY is %i\n",C3);

   return 0;
}