 /**
  * Program name: cis27Fall2023MichaelFigueiredoHw3Utility.c
  * Discussion:   struct & Functions
  * Written By:   Michael Figueiredo
  * Date:         2023/12/21
  */

#define _CRT_SECURE_NO_WARNINGS

 // Include/Header File(s)
#include <stdio.h>
#include <stdlib.h>
#include "FractionMichaelFigueiredo.h"
#include "PolyTermMichaelFigueiredo.h"
#include "PolyNodeMichaelFigueiredo.h"
#include "cis27Fall2023MichaelFigueiredoHw3Utility.h"

// Function Definitions
void displayClassInfoMF() {

    printf("\nWe write code to manipulate data (which are\n"
        "provided by the user) to produce the required\n"
        "outcome in the most efficient way!\n"
        "\nCIS 27 - Data Structures and Algorithms\n"
        "Laney College\n"
        "Michael Figueiredo\n"
        "\n"
        "Information --\n"
        "  Assignment:                      HW #3 Exercise #1\n"
        "  Implemented by:                  Michael Figueiredo\n"
        "  Required Submission Date:        2023/12/17\n"
        "  Actual Submission Date:          2023/12/21\n");
}

void updateMF(TdPolyAddrMF polyAddr) {
    int optionMF;
    TdPolyTermPtrMF termPtrMF = NULL;
    int termOrderMF;
    int termCountMF;

    do {
        printf("\n         **************************************"
            "\n         *          updateMF() SubMenu        *"
            "\n         * (1) Adding one term                *"
            "\n         * (2) Removing one term              *"
            "\n         * (3) Displaying updated Polynomial  *"
            "\n         * (4) Return                         *"
            "\n         **************************************"
            "\n         Enter an int for option + ENTER: ");
        scanf("%d", &optionMF);
  
        switch (optionMF) {
        case 1:
            if (*polyAddr) {
                printf("\n           Adding one term -\n");

                termPtrMF = createPolyTermMICHAELFIGUEIREDO ();
                addTermToPolyMF(termPtrMF, polyAddr);
            }
            else {
                printf("\n           Not appropriate as there is no polynomial!\n");
            }

            break;
        case 2:
            if (*polyAddr) {
                printf("\n           Removing one term!\n");

                printf("\n             Enter the order of the term to be removed: ");
                scanf("%d", &termOrderMF);

                removeOneTermFromPolyMF(termOrderMF, polyAddr);
            }
            else {
                printf("\n           Not appropriate as there is no polynomial!\n");
            }

            break;
        case 3:

            printPolyMF(*polyAddr);

            break;
        case 4:
            printf("\n         Return to previous menu!\n");

            break;
        default:
            printf("\n         Wrong Option!\n");
        }
    } while (optionMF != 4);
}

void initSubMenuMF(TdPolyAddrMF polyAddr1, TdPolyAddrMF polyAddr2) {
    int optionMF;
 
    do {
        printf("\n     ********************************"
          "\n     *        init() SubMenu        *"
          "\n     * (1) Creating 2 Polynomials   *"
          "\n     * (2) Updating Polynomial 1    *"
          "\n     * (3) Updating Polynomial 2    *"
          "\n     * (4) Displaying 2 Polynomials *"
          "\n     * (5) Return                   *"
          "\n     ********************************"
          "\n     Enter an int for option + ENTER: ");
        scanf("%d", &optionMF);

        switch (optionMF) {
        case 1:
            printf("\n     Creating 2 Polynomials -  \n");

            printf("\n       Calling createMF() - \n");

            printf("\n         Creating Poly #1 - \n");

            createNewPolyMF(polyAddr1);

            printf("\n         Creating Poly #2 - \n");

            createNewPolyMF(polyAddr2);

            break;
        case 2:

            if (!*polyAddr1) {

                printf("\n     Not appropriate as there are no Polynomials!\n");
            }
            else {
                printf("\n       Updating Polynomial #1 \n");

                updateMF(polyAddr1);
            }
            break;
        case 3:

            if (!*polyAddr2) {

                printf("\n     Not appropriate as there are no Polynomials!\n");

            }
            else {
                printf("\n       Updating Polynomial #2\n");

                updateMF(polyAddr2);
            }
            break;
        case 4:

            if (!*polyAddr1) {

                printf("\n     Wrong Option!\n");

            } else {

                printf("\n     Displaying 2 Polynomials -\n"
                    "\n       Poly #1 -\n");

                printPolyMF(*polyAddr1);

                printf("\n       Poly #2 -\n");

                printPolyMF(*polyAddr2);
            }
            break;
        case 5:
            printf("\n     Return to previous menu!\n");

            break;
        default:
            printf("\n     Wrong Option!\n");
        }
    } while (optionMF != 5);
}

