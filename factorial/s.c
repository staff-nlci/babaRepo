#include<stdio.h>
#include <string.h>
int main(){
  char str[20];
  printf("Enter string: ");
  scanf("%s",str);
  //gets(str);//reads string from console
  printf("String is: %s",str);
  printf("\nLower String is: %s",strrev(str));
 return 0;
}
