
using std::string;

class Rank {
public:

  Rank();
  ~Rank();
  string getRank();

  //i need to see how you increase rank
  boolean increaseRank();

private:

  string currentRankIndex;
  string ranks[3];
  int noOfRanks;

};
