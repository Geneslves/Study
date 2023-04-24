package com.example.test1;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;

public class LogHandler implements InvocationHandler {
    private Object sub;
    public LogHandler(){

    }
    public LogHandler(Object obj){
        sub = obj;
    }
    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        System.out.println("before you do thing");
        method.invoke(sub,args);
        System.out.println("after you do thing");
        return null;
    }
}
