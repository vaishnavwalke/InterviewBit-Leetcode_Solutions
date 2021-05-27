vector<int> Solution::wave(vector<int> &A) { 
  //3 2 1 4
  //sorted= 1 2 3 4
  //wave array lexicographically= 2 1 4 2
    sort(A.begin(),A.end());
    for(int i=1;i<A.size();i+=2)
    {
        int temp=A[i];
        A[i]=A[i-1];
        A[i-1]=temp;
    }
    return A;
}
