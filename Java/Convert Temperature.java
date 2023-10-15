//convert temperatures from celsius to fahrenheit(Input using Scanner Class)
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int c=sc.nextInt(),f;
        f=(c*9/5)+32;
        System.out.print(f);
    }
}
