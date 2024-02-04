/**
 * Program Name:   fractionMichaelFigueiredo.c
 * Discussion:     Specification File
 *                  struct Fraction & Relevance
 * Written By:     Michael Figueiredo
 * Date:           2023/12/17
 * Email:          mifi0715@cc.peralta.edu
 * Submitted Date: 2023/12/21
 * Grader Email:
 * Return Date:
 */

#define _CRT_SECURE_NO_WARNINGS

// Include/Header Files
#include <stdlib.h>
#include <stdio.h>
#include "cis27Fall2023MichaelFigueiredoHw3Utility.h"
#include "fractionMichaelFigueiredo.h"

// Function Definitions
TdFractionAddrMF createFractionMICHAELFIGUEIREDO() {
    TdFractionPtrMF frPtrMF = NULL;
    int n;
    int d;
    int factorMF;

    frPtrMF = (TdFractionPtrMF)malloc(sizeof(TdFractionMF));

    printf("\nEnter an int for num: ");
    scanf("%d", &n);

    printf("\nEnter an int for denom: ");
    scanf("%d", &d);

    factorMF = gcdFMF(n, d);
    frPtrMF->numMF = n / factorMF;

    if (n) {
        frPtrMF->denomMF = d / factorMF;
    }
    else {
        frPtrMF->denomMF = 1;
    }

    return frPtrMF;
}

int removeFractionMF(TdFractionAddrMF frAddr) {
    int freeFlagMF = 0;

    if (frAddr) {
        free(frAddr);
        frAddr = NULL;

        freeFlagMF = 1;
    }

    return freeFlagMF;
}

void printFractionMF(const TdFractionMF* addr) {
    printf("\n Address: %p"
        "\n   num: %d"
        "\n   denom: %d", addr, addr->numMF, addr->denomMF);
}

