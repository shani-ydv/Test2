import java.util.*;
public class stringbuilder {
    public static void main(String[] args)
    {
        StringBuilder sb = new StringBuilder("Shani");
        System.out.println(sb);
        System.out.println(sb.charAt(0));
        sb.setCharAt(0, 'F');
        System.out.println(sb);
        sb.insert(0,'G');
        System.out.println(sb);


    }

}
