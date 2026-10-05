#include<Stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int even;
    int odd;
    int countEven = 0;
    int countOdd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
           countEven++; 
        }
        else{
            countOdd++;
        }
    }
    printf("%d \n",countEven);
    printf("%d",countOdd);

}