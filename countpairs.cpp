 int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int c=0;
        int l=0,r=n-1;
        while(l<r)
        {
            int sum=arr[l]+arr[r];
            if(sum<target)
            {
                c+= r-l;
                l++;
            }
            else
            r--;
        }
        return c;
    }
