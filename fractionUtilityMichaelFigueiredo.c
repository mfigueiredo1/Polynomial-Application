/**
 * Program Name: fractionUtilityMichaelFigueiredo.c
 * Discussion:   Specification File
 *                 Support Functions for Fraction
 * Written By:   Michael Figueiredo
 * Date:         2023/12/17
 * Email:        mifi0715@cc.peralta.edu
 * Submitted Date: 2023/12/21
 * Grader Email:
 * Return Date:
 */

#define _CRT_SECURE_NO_WARNINGS

 // Include/Header Files
#include <stdio.h>
#include <stdlib.h>
#include "cis27Fall2023MichaelFigueiredoHw3Utility.h"
#include "fractionMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"

// Function Definitions
int gcdFMF(int arg1, int arg2) {
    int gcdMF = 1;
    int tmpMF = arg2;

    (arg1 < 0) ? (arg1 = -arg1) : arg1;
    (arg2 < 0) ? (arg2 = -arg2) : arg2;

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcdMF = i;

    return (tmpMF < 0) ? -gcdMF : gcdMF;
}
