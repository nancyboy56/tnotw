
#include <Money.h>

//idk if i should change??
#include <stdlib.h>     /* srand, rand */

using std::string;

//might make some subclasses later

Money::Money(){
  this->drabs=rand()%200;
  changeFormat();

}


void Money::changeFormat(){

  boolean finished =false;

  while(finished){

    if(this->drabs>=10){
      this->drabs-=10;
      this->joints++;

    } else if(this->joints>=10){
      this->joints-=10;
      this->talons++;

    } else if(this->talons>=10){
      this->talons-=10;
      this->marks++;

    } else{
      finished =true;
    }
  }
}



void Skill:increaseDrabs(int amount){
  this->drabs+=amount;
  changeFormat();
}

void Skill:increaseJoints(int amount){
  this->joints+=amount;
  changeFormat();
}

void Skill:increaseTalons(int amount){
  this->talons+=amount;
  changeFormat();
}

void Skill:increaseMarks(int amount){
  this->marks+=amount;
  changeFormat();
}
