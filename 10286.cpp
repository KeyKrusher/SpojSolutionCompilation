#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <set>
#include <cstring>
#include <iomanip>
#include <map>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
#include <string>
#include <vector>
#include <new>
#include <bitset>
#include <ctime>
#include <stdint.h>
#include <unistd.h>
 
 using namespace std;
 
#define ll long long int
#define INF 1000000000
#define PI acos(-1.0)
#define EPS 1e-9
 
template <typename X> X gcd(X a, X b){if(!b)return a; else return gcd(b, a%b);}
 
typedef vector<int> vi;
typedef pair<int, int> ii;

int t, n, m, d, flag, i, x;
priority_queue<int> pq;

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &n, &m, &d);
        pq=priority_queue<int>();
        for(i=1;i<=n;++i)
            scanf("%d", &x), pq.push(x);
        flag=1;
        for(i=1;i<=m;++i){
            x=pq.top();pq.pop();
            if(x<=d){
                flag=0;
                break;
            }
            pq.push(x-d);
        }
        if(flag)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
