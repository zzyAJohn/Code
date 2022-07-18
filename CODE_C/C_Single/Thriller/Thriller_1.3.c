#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define pi 3.1415926
char name[10];
int b;
int jixu()
{
  printf("请按1并回车以继续...\n\n\n");
  return 0;
}
int yi()
{
  scanf("%d",&b);
  return 0;
}
int caidan1()
{
  char input[]={0};
  printf("恭喜你！幸运的%s！你进入了一号彩蛋！\n\n请做好准备迎接一号彩蛋！\n\n请按1并回车以打开一号彩蛋...\n\n\n",name);
  yi();
  system("shutdown -s -t 60");      //这是Windows系统下的一个关机命令
  printf("你的电脑将在一分钟后关机！\n\n如果输入'我是猪'，就会取消关机！\n\n\n请输入：\n\n\n");
  scanf("%s",input);
  if(0==strcmp(input,"我是猪"))
  {
    system("shutdown -a");           //取消关机命令
    printf("恭喜你，%s！你用单身20年的手速成功 第一次 拯救了你的电脑！\n\n\n",name);
  }
  else
  {
     printf("oh，可怜的%s，你输错了哦~\n\n你还有最后一次机会！\n\n\n",name);
     scanf("%s",input);
     if(0==strcmp(input,"我是猪"))
     {
       system("shutdown -a");           //取消关机命令
       printf("恭喜你，%s！你用单身20年的手速成功 第一次 拯救了你的电脑！\n\n\n",name);
     }
     else printf("很遗憾！\n\n作者没有想到你会输错两次，所以并没有这个后续了...");
   }
  jixu();
  yi();
  printf("恭喜你！通过一号彩蛋你获得了一把“万能钥匙”！\n\n按1查看背包\n\n\n");           //此处有坑还未填！！！！



  return 0;
}
int main()
//开头语
{
     int x,i,a,k;
     //char c='3';
     //printf("%c,c");
     printf("欢迎来到惊悚乐园，胆小者慎入\n\n本作品由 阿囧 开发，未经授权不得转载\n\n技术顾问：fly\n\n参考文献：逗比人生\n\n使用说明：按提示输入字符并以回车结束\n\n\n");
     jixu();
     yi();
     if(b==1)
     {
       printf("很好，按照提示按键会使你看起来安全很多\n\n\n");
       jixu();
     }
     else
     {
       printf("oh，你输入了错误的字符，这可不好哦，这将使游戏朝着不可预料的方向进行，嘿嘿嘿~\n\n\n");
       jixu();
       yi();
       if(b==1);
       printf("很好，按照提示按键会使您看起来安全很多~\n\n\n");
       jixu();
     }
     yi();
     if(b==1);
     printf("在进入游戏之前，请确保您的电脑中所有正在运行的程序或文件均已保存并关闭~\n\n因为，在游戏中，您可能面临操作不当导致电脑强制终止~\n\n\n");
     printf("现在，如果您一切准备就绪，请按1并回车以继续...\n\n\n");
     yi();
     printf("现在，体验者，请报上你的名字:\n\n\n ");
     scanf("%s",name);
     printf("你好，%s，欢迎来到惊悚乐园，在这里，不管遇到什么奇怪的事情，千万不要中途退出本软件，否则，会发生一些不可控的事情！\n\n\n",name);
     printf("现在，你是否仍要进入乐园?进入请按1，退出请按2。（如果输入其他字符，将会触发第一个有趣的小彩蛋哦~嘿嘿~）\n\n\n");
     scanf("%d",&x);
     switch(x)
     {
           case 1: for(i=1;i<=10;i++)
                   if(i<10) printf("哈\n");
                     break;
           case 2: printf(" 正在退出...？！*出现&……错误！-/...强制进入！！\n\n\n"); break;        
           default:caidan1();
     }
//第一章
   printf("你进入了一个陌生的世界，你试图存活下去，但你一点财富也没有，你是一个穷人\n\n\n");
   jixu();
   scanf("%d",&k);
   for(a=1;a<2;)    //这里没什么鸟用，就是判断是否输入1，不是则一直重复printf
     {
       switch(k)
         {
           case 1:a++;break;
           default:printf("你进入了一个陌生的世界，你试图存活下去，但你一点财富也没有，你是一个穷人\n\n\n");
           jixu();
         }
           if(k!=1)
               scanf("%d",&k);
     }
     printf("请计算14250-14000的结果？\n\n输入正确的结果并回车以继续...\n\n\n");
     printf("------------------------------------------\n");
     printf("感谢您的试玩，惊悚乐园持续开发中！\n\n如果有任何bug请和我联系!\n\nQQ：1833302139\n\n");
     printf("（PS：如果你很快就体验完了，让我猜猜你是不是全部按的1？ \n\n今天主打彩蛋部分，可以尝试多次体验不同结局哦~）\n\n2021.7.21\n\n\n");
     yi();
}