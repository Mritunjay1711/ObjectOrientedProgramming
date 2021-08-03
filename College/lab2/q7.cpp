#include<iostream>
#include<math.h>
using namespace std;

class point_26
{
    int x;
    int y;
    public:
        void setData(int a, int b)
        {
            x = a;
            y = b;
        }
        void display();
        double dis(point_26 p, point_26 q);
};

double point_26 :: dis(point_26 p, point_26 q)
{
    double distance_26;
    distance_26 = sqrt(((p.x - q.x) * (p.x - q.x)) + ((p.y - q.y) * (p.y - q.y)));
    return distance_26;
}

int main(){
    int a_26, b_26, c_26 ,d_26;
    point_26 p1_26, p2_26;
    double distance_26;
    cout << "Enter the coordinates of point1: ";
    cin >> a_26 >> b_26;
    cout << "Enter the coordinates of point2: ";
    cin >> c_26 >> d_26;
    p1_26.setData(a_26, b_26);
    p2_26.setData(c_26, d_26);
    distance_26 = p2_26.dis(p1_26, p2_26);
    cout << distance_26;
    return 0;
}
 