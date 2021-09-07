//Dev Wadhwa

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if((coordinates[0]%2!=0 && coordinates[1]%2==0) || (coordinates[0]%2==0 && coordinates[1]%2!=0)) 
            return true;
        else 
            return false;
    }
};
