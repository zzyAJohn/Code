/*下列程序中huiwen（）函数的功能是检查一个字符串是否为回文。
当字符是回文时，函数返回字符串”yes!”,否则函数返回字符串”no!”,
并在主函数中输出。所谓回文即正向与反向的拼写都一样，例如“adgda”。*/

#include "stdio.h"
#include "string.h"

char *huiwen(char *str)

{    char *p1,*p2;int i,t=0;   

 p1=str;p2=p1+strlen(str); //p2指向str末尾  

for(i=0;i<strlen(str)/2;i++)     

   if(*p1++!=*p2--){t=1;break;}  

  if(t==1)return ("yes!");    

else return("no!");}

int main()

{    char str[50]; 

   printf("Input:");

scanf("%s",str); 

 printf("%s\n",huiwen(str)); 

   return 0;}