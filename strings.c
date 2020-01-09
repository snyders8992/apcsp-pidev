#include<stdio.h>
#include<string.h>

void main()
{
  char str1[]="abcdefghijklmnopqrstuvwxyz";
  char str2[27];
  char c = 'a';
  for (int i=0; i<26; i++)
  {
  str2[i]= c;
  c++;
  }
  str2[26]='\0';
  if (strcmp(str1, str2) == 0)
  {
  printf("str1 is the same as str2\n");
  }
  else
  {
  printf("str1 is not the same as str2\n");
  }
  for (int i=0; i<26; i++)
  {
  c=str2[i];
  str2[i]=c-32;
  }
  if (strcmp(str1, str2) == 0)
  {
  printf("str1 is the same as str 2\n");
  }
  else
  {
  printf("str1 is not the same as str2\n");
  }
  char str3[54];
  strcpy(str3, str1);
  strcat(str3, str2);
  printf("%s + %s = %s\n", str1, str2, str3);
}
