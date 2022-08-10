class Solution {
public:
    //bool comp
struct node
{
    string s;
    int value;
};

struct comp
{
    bool operator()(const node a, const node b)const
    {
        return (a.value == b.value)? a.s > b.s: a.value < b.value;
    }
};
vector<string> topKFrequent(vector<string>& words, int k)
{
    unordered_map<string, int> sMap;
    priority_queue<node,vector<node>,comp> pq;
    
    for (int i = 0; i < words.size(); i++)
    {
        sMap[words[i]] += 1;
    }
    int count = 0;
    vector<string> ans;
    for (auto s : sMap)
    {
        node a;
        a.s = s.first;
        a.value = s.second;
        pq.push(a);
    }

    while (!pq.empty())
    {
        if (count == k)
            return ans;
        ans.push_back(pq.top().s);
        pq.pop();
        count++;
    }
    return ans;
}
};
