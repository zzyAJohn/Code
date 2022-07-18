package experiment;
public class Rational {
    int numerator,denominator;
    Rational(){}
    Rational(int a,int b){
       setNumeratorAndDenominator(a,b);
    }
    void setNumeratorAndDenominator(int a,int b){  //设置分子和分母
       int c=f(Math.abs(a),Math.abs(b));           //计算最大公约数
       numerator=a/c;
       denominator=b/c;
       if(numerator<0&&denominator<0){
           numerator=-numerator;
           denominator=-denominator;
       }
    }
   int getNumerator() {
       return numerator;
   }
   int getDenominator() {
       return denominator;
   }  
   int f(int a,int b){   //求a和b的最大公约数
       if(a<b){
          int c=a;
          a=b;
          b=c; 
       }
       int r=a%b;
       while(r!=0){
          a=b;
          b=r;
          r=a%b;
       } 
       return b;
    }
    Rational add(Rational r) {
       int a=r.getNumerator();
       int b=r.getDenominator();
       int newNumerator=numerator*b+denominator*a;
       int newDenominator=denominator*b;
       Rational result=new Rational(newNumerator,newDenominator);
       return result;
    }
    Rational sub(Rational r) {
       int a=r.getNumerator();
       int b=r.getDenominator();
       int newNumerator=numerator*b-denominator*a;
       int newDenominator=denominator*b;
       Rational result=new Rational(newNumerator,newDenominator);
       return result;
    }
    Rational muti(Rational r) {
       int a=r.getNumerator();
       int b=r.getDenominator();
       int newNumerator=numerator*a;
       int newDenominator=denominator*b;
       Rational result=new Rational(newNumerator,newDenominator);
       return result;
    }
    Rational div(Rational r) {
       int a=r.getNumerator();
       int b=r.getDenominator();
       int newNumerator=numerator*b;
       int newDenominator=denominator*a;
       Rational result=new Rational(newNumerator,newDenominator);
       return result;
    }
}
