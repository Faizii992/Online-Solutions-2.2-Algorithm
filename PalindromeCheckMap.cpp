
#include<bits/stdc++.h>


using namespace std;
int n;
int vc=0;
int cc=0;

map<  int ,string > mp;
map< int, string > ::iterator it;
vector < string > s;
int main()
{
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter the string and number :"<<endl;
    for(int i=0;i<n;i++)
    {
        string a;
        int x;

        cin>>a>>x;

        mp[x]=a;

    }
cout<<"The elements are :"<<endl;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

int q;
cout<<"Enter the element to find: "<<endl;
cin>>q;
int c=0;
cout<<"****************"<<endl;
if(mp.find(q)!=mp.end())
{
    string s=mp[q];
for(int i=0,j=s.size()-1;i<s.size()/2;i++,j--)
{

if(s[i]==s[j])
{
c=0;

}
else
{
    c=1;
    break;
}




}

if(c==1)
{
    cout<<"Not PAlindrome"<<endl;
}
else
{
    cout<<"Palindrome "<<endl;
}

}

}


