#include<bits/stdc++.h>
using namespace std;
int main()
 {
int p;
cin>>p;
while(p)
{
    string s1;
    char ch;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        s1.push_back(ch);
    }
    
     int flag=0;
    for(int i=0;i<s1.length();i++)
    {
        auto c1= s1.find(s1[i]);
        if(s1.find(s1[i],c1+1)<s1.length())
        {
            continue;
        }
        else
        {
            cout<<s1[c1]<<endl;;
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        cout<<"-1"<<endl;;
    }
    p--;
}
}