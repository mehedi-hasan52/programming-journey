#include <stdio.h>
#include <stdbool.h>

int main(){
    //variable is a reusable container for value
    // it behaves as if it were the value it contains 
    /*there are four types of data in C 
    1. int = whole numbers (4 bytes in modern systems)
    2. char = single character (1 byte)
    3. float = single-precision decimal numbers (4 bytes)
    4. double = double-precision decimal numbers (8 bytes)
    5. str = char[]= array of characters (size varies)
    6. bool = true or false(1 byte, requires <stdbool.h>)
    and theres also string and boolian 
    as char can only store a single character we need to use str when needed
    */

    int age = 19;
    int year = 2007;
    int quantity = 5;
    float gpa = 4.56;
    float cgpa = 3.40;
    double pi = 3.141592653589793;
    // char quote = 't';
    char quote[] = "'the darker the night, the brighter the stars'";
    // bool isOnline = true;  //true = 1 , false = 0
    bool isOnline = false;  //true = 1 , false = 0
    
    
    // printf("i'm %d years old\n", age);
    // printf("i was born in %d\n", year);
    // printf("i have %d books\n", quantity);
    // printf("my ssc gpa was %.2f\n",gpa);
    // printf("my 1st semester cgpa was %.2f\n", cgpa);
    // printf("the value of pi is %.15lf\n", pi);
    printf("the poet said,%s\n", quote);
    // printf("%d", isOnline);


    return 0;
}