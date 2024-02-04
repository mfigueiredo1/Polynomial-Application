/**
 * Program Name:   polyNodeUtilityMichaelFigueiredo.h
 * Discussion:     Specification File
 *                    struct Fraction & PolyTerm Relevance
 * Written By:     Michael Figueiredo
 * Date:           2023/12/21
 * Email:          mifi0715@cc.peralta.edu
 * Submitted Date: 2023/12/21
 * Grader Email:
 * Return Date:
 */

#ifndef POLYNODEUTILITYMICHAELFIGUEIREDO_H
#define POLYNODEUTILITYMICHAELFIGUEIREDO_H

 // Header/include Files 
#include <stdio.h>
#include <stdlib.h>
#include "fractionMichaelFigueiredo.h"
#include "polyTermMichaelFigueiredo.h"
#include "polyNodeMichaelFigueiredo.h"

//Function Prototypes
int checkPalindromeMF(int);
int isPalindromeMF(TdPolyMF);

void evaluateMF(TdPolyNodePtrMF, TdPolyNodePtrMF);

TdPolyNodePtrMF addMF(TdPolyNodePtrMF, TdPolyNodePtrMF);

int powerMF(int, int);

TdPolyNodePtrMF multiplyMF(TdPolyNodePtrMF, TdPolyNodePtrMF);

#endif
