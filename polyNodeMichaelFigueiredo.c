/**
 * Program name: polyNodeMichaelFigueiredo.c
 * Written By:   Michael Figueiredo
 * Date:         2023/12/21
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fractionMichaelFigueiredo.h"
#include "polyTermMichaelFigueiredo.h"
#include "polyNodeMichaelFigueiredo.h"
#include "polyNodeUtilityMichaelFigueiredo.h"

//Function Definitions
TdPolyNodeAddrMF createPolyNodeMICHAELFIGUEIREDO() {
    TdPolyNodePtrMF pnPtrMF = NULL;
    int orderMF;
    int n;
    int d;
    int factorMF;

    pnPtrMF = (TdPolyNodePtrMF)malloc(sizeof(TdPolyNodeMF));

    pnPtrMF->termPtrMF = (TdPolyTermPtrMF)malloc(sizeof(TdPolyTermMF));

    printf("\nEnter an int for order: ");
    scanf("%d", &orderMF);

    printf("\nEnter an int for num: ");
    scanf("%d", &n);

    printf("\nEnter an int for denom: ");
    scanf("%d", &d);

    pnPtrMF->termPtrMF->orderMF = orderMF;

    factorMF = gcdFMF(n, d);
    pnPtrMF->termPtrMF->coeffMF.numMF = n / factorMF;
    pnPtrMF->termPtrMF->coeffMF.denomMF = d / factorMF;
    pnPtrMF->nextMF = NULL;

    return pnPtrMF;
}

int removePolyNodeMF(TdPolyNodeAddrMF pnAddr) {
    int freeFlagMF = 0;

    if (pnAddr) {

        free(pnAddr->termPtrMF);
        free(pnAddr);
        pnAddr = NULL;

        freeFlagMF = 1;
    }

    return freeFlagMF;
}

void printPolyNodeMF(const TdPolyNodeAddrMF pnAddr) {
    printf("\n           Address: %p"
        "\n           Expo: %d"
        "\n           Coefficient -"
        "\n             Address: % p"
        "\n             num: %d"
        "\n             denom: %d\n"
        , pnAddr->termPtrMF,
        pnAddr->termPtrMF->orderMF,&(pnAddr->termPtrMF->coeffMF),
        pnAddr->termPtrMF->coeffMF.numMF,
        pnAddr->termPtrMF->coeffMF.denomMF);
}

void removePolyMF(TdPolyAddrMF polyAddr) {
    TdPolyNodePtrMF currentNodePtrMF = NULL;
    TdPolyNodePtrMF nextNodePtrMF = NULL;

    currentNodePtrMF = *polyAddr;
    while (currentNodePtrMF) {
        nextNodePtrMF = currentNodePtrMF->nextMF;

        free(currentNodePtrMF->termPtrMF);
        free(currentNodePtrMF);

        currentNodePtrMF = nextNodePtrMF;
    }

    *polyAddr = NULL;
}

void updateNodeMF(TdPolyNodePtrMF currentNodePtr, TdPolyNodePtrMF newNodePtr) {
    int n;
    int d;
    int factorMF;

    n = (currentNodePtr->termPtrMF->coeffMF.numMF *
        newNodePtr->termPtrMF->coeffMF.denomMF) +
        (newNodePtr->termPtrMF->coeffMF.numMF *
            currentNodePtr->termPtrMF->coeffMF.denomMF);

    d = currentNodePtr->termPtrMF->coeffMF.denomMF *
        newNodePtr->termPtrMF->coeffMF.denomMF;


    factorMF = gcdFMF(n, d);

    currentNodePtr->termPtrMF->coeffMF.numMF = n / factorMF;
    currentNodePtr->termPtrMF->coeffMF.denomMF = d / factorMF;

}

void insertNodeAfterMF(TdPolyNodePtrMF currentNodePtr, TdPolyNodePtrMF newNodePtr) {
    newNodePtr->nextMF = currentNodePtr->nextMF;
    currentNodePtr->nextMF = newNodePtr;
}

TdPolyNodeAddrMF searchForNodeMF(int order, TdPolyAddrMF polyNodeAddr) {
    TdPolyNodePtrMF currentNodePtrMF = *polyNodeAddr;
    TdPolyNodePtrMF foundNodePtrMF = NULL;

    while (currentNodePtrMF && (currentNodePtrMF->termPtrMF->orderMF >= order)) {

        if (currentNodePtrMF) {
            foundNodePtrMF = currentNodePtrMF;
        }

       currentNodePtrMF = currentNodePtrMF->nextMF;
    }

    return foundNodePtrMF;
}

void addTermToPolyMF(TdPolyTermPtrMF polyTerm, TdPolyAddrMF polyAddr) {
    TdPolyNodePtrMF newNodePtrMF = NULL;
    TdPolyNodePtrMF currentNodePtrMF = NULL;
    TdPolyTermPtrMF newTermPtrMF = (TdPolyTermPtrMF)malloc(sizeof(TdPolyTermMF));
    *newTermPtrMF = *polyTerm;
    
    newNodePtrMF = (TdPolyNodePtrMF)malloc(sizeof(TdPolyNodeMF));
    newNodePtrMF->termPtrMF = newTermPtrMF;
    newNodePtrMF->nextMF = NULL;

    if (*polyAddr) {
        if ((*polyAddr)->termPtrMF->orderMF < polyTerm->orderMF) {
            newNodePtrMF->nextMF = *polyAddr;
            *polyAddr = newNodePtrMF;
        } 
        else {
            currentNodePtrMF = searchForNodeMF(polyTerm->orderMF, polyAddr);

            if (newNodePtrMF->termPtrMF->orderMF == currentNodePtrMF->termPtrMF->orderMF) {
                updateNodeMF(currentNodePtrMF, newNodePtrMF);

                removePolyNodeMF(newNodePtrMF);
            }
            else {
                insertNodeAfterMF(currentNodePtrMF, newNodePtrMF);
            }

        }

    }
    else {
        *polyAddr = newNodePtrMF;
    }
}

void removeOneTermFromPolyMF(int order, TdPolyAddrMF polyAddr) {
    TdPolyNodePtrMF nodePtrMF = NULL;
    TdPolyNodePtrMF currentNodePtrMF = NULL;
    TdPolyNodePtrMF previousNodePtrMF = NULL;
    TdPolyNodePtrMF firstNodePtrMF = NULL;

    if (*polyAddr) {
        firstNodePtrMF = *polyAddr;
        if (order == (*polyAddr)->termPtrMF->orderMF) {
            nodePtrMF = *polyAddr;

            *polyAddr = (*polyAddr)->nextMF;

            free(nodePtrMF->termPtrMF);
            free(nodePtrMF);
            nodePtrMF = NULL;
        }
        else {
            previousNodePtrMF = firstNodePtrMF;
            currentNodePtrMF = (*polyAddr)->nextMF;

            while (currentNodePtrMF) {
                if (currentNodePtrMF->termPtrMF->orderMF == order) {
                    previousNodePtrMF->nextMF = currentNodePtrMF->nextMF;

                    free(currentNodePtrMF->termPtrMF);

                    free(currentNodePtrMF);

                    currentNodePtrMF = previousNodePtrMF->nextMF;
                }
                else {
                    previousNodePtrMF = currentNodePtrMF;
                    currentNodePtrMF = currentNodePtrMF->nextMF;
                }
            }
        }
    }
    else {
        printf("\n    Empty poly!");
    }
}

void createNewPolyMF(TdPolyAddrMF polyAddr) {

    int continuingOptionMF;
    TdPolyTermPtrMF termPtrMF = NULL;

        removePolyMF(polyAddr);

        do {
            printf("\n           Is there a term (1 : Yes, 0 : No)? ");
            scanf("%d", &continuingOptionMF);

            switch (continuingOptionMF) {
            case 1:
                termPtrMF = createPolyTermMICHAELFIGUEIREDO();

                addTermToPolyMF(termPtrMF, polyAddr);

                break;
            case 0:

                break;
            default:
                printf("\n           Wrong Option!\n");
            }
        } while (continuingOptionMF != 0);
    }

int printPolyMF(TdPolyMF poly) {
    int nodeCountMF = 0;
    TdPolyNodePtrMF nodePtrMF = NULL;

    if (poly) {
        printf("\n         Address: %p", poly);
        nodePtrMF = poly;

        printf("\n         Degree: %d", poly->termPtrMF->orderMF);

        do {
            nodeCountMF++;
            nodePtrMF = nodePtrMF->nextMF;
        } while (nodePtrMF);

        printf("\n         Number of Terms: %d\n", nodeCountMF);
       
        nodePtrMF = poly;
        nodeCountMF = 0;
        do {
            nodeCountMF++;

            printf("\n         Term #%d -", nodeCountMF);

            printPolyNodeMF(nodePtrMF);
        
            nodePtrMF = nodePtrMF->nextMF;
        } while (nodePtrMF);
    }
    else {
        printf("\n     Empty Poly!\n");
    }

    return nodeCountMF;
}