
#include <Skill.h>

using std::string;

//might make some subclasses later

Skill::Skill(string name, int score, int min, int max){
  this->name=name;
  this->score=score;
  this->min=min;
  this->max=max;
}

boolean Skill:increase(int amount){
  if(score+amount>max){
    //maybe throw and exception later??? idk
    return false;
  }
  this->score=score+amount;
  return true;
}

boolean Skill:decrease(int amount){
  if(score+amount<min){
    //maybe throw and exception later??? idk
    return false;
  }
  this->score=score-amount;
  return true;
}
