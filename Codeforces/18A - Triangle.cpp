#include <iostream>
#include <cmath>
using namespace std;

struct point {
    int x;
    int y;
};

double get_distance_and_check_right(point p1, point p2, point p3){
    int e1_squared, e2_squared, e3_squared;
    int x_diff, y_diff;
    
    x_diff = p2.x - p1.x;
    y_diff = p2.y - p1.y;
    e1_squared = x_diff*x_diff + y_diff*y_diff;
    
    x_diff = p3.x - p2.x;
    y_diff = p3.y - p2.y;
    e2_squared = x_diff*x_diff + y_diff*y_diff;
    
    x_diff = p3.x - p1.x;
    y_diff = p3.y - p1.y;
    e3_squared = x_diff*x_diff + y_diff*y_diff;
    if ((e1_squared != 0 && e2_squared != 0 && e3_squared != 0) &&
        ((e1_squared == e2_squared + e3_squared)    ||
        (e2_squared == e1_squared + e3_squared)     ||
        (e3_squared == e1_squared + e2_squared) )    )
        return true;
    else
        return false;

}

void change_point(point &p, int x, int y){
    p.x += x;
    p.y += y;
}

int main(){
    point p[3];
    for(int i = 0; i < 3; i++){
        cin >> p[i].x;
        cin >> p[i].y;
    }
    
    if(get_distance_and_check_right(p[0], p[1], p[2])){
        cout << "RIGHT" << endl;
        return 0;
    }
    
    for (int i = 0; i < 3; i++) {
        point p1, p2, p3;
        switch (i) {
            case 0:
                p2.x = p[1].x; p2.y = p[1].y;
                p3.x = p[2].x; p3.y = p[2].y;
                break;
            case 1:
                p2.x = p[0].x; p2.y = p[0].y;
                p3.x = p[2].x; p3.y = p[2].y;
                break;
            case 2:
                p2.x = p[0].x; p2.y = p[0].y;
                p3.x = p[1].x; p3.y = p[1].y;
                break;
        }
        for(int j = 0; j < 4; j++){
            p1.x = p[i].x;
            p1.y = p[i].y;
            int change = 1;
            if(j%2 != 0){
                change = -1;
            }
            
            if(j < 2) // change x
            {
                change_point(p1, change, 0);
            }
            else    // change y
            {
                change_point(p1, 0, change);
            }
            
            if(get_distance_and_check_right(p1, p2, p3)){
                cout << "ALMOST" << endl;
                return 0;
            }
        }
    }
    
    cout << "NEITHER" << endl;
    return 0;   
}