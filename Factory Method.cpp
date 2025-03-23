class shop{

public:
    virtual void category() = 0;
    virtual ~shop();
};

class shop_pets : public shop {

public:
    void category() override;
};

class shop_clothes : public shop{

public:
    void category() override;
};

class ShopFacroty{

public:
    virtual shop* set_Category() = 0;
    virtual ~ShopFacroty(){};
};

class shop_pets_Factory : public ShopFacroty {

public:
    shop* set_Category() override {
        return new shop_pets();
    }
};
    

class shop_clothes_Factory : public ShopFacroty {

public:
    shop* set_Category() override {
        return new shop_clothes();
    }
};

int main() {}