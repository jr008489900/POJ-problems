#include<iostream>
#include<string>
using namespace std;
string str="";
bool cmp(int s,int e)
{
    if(s>=e) return 1;
    if(str[s]>str[e]) return 1;
    else if(str[s]<str[e]) return 0;
    else return cmp(s+1,e-1);
}

void read(int N)
{

    while(N--)
    {
        char a; cin >> a;
        str+=a;
    }
    string ans="";
    while(str.size())
    {
        if(cmp(0,str.size()-1))
        {
            ans+=str[str.size()-1];
            str.erase(str.size()-1,1);
        }
        else
        {
            ans+=str[0];
            str.erase(0,1);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout <<ans[i];
        if((i+1)%80==0) cout <<endl;
    }
    cout << endl;
}
int main()
{
    int N;
    while(cin>>N)
    {
        read(N);
    }
}
