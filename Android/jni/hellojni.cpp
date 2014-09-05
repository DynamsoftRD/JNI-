#include<jni.h>

extern "C" {
	JNIEXPORT jstring JNICALL Java_com_dynamsoft_HelloJNI_stringFromJNI(JNIEnv* env, jobject thiz);
	JNIEXPORT void JNICALL Java_com_dynamsoft_HelloJNI_nativePrint(JNIEnv* env, jobject thiz);
}

/*non-static method*/
JNIEXPORT jstring JNICALL Java_com_dynamsoft_HelloJNI_stringFromJNI(JNIEnv* env, jobject thiz)
{
	return env->NewStringUTF("I'm JNI");
}

