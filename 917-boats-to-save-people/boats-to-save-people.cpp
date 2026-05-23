class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
       int i=0,j=people.size()-1;
       while(j>=i)
       {
        if(people[j]+people[i]<=limit)
        {
            count++;
            j--;
            i++;
        }
        else 
        {
            count++;
            j--;
        }
       }
        return count;
    }
};