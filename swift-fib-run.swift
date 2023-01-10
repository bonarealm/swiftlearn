//
//  main.swift
//  swift-lesson1

import Foundation

func measure(f: ()->()){
    let start=CFAbsoluteTimeGetCurrent()
    f()
    let end=CFAbsoluteTimeGetCurrent()
    print("运行时间：\((end-start)*1000)")
}

func fib(n:UInt)->UInt{
    if n<=0 {
        return 0
    }else if n==1 {
        return n
    }
    else {
        return fib(n:n-1)+fib(n:n-2)
    }
}

measure {
    print("fib 运行结果：\(fib(n:20))")
}
