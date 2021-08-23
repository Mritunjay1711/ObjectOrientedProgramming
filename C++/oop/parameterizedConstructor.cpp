#include<iostream>
#include<math.h>

using namespace std;
class point{
    int x, y;
    public:
        point(int a, int b)
        {
            x = a;
            y = b;
        }
        void display()
        {
            cout << "The point is (" << x << ", "<< y << ")" << endl;
        }
        friend double distance(point, point);
};

double distance(point A, point B)
{
    double dis = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
    return dis;
}
int main(){
     point p(0, 0);
     point q(4, 4);
     cout << "The distance between points is " << distance(p, q) << endl;
    return 0;
}