

using std::string;

class Skill {
public:

  Skill(string name, int score, int min, int max);
  ~Skill();
  boolean increase(int amount);
  boolean decrease(int amount);

private:

  string name;
  int min;
  int max;
  int score;

};
