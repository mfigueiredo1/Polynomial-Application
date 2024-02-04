/**
 * Program Name:   fractionMichaelFigueiredo.h
 * Discussion:     Specification File
 *                  struct Fraction & Relevance
 * Written By:     Michael Figueiredo 
 * Date:           2023/12/21
 * Email:          mifi0715@cc.peralta.edu
 * Submitted Date: 2023/12/21
 * Grader Email:
 * Return Date:
 */

#ifndef FRACTIONMICHAELFIGUEIREDO_H
#define FRACTIONMICHAELFIGUEIREDO_H

// Header/Include Files
#include <stdio.h>
#include <stdlib.h>

struct FractionMICHAELFIGUEIREDO {

	int numMF;
	int denomMF;
};

// typedef
typedef struct FractionMICHAELFIGUEIREDO* TdFractionPtrMF;
typedef struct FractionMICHAELFIGUEIREDO* TdFractionAddrMF;

typedef struct FractionMICHAELFIGUEIREDO TdFractionMF;
typedef TdFractionMF* TdFractionPtrMF;
typedef TdFractionMF* TdFractionAddrMF;
typedef TdFractionMF const TdConstFractionMF;

// Function Prototypes
TdFractionAddrMF createFractionMICHAELFIGUEIREDO(void);
int removeFractionMF(TdFractionAddrMF);
void printFractionMF(const TdFractionAddrMF);

#endif
