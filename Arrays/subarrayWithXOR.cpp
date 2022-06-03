int Solution::solve(vector<int> &A, int B) {

    map<int, int> freq;
    int xorr=0;
    int count=0;

    for(auto it:A){
        xorr=xorr^it;
        if(xorr==B){
            count++;
        }

        if(freq.find(xorr^B)!=freq.end()){
            count+=freq[xorr^B];

            
        }

        freq[xorr]+=1;

    }

    return count;
}
