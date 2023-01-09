//Nan Chen
//chen.nan2@northeastern.edu
//To perform insertion sort of integers stored in a file and display the output and store it in another file.
#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int arr[10],temp;
    int count=0,i,j;/*count will have the total number of elements in the array*/
    /*read the file*/
    fp=fopen("Input.txt","r");
    if(fp==NULL){
        //if file returns NULL then can't open the file
    printf("\n Cannot open the file \n");
    exit(0);
    }
    printf("The contents of the file\n");
    while (fscanf(fp, "%d", &arr[count]) == 1) {
        printf("%d ", arr[count]);
        count++;
    }
    printf("\n");
    fclose(fp);
    
    // sort array
    for (i=0; i<count; i++) {
        // compare the element in the sorted potion of the list
        j = i - 1;
        while (j >= 0 && arr[i] < arr[j]) {
            j--;
        }
        // shift the bigger elements and insert the element
        temp = arr[i];
        while (j+1!=i) {
            arr[i] = arr[i-1];
            i--;
        }
        arr[j+1] = temp;
    }
    // store output in another file
    fp = fopen("sorted.txt", "w");
    printf("sorted output is:\n");
    for (i=0; i<count; i++) {
        fprintf(fp, "%d\n", arr[i]);
        printf("%d ", arr[i]);
    }
    printf("\n");
    fclose(fp);
    
    return 0;
}
