#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
srand(time(NULL));

int arr[10];
int i = 0;
while(i < 10){
  int x = rand();
  arr[i] = x;
  i++;
}
arr[9] = 0;
int matr[10];
int strat = 0;
int lpaul = 9;
int *point;
while (strat < 10){
  point = &arr[lpaul];
  matr[strat] = *point;
  lpaul--;
  strat++;
}


int count = 0;
printf("The Original Array: \n");
for(count; count < 10; count++){
  printf("Arr[%d] : %d \n", count, arr[count]);
}
count = 0;
printf("The Second Array: \n");
for(count; count < 10; count++){
  printf("Arr2[%d] : %d \n", count, matr[count]);
}
}
