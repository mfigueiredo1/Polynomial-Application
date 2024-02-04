/**
 * Program Name:     polyTermUtilityMichaelFigueiredo.c
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
#include "polyTermUtilityMichaelFigueiredo.h"

// Function Definitions
int removePolyTermMF(TdPolyTermAddrMF ptAddr) {
    int freeFlagMF = 0;

    if (ptAddr) {
        free(ptAddr);
        ptAddr = NULL;

        freeFlagMF = 1;
    }

    return freeFlagMF;
}

void printPolyTermMF(const TdPolyTermAddrMF ptAddr) {
    printf("\n Address: %p"
        "\n    order: %d"
        "\n    coeff.num: %d"
        "\n    coeff.denom: %d\n", ptAddr, ptAddr->orderMF,
        ptAddr->coeffMF.numMF, ptAddr->coeffMF.denomMF);
}
