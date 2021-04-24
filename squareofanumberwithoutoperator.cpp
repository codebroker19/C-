#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,count=0;
cin>>a;
int b=a;
int c=0;
for(int i=1;i<a;i++)
{b=b+a;}
cout<<b;
    return 0;
}
/*
int square(a){
if(a==0)
return 0;
if(a<0)
a=-a;
//floor of a
int x=floor(a);
if(n&1)
return((square(a)<<2)+(x<<2)+1);
else
return(square(a)<<2);
}
int main()
{
    // Function calls
    for (int n = 1; n <= 5; n++)
        cout << "n = " << n << ", n^2 = " << square(n)
             << endl;
    return 0;
}
*/