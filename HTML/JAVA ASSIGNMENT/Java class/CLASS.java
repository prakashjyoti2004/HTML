import java.util.*;
class CLASS{
    public static void main(String[]args){

// Scanner sc = new Scanner(System.in);
// int year = sc.nextInt();
// if (year % 4==0){
//     System.out.print("leap year");
// }
// else{
//     System.out.print("not a leap year");
// }}}



int n = 4;

// for(int i=1;i<n+1;i++){
//         for(int j=1;j<=n-i+1;j++){
//             System.out.print("*");}       
//         System.out.println();
//     }


  for (int i = 0 ;i<n;i++){

    for(int j =0;j<n;j++){
        if(i>j){
            System.out.print(" ");
        }
        else{
            System.out.print("* ");
        }
       
    }
   System.out.println();
  }
    }}


