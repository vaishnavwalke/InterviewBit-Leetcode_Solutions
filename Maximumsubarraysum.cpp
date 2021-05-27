int Solution::maxSubArray(const vector<int> &A) {
    int n=A.size();
    int msf=INT_MIN,meh=0;
    for(int i=0;i<n;i++)
    {
        meh=meh+A[i];
        if(msf<meh)
        msf=meh;
        if(meh<0)
        meh=0;
    }
    return msf;
}
