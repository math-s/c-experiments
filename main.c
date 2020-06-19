#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
  int num;
  num = a + b;
  return num;
}

int sumaux(int a, int aux){
  
  return ;
}


int main() {
  int i;
  printf ("Checking if processor is available...");
  if (system(NULL)) puts ("Ok");
    else exit (EXIT_FAILURE);
  printf ("Executing command DIR...\n");
  i=system ("dir");
  printf ("The value returned was: %d.\n",i);
  return 0;
}