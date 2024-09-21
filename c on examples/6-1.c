#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct user
{
    char login[50];
    char pswd[50];
    int active;
};
typedef struct user User;

void EnterLogin(char input[2][50]){
    printf("Please enter your login:");
    scanf("%s",input[0]);
    printf ("\nPlease enter your password:");
    scanf("%s",input[1]);
}
void UserAuth(int *userFound, char input[2][50], int n, struct user *usrPtr){ //User users[3]
    for (int i=0; i<n; ++i)
    {
        
        if (!strcmp(input[0], usrPtr[i].login)){
            *userFound = 1;
            if (!strcmp(input[1], usrPtr[i].pswd)){
                printf ("login successfull\nHello %s! Have a nice day!", usrPtr[i].login);
                usrPtr[i].active = 1;
            }else{
                printf ("\nPassword or Login is incorrect. Program will close.");
            }    
        }
    }
    if(!userFound){
        printf ("\nUser not found. Program will close.");
    }
}
void GetUsers(User userBase[], struct user *usrPtr){
    int userCount = 3;
    
    //usrPtr = (struct user*) malloc (userCount * sizeof(struct user));
    strcpy(usrPtr[0].login, "Frank"); //userBase[]
    strcpy(usrPtr[0].pswd, "ass");
    strcpy(usrPtr[1].login, "David");
    strcpy(usrPtr[1].pswd, "balls");  
    strcpy(usrPtr[2].login, "Eddie");
    strcpy(usrPtr[2].pswd, "horse");
}
int UserLogin(){
    int userFound = 0;
    struct user *usrPtr;
    
    User userBase[3];
    GetUsers(userBase, usrPtr);
    size_t baseSize = sizeof(userBase) / sizeof(userBase[0]);
    char input[2][50];
    EnterLogin(input);
    UserAuth(&userFound, input, baseSize, usrPtr);
    return userFound;
}
int main()
{   
    if (UserLogin()){
        printf ("\nYou are logged in");
    }
    return 0;
}



