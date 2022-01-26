/* For example, res[i] = arr1[0]*arr2[n-1].......arr1[n-1]
                then add all elements that are present in the array
*/
import java.util.Scanner;

public class firstLastMulSum{
    static int SumOfPro(int arr1[], int arr2[], int n){
         if(n == 0){
             return -1;
         }
         int f=0;
         int res[] = new int[n];
          for(int i=0 ; i<n; i++){
              res[i] = arr1[i]*arr2[n-i-1];
          }
          for(int i=0 ; i<n ; i++){
              f += res[i]; 
          }
          return f;
    }
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr1[] = new int[n];
        int arr2[] = new int[n];
        for(int i=0 ; i<n ; i++){
            arr1[i] = sc.nextInt();
        }
        for(int i=0 ; i<n ; i++){
            arr2[i] = sc.nextInt();
        }
        int res = SumOfPro(arr1,arr2,n);
        System.out.println(res);
    }
}