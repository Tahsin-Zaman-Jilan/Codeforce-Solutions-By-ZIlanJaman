#include <iostream>
using namespace std;
int findSecondSmallest(int arr[], int n){
   int smallest, secondSmallest;
   if(arr[0]<arr[1]){
      smallest = arr[0];
      secondSmallest = arr[1];
   }
   else {
      smallest = arr[1];
      secondSmallest = arr[0];
   }
   for(int i=0; i<n; i++) {
      if(smallest>arr[i]) {
         secondSmallest = smallest;
         smallest = arr[i];
      }
      else if(arr[i] < secondSmallest){
         secondSmallest = arr[i];
      }
   }
   return secondSmallest;
}
int main() {
   int n[100];
   cout<<"Enter the size of array: ";
   cin>>n;
   int arr[n-1];
   cout<<"Enter array elements: ";
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int secondSmallest = findSecondSmallest(arr, n);
   cout<<"Second Smallest Element: "<<secondSmallest;
   return 0;
}
