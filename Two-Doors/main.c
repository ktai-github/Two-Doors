//
//  main.c
//  Two doors
//
//  Created by Kevin T on 2017-10-08.
//  Copyright © 2017 Kevin T. All rights reserved.
//

#include <stdio.h>

//main function of the program returning integer
int main(int argc, const char * argv[]) {
    
    //character for user to enter choice to play
    char play;
    
    //integer for user to enter choice of door
    int choice;
    
    //character for user to enter choice to play again
    char playagain;
    
    //integer to let the user keep playing if value is 1
    int i = 1;
    
    //ask user to play
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    
    //take input from user to play or not
    scanf("%c", &play);
    
    do {
        
        //go through the game if user play
        if (play == 'y') {
            
            //print game message
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
            printf("What do you ask so you can pick the door to freedom?\n\n");
            printf("\t1.Ask the truth-guard to point to the door of doom.\n");
            printf("\t2.Ask the liar-guard to point to the door of doom.\n");
            printf("\t3.Doesn't matter which one you pick.\n");
            printf("Please select 1/2/3..\n\n");
            
            //take input from user for choice of door
            scanf("%d", &choice);
            
            //print a message after choice of door and determine and print the user's choice
            char answer[150] = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
            switch (choice) {
                case 1:
                    printf("You selected 1. %s", answer);
                    break;
                case 2:
                    printf("You selected 2. %s", answer);
                    break;
                case 3:
                    printf("You selected 3. %s", answer);
                    break;
                default:
                    break;
            }
            
            //ask user to play again and take input from user on choice to play again
            printf("Would you like to play again? (y/n): ");
            scanf(" %c", &playagain);
            
            //set i to 0 to exit loop if user does not play again
            if (playagain == 'n') {
                i = 0;
            }
        }
        
        //exit program by returning integer for main program if user initially choose not to play
        else if (play == 'n') {
            return 1;
        }
    
    //keep playing the game
    }while (i == 1);
    
    //exit the program by returning integer for main program when user choose not to play again
    return 1;
}
