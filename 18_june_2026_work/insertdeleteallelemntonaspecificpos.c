/*#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5};
    int size=5;
    int newelement=24;
    int pos=3;
    int i;
    for(i=4;i>=2;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=newelement;
    size++;
    printf("the array with inserted element is:\n");
    for(i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    return 0;

}*/

#include<stdio.h>
int main(){
    int arr[6]={2,5,7,9};
    int size=4;
    int i;
    int pos=1;
    for(i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("the array with deletion is:\n");
    for(i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
}