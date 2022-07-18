package experiment;

import java.util.Calendar;
import java.util.Scanner;
public class ex9_3 {
    public static void main(String[] args) {
        //创建Scanner类实例
        Scanner sc = new Scanner(System.in);
        //获取当前时间
        Calendar calendar1 = Calendar.getInstance();
        //第一个日期输入
        System.out.println("第一个日期");
        System.out.print("请输入年：");
        int y1 = sc.nextInt();

        System.out.print("请输入月：");
        int m1 = sc.nextInt();

        System.out.print("请输入日：");
        int d1 = sc.nextInt();

        System.out.println("日期为：" + y1 + "年" + m1 + "月" + d1 + "日");
        //把用户录入的时间传入到calendar1中
        calendar1.set(y1, m1, d1);

        //第二个日期的输入
        Calendar calendar2 = Calendar.getInstance();
        System.out.println("第二个日期");
        System.out.print("请输入年：");
        int y2 = sc.nextInt();

        System.out.print("请输入月：");
        int m2 = sc.nextInt();
        //将int型数值转换为字符串
        String m = String.valueOf(m2);

        System.out.print("请输入日：");
        int d2 = sc.nextInt();

        System.out.println("日期为：" + y2 + "年" + m2 + "月" + d2 + "日");
        //把用户录入的时间传入到calendar2中
        calendar2.set(y2, m2, d2);

        //将日期转换为以毫秒为单位的时间
        long t1 = calendar1.getTimeInMillis();
        long t2 = calendar2.getTimeInMillis();
        //判断两个日期的大小
        if(t1>t2)
            System.out.println("第一个日期大");
        else
            System.out.println("第二个日期大");

        //计算两个日期之间的间隔
        long day = Math.abs(t1 - t2) / (24 * 60 * 60 * 1000);
        System.out.println(y1 + "年" + m1 + "月" + d1 + "日" + "与" + y2 + "年" + m + "月" + d2 + "日" + "相隔" + day + "天");
    }
}
