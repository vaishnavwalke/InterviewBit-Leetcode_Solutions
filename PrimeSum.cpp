vector<int> Solution::primesum(int A) {
    vector<bool>isprime(A+1);
    for(int i=0;i<=A;i++)
    {
      isprime[i]=1;
    }
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2;i*i<=A;i++){
        if(isprime[i])
        {
        for(int j=i*2;j<=A;j=j+=i)
        {
            isprime[j]=0;
        }
        }
    }
    vector<int> ans(2);
    for(int i=2;i<=A/2;i++){
        if(isprime[i]&&isprime[A-i])
        {
            ans[0]=i;
            ans[1]=A-i;
            break;
        }
    }
    return ans;
}
