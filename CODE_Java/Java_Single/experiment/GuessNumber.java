/*（1）	猜数字
     编写一个Java应用程序，实现如下功能
●	随机分配给客户一个1-100之间的整数。
●	用户从键盘输入自己的猜测。
●	程序返回提示信息，提示信息分别是“猜大了”，“猜小了”，“猜对了”。
●	用户可根据提示信息再次输入预测，指导提示信息是“猜对了”。*/

package experiment;
import java.util.*;

public class GuessNumber {
    public static void main (String args[ ]) {
    	
           System.out.println("给你一个1至100之间的整数,请猜测这个数");
           int realNumber=(int)(Math.random()*100)+1;
           int yourGuess=0;
           try (Scanner reader = new Scanner(System.in)) {
            System.out.println("输入您的猜测:");
              yourGuess = reader.nextInt();
              
               while (yourGuess != realNumber){  	// 循环条件
                if (yourGuess > realNumber){     	// 条件代码
                     System.out.println("猜大了,请再猜:");
                     yourGuess = reader.nextInt(); 	// reader调用方法获取用户从键盘键入的整数，并赋值给yourGuess
                  }
                  else if(yourGuess < realNumber){  	// 条件代码
                      System.out.println("猜小了,请再猜:");
                      yourGuess = reader.nextInt();  // reader调用方法获取用户从键盘键入的整数，并赋值给yourGuess
                  }
               }
        }     
           System.out.println("猜对了!");
    }
}
