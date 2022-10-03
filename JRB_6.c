
// 1. Write a program to calculate sum of first N natural numbers

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i, num, sum = 0;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//         {
//             sum = sum + i;
//         }
//         printf("sum of first %d number is %d " , num, sum);
//         return 0;
// }

// 2. Write a program to calculate sum of first N even natural numbers
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i, sum = 0, num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     for (i = 1; i <= num;i++)
//     {
//         sum = sum + 2 * i;
//     }
//     printf("sum of first %d even natural number is %d ", num, sum);
//     return 0;
// }
// 3. Write a program to calculate sum of first N odd natural numbers
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,num, sum = 0;
//     printf("Enter a Number ");
//     scanf("%d", &num);
//     for (i = 1; i <= num;i++)
//     {
//         sum = sum + 2*i-1;

//     }

//     printf("Sum of first %d natural number is %d  ", num, sum);
//    return 0;
// }
// 4. Write a program to calculate sum of squares of first N natural numbers

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i, sum = 0, num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     for ( i = 1; i <=num; i++)
//     {
//         sum = sum + i * i;
//     }
//     printf("sum of squar of first %d natural number is %d ", num, sum);


//     return 0;
// }

// 5. Write a program to calculate sum of cubes of first N natural numbers

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i, s, num;
//     printf("Enter a number ");
//     scanf("%d", &num);
//     for (i = 1; i <= num;i++)
//     {
//         s =  s + i * i * i;

//     }
//     printf("sum of cubes of first %d natural number is %d ", num, s);

//     return 0;
// }

// 6. Write a program to calculate factorial of a number
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i, s = 1, num;
//     printf("Enter a Number to calculate factorial ");
//     scanf("%d",&num);
//     for ( i =1; i <=num ; i++)
//     {
//         s = s * i;

//     }

//     printf("The factorial of %d is %d",num, s);
//     return 0;
// }

// 7. Write a program to count digits in a given number

// #include<stdio.h>
// #include<conio.h>
// int main()
// {

//     int num , i, count =0;
//     printf("Enter a Number ");
//     scanf("%d", &num);
// while(num!=0)
// {
//     num = num / 10;
//     count++;
// }
// printf(" %d digit ", count);
// return 0;
// }

// 8. Write a program to check whether a given number is a Prime number or not
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i, num;
//     printf("Enter a number ");
//     scanf("%d", &num);

//     for (i = 2; i < num;i++)
//     {
//         if (num%i==0)
//         break;
//     }
    
//         if (i==num)
//             printf("%d is prime number ", num);
//         else
//              printf("%d is not Prime Number ", num);
//         return 0;
// }




// 9. Write a program to calculate LCM of two numbers
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// int a ,b ,L;
//     printf("Enter two Numbers ");
//     scanf("%d%d",&a,&b);
//     for(L=1;L<=(a*b);L++)
//     {
//         if (L%a==0 && L%b==0)
//          break; 
//     };

//     printf("LCM is %d",L);
    


// return 0 ;
// } 


// //  10. Write a program to reverse a given number
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,r, num;
//     printf("Enter A Number ");
//     scanf("%d", &num);
// while (num!=0)
// {
//     r = num % 10;
//     printf("%d", r);
//     num = num / 10;
// }

//     return 0;
// }