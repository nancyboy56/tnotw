
#include <Rank.h>

using std::string;

Rank::Rank(){
  this->ranks[0]="E'lir";
  this->ranks[1]="Re'lar";
  this->ranks[2]="El'the";
  this-> noOfRank=3;
  this->currentRankIndex=0;
}

//i might need to pass in charcater or something to
boolean Skill::increase(){
  //gonna add some more stuff to see if they can increase rank

  if(this->currentRankIndex<3){
    this->currentRankIndex++;
    return true;
  }
  return false;

}

string Skill::getRank(){
  return this->ranks[this->currentRankIndex];
}
