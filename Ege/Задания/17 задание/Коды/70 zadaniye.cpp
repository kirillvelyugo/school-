#include <iostream>
using namespace std;

int main(){
    int count = 0, chisl;
    for (int i = 2894; i <= 174882; i++){
        if (i % 10 == 8){
            int x = i, sum = 0;
            while (x > 0){
                sum += x % 10;
                x /= 10;
            }
            if (sum > 22){
                count++;
                if (count == 13){
                    chisl = i;
                }
            }
        }
    }
    cout << count << '\n' << chisl << '\n';
    return 0;
}
/*
Рассматривается множество целых чисел, принадлежащих числовому отрезку [2894;174882], 
которые оканчиваются цифрой 8 и у которых сумма цифр больше 22. 
Найдите количество таких чисел и такое тринадцатое число по порядку.
В ответе запишите два целых числа: сначала количество, затем тринадцатое такое число.  
*/