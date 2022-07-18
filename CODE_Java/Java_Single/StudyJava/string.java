package StudyJava;

public class string {
    public static void main(String[] args) {
        // Scanner in =new Scanner(System.in);
        String s1="123";
                // 0 1 2 3 4 5 6 7 8 9
        for(int i=0;i<s1.length();i++)
        {
            System.out.println(s1.charAt(i));
        }
        System.out.println(s1.substring(2, 7));
        int loc=s1.indexOf('6');
        System.out.println(s1.indexOf('7', loc+1));
    }
}
