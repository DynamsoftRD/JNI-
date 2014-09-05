// jni.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include<stdio.h>
#include<jni.h>

extern "C" {
	JNIEXPORT jstring JNICALL Java_com_dynamsoft_HelloJNI_stringFromJNI(JNIEnv* env, jobject thiz);
	JNIEXPORT void JNICALL Java_com_dynamsoft_HelloJNI_nativePrint(JNIEnv* env, jobject thiz);
}

/*non-static method*/
JNIEXPORT jstring JNICALL Java_com_dynamsoft_HelloJNI_stringFromJNI(JNIEnv* env, jobject thiz)
{
	printf("native method called");

	return env->NewStringUTF("I'm JNI");
}

/*static method*/
JNIEXPORT void JNICALL Java_com_dynamsoft_HelloJNI_nativePrint(JNIEnv* env, jobject thiz)
{
	jclass cls = (jclass)thiz;
	jmethodID methodID = env->GetStaticMethodID(cls, "print", "()V");
	env->CallStaticVoidMethod(cls, methodID);
}

