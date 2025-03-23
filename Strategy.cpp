#include <vector>
#include <iostream>
template <typename T>
class Search_Straregy{

    public:
    virtual T& search(std::vector<T> values) const = 0;

};

template <typename T>
class Search_Max : public Search_Straregy<T>{

public:

    T& search(std::vector<T> values) const override;

};

template <typename T>
class Search_Min : public Search_Straregy<T>{

public:
    T& search(std::vector<T> values) const override;

};

template <typename T>
class Average_Value : public Search_Straregy<T>{

public:
    T& search(std::vector<T> values) const override;
};

template <typename T>
class Working_with_Search{

    Search_Straregy<T>* strategy;

public:

    void set_Strategy(Search_Straregy<T>* strategy){
        this->strategy = strategy;
    }

    T& Doing_Search(const std::vector<T>& qwerty){
        return strategy->search(qwerty);
    }
};

int main(){}