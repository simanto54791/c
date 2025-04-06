#include<bits/stdc++.h>
using namespace std;
int fun(int x[],int y){
    int sum = 0;
    for(int i=0; i<y; i++){
        sum+=x[i];
    }
    return sum;
}

int main()
{
    int a[5]={3,5,6,7,1};
   int res= fun(a,5);
   cout<<res;

}