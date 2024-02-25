#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    
    float one, two, three; cin >> one >> two >> three;
    
    vector<float> values = {one, two, three};
    
    sort(values.begin(), values.end());
    
    float a = values[0]; float b = values[1]; float c = values[2];
    
    float firstVal = (acos(((pow(a, 2)+pow(b, 2))-pow(c,2)) / (2 * a * b))) * (180/M_PI);
    
    float xx = (asin((sin(firstVal * (M_PI/180) ) / c) * b)) * (180/M_PI);
    
    cout << "The angles are: " << firstVal << " " << xx << " " << (180-(firstVal+xx));
    

    return 0;
}
