#include <iostream>

using namespace std;

void merge(int arr[], int sortedarr[], int st, int en){
    int mid = (st+en)/2;
    int id1 = st;
    int id2 = mid;
    for(int i=0; i<en; i++){
        if(id1 == mid) sortedarr[i] = arr[id2++];
        else if(id2 == en) sortedarr[i] = arr[id1++];
        else if(arr[id1]<=arr[id2]) sortedarr[i] = arr[id1++];
        else sortedarr[i] = arr[id2++];
    }
    for(int i=0; i<en; i++) {
        arr[i] = sortedarr[i];
    }

}

void merge_sort(int arr1[], int sortedarr[], int st, int en){
    if(en==st+1) return;
    int mid = (st+en) / 2;
    merge_sort(arr1, sortedarr, st, mid);
    merge_sort(arr1, sortedarr, mid, en);
    merge(arr1, sortedarr, st,en);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int arr2[100005];
    int* sortedarr = new int[n];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }
    merge_sort(arr2, sortedarr, 0,n);
}