#include<World.h>

using std::cout;

struct Point{
int posX; 
int posY; 
bool hasFire; 
bool hasVehicle;
bool hasBase;
}pointMap[50][50];

World::World(){} //constructor

void Console::run(){} //body?

void World::gettingStarted(){
     for(int i=0; i<50; i++){
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
                     if(i==0&&j==0) cout<<"BASE";                         
                     else cout<<" ";}           
                     }
     return pointMap[50][50];
}
     
