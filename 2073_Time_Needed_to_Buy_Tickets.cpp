Time complexity : O(nk)
Space Complexity : O(1)

Intuition: 
Traverse the whole array and keep decrementing each element, and skip the elements which are already 0.
This is pretty easy and naïve approach.

int timeRequiredToBuy(vector<int>& t, int k) {
        int count=0;
        bool stop =false;
        while(true)
        {
           for(int j =0;j<t.size();j++)
           {
               if(t[j] > 0)
               {
                   t[j]--;
                   count++;
               }     
               if(j ==k && t[j] == 0)
               {
                   stop =true;
                   break;
               }
           }
            if(stop)
                break;
        }
        return count;
    }
