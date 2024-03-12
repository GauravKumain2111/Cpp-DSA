class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int last = 0;
        for(int i =0;i<stones.size();i++){
            pq.push(stones[i]);
            
        }
        while(pq.size()!=1 && pq.size()!=0){
            int high  = pq.top();
            pq.pop();
            int low = pq.top();
            pq.pop();
            int di = max(high,low)-min(high,low);
            if(di>0){
                pq.push(di);
            }
            

        }
        if(pq.size()==1){
            return pq.top();
        }
        return 0;
    }
};
