#include <stdlib.h>
#include ".\linkedList.h"

/*
 * Inserts the new key at the beginning of the list.
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLInsertAtBeginning(LLElement * first, int key){
    LLElement * nuovo;
    nuovo=(LLElement*)malloc(sizeof(LLElement));
    if(nuovo!=NULL)
    {
        nuovo->next=first;
        first=nuovo;
        nuovo->key=key;
    }
    return (first);
}

/*
 * Inserts the new key at the end of the list.
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLInsertAtEnd(LLElement * first, int key){
    LLElement *nuovo,**temp;
    nuovo=(LLElement*)malloc(sizeof(LLElement))
    if(nuovo!=NULL){
	temp=&first;
	nuovo->next=NULL;
        nuovo->key=key;
        while(*temp!=NULL){
            temp=&((*temp)->next);
	}
        *temp=nuovo;
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
    LLElement *nuovo,**temp;
   nuovo=(LLElement*)malloc(sizeof(LLElement));
    if(nuovo!=NULL){
	nuovo->key = key;
        temp=&first;
        for(i=0;i<position;i++){
            temp = &((*temp)->next);
	}
        nuovo->next = *temp;
        *temp = nuovo;
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
    LLElement *nuovoDel
    if(first!=NULL){
        nuovoDel=first;
        first=first->next;
        free(nuovoDel);
    }
    return (first);
}

/*
 * Remove the last nodo of the list.
 * Returns the updated pointer to the first nodo of the list.
 */
LLElement * LLRemoveLast(LLElement * first){
    LLElement **nuovoDel;
    if(first!=NULL){
        nuovoDel=&first;
        while((*nuovoDel)->next!=NULL){
           nuovoDel = &((*nuovoDel)->next);
	}
        free(*nuovoDel);
	*nuovoDel = NULL;
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
    LLElement *nuovoDel,**temp;
    if(first!=NULL)
    {
        temp=&first;
        for(i=0;i<position;i++){
            temp=&((*temp)->next);
	}
        nuovoDel=*temp;
        if((*temp)->next!=NULL){
            *temp=(*temp)->next;
	}
        free(nuovoDel);
    }
    return (first);
}

/* Empties the list */
LLElement * LLEmptyList(LLElement *first){
    LLElement *nuovoDel;
    while(first!=NULL)
    {
       nuovoDel=first;
        first=first->next;
        free(nuovoDel);
    }
    return NULL;
}