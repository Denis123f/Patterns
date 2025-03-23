template <typename T>
class Singl{

    Singl() = default;
    Singl(const Singl&);
    Singl& operator=(const Singl&);

    
    static Singl<T>* create_object; 
    T values;
    /*
    Поля для работы с классом.
    */
    static void destroy(){

        if(create_object == nullptr) return;
        delete create_object;
        create_object = nullptr;
    }

public:
    
    explicit Singl(Singl&&);
    Singl& operator=(const Singl&&);

    static Singl<T>* create(T object){

        if(create_object==nullptr) {
            create_object = new Singl();
            create_object->values = object;
        }
        return create_object;

    }

    T& get_values(){
        return values;
    }
    /*
    Методы для работы с классом
    */
    ~Singl(){

        if(create_object != nullptr)
        destroy();
    }
};  

template <typename T>
Singl<T>* Singl<T>::create_object = nullptr;


int main(){
    

}