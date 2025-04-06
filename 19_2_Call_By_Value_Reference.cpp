#include<bits/stdc++.h>
using namespace std;
void fun(int x, int *y){
    x *=10;
   (*y) *= 10;
   cout<<x<<" "<<*y<<endl;

}
//call by value temporary modifiaction
//call by referance parmanent modification

int main()
{
    int a=10,b=20;
    fun(a,&b);// b er value niye kaj korar somoy amra memory address niye kaj kortesi
    //tai value change hocce
    cout<<a<<" "<<b<<endl;


}