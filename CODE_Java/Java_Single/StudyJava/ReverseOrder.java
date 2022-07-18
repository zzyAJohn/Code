package StudyJava;
import java.util.Scanner;

public class ReverseOrder {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int number;
            number =in.nextInt();
            int result=0;
            System.out.println("请输入一个整数:");
            while(number>0) {
                int digit = number%10;
                result=result*10+digit;
                number=number/10;
            }
            System.out.println(result);
        }
    }
    
}
