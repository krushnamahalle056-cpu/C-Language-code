#include<stdio.h>

// First practicle 

// int main(){
//     int a=5;
//     float b=7.5;
//     double c=6.8;
//     char d='S';

//     printf("integer type of value is a=%d\n",a);
//     printf("size of int:%zu bytes\n", sizeof(a));
//     printf("float type of value is b=%f\n",b);
//     printf("size of float:%zu bytes\n", sizeof(b));
//     printf("double type of value is c=%lf\n",c);
//     printf("size of double:%zu\n",sizeof(c));
//     printf("char type of value is d=%c\n",d);
//     printf("size of char:%zu\n",sizeof(d));    
//     return 0;
// }

// Second practicle

int main(){
    int a=2,b=6,c;

    //Arithmatic operater

    c=a+b;
    printf("addition=%d\n",c);
    c=a-b;
    printf("subtraction=%d\n",c);
    c=a*b;
    printf("multiplication=%d\n",c);
    c=b/a;
    printf("division=%d\n",c);
    c=b%a;
    printf("moduls=%d\n",c);

    //Relational operators program 

    printf("%d>%d is %d\n",a,b,a>b);
    printf("%d<%d is %d\n",a,b,a<b);
    printf("%d>=%d is %d\n",a,b,a>=b);
    printf("%d<=%d is %d\n",a,b,a<=b);
    printf("%d==%d is %d\n",a,b,a==b);
    printf("%d!=%d is %d\n",a,b,a!=b);

    // Logical Operator program 

    c=(a==b)&&(a>b);
    printf("(a==b)&&(a>b) is %d\n",c);
    c=(a<b)||(b>a);
    printf("(a<b)||(b>a) is %d\n",c);
    c=!(a>b);
    printf("!(a>b) is %d\n",c);



    return 0;

}

// third experment



