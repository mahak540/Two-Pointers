 vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        
        if(arr.size() < 2)
        {
            return {};
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int>res(2);
        int mindif=INT_MAX;
        int l=0,r=n-1;
        
        while(l < r)
        {
            int sum=arr[l] + arr[r];
            if(abs(target-sum) < mindif)
            {
                mindif = abs(target-sum);
               res[0]=arr[l];
               res[1]=arr[r];
            }
            if(sum < target)
            l++;
            
            else if(sum > target)
            r--;
            
            else
            return res;
                
            
        }
        return res;
    }
