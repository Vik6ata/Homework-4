#include<stdio.h>
#include<string.h>
int main()
{ 
  char text[]="Metro\0";
  char text1[]="\0";
  printf("%ld\n",strlen(text));
  printf("%ld\n",strlen(text1));
  printf("%ld\n",strnlen(text,3));
  printf("%ld\n",strnlen(text1,2));
  printf("%s\n",strcpy(text1,text));
  printf("%s\n",strncpy(text1,text,10));
  printf("%s\n",strcat(text1,text));
  printf("%s\n",strncat(text1,text,4));
  printf("%d\n",strcmp(text1,text));
  printf("%d\n",strncmp(text1,4,text));
  char *ret;
  ret=strstr(text1,text);
  printf("%s",ret);
  
 
  return 0;
}
