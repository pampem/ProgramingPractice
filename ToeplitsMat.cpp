//leet 10/31 #2

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {

        for(int i=0; i<matrix.size(); i++){
          for(int j=0; j<matrix.at(0).size(); j++){
            if(i>0 && j>0 && matrix.at(i-1).at(j-1) != matrix.at(i).at(j))return false;
          }
        }
        return true;



    }
};
