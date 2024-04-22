#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
unsigned char clip, bullet, spin;


void clearScreen(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

int main(){
    //calculations
    clip = 6;
    srand (time(NULL)); 
    bullet = rand() % (clip + 1 - 1) + 1; 
    
    //visual stuff
    clearScreen();

    printf("Game by Frag112\n");
    printf("You woke up in the dark room. Your body is tied to the chair, but you are free to use your hands.\n");
    printf("There is a %d rounded revolver on the desk in front of you. Strange voice comes from the other side of the desk.\n", clip);
    printf("- Lets us play some game. The rules are simple. If you win, I will let you go, if I win, I will take your soul!\n");
    
    //game loop
    while (true){
        printf("- Your turn!\nYou take the revolver and spin. Then, pull it to the forehead...\n");
        scanf("%d", &spin);
        if (spin == bullet){
            printf("You are DEAD!\n");
            break;
        }  else{
            printf("...Click! You put Revolver back on the desk.\n");
            printf("- My turn!\nThe monster grabs the revolver and spins. It pulls it to the forehead...\n");
            //srand (time(NULL)); 
            spin = rand() % (clip + 1 - 1) + 1;
            if (spin == bullet){
                printf("...BANG! Revolver drops back on the desk.\n");
                break; 
            } else {
                printf("...Hammer clicks.\n");
                spin = 0;   
            }
        }  

    }


   printf("Thanks for playing!"); 
    return 0;
}