#include<stdio.h>
//-Batınay Ünsel

int sum(int a, int b){ 
    return a+b;
}

int dif(int a, int b){ 
    return a-b;
}

int mult(int a, int b){ 
    return a*b;
}

int div(int a, int b){ 
    return a/b;
}

int func(int a, int b){ 
    return 2*a*a +a + b -5;
}

int addThree(int a){
    return a+3;

}

void Ali(int age){
    printf("Hello my name is Ali and i am %d years old\n", age);
}

void main(){
    int a = 5;
    int b = 3;
    int result;

    result = sum(a,b);
    printf("The sum of %d and %d is: %d\n" ,a,b,result);

    result = dif(a,b);
    printf("The difference of %d and %d is: %d\n" ,a,b,result);

    result = mult(a,b);
    printf("The mutliplication of %d and %d is: %d\n" ,a,b,result);

    result = div(a,b);
    printf("The division of %d and %d is: %d\n" ,a,b,result);

    result = func(a,b);
    printf("the result of the expression 2.%d.%d + %d + %d - 5 is : %d\n", a,a,a,b,result);


    a = addThree(a);
    printf("The new value is %d\n", a);

    b = addThree(b);
    printf("the new value is %d", b);






}