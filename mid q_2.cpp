
#include<bits/stdc++.h>
using namespace std;

class Area{
private:
    float radius;
public:
    int length;
    int width;
    int height;
    // Constructor with parameters
    Area(int l, int w){
        length = l;
        width = w;
    }
    // Default constructor
    Area() {
        // Initialize variables to some default values if needed
        length = 0;
        width = 0;
    }
    void setRadius(float r){
        radius = r;
    }
    float getRadius(){
        return radius;
    }
};

int main()
{
    Area rectangle(4, 5); // Provide values for length and width
    Area sphere; // Use default constructor for sphere
    sphere.setRadius(0.73);
    float x = sphere.getRadius();
    cout << "area: " << 4 * 3.1416 * x * x << endl;
    cout << "rectangle area: " << rectangle.length * rectangle.width << endl;

    return 0; // Don't forget to return 0 at the end of main
}
