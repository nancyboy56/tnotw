

using std::string;

class Character {
public:

  Character(string name);
  ~Character();

protected:

   // int protectedVariable;
   // int protectedMethod(double param);

private:
  //money, lute skill, rank, charisma, appearance, energy,
  Money* money;
  string name;
  Skill* luteSkill;
  string rank;
  Skill* charisma;
  Skill* appearance;
  Skill* energy;
   // void privateMethod(int* ptr, double& ref);

};
