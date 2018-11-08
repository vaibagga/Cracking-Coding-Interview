#include <stdio.h>
int len(char *str){
  int ans = 0;
  for (; str[ans] != '\0'; ans++);
  return ans;
}
void reverse(char *str){
  int n = len(str);
  int i = 0, j = n - 1;
  while (i < j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }

}

int main(){
  int t;
  scanf("%d", &t);
  while (t--){
    char ch[50];
    scanf("%s", ch);
    //scanf("%s", ch);
    //printf("%s", ch);
    reverse(ch);
    //printf("Reversed\n");

    printf("%s", ch);

  }
  return 0;
}
