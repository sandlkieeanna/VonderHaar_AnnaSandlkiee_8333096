#include <stdio.h>

struct complex
{
    double a;
    double b;
} num1, num2;
void add (struct complex num1, struct complex num2);
main(){
    char opt;

    printf("Please enter your first complex number: \n");
    scanf("%d%d", &num1.a, &num1.b);

    printf("Please choose one of the following operator: + / - * \n");
    scanf("%c", &opt);

    printf("Please enter your second complex number:\n");
    scanf("%d%d", &num2.a, &num2.b);

    add(num1, num2);
}
void add( struct complex num1, struct complex num2){
struct complex ans;
    switch (opt)
    {
    case '+':
        ans.a= num1.a+num1.a;
        ans.b= num2.b+ num2.b;
        printf(" The sum is:\n %d+i%d",&ans.a,&ans.b);
        break;
    
    case '-':
        ans.a= num1.a-num1.a;
        ans.b= num2.b-num2.b;
        printf(" The diffenence is:\n %d+i%d",&ans.a,&ans.b);
        break;

    case '*':
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
