#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int enterPin(int, int);//user inputs PIN number separated by spaces
int verifyPin(int);//function to check if the PINS match
int validatePin(int);//function to check if PIN violates zero starter rule



int userResponse = 0;



int main()
{



    do {
        system("CLS");
        printf("\n\t-*-*-*-PIN Verification Program-*-*-*-\n");
        printf("1\tEnter PIN\n");
        printf("2\tPINS Match\n");
        printf("3\tCheck to see if PIN does not start with a 0\n");
        printf("4\tExit\n");
        scanf_s("%d", &userResponse);



        switch (userResponse)
        {
        case 1:

            int iPin[6] = { 0, 0, 0, 0, 0, 0 };
            int iSpin[6] = { 0, 0, 0 ,0, 0, 0 };



            printf("\nPlease enter a SIX digit PIN separated by spaces: \n");
            scanf_s("%d %d %d %d %d %d", &iPin[0], &iPin[1], &iPin[2], &iPin[3], &iPin[4], &iPin[5]);



            printf("\nThe pin you entered is %d %d %d %d %d %d \n", iPin[0], iPin[1], iPin[2], iPin[3], iPin[4], iPin[5]);



            printf("\nEnter a second SIX digit PIN separated by spaces: \n");
            scanf_s("%d %d %d %d %d %d", &iSpin[0], &iSpin[1], &iSpin[2], &iSpin[3], &iSpin[4], &iSpin[5]);



            printf("\nThe second PIN you entered was: %d %d %d %d %d %d \n", iSpin[0], iSpin[1], iSpin[2], iSpin[3], iSpin[4], iSpin[5]);




        }
    } while (userResponse != 4);







    return 0;
}