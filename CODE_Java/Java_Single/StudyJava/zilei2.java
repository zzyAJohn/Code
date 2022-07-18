package StudyJava;

class Circle
{
    final double pi=3.14;
    double r;
    Circle(double r){this.r=r;}
    void getArea(){System.out.println(pi*r*r);}
}

class Cylinder extends Circle
{
    double h;//高
    Cylinder(double r,double h){super(r);this.h=h;}
    void getArea(){System.out.println(2*pi*r*h+2*pi*r*r);}
    void getVolume(){System.out.println(pi*r*r*h);}
}


public class zilei2 {
public static void main(String[] args) {
    Circle ci=new Circle(3);
    ci.getArea();
    Cylinder cy=new Cylinder(5,3);
    cy.getVolume();
    }
}