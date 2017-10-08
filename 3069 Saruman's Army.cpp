#include<iostream>
using namespace std;

const int maxs=1005;
bool state[maxs];
int R , N;
void initial()
{
    for(int i=0;i<maxs;i++)
        state[i]=0;
}

bool read()
{
    initial();
    cin >> R >>N;
    if(R==-1&&N==-1) return 0;
    for(int i=0;i<N;i++)
    {
        int t; cin >> t;
        state[t]=1;
    }
    return 1;
}

int ans()
{
    int cnt=0;
    for(int i=0;i<maxs;i++)
    {
        if(state[i])
        {
            int k=i;
            for(int j=k;j<=k+R&&j<maxs;j++)
            {
                if(state[j])  i=j;
            }
            i+=R;
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    while(read())
    {
        cout <<ans() <<endl;
    }
}
