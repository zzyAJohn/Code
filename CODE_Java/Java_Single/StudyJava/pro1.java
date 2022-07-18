package StudyJava;

public class pro1 {
    public static void main(String[] args) {
        int total=0;
        int sum[]=new int[11];
        sum[0]=1;
        for(int i=1;i<=10;i++) {
            sum[i]=sum[i-1]*i;
            total+=sum[i];
        }
        System.out.println(total);
    }
    
}
