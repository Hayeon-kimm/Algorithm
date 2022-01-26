#include <iostream>

using namespace std;
int tmp[1000001];

void merge(int arr[], int st, int en){
    int mid = (st+en)/2;
    int id1 = st;
    int id2 = mid;
    for(int i=0; i<en; i++){
        if(id1 == mid) tmp[i] = arr[id2++];
        else if(id2 == en) tmp[i] = arr[id1++];
        else if(arr[id1]<=arr[id2]) tmp[i] = arr[id1++];
        else tmp[i] = arr[id2++];
    }
    for(int i=0; i<en; i++) {
        arr[i] = tmp[i];
        cout << tmp[i];
    }

}

void merge_sort(int arr1[], int st, int en){
    if(en==st+1) return;
    int mid = (st+en) / 2;
    merge_sort(arr1, st, mid);
    merge_sort(arr1, mid, en);
    merge(arr1, st,en);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int arr2[100005];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }
    merge_sort(arr2,0,n);
}