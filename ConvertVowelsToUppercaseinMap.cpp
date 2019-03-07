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
cout<<"****************"<<endl;
if(mp.find(q)!=mp.end())
{
    string s=mp[q];
for(int i=0;i<s.size();i++)
{



    if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o'||s[i]=='u'))//
    {
        s[i]=s[i]-32;
    }
      else
      {
          if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
          {
              s[i]=s[i]+32;

          }
      }


}

if(vc>cc)
{
    cout<<"BEAUTIFUL "<<endl;

}
else
{
    cout<<"NOT "<<endl;
}


cout<<s<<endl;


}
}




