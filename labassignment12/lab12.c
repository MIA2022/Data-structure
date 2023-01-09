//Nan Chen
//chen.nan2@northeastern.edu

#include<stdio.h>
#include<string.h>

int compression(char arr[], int n, char res[]){
    int i;
    int count=1;//counter
    int index=0;//to store the result
    if (n==0) {
        index=n;
        res="";
    }
    i=0;
    while (i<n) {
        count = 1;
        while (arr[i] == arr[i + count]) {
            count++;
        }
        res[index++] = arr[i];
        printf("%c", arr[i]);
        if (count>1) {
            index += sprintf(res,"%d", count);
            printf("%d", count);
        }
        
        i=i+count;
    }
    printf("\n");
    return index;
}
 
int main()
{
    char a[]="aaaaaaaaaaaaaabbbbcccd";
    char res[50];
    int r,n;//n is the size of input array
    n=(int)strlen(a);
    r=compression(a,n,res);
    printf("length of the compressed string:%d\n",r);
    return 0;
}
