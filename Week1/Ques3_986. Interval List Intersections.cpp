class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        
        //2D vector to store answer
        vector <vector <int> > answer;
        

        if(firstList.empty()==true || secondList.empty()==true)
                return  answer;
        //firstpointer and second pointer
        int fp=0;
        int sp=0;
        
        while(fp<firstList.size() && sp<secondList.size()){
            
            //common starting point
            int csp=max(firstList[fp][0],secondList[sp][0]);
            
            //common ending point
            int cep=min(firstList[fp][1],secondList[sp][1]);
            
            //checking if common point exists or not
            if(csp<=cep){
                answer.push_back({csp,cep});
            }
            
            //finding the min end point and increment that pointer
            firstList[fp][1]>secondList[sp][1]?sp++:fp++;
        }
        
        return answer;
    }
};