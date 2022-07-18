package experiment;


class Point
{
    final double pi=3.14;
    protected double x,y;
    public Point(){}
    public Point(double x,double y)
    {
        this.x=x;
        this.y=y;
    }
    public void setXY(double x,double y)
    {
        this.x=x;
        this.y=y;
    }
    public double getX()
    {
        return x;
    }
    public double getY()
    {
        return y;
    }
}

class Circle extends Point implements jiekou
{
    protected double r;
    public Circle(){}
    public Circle(double x,double y,double r)
    {
        super(x,y);
        this.r=r;
    }
    public void setR(double r)
    {
        this.r=r;
    }
    public double getR()
    {
        return r;
    }
    public double getArea()
    {
        return pi*r*r;
    }
}

class Cylinder extends Circle
{
    protected double h;
    public Cylinder(){}
    public Cylinder(double x,double y,double r,double h)
    {
        super(x,y,r);
        this.h=h;
    }
    public void setH(double h)
    {
        this.h=h;
    }
    public double getH()
    {
        return h;
    }
    public double getVolume()
    {
        return pi*r*r*h;
    }
    public void show(Cylinder c)
    {
        System.out.println("轴心位置："+"("+c.getX()+","+c.getY()+")");
        System.out.println("半径："+c.getR());
        System.out.println("高："+c.getH());
        System.out.println("体积："+c.getVolume());
    }
}

public class ex6_2 {
    public static void main(String[] args) {
        Cylinder c1=new Cylinder(0,0,2,5);
        Cylinder c2=new Cylinder(20,20,5,4);
        Cylinder c3=new Cylinder(-5,-6,4,2);
        c1.show(c1);
        c2.show(c2);
        c3.show(c3);
    }
}
