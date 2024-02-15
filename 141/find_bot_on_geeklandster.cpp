class Solution {
  public:
    bool isprime(int num){
        if(num<=1){
            return false;
        }
        for (int i = 2; i <= sqrt(num); ++i){
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
    
    int isbot(string& username){
        set<char>distinct;
        for(int i=0;i<username.length();i+=2){
            distinct.insert(username[i]);
        }
        int count=distinct.size();
        return isprime(count)? 1:0;
    }
    
    vector<int> findBots(vector<string> &usernames, int n) {
        // code here
        vector<int>result;
        for(int i=0;i<n;i++){
            result.push_back(isbot(usernames[i]));
        }
        return result;
    }
};
