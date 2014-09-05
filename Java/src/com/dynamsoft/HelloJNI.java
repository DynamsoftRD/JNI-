package com.dynamsoft;

public class HelloJNI {
    static {
        System.loadLibrary("hellojni");
    }
    
    public static void print() {
        System.out.println("java print");
    }
    
    public native String stringFromJNI();
    public native static void nativePrint();

    public static void main(String args[]) {
        HelloJNI.nativePrint();
        HelloJNI hellojni = new HelloJNI();
        System.out.println(hellojni.stringFromJNI());
    }
}