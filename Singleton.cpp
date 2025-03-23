class Singl{

    Singl() = default;
    Singl(const Singl&);
    Singl& operator=(const Singl&);

    
    static Singl* create_object; 
    /*
    Поля для работы с классом.
    */
public:
    
    explicit Singl(Singl&&);
    Singl& operator=(const Singl&&);

    static Singl* create_obj(){

        if(create_object==nullptr) 
            create_object = new Singl();
        return create_object;

    }
    /*
    Методы для работы с классом
    */
    ~Singl(){
        delete create_object;
    }
};  

Singl* Singl::create_object = nullptr;
int main(){
    const char* a = "wow";
}