/**
 * Program Name:     polyTermMichaelFigueiredo.c
 * Discussion:       Specification File
 *                    struct Fraction & PolyTerm Relevance
 * Written By:       Michael Figueiredo
 * Date:             2023/12/17
 * Email:            mifi0715@cc.peralta.edu
 * Submitted Date:   2023/12/21
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
#include "polyTermMichaelFigueiredo.h"

// Function Definitions
TdPolyTermAddrMF createPolyTermMICHAELFIGUEIREDO() {
    TdPolyTermPtrMF ptPtrMF = NULL;
    int orderMF;
    int n;
    int d;
    int factorMF;

    ptPtrMF = (TdPolyTermPtrMF)malloc(sizeof(TdPolyTermMF));

    printf("             Enter expo: ");
    scanf("%d", &orderMF);
    printf("             Creating Coeff Fraction:\n");
    printf("               Enter num: ");
    scanf("%d", &n);

    printf("               Enter denom: ");
    scanf("%d", &d);

    ptPtrMF->orderMF = orderMF;

    factorMF = gcdFMF(n, d);
    ptPtrMF->coeffMF.numMF = n / factorMF;
    ptPtrMF->coeffMF.denomMF = d / factorMF;

    return ptPtrMF;
}