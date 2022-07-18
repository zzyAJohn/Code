package experiment;

class ex8_1{
    public static void main(String[] args) {
       try{
            int a=3,b=0;
             System.out.println(a=a/b);
    }
    catch(ArithmeticException e){
       System.out.println("捕捉到一个算术异常");
    }
    catch(Exception e){
       System.out.println("捕捉到一个一般异常");
    }
    finally{
       System.out.println("程序结束");
    }
    }
}