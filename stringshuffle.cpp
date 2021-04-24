#include<bits/stdc++.h>
using namespace std;
int shuffle()
{
string s1;
string s2;
string s3;
int len1=s1.length();
int len2=s2.length();
int len3=s3.length();
if(len1+len2!=len3)
return -1;
else
{
        int i=0,j=0,k=0,f=0;
        while(k<len3)
        {
            if(i<len1&&s1[i]==s3[k])
            i++;
            else if(j<len2&&s2[j]==s3[k])
            j++;
            else
            {
                f=1;break;
            }
            k++;
        }
        if(i<len1||j<len2)
        return -1;
        else 
        return 1;
    
}

}