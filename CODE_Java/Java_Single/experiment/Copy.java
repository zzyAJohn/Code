//定义一个一维数组，使用System.arraycopy（）方法，将其复制到另外一个数组中，并输出两个数组的内容。
package experiment;
import java.util.*;

public class Copy {
    public static void main(String args[]) {
        int a[]= {1,2,3,4};
        int b[];
        b=new int[4];
        System.arraycopy(a,0,b,0,a.length);
        System.out.println(Arrays.toString(a));
        System.out.println(Arrays.toString(b));
        
    }
}
