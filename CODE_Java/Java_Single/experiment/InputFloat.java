//从键盘输入数据，编写一个应用程序，用户从键盘输入一个浮点数据，程序将输出这个数的平方和三次方。
package experiment;
import java.util.*;
public class InputFloat {
    public static void main(String args[]) {
        double a,b,c;
        try (Scanner reader = new Scanner(System.in)) {
            System.out.println("从键盘输入一个浮点数");
            a=reader.nextDouble();   	// reader调用方法读取用户从键盘输入的数据，并赋值给a
        }     
        b=a*a;
        c=a*a*a;
       System.out.println(b); 		// 输出b
       System.out.println(c); 		// 输出c 
    }
}
