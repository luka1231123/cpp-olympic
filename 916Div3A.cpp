#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(string s, int a)
{
    int c=0;
    vector<int> v(26);
    for(int i=0;i<26;i++){v[i]=0;}
    for(int i=0;i<a;i++)
    {
             int b = s[i] - '0';
             b=b-16;
             v[b-1]++;
             //cout<<v[b-1]<<" "<<b<<endl;
    }
    for(int i=1;i<=26;i++){
            if(v[i-1]>=i)
            {
                    c++;
                    //cout<<v[i]<<" "<<i<<endl;
            }   
    }
    return c;
}

int main(){
    int n;int a;string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
            cin>>a;
            cin>>s;
            cout<<solution(s,a)<<endl;
    }
            
}
