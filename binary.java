import java.util.*;
public class binary {
    public static void main(String[] args)
    {
     Scanner sc = new Scanner(System.in);
     int opr = sc.nextInt();
      int n =  5; //0101
      int pos = 2;
      int bitMask = 1<<pos;
      if(opr==1) //bitmask 0010
      {
         int newNum = bitMask | n;
         System.out.print(newNum);
      } 
      else
      {
        int newBitMask = ~(bitMask); //1101
        int newNum = newBitMask & n; //1101 & 0101
        System.out.print(newNum);
      }

    }

}

