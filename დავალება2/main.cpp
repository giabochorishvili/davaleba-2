#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    /* სამი რიცხვიდან მაქსიმალური პოვნა */
    // int i,j,x;

    // cout << "enter 3 numbers :";
    // cin >> i >> j >> x;

    // if (i>x && i>j)
    // {
    //     cout << i ;
    // }else if (x>i && x>j)
    // {
    //     cout << x;
    // }else if (j>i && j>x)
    // {
    //     cout << j;
    // }else{
    //     cout << "not";
    // }


    // /* წრეწირის ფართობის პოვნა */
    // int i;

    // cout << "enter number: " ;
    // cin >> i;

    // cout << i*i*3.14;


    // /* გრადუსების კონტროლი */

    // int i;

    // cout << "enter number:   " ;
    // cin >> i ;
    
    // cout << (i*9/5)+32 ;


    
    /* კალკულატორი */

    // double z,y;
    // char t;

    // cout << "enter your number then character and number :   ";
    // cin >> z >> t >> y;    

    // switch (t)
    // {
    // case '*':
    //     cout << z * y ;
    //     break;
    
    // case '/' :
    //     cout << z / y ;
    //     break;
    
    // case '+':
    //     cout << z + y ;
    //     break;

    // case '-':
    //     cout << z - y ;
    //     break;

    // default:
    //     cout << "not found";
    //     break;

    // } 


    /* ორ წერტილს შორის მანძილის პოვნა */

    int x1 , y1 ,x2 , y2 ;

    cout << "enter first objects X and Y:  ";
    cin >> x1 >> y1;

    cout << "enter second objects X and Y:  ";
    cin >> x2 >> y2;

    cout << sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    
    


    cin.get();
    return 0;
}