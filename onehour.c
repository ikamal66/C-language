#include <stdio.h>

int main(){

    printf("\n\nHello world \n\n\n");




    const int i = 7;  // if we use const in code the the value is fix i.e. the value of i is fix here that is 7 if we use the value i=8 the compilar show the error


    // use these for the add comments in a code
    /*
    use this type of of comment for multi-comments
    */
   int a1 = 7;  // 2 to 4 bytes 
   unsigned short integer  = 8;  // 2 bytes 
long integer1 = 8; // 4 bytes 
short integer2 =8; // 2 bytes

float b1 = 8.09;    // 4 bytes 4 decimal 
double myfloat1 = 7.45;    // 8 bytes 15 decimal
long double myfloat2 = 7.133232909; // 10 bytes 19 decimal

int KamalAge;
 KamalAge = 18;
 char five ='A';
 
 // Arithmetic operators 
int a=20;   // int a = 20, b=30,c=40;
int b = 30 ;
int c = 40;
printf("The sum  of a and b is %d\n",a+b);
printf("The multiple  of a and b is %d\n",a*b);
printf("The divisor  of a and b is %d\n",a/b);
printf("The difference of a and b is %d\n",a-b);
printf("The modulo of a and b is %d\n",a%b);
printf("The increment  of a  is %d\n",++a);
printf("The decrement  of b is %d\n\n\n",--b);

// Relational operators
int harry = 9 , rohan = 45;
printf("%d\n",harry==rohan); // <=  is ke andar greater wala sign pehele aata hai
printf("%d\n",harry!=rohan); // != is ke andar ! ye wala sign pehle aata hai
printf("%d\n",harry>rohan);
printf("%d\n",harry<rohan);
printf("%d\n",harry>=rohan);
printf("%d\n\n\n",harry<=rohan);


// Logical operator 
int d = 0 , e  = 1 ;
printf("The logical operator return %d\n",d && e);
printf("The logical operator return %d\n",d || e);
printf("The logical operator return %d\n",!d);
printf("The logical operator return %d\n\n\n",!e);

// Bitwise operator 
// A = 60 , B = 13;
// A = 00111100    //convert  into a binary number 
// B = 00001101
// R = 00001100

int A =60 , B = 13;  // C is a case sensitive language we use a in small letter above that A in a capital letter
printf("Bitwise and operator returned %d\n", A & B);
printf("Bitwise and operator returned %d\n", A | B);
printf("Bitwise and operator returned %d\n", A ^ B);  // ^ that is XOR operator
printf("Bitwise and operator returned %d\n", ~B);
printf("Bitwise and operator returned %d\n", ~A);
printf("Bitwise and operator returned %d\n", A<<B);
printf("Bitwise and operator returned %d\n\n\n", A>>B);


// I dont know about witwise operator search on a youtube 


// Assignment operator

int C = 7;
C += 7;
printf("C is %d\n",C);

int D = 7;
D = 7;
printf("D is %d\n",D);

int E = 7;
E -= 7;
printf("E is %d\n",E);

int F = 7;
F *= 7;
printf("F is %d\n",F);

int G = 7;
G %= 7;
printf("G  is %d\n",G);

int H = 7;
H /= 7;
printf("H is %d\n\n\n",H);


// Miscellaneous operators
//   &,  -,  *,  ?:

// printf("********* TAKING INPUT FROM USER IN C  **********\n\n");
// float harryInput;
// printf("please enter the value of harryInput \n");
// scanf("%f",&harryInput);
// printf(" You Entered %f as harryInput\n\n", (float) harryInput);

// int num1,num2;
// printf("Enter the num1 and num2 \n");
// scanf("%d", &num1);
// scanf("%d",&num2);
// printf(" num1/num2 is %d\n\n",num1/num2);

// The above code  do uncomment , this is commented for below code 


printf("*********** DECISION MAKING IN C ************\n\n ");
// int age;
// printf("Enter the age \n");
// scanf("%d",&age);

// if (age<18)
// {
//     printf("You cannot drive");
// }
// else if (age>=18 && age<=70)
// {
//     printf("You can drive but drive carefully");
// }
// else 
// {
//     printf("You cannot drive");
// }

// int i4=age > 3 ? 100:200;       // short hand if else
// printf("%d",14);

printf("******* Loops in c ********");
// int index = 0;
// while (index < 10)
// {
//     printf("%d\n",index);
//     index++;
// }
// for(int j=0; j<67; j++)
// {
//     printf("%d\n",j);
// }
// do
// {
//    printf("do while loop is running"); /* code */
// } while ( j>65656);

























    return 0;
}