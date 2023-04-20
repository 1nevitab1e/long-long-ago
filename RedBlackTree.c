#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define Red false
#define Black true
#define Infinity 32767
#define NegInfinity -32768


typedef struct RedBlackTree
{
    struct RedBlackTree *LeftNode;
    struct RedBlackTree *RightNode;
    struct RedBlackTree *ParentNode;
    int Data;
    bool Color;
    
    /* data */
}RBT;

RBT *NullNode=NULL;

RBT *Initiate()
{
    RBT *T;
    if(NullNode==NULL)
     {
        NullNode=malloc(sizeof(RBT));
        if(NullNode==NULL) 
            printf("Out Of Space");
        NullNode->LeftNode=NullNode->RightNode=NullNode;
        NullNode->Color=Black;
        NullNode->Data=Infinity;
     }

    T=malloc(sizeof(RBT));
    if(T==NULL) 
        printf("Out Of Space");
    T->Data=NegInfinity;
    T->LeftNode=T->RightNode=NullNode;
    T->ParentNode=NULL;
    NullNode->ParentNode=T;
    T->Color=Black;

    return T;
}

void SRL(RBT *T) /*左单旋转*/
{
    RBT *Parent;
    Parent=T->ParentNode;
    Parent->RightNode=T->LeftNode;
    T->LeftNode=Parent;
    T->ParentNode=Parent->ParentNode;
    Parent->ParentNode=T;
}

void SRR(RBT *T) /*右单旋转*/
{
    RBT *Parent;
    Parent=T->ParentNode;
    Parent->LeftNode=T->RightNode;
    T->RightNode=Parent;
    T->ParentNode=Parent->ParentNode;
    Parent->ParentNode=T;
}

void Rotate(RBT *Parent,int item)
{
    if(item<Parent->Data)
        item<Parent->LeftNode?SRR(Parent->LeftNode):SRL(Parent->LeftNode);
    else
        item<Parent->RightNode?SRR(Parent->RightNode):SRL(Parent->RightNode);

}

void Insert(RBT *ROOT,int item)
{
    RBT *TEMP=malloc(sizeof(RBT));


        while(ROOT->LeftNode != NullNode)
            {
                if(item<TEMP->Data)
                    ROOT=ROOT->LeftNode;
                else
                    ROOT=ROOT->RightNode;
            }
        TEMP->LeftNode=TEMP->RightNode=NullNode;
        

    free(TEMP);
}
int main()
{
    return 0;
}
