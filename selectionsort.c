#include<stdio.h>
#include<time.h>

int main (){
int arr[10]={5,3,8,2,4,3,4,677,654,323};
int min; int temp;
clock_t start, end;
    double tt;
    start=clock();
for(int i=0;i<5;i++){
    min=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min]){
              min=j;
            }

        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

for(int i=0; i < 5; i++) {
    printf("%d ", arr[i]);
}
end=clock();
tt=(double)(end-start)/CLOCKS_PER_SEC*1000000;
printf("\ntime taken is %f",tt);

}
















