bool mycompare(string x,string y){
    string xy=x.append(y);
    string yx=y.append(x);
    return xy.compare(yx)>0 ?1:0;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> s(A.size());
    int count=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        count++;
        
        s[i]=to_string(A[i]);
    }
    if(count==A.size())
    return "0";
    sort(s.begin(),s.end(),mycompare);
    string ans;
    ans=s[0];
    for(int i=1;i<s.size();i++)
    {
        ans+=s[i];
    }
    return ans;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>A;
for(int i=0;i<n;i++)
{
cin>>A[i];
}
largestnumber(A);
for(int i=0;i<n;i++)
cout<<A[i];
return 0;
}
