#include<iostream>
using namespace std;
int daonguoc(int n)
{
    int res = 0,tmp;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    return res;
}
bool soguong(int n)
{
    if(daonguoc(n)!=n) return false;
    return true;
}
int main ()
{
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        if(soguong(i)) cout<<i<<" ";
    }
}