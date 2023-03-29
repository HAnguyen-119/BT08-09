#include <iostream>
using namespace std;

int main( )
{

   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   int b[4] = {1, 2, 3};
   for (int *cp = b; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   double c[5] = {1.2, 2.44, 3.976, 4.03};
   for (double *cp = c; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   for (double *cp = c; (*cp) != '\0'; cp += 2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   return 0;
}

