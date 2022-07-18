package experiment;
class A {
    float a;         //声明一个实例float变量a
    static float b;         //声明一个static的float变量b
    void setA(float a) {
      this.a=a;      // 将参数a的值赋值给成员变量a
    }
    void setB(float b){
      A.b=b;      // 将参数b的值赋值给成员变量b
    }
    float getA( ) {
       return a;
    }
    float getB( ) {
       return b;
    }
    void inputA( ) {
       System.out.println(a);
    }
    static void inputB( ){
       System.out.println(b);
    }
}
public class Ex4_2 {
    public static void main(String args[ ]) {
       A.b=100;      // 通过类名操作类变量b，并赋值100
       A.inputB();      // 通过类名调用方法inputB( )
       A cat=new A( );
       A dog=new A( );
       cat.setA(200);     // cat调用方法setA(int a)将cat的成员a的值设置为200
       cat.setB(400);     // cat调用方法setB(int b)将cat的成员b的值设置为400
       dog.setA(200);    // dog调用方法setA(int a)将dog的成员a的值设置为200
       dog.setB(900);    // dog调用方法setB(int b)将dog的成员b的值设置为900
       cat.inputA();    // cat调用inputA( ) 
       A.inputB();     // cat调用inputB( ) 
       dog.inputA();   // dog调用inputA( ) 
       A.inputB();   // dog调用inputB( ) 
    }
}
