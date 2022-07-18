package experiment;
public class Computer {
    public static void main(String args[]) {
      Rational r1; 
      r1=new Rational(1,5);//创建分子、分母分别为1和5的有理数r1
      Rational r2;
      r2=new Rational(3,2);//创建分子、分母分别为3和2的有理数r2
      Rational result=r1.add(r2);  //r1调用方法和r2做加法运算
      int a= result.getNumerator(); // result调用方法返回自己的分子
      int b=result.getDenominator();  // result调用方法返回自己的分母
      double p=a;
      double q=b;  
      double doubleResult=p/q;
      System.out.print("分数"+r1.getNumerator()+"/"+r1.getDenominator()); 
      System.out.print("与分数"+r2.getNumerator()+"/"+r2.getDenominator()+"的和等于"); 
      System.out.println(a+"/"+b+" = "+doubleResult);
      System.out.print("分数"+r1.getNumerator()+"/"+r1.getDenominator());
      System.out.print("与分数"+r2.getNumerator()+"/"+r2.getDenominator()+"的积等于");  
      result = r1.muti(r2);
      System.out.println(result.getNumerator()+"/"+result.getDenominator());
     }
}
