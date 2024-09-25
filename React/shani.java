public class shani{
    public static void update(int arr[], int n){
        System.out.println("Inside the Update function");
        for(int i = 0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
    }
public static void main(String[] args){
    int arr[] = {1,2,3};
    update(arr,3);
    System.out.println("Inside main function");
    
}



}