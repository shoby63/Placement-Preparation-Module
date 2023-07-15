class Solution {
public:
    string frequencySort(string s) {
        // phle map bnayenge frequency store krne ke liye of each character (char, int)
        // uske baad priority queue (max heap) pair bnayenge jisme phle frequency and then char store krenge (int, char)
        // ek string ans bnayenge jisme jo bhi top pe hoga pq me use append kra denge frequency ke according

        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> pq;
        string ans = "";

        for(char ch : s)
        {
            mp[ch]++;
        }
        // traverse on map
        for (auto it : mp)
        {
            pq.push({it.second, it.first});
        }
        // traverse on pq and append the top element in ans
        while(!pq.empty())
        {
            auto temp = pq.top();
            int frq = temp.first;
            char ch = temp.second;

            ans += string(frq, ch);
            pq.pop();
        }
        return ans;
    }
};