#include <iostream>
#include <bits/stdc++.h>
#include<array>
using namespace std;



int findMax(int arr[] ,int n){
    int max = INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        } 
    }

    return max;
}

void countSort(int arr [] , int n){
     
     int size = findMax(arr , n);
     
     int temp [size+1];
     
     for(int i =0;i<size+1;i++){                 //initialize the array with 0
         temp[i] = 0;
     }

     for(int i=0;i<n;i++){                    
         temp[arr[i]]++;
     }

     int j =0;
     int i=0;

     while(i<=size){

         if(temp[i]>0){
             arr[j++] = i;
             temp[i]--;
         }
         else{
             i++;
         }
     }
}




int main(){

   int arr [10] {100,43,234,543,3,5,1,23423,35,34};
   int arr2 [5] = {1,2,4,5,6};
   int arr3 [5] = {1,9,14,2,6};

    countSort(arr3 , 5);

    for(int i =0 ; i<5 ; i++){
        cout<<arr3[i]<<" ";
    }


    return 0;
}