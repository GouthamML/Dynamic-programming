
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int temp;
char part[26], end[26];
char str[100];
char ch;

void swap(char *x, char *y)
{
  char temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
void permute(char *a, int l, int r)
{
  int i;
  if (l == r)
  {
    memcpy(part, a, r+1 );
    ch = str[temp];
    part[r+1] = ch;
    int j=r;
    for(unsigned int i =r+2; i<strlen(str);i++)
    {
      part[i] = part[j];
      j--;
    }
    printf("%s\n",part);
    return 0; 
  }
  else
  {
    for (i = l; i <= r; i++)
      {
        swap((a+l), (a+i));
        permute(a, l+1, r);
        swap((a+l), (a+i)); //backtrack
      }
  }  
}
int main()
{   
  char in[20];
  int counts[26] = { 0 };
  scanf("%s",&str);
  int n = strlen(str);
  for(int i=0;i<n;i++) 
  {
    char c = str[i];
    if (!isalpha(c)) continue;
    c = toupper(c);
    counts[(int)(c - 'A')]++;
  }
  for (int i = 0; i < 26; i++) 
  {
    if(counts[i] == 1){
    temp = i;
    permute(str,0,i-1);
    break;
    }
  }
  return 0;
}

