import java.util.*;
class Divide_number{
	public static void main(String[]args){
//         Scanner sc = new Scanner(System.in);
//         int Number = sc.nextInt();
//                                                                             if (Number % 5 == 0){
//             System.out.print(Number + " is divisible by 5");
//         }
//         else{
//             System.out.print(Number + " is not divisible by 5");
//         }      

// }
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
int x = 0;
int Sum = 0;
while(n>0){
       x = n%10;
       n = n/10;
       Sum = Sum + x;    
}
System.out.print(Sum);
 }}


