#include <unistd.h>
#include <stdio.h>
 
// A simple atoi() function
int myAtoi(char* str)
{
    // Initialize result
    int res = 0;
    int i = 0;
 
    // Iterate through all characters
    // of input string and update result
    // take ASCII character of corresponding digit and
    // subtract the code from '0' to get numerical
    // value and multiply res by 10 to shuffle
    // digits left to update running total

    while(str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9') {
		res = res * 10 + str[i] - '0';
		i++;
}
}

    //for (int i = 0; str[i] != '\0'; ++i)
    //    res = res * 10 + str[i] - '0';
 
    // return result.
    return res;
}
 
// Driver code
int main(int argc, char *argv[])
{
    char *strparam, *cx, *cy;

    strparam = argv[3];
    cx = argv[1];
    cx = argv[2];
   
    // Function call
    int val = myAtoi(strparam);
    printf("val value = %d, x coord: %d, y coord: %d", val, myAtoi(cx), myAtoi(cy));
    return 0;
}
