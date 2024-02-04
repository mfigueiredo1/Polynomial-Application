/**
 * Program name: cis27Fall2023MichaelFigueiredoHw3.c
 * Discussion:   HW #3 Application Driver
 * Written By:   Michael Figueiredo
 * Date:         2023/12/21
 */
 
 #define _CRT_SECURE_NO_WARNINGS

 // Include/Header Files
#include <stdio.h>
#include <stdlib.h>
#include "cis27Fall2023MichaelFigueiredoHw3Utility.h"
#include "fractionMichaelFigueiredo.h"
#include "polyTermMichaelFigueiredo.h"
#include "polyNodeMichaelFigueiredo.h"
#include "polyNodeUtilityMichaelFigueiredo.h"

// Function Definitions 
 int main() {

	 displayClassInfoMF();

	 runMenuHw3MF();

	 return 0;
 }
 
 /*PROGRAM OUTPUT
 We write code to manipulate data (which are
provided by the user) to produce the required
outcome in the most efficient way!

CIS 27 - Data Structures and Algorithms
Laney College
Michael Figueiredo

Information --
  Assignment:                      HW #3 Exercise #1
  Implemented by:                  Michael Figueiredo
  Required Submission Date:        2023/12/17
  Actual Submission Date:          2023/12/21

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 9

 Wrong Option!

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 6

   Not appropriate as there are no Polynomials!

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 1

   Initializing 2 Polynomials -

     Calling init() -

     ********************************
     *        init() SubMenu        *
     * (1) Creating 2 Polynomials   *
     * (2) Updating Polynomial 1    *
     * (3) Updating Polynomial 2    *
     * (4) Displaying 2 Polynomials *
     * (5) Return                   *
     ********************************
     Enter an int for option + ENTER: 4

     Wrong Option!

     ********************************
     *        init() SubMenu        *
     * (1) Creating 2 Polynomials   *
     * (2) Updating Polynomial 1    *
     * (3) Updating Polynomial 2    *
     * (4) Displaying 2 Polynomials *
     * (5) Return                   *
     ********************************
     Enter an int for option + ENTER: 2

     Not appropriate as there are no Polynomials!

     ********************************
     *        init() SubMenu        *
     * (1) Creating 2 Polynomials   *
     * (2) Updating Polynomial 1    *
     * (3) Updating Polynomial 2    *
     * (4) Displaying 2 Polynomials *
     * (5) Return                   *
     ********************************
     Enter an int for option + ENTER: 1

     Creating 2 Polynomials -

       Calling createMF() -

         Creating Poly #1 -

           Is there a term (1 : Yes, 0 : No)? 1
             Enter expo: 3
             Creating Coeff Fraction:
               Enter num: 1
               Enter denom: 4

           Is there a term (1 : Yes, 0 : No)? 1
             Enter expo: 0
             Creating Coeff Fraction:
               Enter num: 1
               Enter denom: -2

           Is there a term (1 : Yes, 0 : No)? 0

         Creating Poly #2 -

           Is there a term (1 : Yes, 0 : No)? 1
             Enter expo: 4
             Creating Coeff Fraction:
               Enter num: 1
               Enter denom: 2

           Is there a term (1 : Yes, 0 : No)? 1
             Enter expo: 2
             Creating Coeff Fraction:
               Enter num: 1
               Enter denom: -3

           Is there a term (1 : Yes, 0 : No)? 1
             Enter expo: 0
             Creating Coeff Fraction:
               Enter num: 1
               Enter denom: 2

           Is there a term (1 : Yes, 0 : No)? 0

     ********************************
     *        init() SubMenu        *
     * (1) Creating 2 Polynomials   *
     * (2) Updating Polynomial 1    *
     * (3) Updating Polynomial 2    *
     * (4) Displaying 2 Polynomials *
     * (5) Return                   *
     ********************************
     Enter an int for option + ENTER: 4

     Displaying 2 Polynomials -

       Poly #1 -

         Address: 000001BEDD5101C0
         Degree: 3
         Number of Terms: 2

         Term #1 -
           Address: 000001BEDD510800
           Expo: 3
           Coefficient -
             Address: 000001BEDD510804
             num: 1
             denom: 4

         Term #2 -
           Address: 000001BEDD5100D0
           Expo: 0
           Coefficient -
             Address: 000001BEDD5100D4
             num: -1
             denom: 2

       Poly #2 -

         Address: 000001BEDD5104E0
         Degree: 4
         Number of Terms: 3

         Term #1 -
           Address: 000001BEDD510120
           Expo: 4
           Coefficient -
             Address: 000001BEDD510124
             num: 1
             denom: 2

         Term #2 -
           Address: 000001BEDD510490
           Expo: 2
           Coefficient -
             Address: 000001BEDD510494
             num: -1
             denom: 3

         Term #3 -
           Address: 000001BEDD510760
           Expo: 0
           Coefficient -
             Address: 000001BEDD510764
             num: 1
             denom: 2

     ********************************
     *        init() SubMenu        *
     * (1) Creating 2 Polynomials   *
     * (2) Updating Polynomial 1    *
     * (3) Updating Polynomial 2    *
     * (4) Displaying 2 Polynomials *
     * (5) Return                   *
     ********************************
     Enter an int for option + ENTER: 5

     Return to previous menu!

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 2

   Evaluating Polynomials -

     Enter the value (Fraction) to be evaluated with -
       num: 1
       denom: 1

     Poly #1 at x = (1/1): (-1/4)
     Poly #2 at x = (1/1): (2/3)

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 3

   Checking Palindrome -

     Poly #1 is a Palindrome!

     Poly #2 is a Palindrome!

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 1

   Initializing 2 Polynomials -

     Calling init() -

     ********************************
     *        init() SubMenu        *
     * (1) Creating 2 Polynomials   *
     * (2) Updating Polynomial 1    *
     * (3) Updating Polynomial 2    *
     * (4) Displaying 2 Polynomials *
     * (5) Return                   *
     ********************************
     Enter an int for option + ENTER: 2

       Updating Polynomial #1

         **************************************
         *          updateMF() SubMenu        *
         * (1) Adding one term                *
         * (2) Removing one term              *
         * (3) Displaying updated Polynomial  *
         * (4) Return                         *
         **************************************
         Enter an int for option + ENTER: 1

           Adding one term -
             Enter expo: 2
             Creating Coeff Fraction:
               Enter num: 1
               Enter denom: 1

         **************************************
         *          updateMF() SubMenu        *
         * (1) Adding one term                *
         * (2) Removing one term              *
         * (3) Displaying updated Polynomial  *
         * (4) Return                         *
         **************************************
         Enter an int for option + ENTER: 3

         Address: 000001BEDD5101C0
         Degree: 3
         Number of Terms: 3

         Term #1 -
           Address: 000001BEDD510800
           Expo: 3
           Coefficient -
             Address: 000001BEDD510804
             num: 1
             denom: 4

         Term #2 -
           Address: 000001BEDD5105D0
           Expo: 2
           Coefficient -
             Address: 000001BEDD5105D4
             num: 1
             denom: 1

         Term #3 -
           Address: 000001BEDD5100D0
           Expo: 0
           Coefficient -
             Address: 000001BEDD5100D4
             num: -1
             denom: 2

         **************************************
         *          updateMF() SubMenu        *
         * (1) Adding one term                *
         * (2) Removing one term              *
         * (3) Displaying updated Polynomial  *
         * (4) Return                         *
         **************************************
         Enter an int for option + ENTER: 4

         Return to previous menu!

     ********************************
     *        init() SubMenu        *
     * (1) Creating 2 Polynomials   *
     * (2) Updating Polynomial 1    *
     * (3) Updating Polynomial 2    *
     * (4) Displaying 2 Polynomials *
     * (5) Return                   *
     ********************************
     Enter an int for option + ENTER: 5

     Return to previous menu!

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 4

   Adding 2 Polynomials -

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 7

   Displaying the Resulting Polynomial -

         Address: 000001BEDD511060
         Degree: 4
         Number of Terms: 3

         Term #1 -
           Address: 000001BEDD5111F0
           Expo: 4
           Coefficient -
             Address: 000001BEDD5111F4
             num: 1
             denom: 2

         Term #2 -
           Address: 000001BEDD510F70
           Expo: 3
           Coefficient -
             Address: 000001BEDD510F74
             num: 1
             denom: 4

         Term #3 -
           Address: 000001BEDD511510
           Expo: 2
           Coefficient -
             Address: 000001BEDD511514
             num: 2
             denom: 3

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 5

   Multiplying 2 Polynomials -

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 7

   Displaying the Resulting Polynomial -

         Address: 000001BEDD510C00
         Degree: 7
         Number of Terms: 7

         Term #1 -
           Address: 000001BEDD510A70
           Expo: 7
           Coefficient -
             Address: 000001BEDD510A74
             num: 1
             denom: 8

         Term #2 -
           Address: 000001BEDD510AC0
           Expo: 6
           Coefficient -
             Address: 000001BEDD510AC4
             num: 1
             denom: 2

         Term #3 -
           Address: 000001BEDD510ED0
           Expo: 5
           Coefficient -
             Address: 000001BEDD510ED4
             num: -1
             denom: 12

         Term #4 -
           Address: 000001BEDD511650
           Expo: 4
           Coefficient -
             Address: 000001BEDD511654
             num: -7
             denom: 12

         Term #5 -
           Address: 000001BEDD5112E0
           Expo: 3
           Coefficient -
             Address: 000001BEDD5112E4
             num: 1
             denom: 8

         Term #6 -
           Address: 000001BEDD511380
           Expo: 2
           Coefficient -
             Address: 000001BEDD511384
             num: 2
             denom: 3

         Term #7 -
           Address: 000001BEDD5110B0
           Expo: 0
           Coefficient -
             Address: 000001BEDD5110B4
             num: -1
             denom: 4

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 6

   Displaying 2 Polynomials -

       Poly #1 -

         Address: 000001BEDD5101C0
         Degree: 3
         Number of Terms: 3

         Term #1 -
           Address: 000001BEDD510800
           Expo: 3
           Coefficient -
             Address: 000001BEDD510804
             num: 1
             denom: 4

         Term #2 -
           Address: 000001BEDD5105D0
           Expo: 2
           Coefficient -
             Address: 000001BEDD5105D4
             num: 1
             denom: 1

         Term #3 -
           Address: 000001BEDD5100D0
           Expo: 0
           Coefficient -
             Address: 000001BEDD5100D4
             num: -1
             denom: 2

       Poly #2 -

         Address: 000001BEDD5104E0
         Degree: 4
         Number of Terms: 3

         Term #1 -
           Address: 000001BEDD510120
           Expo: 4
           Coefficient -
             Address: 000001BEDD510124
             num: 1
             denom: 2

         Term #2 -
           Address: 000001BEDD510490
           Expo: 2
           Coefficient -
             Address: 000001BEDD510494
             num: -1
             denom: 3

         Term #3 -
           Address: 000001BEDD510760
           Expo: 0
           Coefficient -
             Address: 000001BEDD510764
             num: 1
             denom: 2

 ***************************************
 *             Menu - HW #3            *
 * (1) Creating/Updating 2 Polynomials *
 * (2) Evaluating 2 Polynomials        *
 * (3) Checking for Palindrome         *
 * (4) Adding 2 Polynomials            *
 * (5) Multiplying 2 Polynomials       *
 * (6) Displaying 2 Polynomials        *
 * (7) Display Resulting Polynomial    *
 * (8) Quit                            *
 ***************************************
 Enter an int for option + ENTER: 8

   All objects have been removed/deleted through calls to free()!

 Have fun!
*/




/* LOGIC_CODE_OUTPUT Issues
*
* NONE
* 
*/