#include <stdlib.h>
#include ".\linkedList.h"

/*
 * Inserts the new key at the beginning of the list.
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLInsertAtBeginning(LLElement * first, int key){
    LLElement * nodo;
    nodo=(LLElement*)malloc(sizeof(LLElement));
    if(nodo!=NULL)
    {
        nodo->next=first;
        first=nodo;
        nodo->key=key;
    }
    return (first);
}

/*
 * Inserts the new key at the end of the list.
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLInsertAtEnd(LLElement * first, int key){
    LLElement *nodo,**temp;
    nodo=(LLElement*)malloc(sizeof(LLElement))
    if(nodo!=NULL){
	temp=&first;
	nodo->next=NULL;
        nodo->key=key;
        while(*temp!=NULL){
            temp=&((*temp)->next);
	}
        *temp=nodo;
    }
    return (first);
}

/*
 * Inserts the new key at the specified positon of the list.
 * Position is zero-based, meaning that the first nodo is at position 0,
 * analogous to what happens in arrays.
 * 
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLInsertAtPosition(LLElement * first, int key, int position){
    int i;
    LLElement *nodo,**temp;
    nodo=(LLElement*)malloc(sizeof(LLElement));
    if(nodo!=NULL){
	nodo->key = key;
        temp=&first;
        for(i=0;i<position;i++){
            temp = &((*temp)->next);
	}
        nodo->next = *temp;
        *temp = nodo;
    }
    return (first);
}

/*
 * Returns the size of the list.
 */
int LLSize(LLElement * first){
    int dim;
    while(first!=NULL){
        first=first->next;
	dim++;
    }
    return (dim);
}

/*
 * Returns the key at the specified position.
 */ 
int LLGetKey(LLElement * first, int position){
    int i;
    for(i=0;i<position;i++)
        first=first->next;
    return (first->key);
}

/*
 * Returns the position of the first nodo, starting from startPosition, that
 * has the specified key.
 * Returns -1 if not found. 
 */ 
int LLFindKey(LLElement * first, int key, int startPosition){
    int pos,i;
    pos=-1;
    for(i=0;i<startPosition;i++){
        first=first->next;
    }
    for(i=i;position==-1 && first!=NULL;i++){
        if(first->key==key){
            position=counter;
	}
        first=first->next;
    }
    return (position);
}

/*
 * Remove the first nodo of the list.
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLRemoveFirst(LLElement * first){
    LLElement *nodoDel
    if(first!=NULL){
        nodoDel=first;
        first=first->next;
        free(nodoDel);
    }
    return (first);
}

/*
 * Remove the last nodo of the list.
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLRemoveLast(LLElement * first){
    LLElement **nodoDel;
    if(first!=NULL){
        nodoDel=&first;
        while((*nodoDel)->next!=NULL){
            nodoDel = &((*nodoDel)->next);
	}
        free(*nodoDel);
	*nodoDel = NULL;
    }
    return (first);
}

/*
 * Remove the nodo at the specified position.
 * Position is zero-based, meaning that the first nodo is at position 0,
 * analogous to what happens in arrays.
 * 
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLRemoveAtPosition(LLElement * first, int position){
    int i;
    LLElement *nodoDel,**temp;
    if(first!=NULL)
    {
        temp=&first;
        for(i=0;i<position;i++){
            temp=&((*temp)->next);
	}
        nodoDel=*temp;
        if((*temp)->next!=NULL){
            *temp=(*temp)->next;
	}
        free(nodoDel);
    }
    return (first);
}

/* Empties the list */
LLElement * LLEmptyList(LLElement *first){
    LLElement *nodoDel;
    while(first!=NULL)
    {
        nodoDel=first;
        first=first->next;
        free(nodoDel);
    }
    return NULL;
}