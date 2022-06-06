#include <iostream>
#include<array>
using namespace std;



void swap(int &a , int &b){
     int temp = a;
     a= b;
     b = temp;
}

void bubbleSort(int arr [] , int n){



    for(int i =0 ; i<n-1 ; i++){
       int flag = 0;

       for(int j=0 ; j<n-1-i ; j++){                 //j<n-1-i because after every pass elements in the end are already sorted so no need to go there

           if(arr[j]>arr[j+1]){
               swap(arr[j] , arr[j+1]);
               flag = 1;
           }
       }

       if(flag ==0){                                 //if flag is still 0, it means no swappping was done at all hence no need to loop all over again
           return;
       }

    }

}




int main(){

   int arr [10] {100,43,234,543,3,5,1,23423,35,34};
   int arr2 [5] = {1,2,4,5,6};

    bubbleSort(arr2 , 5);

    for(int i =0 ; i<5 ; i++){
        cout<<arr2[i]<<" ";
    }


    return 0;
}