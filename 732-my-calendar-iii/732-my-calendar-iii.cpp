class MyCalendarThree {
public:
    map<int,int> mp;
    int max_till=0;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int cnt=0;
        for(auto &x:mp){
            cnt+=x.second;
            max_till=max(max_till,cnt);
        }
        return max_till;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */