int countTriplets(vector<int> &arr, int target) {
        // Code Here
        
        int n=arr.size();
        int res=0;
        for(int i=0;i<n-2;i++)
        {
            int l=i+1,r=n-1;
            while(l<r)
            {
                int sum=arr[i]+arr[l]+arr[r];
                if(sum < target)
                {
                    l+=1;
                }
                else if (sum > target)
                {
                    r-=1;
                }
                else if(sum==target)
                {
                    int ele1=arr[l],ele2=arr[r];
                    int c1=0,c2=0;
                    while(l<=r && arr[l]==ele1){
                        l++;
                        c1++;
                    }
                    while(l<=r && arr[r]==ele2){
                        r--;
                        c2++;
                    }
                    if(ele1==ele2)
                    res+=(c1*(c1-1)/2);
                    else
                    res+=(c1*c2);
                    
                }
            }
        }
        return res;
    }
