#include <vector>


class Observer{
    
    virtual void update(int orbit_Earth, double distance, int happy_people) = 0;
};

class Distance_Sun{
    int orbit_Earth, happy_people;
    double distance; 
    std::vector<Observer*> observers;
    
public:

    void Reg_Observ(Observer* observer);
    void Del_Observ(Observer* observer);

    void show_display() const;
    void set_Params(const int& orbit_Earth_param, const double& distance_param, const int& happy_people_param);
};

class Display : public Observer {

public:
    
    void update(int orbit_Earth, double distance, int happy_people) const noexcept; // Show info;
};