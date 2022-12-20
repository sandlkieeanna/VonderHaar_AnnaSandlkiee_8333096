#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include "tr.h"

struct complex{
    double real;
    double img;
}
 main(){
    struct complex num1,num2,result;
    char opt;
    // double num1;
    // double num2;
    // double result;

    printf("Please enter an operator: \n");
    scanf ("%c",&opt);

    printf("Please enter your first number: \n");
    scanf("%lf%lf",&num1.real,&num1.img);

    printf("Please enter your second number: \n");
    scanf("%lf%lf",&num2.real,&num2.img);
    double wonder();
    switch (opt){
    case '+':
        result.real= num1.real+num2.real;
        result.img= num1.img+num2.img;
        printf("The result: %lf+i%lf", result.real,result.img);
        break;
    case '-':
        result.real= num1.real-num2.real;
        result.img= num1.img-num2.img;
        printf("The result: %lf+i%lf", result.real,result.img);
        break;
    case '*':
        result.real= (num1.real*num2.real-num1.img*num2.img);
        result.img= (num1.real*num2.img+num1.img*num2.real);
        printf("The result: %lf+i%lf", result.real,result.img);
        break;
    case '/':
        result.real= (num1.real*num2.real+num1.img*num2.img)/(num2.real*num2.real+num2.img*num2.img);
        result.img= (num1.img/num2.real-num1.real*num2.img)/(num2.real*num2.real+num2.img*num2.img);
        printf("The result: %lf+i%lf", result.real,result.img);
        break;
    
    default:
        printf("please enter a valid operator, thx!");
        break;
    }

    char format;
    printf("If you want to change the format, please enter one (k,p,e):");
    scanf("%c",&format);
    double radius;
    radius=sqrt(result.real*result.real+result.img);
    double w;
    w= 1/ tan(result.img/result.real);
    double theo;
    theo=cos(w);
    double leo;
    leo= sin(w);
    double mia;
    mia= cos(w);
    double nina;
    nina= sin(w);
    double maya= mia+nina;
    double exp(double maya);

    switch (format)
    {
     case 'k':
        printf("The result is:\n %d%d",&result.real,&result.img);        
        break;
    case 'p':
        printf("The result is: \n %d*(%d+i%d)",&radius,&theo,&leo);
        break;
    case 'e':
        printf("The result is: \n %d*%d",&radius,&exp);
        break;
    default:
        printf("Thank you, have a nice day!");
        break;
    }

}
