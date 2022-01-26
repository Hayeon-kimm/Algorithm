#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,M ;
    cin >> N >> M;
    int a[1000005], b[1000005], c[2000005];
    for(int i=0; i<N; i++) cin >> a[i];
    for(int i=0; i<M; i++) cin >> b[i]; //배열완성
    int aidx=0, bidx=0;
    for(int j=0; j<N+M; j++){
        if(aidx == N) c[j] = b[bidx++];
        else if(bidx == M) c[j] = a[aidx++];
        else if(a[aidx] <= b[bidx]) c[j] = a[aidx++];
        else c[j] = b[bidx++];
    }

    for(int j=0; j<N+M; j++) {
        if(j==N+M-1) cout<<c[j];
        else cout << c[j] << ' ';
    }
}