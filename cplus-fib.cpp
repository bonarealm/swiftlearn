//
//  main.cpp
//  c-lesson1
//
//  Created by rabo cheng on 2023/1/10.
//

#include <iostream>
#include <time.h>
using namespace std;
long long fib(long long N)
{
    if (N<=0)
        return 0;
    else if (N == 1)
        return N;
    else {
        return fib(N-1)+fib(N-2);
        }
}

void measure(long long (*func)(long long x),long long y)
{
    clock_t start_time=clock();
    long long z=func(y);
    clock_t end_time=clock();
    cout<<"fib 运行结果："<<z<<endl;
    cout<<"fib 运行时间："<<static_cast<double>(end_time-start_time)/CLOCKS_PER_SEC*1000<<"ms"<< endl;
    return;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    measure(fib, 20);
    return 0;
}
