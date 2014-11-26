/*************************************************************************
	> File Name: stdbind.cc
	> Author: 
	> Mail: 
	> Created Time: 2014年11月27日 星期四 00时58分08秒
 ************************************************************************/
#include<opencv2/opencv.hpp>
#include<iostream>
#include<functional>

using namespace std;
using namespace cv;

void hello(function<int(void) foo)
{
    cout<<foo()<<endl;
}
int foo(Mat img)
{
    cout<<img.ref<<endl;
}
int main()
{
    Mat img(100,100,CV_8UC1);
    hello(bind(foo,img));
    
    return 0;

}
