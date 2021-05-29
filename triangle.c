#include<stdlib.h>
#include <stdio.h>
char a='*';
int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      printf("%s",&a);
    }
    puts("\n");
  }
  return 0;
}
