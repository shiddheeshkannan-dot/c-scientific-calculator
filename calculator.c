#include <stdio.h>
#include <math.h>


float add(float a,float b){
    return a+b;
}
float subtract(float a,float b){
    return a-b;
}
float multiply(float a,float b){
    return a*b;
}
float divide(float a,float b){
    return a/b;
}
float modulus(float a,float b){
    return fmod(a,b);
}
float power(float a,float b){
    return pow(a,b);
}

int main(){
    char op;
    float num1,num2,result;
    printf("Enter the mathematical operator using[+,-,*,/,%%,^]:");
    scanf(" %c",&op);
    if(op == '^'){
        printf("Enter the value of Number :");
        scanf("%f",&num1);
         printf("Enter the value of power:");
        scanf("%f",&num2);
    }
    else{
         printf("Enter the value of Number 1:");
        scanf("%f",&num1);
         printf("Enter the value of Number2 :");
        scanf("%f",&num2);
    }
    if(op=='+'){
        result=(add(num1,num2));
    }
    else if(op=='-'){
        result=(subtract(num1,num2));
    }
    else if(op=='*'){
        result=(multiply(num1,num2));
    }
    else if (op == '/') { 
        if (num2 == 0) {
            printf("Error: Cannot divide by zero.\n"); return 1; 
        }
        result = divide(num1, num2); 
    }
    else if(op=='%'){
        result=(modulus(num1,num2));
    }
    else if(op=='^'){
        result=(power(num1,num2));
    }
    else{
        printf("Invalid Operator");
        result = 0 ;
    }
    printf("%.2f",result);
    return 0 ; 
}
