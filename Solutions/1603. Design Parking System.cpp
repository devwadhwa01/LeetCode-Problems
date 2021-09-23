//Dev Wadhwa

class ParkingSystem {
public:
    int b,m,s;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
    }
    bool addCar(int carType) {
        if(carType==1 && b!=0)
        {
            b--;
            return true;
        }
        else if(carType==2 && m!=0)
        {
            m--;
            return true;
        }
        else if (carType==3 && s!=0)
        {
            s--;
            return true;
        }
        else return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
