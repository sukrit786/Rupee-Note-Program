import java.util.*;
class apples
{
    public static void main(String args[])
    {
        String str = new String();
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        System.out.println(str.trim().replaceAll("\\s+",""));
    }
}