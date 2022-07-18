package experiment;

class Errorclass1 extends Exception {
    Errorclass1(String s) {
        super(s);
    }
}

class Errorclass2 extends Exception {
    Errorclass2(String s) {
        super(s);
    }
}

class A {
    static void f2() throws Errorclass2 {
        throw new Errorclass2("异常1");
    }
    void f1() throws Errorclass1 {
        try {
            f2();
        } catch (Errorclass2 e) {
            System.out.println(e.getMessage());
            throw new Errorclass1("异常2");
        }
    }
}

public class ex8_4 {
    public static void main(String []args) {
        A a = new A();
        try {
            a.f1();
        } catch (Errorclass1 e) {
            System.out.println(e.getMessage());
        }
        finally {
            System.out.println("执行已成功！");
        }
    }
}