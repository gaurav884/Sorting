#include <iostream>
#include<array>
using namespace std;



void swap(int &a , int &b){
     int temp = a;
     a= b;
     b = temp;
}

void insertionSort(int arr [] , int n){



    for(int i =1 ; i<n ; i++){
       int j = i-1;
       int x = arr[i];


       while(j>=0 && arr[j]>x){
             arr[j+1] = arr[j];
             j--;
       }

       arr[j+1] = x;

    }

}




int main(){

   int arr [10] {100,43,234,543,3,5,1,23423,35,34};
   int arr2 [5] = {1,2,4,5,6};

    insertionSort(arr , 10);

    for(int i =0 ; i<10 ; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}