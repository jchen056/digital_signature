// header files add functioality to the c programs
#include <stdio.h>  // input and output functions
#include <string.h> //many useful string functions
/*
Every C statement ends with a semicolon;
*/

/*Variable declaration
- def: containers for storing data values, like numbers and characters
- types: int, float(decimals), char(characters, single codes)
- declaraction: type variableName = value;
- the value of a variable can be overwritten
- format specifier: used together with the printf() function to tell the compiler what type of data the variable is storing
starts with a percentage sign %, followed by a character.
for int variable, do %d or %i;
for float variable, do "%d";
for bool variables, do "%d";
for char variable, do "%c";
for long unsigned int, do "%lu", (print the result of sizeof operator)
*/

/*Data Types
- data types: int, float, double, char, bool
- type conversion: (1)implicit conversion (automatically); (2)explicit conversion(manually)
implicit conversion: float myFloat=0; //automatically converts the int value 9 to a float value of 9.000000
explicit conversion: placing the type in parentheses () in front of the value; (float)5
*/

/*Constant: const
unchangeable and read-only
recommeneded: declare const variables with uppercase
*/

/*Operators
arimetic operators: +,-,*,/,%, ++(increment),--(decrement)
comparison operators: ==, !=, >,<,>=,<=
logical operators: &&, ||, !
sizeof operator: the memory size(in bytes) of a data type
*/

/*if else
ternary operator: short hand for if else
variable = (condition) ? expressionTrue : expressionFalse;
*/

/*Arrays
- def: store multiple values in a single variable
- array creation: data type+name of array+[]={,,,}
- access an array element by using index number
- not able to change the size of the array after creation
*/

/*String functions
- strlen(): return the length of the string
- sizeof(): the size of a string/array
- strcat(str1, str2): concatenate str2 to str1, result is stored in str1
- strcpy(str2, str1): cope the value of one string to another, copy str1 to st2
- strcmp(str1, str2): return 0 if two strings are equal
*/

/*user input-scanf()
- limitations: it considers space (whitespace, tabs, etc) as a terminating character
ex. scanf("%d", &myNum);
scanf("%d %c", &myNum, &myChar);
scanf("%s", firstName);

fgets() function to read a line of text
- fgets(fullName, sizeof(fullName), stdin);
*/

/*Functions
- def: function is a block of code which only runs when it is called. You can pass data, known as parameters, into a function.
- function declaration: returnType functionName(paramter1, parameter2, parameter3){//code to be executed}
- function declaration and definition:
Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)
*/
void myFunc1()
{
    printf("Finally got to create my function!\n");
}
void myGreetingFunc(char name[])
{
    printf("Hello %s\n", name);
}
int myAdditionFunc(int x, int y)
{
    return x + y;
}
int myNum = 15;
const float myFloat = 20; // myFloat will always by 20
int day = 1;
int myDays[] = {1, 2, 3, 4, 5, 6, 7};
char greetings[] = "Nice to meet you!"; // C does not have a String type to easily create string variables.
char fName[30];
char lName[30];

int main()
{
    // printf() function does not insert a new line at the end of the output
    printf("Hello, JC!\n");
    printf("I am learning how to use c\n");
    printf("%s\n", greetings);

    /*printf(myNum);
    //Nothing happens; to output the value of variables, needs to learn about format specifiers*/
    printf("%f", myNum + myFloat);

    if (myFloat > myNum)
    {
        printf("myFloat is greater than myNum\n");
    }
    else if (myFloat == myNum)
    {
        printf("myFloat is the same as myNum\n");
    }
    else
    {
        printf("myFloat is less than myNum\n");
    }
    (myNum > 0) ? printf("myNum is pos\n") : printf("myNum is neg\n"); // ternary statement

    // switch statement
    switch (day)
    {
    case 1:
        printf("Mon\n");
        break;
    case 2:
        printf("Tues\n");
        break;
    case 3:
        printf("Wedn\n");
        break;
    case 4:
        printf("Thur\n");
        break;
    case 5:
        printf("Fri\n");
        break;
    case 6:
        printf("Sat\n");
        break;
    case 7:
        printf("Sun\n");
        break;
    default:
        printf("Not a valid day\n");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", i);
    }

    // printf("type your first name:\n");
    // scanf("%s", fName);
    // printf("type your last name:\n");
    // scanf("%s", lName);
    // printf("Hello, %s %s \n", fName, lName);

    myFunc1();
    myGreetingFunc("Lily");
    printf("The result of 5+6 is %i\n", myAdditionFunc(5, 6));
    return 0;
}