#include<cstdio>
int main() {
    char userInput[100];
    //prompt user
    printf("Enter to get desired output : ");
    //read the input
    scanf("%99s",userInput);
    //printing user input
    printf("You entered : %s/n",userInput);
    return 0;
}


//note -> for multiline or multiword string this process will not work


//scanf("%[^\n]s", userInput);, but this approach is generally discouraged because it doesn't prevent buffer overflow and doesn't provide a clear way to handle multi-word input properly.