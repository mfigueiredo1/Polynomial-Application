/**
 * Program Name:    polyTermMichaelFigueiredo.h
 * Discussion:      Specification File
 *                    struct Fraction & PolyTerm Relevance
 * Written By:      Michael Figueiredo
 * Date:            2023/12/17
 * Email:           mifi0715@cc.peralta.edu
 * Submitted Date:  2023/12/21
 * Grader Email:
 * Return Date:
 */

#ifndef POLYTERMMICHAELFIGUEIREDO_H
#define POLYTERMMICHAELFIGUEIREDO_H

// Header/include Files
#include <stdio.h>
#include <stdlib.h>
#include "fractionMichaelFigueiredo.h"

// Struct Definition
struct PolyTermMICHAELFIGUEIREDO {
	int orderMF;
	TdFractionMF coeffMF;
};

// typedef
typedef struct PolyTermMICHAELFIGUEIREDO TdPolyTermMF;
typedef TdPolyTermMF* TdPolyTermPtrMF;
typedef TdPolyTermMF* TdPolyTermAddrMF;

typedef TdPolyTermMF const TdConstPolyTermMF;

// Function Prototypes
TdPolyTermAddrMF createPolyTermMICHAELFIGUEIREDO(void);

#endif

