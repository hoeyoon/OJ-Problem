#include <stdio.h>

int gcd(int x, int y){
  if(y == 0){
    return x;
  }
  else{
    return gcd(y, x % y);
  }
}

int main(){
  int x, y;
  scanf("%d %d", &x, &y);

  int result = gcd(x, y);
  printf("%d\n", result);
  return 0;
}
