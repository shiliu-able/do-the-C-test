//
// Created by 十六 on 2026/1/19.
//

#ifndef DO_THE_C_TEST_SECOND_H
#define DO_THE_C_TEST_SECOND_H
#include <string>

using namespace std;

class Second {
public:
    void showNameAndAddress(string name, string address);
    void showLonglength(int longlength);
    void oneHalf();
    void twoHalf();
    void showAgeMonths(int age);
    void showCelsius(double number);
    void showLightYear(double year);
    void showTime(int hour, int minute);
private:

};


#endif //DO_THE_C_TEST_SECOND_H


/* 第二章复习题
 * 1.主要形式是函数
 * 2.将iostream的头文件添加到源代码中
 * 3.使用命名为std的命名域
 * 4.cout << "hello world" << endl;
 * 5.int cheeses;
 * 6.int cheeses = 32;
 * 7.cin >> cheeses;
 * 8.cout << "We have " << cheeses << "varieties of cheeses" << endl;
 * 9.函数名 froop rattle prune 返回参数 int 无 int 入参类型 double int 无
 * 10.没有返回值
 * 11. 没有使用std命名域；增加std::cout；使用using std::cout;
 */