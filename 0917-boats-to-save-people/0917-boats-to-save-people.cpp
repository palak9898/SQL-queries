class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0, j= people.size()-1;
        int count;

        while(i<=j){
    
            if(people[i]+ people[j]<=limit){
                i++;
            }
            j--;
            count++;
        }
        return count;
    }
};