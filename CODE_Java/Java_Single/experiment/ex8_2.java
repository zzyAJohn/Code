package experiment;
/*编程实现异常处理，在try语句块中抛出一个带字符串参数的异常类Exception的对象；
然后再catch语句块中捕捉异常，
并输出刚才输入的那个字符串参数，最后加入finally语句块，
在其中执行一些打印操作。*/

public class ex8_2 {
    public static void main(String[] args) {
        
        try {
            throw new Exception("我是一个异常");
     }
     catch(Exception e) {
        System.out.println("我是catch,输出异常信息："+e.getMessage());
     }
     finally{
          System.out.println("我是finally,异常抛出成功");
     }
    }
}