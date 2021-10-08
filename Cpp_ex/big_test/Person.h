#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>


class Person{
public:
    Person() = default;
    Person(std::string l_name, unsigned l_sex, unsigned l_age, std::string l_phone, std::string l_addr):
    name(l_name), sex(l_sex), age(l_age), phone(l_phone), addr(l_addr) { }
    void print() const;
    Person &write_Person();
    bool isPerson(const char*) const;
private:
    std::string name{"小明"};
    unsigned int sex{1};
    unsigned int age{0};
    std::string phone{"13000000000"};
    std::string addr{"北京市海淀区"};
};

/**
 * 输出函数
*/
void Person::print() const{
    std::cout << "姓名：" << name;
    std::cout << " 性别：" << ((sex==1)?"男":"女"); 
    std::cout << " 年龄：" << age;
    std::cout << " 电话：" << phone;
    std::cout << " 住址：" << addr << std::endl;
}

/**
 * 输入联系人信息
*/
Person &Person::write_Person(){
    std::cout << "请输入名字：" << std::endl;
    std::cin >> name;
    std::cout << "请输入性别（1——男，2——女）：" << std::endl;
    while (1)
    {
        std::cin >> sex;
        if(sex == 1 || sex == 2) break;
        std::cout << "输入错误，请重新输入（男-1，女-2）：" << std::endl;
    }
    std::cout << "请输入年龄" << std::endl;
    std::cin >> age;
    std::cout << "请输入电话" << std::endl;
    std::cin >> phone;
    std::cout << "请输入住址" << std::endl;
    std::cin >> addr;
    return *this;
}

/**
 * 根据名字判断是否为同一人
*/
bool Person::isPerson(const char* c_name) const{
    if(name == c_name) return true;
    return false;
}

#endif