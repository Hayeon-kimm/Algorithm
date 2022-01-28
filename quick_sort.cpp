#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[8] = {6,-8,1,12,8,3,7,-7};
    int pivot = arr[0];
    int l=1, r=7; //l,r : idx
    while(True){
        while(l<r && arr[l] <= pivot) l++;
        while(l<r && arr[r] > pivot) r--;
        if(r<l) return;
        swap(arr[l],arr[r]);
    }
    swap(arr[0], arr[r]);
}