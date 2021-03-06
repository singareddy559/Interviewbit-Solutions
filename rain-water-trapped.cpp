int Solution::trap(const vector<int> &A) {
    int n=A.size();
    int i=0,j=n-1,ans=0;
    int left=0,right=0;
    while(i<=j){
        ans+=max(0,max(left-A[i],right-A[j]));
        if(A[i]<=A[j]){
            left=max(left,A[i]);
            i++;
        }
        else{
            right=max(right,A[j]);
            j--;
        }
    }
    return ans;
}

