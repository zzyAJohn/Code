// final int pi=3;
package StudyJava;

class Circle
{
    double R;
    Circle(double r){R=r;}
    double S(){return 3.14*R*R;}
}

public class lei {
    public static void main(String arg[]) {
        Circle cir=new Circle(2);
        System.out.println("圆的面积是:"+cir.S());
    }
    
}
