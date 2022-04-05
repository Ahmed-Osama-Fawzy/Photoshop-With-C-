// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include "bmplib.cpp"
using namespace std;

unsigned char image[SIZE][SIZE];

void Save(){
    cout << "enter The New name Of The Edited Image "
};

void Black_White(){
    
    Save();
};

void Merge(){
    string TheMerge;
    cout << "Please Enter Name OF Image File To Merge With: ";
    cin >> TheMerge;
    
    Save();
};

void Flip(){
    char TheFlip;
    cout << "Fliping H or V: ";
    cin >> TheFlip;
    if (TheFlip == 'H'){}
    else if (TheFlip == 'V'){}
    else {
        cout << "Sorry The Input Is Invaild";
    }
    
    Save();
};

void Darken_Lighten(){
    char TheDAL;
    cout << "Fliping D(Darken) or L(Lighten): ";
    cin >> TheDAL;
    if (TheDAL == 'D'){}
    else if (TheDAL == 'L'){}
    else {
        cout << "Sorry The Input Is Invaild";
    }
    
    Save();
};

void Rotate(){
    int TheDegree;
    cout << "Please Enter Degree: ";
    cin >> TheDegree;
    
    Save();
};

void Detect(){
    
    Save();
};

void Enlarge(){
    int TheEnl;
    cout << "Which Quarter to Enlarge 1 , 2, 3 or 4: ";
    cin >> TheEnl;
    switch (TheEnl){
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            cout << "Successs Choose";
    }
};

void Shrink(){
    int TheShr;
    cout << "Shrink To 0.5 , 0.3 , 0.25 or 0.2: ";
    cin >> TheShr;
    switch (TheShr){
        case 0.5:
            break;
        case 0.3:
            break;
        case 0.25:
            break;
        case 0.2:
            break;
        default:
            cout << "Successs Choose";
    }
    
    Save();
};

void Mirror(){
    char TheMir;
    cout << "Mirror To L(Left) or R(Right) or T(Top) or D(Down): ";
    cin >> TheMir;
    if (TheMir == 'L'){}
    else if (TheMir == 'R'){}
    if (TheMir == 'T'){}
    else if (TheMir == 'D'){}
    else {
        cout << "Sorry The Input Is Invaild";
    }
    
    Save();
};
void Shuffle(){
    int n1 , n2 , n3 , n4;
    cout << "Enter The Pattern Of Photo as (n1 n2 n3 n4): ";
    cin >> n1 >> n2 >> n3 >> n4;
    if (n1 > 0 && n2 > 0 && n3 > 0 && n4 > 0){
        
    }
    else {
        cout << "Sorry You Entered Invaild Number";
    }
    
    Save();
};
void Blur(){
    
    Save();
};
void Exit(){};

int main() {
    string TheImage , TheFilter;
    cout << "Enter the Image Name Without The Path: ";
    cin >> TheImage;
    cout << "BW   Black & White Image\n";
    cout << "ME   Merge The Image\n";
    cout << "FL   Flip The Image\n";
    cout << "DL   Darken & Lighten The Image\n";
    cout << "RO   Rotate The Image\n";
    cout << "DE   Detect The Image 's Edges\n";
    cout << "EN   Enlarge The Image\n";
    cout << "SHR  Shrink The Image\n";
    cout << "MI   Mirror The Image\n";
    cout << "SH   Shuffle The Image\n";
    cout << "BL   Blur The Image\n";
    cout << "EX   Exit\n";
    cout << "Choose The Filter To Doing It at This Image: \n";
    cin >> TheFilter;
    
    if (TheFilter == "BW"){
            Black_White();
    }
    else if (TheFilter == "ME"){
            Merge();
    }
    else if (TheFilter == "FL"){
            Flip();
    }
    else if (TheFilter == "DL"){
            Darken_Lighten();
    }
    else if (TheFilter == "RO"){
            Rotate();
    }
    else if (TheFilter == "DE"){
            Detect();
    }
    else if (TheFilter == "EN"){
            Enlarge();
    }
    else if (TheFilter == "SHR"){
            Shrink();
    }
    else if (TheFilter == "MI"){
            Mirror();
    }
    else if (TheFilter == "SH"){
            Shuffle();
    }
    else if (TheFilter == "BL"){
            Blur();
    }
    else if (TheFilter == "EX"){
            Exit();
    }
    else {
        cout << "Sorry The Input Is Invaild";
    }
    return 0;
}