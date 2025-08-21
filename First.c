 #include<stdio.h>
//  int main(){
//     int x;
//     scanf("%d",&x); 
//     if(x%3==0)
//     printf("ttt")

     
//  }

// int main(){
//    for(int i = 0 ; i <= 100 ; i++){
//       printf("%d\n",i);
//    }
//    return 0;
// }

// 6. Profit and Loss 


// 7. Check Divisibility 
// int main(){
//    int a;
//    scanf("%d",&a);
//    if (a%3==0 || a%5==0)
//      printf("Divisible");
//    else printf("nd");
//    return(0);

// }

// 9. Perfect Square  


// #### *Number Theory & Special Numbers*  
// 10. Factorial Number  
// 11. Palindrome Number  
// 12. Armstrong Number  
// 13. Prime number  
// prime number up to n

// print factorial of all number up to n

// reverse-of-given-number

// sum of given number and its reverse


// 14. Strong Number  
// 15. Spy Number ( sum of digit && product of digit are same )

//     int main(){
//         int n,prod;
//         scanf("%d",&n);
//         for(int i=1;i<=n;i++){
//             prod = 1;
//             for(int j = 1;j<=i;j++){
//                 prod = prod * j;
//                 printf("%d",j);
//                 if(i>j) printf(" * ");

//             }
//             printf("= %d",prod);
//             printf("\n");

//             }
// return 0;
//     }




//     int main(){
//         int n;
//         scanf("%d",&n);
//         for(int i=0;i<=n;i++){
//             for(int j = 0;j<=i;j++){
//                 printf("%c",i+97);

//             }
//         printf("\n");}
            
// return 0;
//     }

    //  int main(){
    //     int n;
    //     scanf("%d",&n);
    //     int arr[n];
        
    //     for(int i=0;i<n;i++){
    //         scanf("%d",&arr[i]);
    //     }
    //     int x = arr[0];
    //     for(int i=0;i<n;i++){
            
    //         for(int j=0;j<n;j++){
    //             arr[i] = arr[i + 1];

    //         }
    //         arr[n] = x;


    //     }
    //     for(int i=0;i<n;i++){
    //         printf("%d ",arr[i]);
    //     }
    //     return 0;
    //  }

//      int main(){
//         int n;
//         scanf("%d",&n);
//         int arr[n];
//         for(int i=0;i<n;i++){
//             scanf("%d",&arr[i]);}
//         int x = arr[0];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//             arr[i]=arr[i+1];}
//         arr[n]=x;}
//         for(int i=0;i<n;i++){
//            printf("%d ",arr[i]);}
// return 0;
//         }


    // int main(){
    //     int n,sum;
    //     scanf("%d",&n);
    //     sum = 0;
    //     for (int i=0;i<n+1;i++){
          
    //         sum = sum + i;
    //     }
    //     printf("%d",sum);
    //     return 0;
    // }
    
    // int main(){
    //     int n,r = 0,m;
    //     scanf("%d",&n);
    //     while(n!= 0){
    //         m = n%10;
    //         r = 10*r + m;
    //         n = n /10;
    //     }
    //     printf("%d",r);
    //     return 0;
    // }

    // int main(){
    //     int m,p;
    //     scanf("%d",&m);
    //     if(m < 0) printf("hbfuh");
    //     if(m == 0) printf("Not a prime");
    //     for(int i=2;i<m;i++){
    //         if(m % i == 0){
    //         printf(" n prime no.");
    //         return 0;
    //     }
            
    //     }
    //     printf("pornhub");
    //     return 0;

    // }
    //  int main(){
    //     int n;
    //     scanf("%d",&n);
    //     int arr[n];
        
    //     int r[n];
    //     for(int i=0;i<n;i++){
    //         scanf("%d",&arr[i]);
    //     }
        // for(int i = 0;i < n;i++){
        //     r[i] = arr[n - 1 - i];
        // }
     


        
        int array( int i,int arr[],int n){

            for(int i = 0 ; i < n ; i++){
                if(i == n/2) return arr[i];
                int temp = arr[i];
                arr[i] = arr[n - i - 1];
                arr[n - i - 1] = temp;
            }
            array(i+1,arr,n-2);

        }
        int main(){
            int n;
            scanf("%d",&n);

            int arr[n];
            for(int i = 0 ; i < n ; i++){
                scanf("%d",&arr[i]);
            }

            array(0,arr,n);

            for(int i = 0 ; i < n; i++){
                printf("%d ",arr[i]);
            }


           return 0;

        }
        