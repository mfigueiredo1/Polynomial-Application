/**
 * Program Name:   polyNodeMichaelFigueiredo.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     Michael Figueiredo
 * Date:           2023/12/21
 * Email:          mifi0715@cc.peralta.edu
 * Submitted Date: 2023/12/21
 * Grader Email:
 * Return Date:
 */

#ifndef POLYNODEMICHAELFIGUEIREDO_H
#define POLYNODEMICHAELFIGUEIREDO_H

 // Header/include Files 

#include <stdio.h>
#include <stdlib.h>
#include "fractionMichaelFigueiredo.h"
#include "polyTermMichaelFigueiredo.h"

struct PolyNodeMICHAELFIGUEIREDO {
	TdPolyTermPtrMF termPtrMF;
	struct PolyNodeMICHAELFIGUEIREDO* nextMF;
};

// typedef 
typedef struct PolyNodeMICHAELFIGUEIREDO TdPolyNodeMF;
typedef TdPolyNodeMF* TdPolyNodePtrMF;
typedef TdPolyNodeMF* TdPolyNodeAddrMF;
typedef TdPolyNodePtrMF TdPolyMF;
typedef TdPolyMF* TdPolyAddrMF;
typedef TdPolyMF* TdPolyPtrMF;

// Function Prototypes
TdPolyNodeAddrMF createPolyNodeMICHAELFIGUEIREDO(void);
int removePolyNodeMF(TdPolyNodeAddrMF);
void printPolyNodeMF(const TdPolyNodeAddrMF);
void createNewPolyMF(TdPolyAddrMF);
void removePolyMF(TdPolyAddrMF);
void addTermToPolyMF(TdPolyTermPtrMF, TdPolyAddrMF);
TdPolyNodeAddrMF searchForNodeMF(int, TdPolyAddrMF);
void updateNodeMF(TdPolyNodePtrMF, TdPolyNodePtrMF);
void insertNodeAfterMF(TdPolyNodePtrMF, TdPolyNodePtrMF);
int printPolyMF(TdPolyMF);
void removeOneTermFromPolyMF(int orderMF, TdPolyAddrMF);

#endif


