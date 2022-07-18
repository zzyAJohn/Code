package experiment;

abstract class Printable
{
    abstract void printItMyWay();
    abstract void printItMyWay(char c);
}

class Rectangle extends Printable
{
    double length,wide;
    public Rectangle(double length,double wide)
    {
        this.length=length;
        this.wide=wide;
    }
    void printItMyWay()
    {
        System.out.println("矩形的长为："+length);
        System.out.println("矩形的宽为："+wide);
    }
    void printItMyWay(char c)
    {
        for(int i=0;i<wide;i++)
        {
            for(int j=0;j<length;j++)
            System.out.print(c);
            System.out.println();
        }
    }
}

public class ex6_3 {
    public static void main(String[] args) {
        Rectangle r=new Rectangle(10,4);
        r.printItMyWay();
        r.printItMyWay('*');
    }
    
}
