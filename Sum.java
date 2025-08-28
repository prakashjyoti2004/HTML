// import java.util.Scanner;

// public class Sum {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         int sum = 0;

//         for (int i = 0; i <= n; i++) {
//             sum += i;
//         }

//         System.out.println("Sum of numbers from 0 to " + n + " is: " + sum);
//     }
// }

//             Scanner sc = new Scanner(System.in);
//             int n = sc.nextInt();

//             int fact = 0;
//             for(int i=0;i<n+1;i++){
//                 if(n%i==0){
//                     fact++;
//                 }
//             }
//             if (fact > 2){
//             System.out.print(n + " is not a prime number.");
//             } 
//             else{
//             System.out.print(n + " is a prime number.");
//             }
//     }
// }



//    int arr[3][3]={{1,2,3},{3,4,5},{4,5,6}};
//    for (int i =0;i<arr.lenth;i++){
//     for(int j=0;j<arr[i].length){
//         if(arr[i][j]==0){
//             System.out.print("Even"+arr[i][j]);
//         }
//         else{System.out.print("Odd"+arr[i][j]);
//         }
//     }
//    }



//  int arr[3][3]={
//     {1,2,3},
//     {3,4,5},
//     {4,5,6}};
//    for (int i =0;i<arr.lenth;i++){
//     for(int j=0;j<arr[i].length;j++){
//         System.out.print(arr[j][i]);
//     }
//        } 
       
//        }
//        }


import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
         int[][]arr = {
            {1, 2, 3},
            {3, 4, 5},
            {4, 5, 6}
        };

     int x =sc.nextInt();
     for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if (arr[i][j]==x){
                 System.out.println("x is present at"+i+","+j);   
                }
            }
    }
}}
       