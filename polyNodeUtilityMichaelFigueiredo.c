/**
 * Program Name:    polyNodeUtilityMichaelFigueiredo.c
 * Discussion:      Implementation File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:      Michael Figueiredo
 * Date:            2023/12/21
 * Email:           mifi0715@cc.peralta.edu
 * Submitted Date:  2023/12/17
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
#include "polyNodeMichaelFigueiredo.h"
#include "polyNodeUtilityMichaelFigueiredo.h"

//Function Definitions 
void evaluateMF(TdPolyNodePtrMF poly1, TdPolyNodePtrMF poly2) {

    TdPolyNodePtrMF tmpPoly1MF = NULL;
    TdPolyNodePtrMF tmpPoly2MF = NULL;

    TdFractionMF result1MF = { 0, 1 };
    TdFractionMF result2MF = { 0, 1 };
    TdFractionMF x;
    int factorMF;

    printf("\n     Enter the value (Fraction) to be evaluated with - ");
    printf("\n       num: ");
    scanf("%d", &x.numMF);
    printf("       denom: ");
    scanf("%d", &x.denomMF);

    tmpPoly1MF = poly1;

    while (tmpPoly1MF != NULL) {

        TdPolyTermPtrMF termPtrMF = tmpPoly1MF->termPtrMF;
        TdFractionMF termValueMF;

        termValueMF.numMF = termPtrMF->coeffMF.numMF *
            powerMF(x.numMF, termPtrMF->orderMF);

        termValueMF.denomMF = termPtrMF->coeffMF.denomMF *
            powerMF(x.denomMF, termPtrMF->orderMF);

        result1MF.numMF = result1MF.numMF * termValueMF.denomMF +
            termValueMF.numMF * result1MF.denomMF;
        result1MF.denomMF *= termValueMF.denomMF;

        tmpPoly1MF = tmpPoly1MF->nextMF;
    }

    factorMF = gcdFMF(result1MF.numMF, result1MF.denomMF);
    result1MF.numMF = result1MF.numMF / factorMF;
    result1MF.denomMF = result1MF.denomMF / factorMF;

    printf("\n     Poly #1 at x = (%d/%d): (%d/%d)",
        x.numMF, x.denomMF, result1MF.numMF, result1MF.denomMF);

    tmpPoly2MF = poly2;

    while (tmpPoly2MF) {

        TdPolyTermPtrMF termPtrMF = tmpPoly2MF->termPtrMF;
        TdFractionMF termValueMF;

        termValueMF.numMF = termPtrMF->coeffMF.numMF *
            powerMF(x.numMF, termPtrMF->orderMF);

        termValueMF.denomMF = termPtrMF->coeffMF.denomMF *
            powerMF(x.denomMF, termPtrMF->orderMF);

        result2MF.numMF = result2MF.numMF * termValueMF.denomMF +
            termValueMF.numMF * result2MF.denomMF;
        result2MF.denomMF *= termValueMF.denomMF;

        tmpPoly2MF = tmpPoly2MF->nextMF;
    }

    factorMF = gcdFMF(result2MF.numMF, result2MF.denomMF);
    result2MF.numMF = result2MF.numMF / factorMF;
    result2MF.denomMF = result2MF.denomMF / factorMF;

    printf("\n     Poly #2 at x = (%d/%d): (%d/%d)\n",
        x.numMF, x.denomMF, result2MF.numMF, result2MF.denomMF);
}

int powerMF(int base, int exponent) {

    int resultMF = 1;
    for (int i = 0; i < exponent; i++)
    {
        resultMF *= base;
    }
    return resultMF;
}

TdPolyNodePtrMF addMF(TdPolyNodePtrMF Poly1, TdPolyNodePtrMF Poly2) {
    TdPolyNodePtrMF resultPtrMF = NULL;
    TdPolyNodePtrMF resultWithoutZeros = NULL;

    while (Poly1) {

        addTermToPolyMF(Poly1->termPtrMF, &resultPtrMF);
        Poly1 = Poly1->nextMF;
    }

    while (Poly2) {

        addTermToPolyMF(Poly2->termPtrMF, &resultPtrMF);
        Poly2 = Poly2->nextMF;
    }

    TdPolyNodePtrMF resultTemp = resultPtrMF;

    while (resultTemp) {
        if (resultTemp->termPtrMF->coeffMF.numMF != 0 &&
            resultTemp->termPtrMF->coeffMF.denomMF != 0) {
            addTermToPolyMF(resultTemp->termPtrMF, &resultWithoutZeros);
        }
        resultTemp = resultTemp->nextMF;
    }

    removePolyMF(&resultPtrMF);

    return resultWithoutZeros;
}

int checkPalindromeMF(int n) {
    int reverseMF = 0;
    int tempMF = n;
    while (tempMF) {
        reverseMF = (reverseMF * 10) + (tempMF % 10);
        tempMF = tempMF / 10;
    }
    return (reverseMF == n);
}

int isPalindromeMF(TdPolyMF poly) {
    TdPolyMF tmpPolyMF = poly;

    while (tmpPolyMF) {

        if (!checkPalindromeMF(poly->termPtrMF->coeffMF.numMF) ||
            !checkPalindromeMF(poly->termPtrMF->coeffMF.denomMF)) {

            return 0;
        }

        tmpPolyMF = tmpPolyMF->nextMF;
    }
    return 1;
}

TdPolyNodePtrMF multiplyMF(TdPolyNodePtrMF poly1, TdPolyNodePtrMF poly2) {
    int factorMF = 0;
    TdPolyTermPtrMF polyTermPtr1MF = NULL;
    TdPolyTermPtrMF polyTermPtr2MF = NULL;
    TdPolyTermPtrMF resultTermMF = (TdPolyTermPtrMF)malloc(sizeof(TdPolyTermMF));

    TdPolyNodePtrMF resultPolyMF = NULL;
    TdPolyNodePtrMF headMF = poly2;

    while (poly1) {
        poly2 = headMF;

        while (poly2) {

            polyTermPtr1MF = poly1->termPtrMF;
            polyTermPtr2MF = poly2->termPtrMF;

            resultTermMF->orderMF = polyTermPtr1MF->orderMF + polyTermPtr2MF->orderMF;

            resultTermMF->coeffMF.numMF = polyTermPtr1MF->coeffMF.numMF *
                polyTermPtr2MF->coeffMF.numMF;

            resultTermMF->coeffMF.denomMF = polyTermPtr1MF->coeffMF.denomMF *
                polyTermPtr2MF->coeffMF.denomMF;

            factorMF = gcdFMF(resultTermMF->coeffMF.numMF, resultTermMF->coeffMF.denomMF);

            resultTermMF->coeffMF.numMF = resultTermMF->coeffMF.numMF / factorMF;
            resultTermMF->coeffMF.denomMF = resultTermMF->coeffMF.denomMF / factorMF;

            addTermToPolyMF(resultTermMF, &resultPolyMF);

            poly2 = poly2->nextMF;
        }

        poly1 = poly1->nextMF;
    }
 
    return resultPolyMF;

    removePolyMF(&resultPolyMF);
}
