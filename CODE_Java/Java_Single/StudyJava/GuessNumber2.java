package StudyJava;

import java.util.Scanner;

public class GuessNumber2 {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            int number = (int)(Math.random()*100+1);
            int a;
            int count = 0;
            System.out.println("请输入一个1~100的整数:");
            do {
                a=in.nextInt();
                count++;
                if(a>number) {
                    System.out.println("偏大");
                }
                else if(a<number) {
                    System.out.println("偏小");
                }
            } while(a!=number);
            System.out.println("猜对了,"+count+"次");
        }
    }
}