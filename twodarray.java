
import java.util.*;
public class twodarray{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
       int rows = sc.nextInt();
       int columns = sc.nextInt();
       int[][] number = new int[rows][columns];
       for(int i =0;i<rows;i++)
       {
        for(int j =0;j<columns;j++)
        {
            number[i][j] = sc.nextInt();
        }
        
       }
       for(int i =0;i<rows;i++)
       {
        for(int j =0;j<columns;j++)
        {
           if(number[i][j] == 3)
           {
            System.out.print("Element found at location ("+ i +","+ j +")");
           }
        }
        
       }
    
}
}

