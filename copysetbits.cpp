#include<bits/stdc++.h>
using namespace std;
void copy(unsigned&x,unsigned y,unsigned l,unsigned r)
{
    if(l<1||l>32)
    return;
    else
    {
        for(int i=l;i<=r;i++)
        {
            int mask=1<<(i-1);
            if(y&mask)
            x=x|mask;
        }
    }
}
int main() 
{ 
   unsigned x = 10, y = 13, l = 2, r = 3; 
   copy(x, y, l, r); 
   cout << "Modified x is " << x; 
   return 0;  
} 