void runMenuHw3MF() {

    int optionMF;
    int termCountMF;
    TdPolyNodePtrMF myPoly1MF = NULL;
    TdPolyNodePtrMF myPoly2MF = NULL;
    TdPolyNodePtrMF resultPtrMF = NULL;

    do {
        printf(
            "\n ***************************************"
            "\n *             Menu - HW #3            *"
            "\n * (1) Creating/Updating 2 Polynomials *"
            "\n * (2) Evaluating 2 Polynomials        *"
            "\n * (3) Checking for Palindrome         *"
            "\n * (4) Adding 2 Polynomials            *"
            "\n * (5) Multiplying 2 Polynomials       *"
            "\n * (6) Displaying 2 Polynomials        *"
            "\n * (7) Display Resulting Polynomial    *"
            "\n * (8) Quit                            *"
            "\n ***************************************"
            "\n Enter an int for option + ENTER: ");
        scanf("%d", &optionMF);

        switch (optionMF) {
        case 1:

            printf("\n   Initializing 2 Polynomials -\n"
                "\n     Calling init() -\n");

            initSubMenuMF(&myPoly1MF, &myPoly2MF);

            break;
        case 2:
            if (!myPoly1MF) {

                printf("\n   Not appropriate as there are no Polynomials!\n");
            }
            else {
                printf("\n   Evaluating Polynomials -\n");

              evaluateMF(myPoly1MF, myPoly2MF);

            }
            
            break;
        case 3:
            if (!myPoly1MF) {

                printf("\n       Not appropriate as there is no value for Poly #1!\n");
            } else {

                printf("\n   Checking Palindrome -\n");

                if (isPalindromeMF(myPoly1MF)) {

                    printf("\n     Poly #1 is a Palindrome!\n");
                }
                else {
                    printf("\n     Poly #1 is not a Palindrome!\n");
                }
            }

            if (!myPoly2MF) {

                printf("\n       Not appropriate as there is no value for Poly #2\n");
            }
            else {

                if (isPalindromeMF(myPoly2MF)) {
                    printf("\n     Poly #2 is a Palindrome!\n");
                }
                else {
                    printf("\n     Poly #2 is not a Palindrome!\n");
                }
            }
            break;
        case 4:

            if (!myPoly1MF) {

                printf("\n   Not appropriate as there are no Polynomials!\n");
            }
            else {
                printf("\n   Adding 2 Polynomials -\n");

                resultPtrMF = addMF(myPoly1MF, myPoly2MF);
                
            }
            break;
        case 5:
            if (!myPoly1MF) {

                printf("\n   Not appropriate as there are no Polynomials!\n");
            }
            else {
                printf("\n   Multiplying 2 Polynomials -\n");

                resultPtrMF = multiplyMF(myPoly1MF, myPoly2MF);

            }
            break;
        case 6:
            if (!myPoly1MF) {

                printf("\n   Not appropriate as there are no Polynomials!\n");
            }
            else {
                printf("\n   Displaying 2 Polynomials -\n"
                    "\n       Poly #1 -\n");
            
                printPolyMF(myPoly1MF);

                printf("\n       Poly #2 -\n");

                printPolyMF(myPoly2MF);

        }
            break;
        case 7:
            if (!myPoly1MF) {

                printf("\n   Not appropriate as there are no Polynomials!\n");
            }
            else {
                printf("\n   Displaying the Resulting Polynomial -\n");

                printPolyMF(resultPtrMF);
            }
            break;
        case 8:
            removePolyMF(&myPoly1MF);
            removePolyMF(&myPoly2MF);

            printf("\n   All objects have been removed/deleted through calls to free()!\n"
                "\n Have fun!");

            break;
        default:
            printf("\n Wrong Option!\n");
        }
    } while (optionMF != 8);

    if (myPoly1MF) {
        removePolyMF(&myPoly1MF);
        myPoly1MF = NULL;

        removePolyMF(&myPoly2MF);
        myPoly2MF = NULL;
    }
}
