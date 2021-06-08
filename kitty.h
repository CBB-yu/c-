#ifndef KITTY_H
#define KITTY_H


class kitty
{

public:
    enum color {black,white,orange,brown};

private:                    //default
    float weight;
    char genter;            //female male

public:
    enum color Color;

    kitty(char genter);     //构造函数，初始化类的内部数据
    ~kitty();               //不可以重载
    void eat();
};

#endif // KITTY_H
