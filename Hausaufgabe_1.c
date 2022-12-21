#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    char eingabe_1[22];
    char *ptr;
    char opt;
    double result_real, result_img;

    printf("Please enter an operator: \n");
    scanf ("%c",&opt);

    printf("Please enter your first number: \n");
    scanf("%s",&eingabe_1);

    double num1_real= strtod(eingabe_1,&ptr);
    printf("Real number: %f:\n",num1_real);

    double num1_img = strtod(ptr, NULL);
    printf("Imganary number: %f\n", num1_img);


    char eingabe_2[22];
    char *str;

    printf("\nPlease enter your first number: \n");
    scanf("%s",&eingabe_2);

    double num2_real= strtod(eingabe_2,&str);
    printf("Real number: %f:\n",num2_real);

    double num2_img = strtod(str, NULL);
    printf("Imganary number: %f\n", num2_img);


    switch (opt){
    case '+':
        result_real= num1_real+num2_real;
        result_img= num1_img+num2_img;
        printf("The result: %lf+i%lf", result_real,result_img);
        break;
    case '-':
        result_real= num1_real-num2_real;
        result_img= num1_img-num2_img;
        printf("The result: %lf+i%lf", result_real,result_img);
        break;
    case '*':
        result_real= (num1_real*num2_real-num1_img*num2_img);
        result_img= (num1_real*num2_img+num1_img*num2_real);
        printf("The result: %lf+i%lf", result_real,result_img);
        break;
    case '/':
        result_real= (num1_real*num2_real+num1_img*num2_img)/(num2_real*num2_real+num2_img*num2_img);
        result_img= (num1_img/num2_real-num1_real*num2_img)/(num2_real*num2_real+num2_img*num2_img);
        printf("The result: %lf+i%lf", result_real,result_img);
        break;
    
    default:
        printf("please enter a valid operator, thx!");
        break;
    }

    char fot;
    printf("\nPlease enter your prefered format (k,p,e): \n");
    scanf(" %c",&fot);
 
     double radius;
     radius=sqrt(result_real*result_real+result_img+result_img);
     double winkel;
     winkel= 1/ tan(result_img/result_real);

     double theo;
     theo=cos(winkel);

     double leo;
     leo= sin(winkel);

     double maya= theo+leo;
     double exp(double maya);
    

     switch (fot)
     {
      case 'k':
         printf("The result: %lf+i%lf", result_real,result_img);     
         break;
     case 'p':
         printf("The result is: \n %lf*(%lf+i%lf)",radius,theo,leo);
         break;
     case 'e':
         printf("The result is: \n %lf*%lf",radius,exp);
         break;
     default:
         printf("Thank you, have a nice day!");
         break;
     }
}

