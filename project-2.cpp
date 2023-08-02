///////////////////////////COLOR PICKER ///////////////////////////////


//////////////////////INCLUDING HEADER FILES///////////////////////
#include<cstdlib>
#include<iostream>
#include<windows.h>
using namespace std;


////////////////////////DECLARING FUNCTIONS////////////////////////
void SetConsoleColor(int colorCode){
    HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colorCode);
}


//////////////////CREATING MENU CLASS///////////////////////////
class menu{
  public:
    void color_picker(){
         cout<<"\t\t\t---------------------------------------------------------------"<<endl;
         cout<<"\t\t\t\t                   Color Picker "<<endl;
         cout<<"\t\t\t---------------------------------------------------------------"<<endl;
         cout<<"\t\t\t\t Available Colors: "<<endl;
         cout<<"\t\t\t\t 1. Red"<<endl;
         cout<<"\t\t\t\t 2. Green"<<endl;
         cout<<"\t\t\t\t 3. Blue"<<endl;
         cout<<"\t\t\t\t 4. Aqua"<<endl;
         cout<<"\t\t\t\t 5. Purple"<<endl;
         cout<<"\t\t\t\t 6. Yellow"<<endl;

         int colorCode;
         cout<<"Enter the Color Code: "<<endl;
         cin>>colorCode;

         switch(colorCode){
                case 1:
                    SetConsoleColor(4);
                    cout<<"You Selected Red!"<<endl;
                    break;
                case 2:
                    SetConsoleColor(2);
                    cout<<"You Selected Green!"<<endl;
                    break;
                case 3:
                    SetConsoleColor(1);
                    cout<<"You Selected Blue!"<<endl;
                    break;
                case 4:
                    SetConsoleColor(3);
                    cout<<"You Selected Aqua!"<<endl;
                    break;
                case 5:
                    SetConsoleColor(5);
                    cout<<"You Selected Purple!"<<endl;
                    break;
                case 6:
                    SetConsoleColor(6);
                    cout<<"You Selected Yellow!"<<endl;
                    break;
                default:
                    cout<<"Invalid Color Code!"<<endl;
         }
    }
};



///////////////////////////MAIN FUNCTION/////////////////////////////////
int main(){
  menu m1;
  while(true){
    m1.color_picker();
  }
}
