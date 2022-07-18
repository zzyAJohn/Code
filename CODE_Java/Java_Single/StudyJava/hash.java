package StudyJava;

import java.util.ArrayList;
import java.util.HashSet;

public class hash {
    public static void main(String[] args) {
        ArrayList<String> a = new ArrayList<>();
        a.add("first");
        a.add("second");
        a.add("first");
        System.out.println(a);
        HashSet<String> s = new HashSet<>();//集合不重复，且无序
        s.add("first");
        s.add("second");
        s.add("first");
        System.out.println(s);
    }
    
}
