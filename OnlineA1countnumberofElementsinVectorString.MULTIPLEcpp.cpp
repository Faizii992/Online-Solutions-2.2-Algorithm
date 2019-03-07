#include<bits/stdc++.h>


using namespace std;
vector < string > vec;
string s;
int main()
{
    cout<<"Enter string elements: "<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>s;
        vec.push_back(s);
    }


    for(int j=0;j<2;j++)
    {
        cout<<"Vector "<<j+1<<endl;

        for(int k=0;k<vec[j].size();k++)
        { int sum=1;
            for(int l=0;l<vec[j].size();l++)
            {
                if(l!=k)
                {
                    if(vec[j][k]==vec[j][l])
                    {
                        sum++;

                    }
                }



            }


 cout<<vec[j][k]<<"      "<<sum<<endl;


        }
    }

}
