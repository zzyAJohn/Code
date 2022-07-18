/*编写一个Java应用程序，用户从键盘输入一个1-99999之间的整数，程序将判断这个数是几位数，并判断这歌数是否是回文数。*/
package experiment;
import java.util.*;
public class Number {
    public static void main(String args[]) {
    	
        int number=0,d5,d4,d3,d2,d1;
        try (Scanner reader = new Scanner(System.in)) {
            System.out.println("从键盘输入一个1至99999之间的数");
            
            while(reader.hasNextInt()){  
               number=reader.nextInt();
               if(number >= 1 && number <= 99999){  	// 判断number在1至99999之间的条件
                 d5 = number / 10000;  // 计算number的最高位（万位）d5
                 d4 = number / 1000 % 10;   	// 计算number的千位d4
                 d3 = number / 100 % 10;   	// 计算number的百位d3
                  d2=number%100/10;
                  d1=number%10;
                  
                  if(d5 != 0){ // 判断number是5位数的条件
                      System.out.printf("\n%d是5位数", number);
                      if (d1 == d5 && d2 == d4)  // 判断number是回文数的条件
                         System.out.printf("\t%d是回文数", number);
                      else
                         System.out.printf("\t%d不是回文数", number);
                  }
                  else if (d4 != 0){  // 判断number是4位数的条件
                       System.out.printf("\n%d是4位数",number);
                       if (d1 == d4 && d2 == d3)  // 判断number是回文数的条件
                          System.out.printf("\t%d是回文数", number);
                       else
                          System.out.printf("\t%d不是回文数",number);
                  }
                  else if (d3 != 0){  // 判断number是3位数的条件
                       System.out.printf("\n%d是3位数", number);
                       if (d1 == d3)  // 判断number是回文数的条件
                          System.out.printf("\t%d是回文数", number);
                       else
                         System.out.printf("\t%d不是回文数", number);
                  }
                  else if(d2!=0){
                       System.out.printf("\n%d是2位数", number);
                       if(d1==d2)
                          System.out.printf("\t%d是回文数", number);
                       else
                         System.out.printf("\t%d不是回文数", number);
                  }
                  else if(d1!=0){
                       System.out.printf("\n%d是1位数", number);
                       System.out.printf("\t%d是回文数", number);
                  }
              }
              else
                  System.out.printf("\n%d不在1至99999之间", number);
              System.out.printf("%n可继续输入整数，或输入非整数结束程序%n");
      }
        }     
        System.out.println("你输出的数据不是整数");
    }
}
