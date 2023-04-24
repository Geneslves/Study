package com.example.test1;

import java.lang.reflect.Proxy;

/**
 * @author 杨德龙 202002911060136
 */
public class ProxyDemo {
    public static void main(String[] args){
        //动态代理
        HelloSpeaker helloSpeaker=new HelloSpeaker();
        LogHandler logHandler=new LogHandler(helloSpeaker);
        Class cls=helloSpeaker.getClass();
        IHello iHello=(IHello)Proxy.newProxyInstance(cls.getClassLoader(),cls.getInterfaces(),logHandler);
        iHello.hello("Justin");
    }
}