vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int slar=INT_MIN;
    int lar=INT_MIN;
    int sma=INT_MAX;    
    int ssma=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(lar<a[i])
        {
            slar=lar;
            lar=a[i];
        }
        else if(a[i]!=lar&&a[i]>slar)
        slar=a[i];
     
        if(sma>a[i])
        {
            ssma=sma;
            sma=a[i];
        }
        else if(a[i]!=sma&&a[i]<ssma)
        ssma=a[i];
    }


    vector<int>ans;
    ans.push_back(slar);
    ans.push_back(ssma);
    return ans;


}
