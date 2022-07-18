
#include <iostream>
#include <cmath>
#include <time.h>
 
using namespace std;
 
/**
 * 普通的求幂函数
 * @param base 底数
 * @param power  指数
 * @return  求幂结果的最后3位数表示的整数
 */
long long normalPower(long long base, long long power) {
    long long result = 1;
    for (int i = 1; i <= power; i++) {
        result = result * base;
        result = result % 1000;
    }
    return result % 1000;
}
 
int main() {
    clock_t start, finish;
    //clock_t为CPU时钟计时单元数
    long long base, power;
    cin >> base >> power;
    start = clock();
    //clock()函数返回此时CPU时钟计时单元数
    cout << normalPower(base, power) << endl;
    finish = clock();
    //clock()函数返回此时CPU时钟计时单元数
    cout << "the time cost is" << double(finish - start) / CLOCKS_PER_SEC;
    //finish与start的差值即为程序运行花费的CPU时钟单元数量，再除每秒CPU有多少个时钟单元，即为程序耗时
    return 0;
 
}