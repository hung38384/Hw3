#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string str;
    getline(cin,str);
    int n=str.size(),dem=0;
    for(int i=0; i<n;i++)
    {
        if(str[i]==str[n-i-1]) dem++;
    }
    if(dem==n)
    {
        cout<<"Yes";
    } else 
    {
        cout<<"No";
    }
}