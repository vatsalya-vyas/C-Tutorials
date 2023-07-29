#include <stdio.h> // No argument and no return value
void sum();        // Function declaration
int main()
{
    sum(); // Functon Call
    return 0;
}
void sum() // Function definition
{
    int a, b, c;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    c = a + b;
    printf("The Sum of Two Number is : %d", c);
}

// // #include <stdio.h> //No Argument and a return value
// // int sum();         // Function Declaration
// // int main()
// // {
// //     int s; // Function Calling
// //     s = sum();
// //     printf("The Sum of Two numbers is : %d", s);

// //     return 0;
// // }

// // int sum()
// // { // Function Definition
// //     int a, b, c;
// //     printf("Enter First Number : ");
// //     scanf("%d", &a);
// //     printf("Enter Second Number : ");
// //     scanf("%d", &b);
// //     c = a + b;
// //     return c;
// // }

// // #include <stdio.h>  //Argument and no return value
// // void sum(int, int); // Function Declaration
// // int main()
// // {
// //     int m,n;

// //     sum(m, n);

// //     return 0;
// // }
// // void sum(int, int)
// // { // Function Definition
// //     int a, b, c;
// //     printf("Enter a First no : ");
// //     scanf("%d", &a);
// //     printf("Enter a Second no : ");
// //     scanf("%d", &b);
// //     c = a + b;
// //     printf("Addition : %d", c);
// // }

// #include <stdio.h> //Argument and a return value
// int sum(int,int); //Function Declaration
// int main()
// {
//     int m,n,s;
//     s=sum(m,n);
//     printf("The sum is : %d",s); //Function Calling

// return 0;
// }

// int sum(int,int){ //Function Definiton
// int a,b,c;
// printf("Enter First Value : ");
// scanf("%d",&a);
// printf("Enter Second Value : ");
// scanf("%d",&b);
// c=a+b;
// return c;
// }