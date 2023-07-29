// #include<stdio.h> //Switch Statement Using integers

// int main(){
//     int student;
//     printf("Enter any Roll number from 1-5 to know the Student name : ");
//     scanf("%d",&student);
//     switch(student){
//         case 1 :printf("Student Name : Ram\n");
//         break;
//         case 2 :printf("Student Name : Shayam\n");
//         break;
//         case 3 :printf("Student Name : Hari\n");
//         break;
//         case 4 :printf("Student Name : Gopal\n");
//         break;
//         case 5 :printf("Student Name : Radha\n");
//         break;

//         default : printf("Student does not exists\n");
//     }
//         printf("Thankyou !");
//     return 0;
// }

// #include<stdio.h> //Switch Statement Using Integers

// int main() {
// int day;
// printf("Enter Weekday number from 1 to 7 : ");
// scanf("%d",&day);
// switch(day) {
// case 1 : printf("The Day is : Monday \n");
// break;
// case 2 : printf("The Day is : Tuesday \n");
// break;
// case 3 : printf("The Day is : Wednesday \n");
// break;
// case 4 : printf("The Day is : Thursday \n");
// break;
// case 5 : printf("The Day is : Friday \n");
// break;
// case 6 : printf("The Day is : Saturday \n");
// break;
// case 7 : printf("The Day is : Sunday \n");
// break;

// }
// return 0;
// }

#include <stdio.h>

int main()
{
    char day = 'S';
    switch (day)
    {
    case 'm':
        printf("monday \n");
        break;
    case 't':
        printf("tuesday \n");
        break;
    case 'w':
        printf("wednesday \n");
        break;
    case 'T':
        printf("thursday \n");
        break;
    case 'f':
        printf("friday \n");
        break;
    case 's':
        printf("saturday \n");
        break;
    case 'S':
        printf("sunday \n");
        break;
    }
    return 0;
}