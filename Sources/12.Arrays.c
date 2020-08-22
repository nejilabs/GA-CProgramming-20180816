#include <stdio.h>
#include <stdlib.h>

int main() {
  // int luckyNumbers[10] = {4,8,1, 5,16,23,42};
  // printf("%d\n", luckyNumbers[1]);

  int nums[3][2]={
    {1,2},
    {3,4},
    {5,6}
  };

  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
      printf("%d,",nums[i][j] );
    }
    printf("\n");
  }
  return 0;
}
