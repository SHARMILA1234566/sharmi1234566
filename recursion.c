#include <stdio.h>
int sum=0,n;
int rev (int num){
  if(num){
    n=num%10;
    sum=sum*10+n;
    rev (num/10);
  }
  else
    return sum;
  return sum;
}
int main(){
  int num,reversenumber;

  printf("Enter any number:");
  scanf("%d",&num);

  reversenumber=rev(num);
  printf("The reverse number is :%d",reversenumber);
  return 0;
}
