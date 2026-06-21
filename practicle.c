#include<stdio.h>

// First practicle

// int main(){
//     int a=3;
//     float b=8.3;
//     double c=9.3324345;
//     char d='S';

//     printf("integer type of value a=%d\n",a);
//     printf("size of int:%zu bytes\n",sizeof(a));
//     printf("float type of value b=%f\n",b);
//     printf("size of float:%zu bytes\n",sizeof(b));
//     printf("double type of value b=%lf\n",c);
//     printf("size of double:%zu bytes\n",sizeof(c));
//     printf("charector type of value d=%c\n",d);
//     printf("size of char:%zu bytes\n",sizeof(d));

//     return 0;

// }

// Practicle No 02

// int main(){
//     int a=5,b=9;

//     // Arithmatic Operator

//     printf("Addition =%d\n",a+b);
//     printf("Subtraction =%d\n",a-b);
//     printf("Multiplication=%d\n",a*b);
//     printf("Division=%d\n",a/b);
//     printf("Moduls=%d\n",a%b);

//     // Relational Operator

//     printf("%d>%d is =%d\n",a,b,a>b);
//     printf("%d<%d is =%d\n",a,b,a<b);
//     printf("%d>=%d is =%d\n",a,b,a>=b);
//     printf("%d<=%d is =%d\n",a,b,a<=b);
//     printf("%d==%d is=%d\n",a,b,a==b);
//     printf("%d!=%d is=%d\n",a,b,a!=b);

//     // logical Operator

//     printf("(a==b)&&(a<b)=%d\n",(a==b)&&(a<b));
//     printf("(a<b)||(b<a)=%d\n",(a<b)||(b<a));
//     printf("!(a>b)=%d\n",!(a>b));

//     return 0;

// }

// Practicle No:03

// int main(){
//     int age;
//     printf("Enter your age");
//     scanf("%d",&age);
//     (age>=18)? printf("you can vote"):
//     printf("you can not vote");
     
//     return 0;
    
// }
 
// Practicle No:04

// int main(){
//     int a=5,b=8;
//     printf("Bitwise OR=%d\n",a | b);
//     printf("Bitwise AND = %d\n",a & b);
//     printf("Bitwise X OR = %d\n",a^b);
//     printf("Bitwise COMPLIMENT= %d\n",~a);
//     printf("Bitwise Right shift = %d\n",a>>2);
//     printf("Bitwise Left shift = %d\n",b<<2);

//     return 0;
// }

// Practicle No:05

// int main(){
//     int a,b,result;
//     printf("Enter any two number");
//     scanf("%d %d",&a,&b);

//     printf("result=%d\n",a=b);
//     printf("result=%d\n",a+=b);
//     printf("result=%d\n",a-=b);
//     printf("result=%d\n",a*=b);
//     printf("result=%d\n",a/=b);
//     printf("result=%d\n",a%=b);

//     return 0;
// }

// Practicle No:06

// int main(){
//     int day;
//     printf("Enter the day 1 to 7 =");
//     scanf("%d",&day);

//     switch(day){
//         case 1:
//         printf("sunday");
//         break;
//         case 2:
//         printf("monday");
//         break;
//         case 3:
//         printf("tuesday");
//         break;
//         case 4:
//         printf("wednesday");
//         break;
//         case 5:
//         printf("thursday");
//         break;
//         case 6:
//         printf("friday");
//         break;
//         case 7:
//         printf("saturday");
//         break;
//     }

//     return 0;

// }

// int main(){
//     for(int i=1;i<=5;i++){
//         printf("%d\n",i);
//     }
//     printf("next line ___\n");

//     int j=1;
//     while(j<=10){
//         printf("%d\n",j);
//         j++;
//     }
    
//     printf("next line __\n");

//     int k=1;
//     do{
//         printf("%d\n",k);
//         k++;
//     }while(k>=100);

    
//}

// int main(){
//     int age=12;
//     if(age>=18){
//         printf("you can vote");
//     }else{
//         printf("you can not abele for voteing");
//     }
// }

// Practicle No :07
// int factorial(int n);
// int main(){
//     unsigned long  long fact =1;
//     int n;
//     printf("enter any number");
//     scanf("%d",n);
//     if(n<0){
//         printf("factorial can not be done ");
//     }
//     else{
//         for(int i=1;i<=n;i++){
//             fact=fact*i;

//         }
//     }
//     printf("factorial=%llu",fact);

//     return 0;

// }

// Practicle NO :08
// int sum(int a);
// int main(){
//     int n,result;
//     printf("enter any number ");
//     scanf("%d",&n);
//     result=sum(n);
//     printf("sum of digits in %d is %d\n",n,result);

//     return 0;
// int sum(int n)
// {
//     if(n!=0){
//         return (n%10+sum(n/10));
//     }
//     else{
//         return 0;
//     }
// }

// }

// Practical No:09

// int main(){
//     int a,b;
//     printf("enter 1 for addition\n , 2 for subtaction\n,3 for multiplication \n,4 for division \n,5 for moduls");
//     printf("enter the value of a and b");
//     scanf("%d %d",&a,&b);
//     int op;
//     printf("select any numbe 1 to 5");
//     scanf("%d",&op);
//     switch(op){
//         case 1:
//         printf("addition of a+b =%d\n",a+b);
//         break;
//         case 2:
//         printf("subtraction a-b=%d\n",a-b);
//         break;
//         case 3:
//         printf("multiplication a*b=%d\n",a*b);
//         break;
//         case 4:
//         printf("division a/b=%d\n",a/b);
//         break;
        
//         default:
//         printf("enter currect option ");
//     }
//     return 0;
// }


// #define pi 3.1416
// int main(){
//     float base,height,redius,side;
//     float triangle_area,circle_area,square_area;

//     // Area of triangle
//     printf("enter base of triangle: ");
//     scanf("%f",&base);
//     printf("enter height of triangle: ");
//     scanf("%f",&height);
//     triangle_area=0.5 * base * height ;
//     printf("area of triangle :%.2f \n",triangle_area);

//     // Area of circle 
//     printf("enter redius of circle: ");
//     scanf("%f",&redius);
//     circle_area=pi * redius * redius ;
//     printf("area of triangle :%.2f \n",circle_area);

//     // Area of square 
//     printf("enter the side of square: ");
//     scanf("%f",&side);
//     square_area=side * side;
//     printf("area of square:%.2f \n",square_area);


//     return 0;

// }

// int main(){
//     int a=2,b=3;
//     char op='+';
//     switch(op){
//         case '-':
//         printf("a-b =%d",a-b);
//         break;
//         case '+':
//         printf("a+b=%d \n",a+b);
//         break;
//         case'*':
//         printf("a*b=%d \n",a*b);
//         break;
//         default:("a/b=%d \n",a/b);
//     }
//     return 0;

// }

// int factorial(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;
// }

// int main(){
//     int num;
//     printf("enter a number: ");
//     scanf("%d",&num);

//     if(num<0){
//         printf("factorial is not defined for negative numbers.\n");
//     }else{
//         int result =factorial(num);
//         printf("factorial of %d =%d",num,result);
//     }
//     return 0;
// }

// find the area and perimeter of Rectangle 

// int main(){
//     float length,width, area, perimeter;

//     printf("enter the length of rectangle: ");
//     scanf("%f",&length);

//     printf("enter the width of rectangle: ");
//     scanf("%f",&width);

//     area=length * width;
//     perimeter=2 *(length+width);

//     printf("area of Rectangle  is =%.2f \n",area);
//     printf("perimeter of Rectangle is =%.2f \n",perimeter);

//     return 0;
// }