#include<stdio.h>
int main(){
    int arr[8]={3,9,3,5,6,8,9,3};
    int size=8;
    
    int count=0;
    int i,j,k;
    int lsum,rsum;
    for(i=0;i<size;i++){
        lsum=0;
        rsum=0;
        for(j=i-1;j>=0;j--){
            lsum+=arr[j];

        }
        for(k=i+1;k<size;k++){
            rsum+=arr[k];
        }
        if(lsum==rsum){
            printf("equilibrium index is at position %d :",i);
            count++;
            
            
        }
        
    
}
printf("the total equilibrium indexes are: %d ",count);
return 0;
}
