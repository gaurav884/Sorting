#include <iostream>
#include<array>
using namespace std;



void swap(int &a , int &b){
     int temp = a;
     a= b;
     b = temp;
}

void selectionSort(int arr [] , int n){

    

    for(int i =0 ; i<n-1 ; i++){
    
       int k= i;

       for(int j=i ; j<n ; j++){
            
            if(arr[j]<arr[k]){
                k = j;
            }
       }

       swap(arr[i] , arr[k]);

    }

}




int main(){

   int arr [10] {100,43,234,543,3,5,1,23423,35,34};
   int arr2 [5] = {1,2,4,5,6};

    selectionSort(arr , 10);

    for(int i =0 ; i<10 ; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}