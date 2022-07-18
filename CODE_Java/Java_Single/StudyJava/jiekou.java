package StudyJava;

interface Printable {
    /*public static final*/ int Max=100;
    /*public abstract*/ int add(int a,int b);
}

class A implements Printable {
    public int add(int a,int b) {
        return a+b;
    }
}

class B implements Printable {
    public int add(int a, int b) {
        return a+b+b;
    }
}

public class jiekou {
    public static void main(String[] args) {
        Printable p;
        p=new A();
        System.out.println(p.add(2, 3));
        p=new B();
        System.out.println(p.add(2,3));
    }
    
}
