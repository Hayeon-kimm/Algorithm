#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,n,el;
    vector <int>v;
    cin >> m >> n;
    for(int i=0; i<m; i++){
        cin >> el;
        v.push_back(el);
    }
    sort(v.begin(),v.end());
    cout << v[n-1];
}