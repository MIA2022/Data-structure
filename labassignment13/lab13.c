//Insert your code and show the output to TAs
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 #define CHAR_SIZE 26
 
// Data structure to store a Trie node
typedef struct Trie
{
    int leafnode;             // 1 when the node is a leaf node,otherwise zero
    struct Trie* character[CHAR_SIZE]; //the branches for the size of a node is the size of the alphabet
}trienode;
 
// Function that create a new Trie node
trienode* NewNode()
{
    
}
 
// Iterative function to insert a string into a Trie
void insert(trienode *head, char* str)
{
    
}


// Iterative function to search a string in a Trie. It returns 1
// if the string is found in the Trie; otherwise,returns 0.
int search(trienode* head, char* str)
{
    
}
    

int startswith(trienode* head,char *str)
{
    

}
void triefree(trienode *head)
{
    trienode *curr=head;
    if(curr!=NULL)
    {
        for(int i=0;i<CHAR_SIZE;i++)
        free(curr->character[i]);
        free(curr);
        
    }
}
    
    
// Trie implementation in C – Insertion, Searching and startswith
int main()
{
    
 
    
    return 0;
}

    
    
    
    
    
   










    

