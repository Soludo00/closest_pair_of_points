#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point
{
    int x;
    int y;
};

double distance(Point p1, Point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

double closestPair(vector<Point> &points)
{
    double minDist = distance(points[0], points[1]);

    for(int i = 0; i < points.size(); i++)
    {
        for(int j = i + 1; j < points.size(); j++)
        {
            double d = distance(points[i], points[j]);

            if(d < minDist)
                minDist = d;
        }
    }

    return minDist;
}

int main()
{
    vector<Point> points;

    points.push_back({2,3});
    points.push_back({12,30});
    points.push_back({40,50});
    points.push_back({5,1});
    points.push_back({12,10});
    points.push_back({3,4});

    double result = closestPair(points);

    cout << "Closest distance: " << result << endl;

    return 0;
}
