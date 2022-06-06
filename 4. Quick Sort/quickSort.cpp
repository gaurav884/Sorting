#include <iostream>
#include<array>
using namespace std;



void swap(int &a , int &b){
     int temp = a;
     a= b;
     b = temp;
}

int partitioning(int arr[] , int l , int h){
    int pivot = l;
    int i =l;
    int j =h;
    
    do{
        
        do{
            i++;
        }while(arr[i]<=arr[pivot]);

        do{
            j--;
        }while(arr[j]>arr[pivot]);

        if(i< j ){
            swap(arr[i] , arr[j]);
        }

    }while(i<j);

    swap(arr[pivot] , arr[j]);

    return j;
}

void quickSort(int arr [] , int l , int h){


    if(l<h){
        int p = partitioning(arr , l , h);
        quickSort(arr , l , p);
        quickSort(arr, p+1 , h);
    }

}




int main(){

   int arr [10] {100,43,234,543,3,5,1,23423,35,34};
   int arr2 [5] = {1,2,4,5,6};

    quickSort(arr ,0 ,  10-1);

    for(int i =0 ; i<10 ; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}