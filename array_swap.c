#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand( time(NULL) );
  int arr[10] = {rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), 0};
  int arr2[10] = {arr[9], arr[8], arr[7], arr[6], arr[5], arr[4], arr[3], arr[2], arr[1], arr[0]};
  printf ("orgiinal array: \n");
  printf ("arr[0]: %d \n", arr[0]);
  printf ("arr[1]: %d \n", arr[1]);
  printf ("arr[2]: %d \n", arr[2]);
  printf ("arr[3]: %d \n", arr[3]);
  printf ("arr[4]: %d \n", arr[4]);
  printf ("arr[5]: %d \n", arr[5]);
  printf ("arr[6]: %d \n", arr[6]);
  printf ("arr[7]: %d \n", arr[7]);
  printf ("arr[8]: %d \n", arr[8]);
  printf ("arr[9]: %d \n", arr[9]);
  printf ("second array: \n");
  printf ("arr2[0]: %d \n", arr2[0]);
  printf ("arr2[1]: %d \n", arr2[1]);
  printf ("arr2[2]: %d \n", arr2[2]);
  printf ("arr2[3]: %d \n", arr2[3]);
  printf ("arr2[4]: %d \n", arr2[4]);
  printf ("arr2[5]: %d \n", arr2[5]);
  printf ("arr2[6]: %d \n", arr2[6]);
  printf ("arr2[7]: %d \n", arr2[7]);
  printf ("arr2[8]: %d \n", arr2[8]);
  printf ("arr2[9]: %d \n", arr2[9]);
}
