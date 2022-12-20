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
        ans.a=(num1.a*num2.a-num2.a*num2.b);
        ans.b=(num1.a*num2.b+num2.a*num1.b);
        printf("The product is: \n %d+i%d", &ans.a, &ans.b);
        break;

    case '/':
        ans.a= (num1.a*num2.a+num1.b*num2.b)/(num2.a*num2.a+num2.b*num2.b);
        ans.b=(num1.b*num2.a-num1.a*num2.b)/(num2.a*num2.a+num2.b*num2.b);
        printf("The quotient is: \n %d+i%d",&ans.a,&ans.b);
        break;
    default:
        printf("The input is invalid");
    }
    
    char fin[];
    printf("In what format do you want the answer(k,p1,p2):\n");
    scanf("%c", fin);
    double radius;
    radius=sqr(ans.a*ans.a+ans.b);
    double w;
    w= 1/ tan(ans.b/ans.a);
    double theo;
    theo=cos(w);
    double leo;
    leo= sin(w);
    double mia;
    mia= cos(w)
    double nina;
    nina= sin(w);
    double exp(double mia+nina);

    if( fin==k){
        printf("The result is:\n %d%d",&ans.a,&ans.b);
    }
    else(fin==p2){
        printf("The result is: \n %d*(%d+i%d)",&radius,&theo,&leo);
    }
    else(fin==p1){
        printf("The result is: \n %d*%d",&radius,&exp);
    }
}
