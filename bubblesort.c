
void bubbleSort(int data[],int size){
    for (int step=0;step<size-1;step++){
        for (int i=0;i<size-step-1;i++){
            if (data[i]>data[i+1]){
                int temp=data[i+1];
                data[i]=data[i+1];
                data[i+1]=temp;
            }
        }
    }
    
}
#include<stdio.h>
int main(){
int data={6,4,7,8,1,9,5};
int size=sizeof(data)/sizeof (data[0]);
int i;
bubbleSort(data,size);
printf("sorted array\n");
for(i=0;i<size;i++){
    printf ("%d",data[i]);

}
return 0;
}