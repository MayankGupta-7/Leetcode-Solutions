class Solution {
public:
    int search(vector<int>&v, int k) 
    {
        int n=v.size();

        int lo=0,hi=n-1;

        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;

            if(v[mid]==k) return mid;

            if(v[lo]<=v[mid])
            {
                if(v[lo]<=k && k<v[mid])
                {
                    hi=mid-1;
                }
                else
                {
                    lo=mid+1;
                }

            }
            else
            {
                if(v[mid]<k && k<=v[hi])
                {
                    lo=mid+1;
                }
                else
                {
                    hi=mid-1;
                }
            }
        }

        return -1;
    }
};