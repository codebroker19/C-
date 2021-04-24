#include<bits/stdc++.h>
using namespace std;

bool permutation(int ip[],int op[],int n)
{
    queue<int>input;
    for(int i=0;i<n;i++)
    input.push(ip[i]);
    
    queue<int>output;
    for(int i=0;i<n;i++)
    output.push(op[i]);
    stack<int>s;
    while(!input.front())
    {
        int a=input.front();
        input.pop();
        if(a==output.front())
        {
            output.pop();
            while(!s.empty()&&output.front())
            {
                if(s.top()==output.front())
                {
                    s.pop();
                    output.pop();
                }
                else
                {
                    break;
                }
                
            }
        }
        else
        {
            s.push(a);
        }
        
    }
    return (input.empty()&&s.empty());
}
int main() 
{ 
    // Input Queue 
    int input[] = {1, 2, 3}; 
  
    // Output Queue 
    int output[] = {2, 1, 3}; 
  
    int n = 3; 
  
    if (permutation(input,output,n)) 
        cout << "Yes"; 
    else
        cout << "Not Possible"; 
    return 0; 
} 