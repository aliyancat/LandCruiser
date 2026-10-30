class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mapped;
 
        for (int i=0;i<heights.size();i++) {

            mapped[heights[i]] = names[i];
        }
        vector<string> nee;
        for (auto srs = mapped.rbegin(); srs != mapped.rend(); srs++) {
        nee.push_back(srs->second);
        }




        return nee;
    }
};