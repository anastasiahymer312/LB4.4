
#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std;
int main()
{
    double x, xp, xk, dx, y;
    double R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "y" << "    |" << endl;
    cout << "----------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (-6 < x && x < 0)
            y = -R - (R * x / 6);
        else
            if (0 < x && x < R)
                y = sqrt(R * R - (x - R) * (x - R));
            else
                if (R < x && x < 2 * R)
                    y = R + sqrt(R * R - x * x);
                else
                    y = R;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    return 0;
}