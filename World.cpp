#include<World.h>

using std::cout;

struct Point{
int posX; //x-coordinate
int posY;  //y-coordinate
bool hasFire; //spot is on fire
bool hasVehicle; //vehicle on spot
bool hasBase; //base on this spot (only for 0,0)
}pointMap[50][50];

World::World(){} //constructor

void Console::run(){} //mallon feugei opws auth ths Console

void World::gettingStarted(){ 
     for(int i=0; i<50; i++){  ////map creation for the first time, each spot is given default options + na allax8ei to void
             for(int j=0; j<50; j++){
                     pointMap[i][j].posX=i;
                     pointMap[i][j].posY=j;
                     pointMap[i][j].hasFire=false;
                     pointMap[i][j].hasVehicle=false;
                     if(i==0&&j==0) pointMap[i][j].hasBase=true;
                     else pointMap[i][j].hasBase=false;}
                     }
                     
     for(int i=0; i<50; i++){
             for(int j=0; j<50; j++){
                     if(i==0&&j==0) cout<<"BASE";  //show base at (0,0)                       
                     else cout<<" ";}           
                     }
     return pointMap[50][50]; //returns map
}
     
