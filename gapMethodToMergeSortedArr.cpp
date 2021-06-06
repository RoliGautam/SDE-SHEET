Question link : https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

#include <bits/stdc++.h>
using namespace std;

//funtion to count the gap...
int newGap(int n){
    if(n<=1) return 0;
    return n/2+n%2;
}

void mergeTwoSortedArr(int arr1[], int arr2[], int n, int m){
    //initially take gap = m+n 
    int i, j, gap = m+n;
    
    //we will traverse both arrays till gap became 0..
    for(gap = newGap(gap); gap>0; gap = newGap(gap)){
        
        //when compared elements are in first array..
        //we use here i+gap to confirm that both elements are in first array
        for(i = 0; i+gap<n; i++){
            if(arr1[i]>arr1[i+gap]) 
            swap(arr1[i], arr1[i+gap]);
        }
        
        //when compared elements are in both array...
        for(j = 0; j<m && i<n; i++, j++){
            if(arr1[i]>arr2[j])
            swap(arr1[i], arr2[j]);
        }
        
        //when compared elements are in second array....
       //we use here j+gap to confirm that both elements are in second array

        for(j = 0; j+gap<m; j++){
            if(arr2[j]> arr2[j+gap])
            swap(arr2[j], arr2[j+gap]);
        }
    }
}

int main()
{
    //input size of both arrays...
  int n, m;
  cin>>n>>m;
  int arr1[n];
  int arr2[m];
  //input first array...
  for(int i = 0; i<n; i++){
      cin>>arr1[i];
  }
  //input second array...
  for(int j = 0; j<m; j++){
      cin>>arr2[j];
  }
  //call the funtion...
  mergeTwoSortedArr(arr1, arr2, n, m);
  //after performing task, print our first array...
  for(int i = 0; i<n; i++){
      cout<<arr1[i]<<" ";
  }
    cout<<endl;
    
  //print second array...
  for(int j = 0; j<m; j++){
      cout<<arr2[j]<<" ";
  }
    return 0;
}

