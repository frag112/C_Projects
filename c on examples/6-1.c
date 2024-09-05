#include <stdio.h>
#include <string.h>
struct user
{
    char login[50];
    char pswd[50];
    int active;
};
void EnterLogin(char (*input)[]){
    printf("Please enter your login:");
    scanf("%s",*input[0]);
    printf ("\nPlease enter your password:");
    scanf("%s",(*input)[1]);
    //return 0;
}
int UserLogin(){
    char input[2][50];
    EnterLogin(input);
    printf("%s", input[0]);
}


void UserAuth(char inputs[2]){
    int userFound = 0;
printf("%s", &inputs[0]);
   /* for (int i=0; i<n; ++i)
    {
        
        if (!strcmp(&inputs[0], &base[i]->login)){
            userFound = 1;
            if (!strcmp(inputs[1], base[i]->pswd)){
                printf ("login successfull\nHello %s! Have a nice day!", base[i]->login);
                base[i]->active = 1;
            }else{
                printf ("\nPassword is incorrect. Program will close.");
            }    
        }
    }
    if(!userFound){
        printf ("\nUser not found. Program will close.");
    }*/
}

int main()
{   
    struct user userBase [3];
    strcpy(userBase[0].login, "Frank");
    strcpy(userBase[0].pswd, "ass");
    strcpy(userBase[1].login, "David");
    strcpy(userBase[1].pswd, "balls");  
    strcpy(userBase[2].login, "Eddie");
    strcpy(userBase[2].pswd, "horse");
    size_t baseSize = sizeof(userBase) / sizeof(userBase[0]);

    UserLogin();
    //login func calls input func
    // input passes to database check
    // if k then user specific action
    // make it clean code
    //UserAuth(&inputs);
    return 0;
}



