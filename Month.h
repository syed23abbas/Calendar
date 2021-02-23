#include <string>
class Month
{
private:
  std::string name;
  int day;
  int monthNum;
  static int numDays (int month);
public:
    Month();
    Month (std::string theName, int theDay, int month);
    int dayEnds(int firstDay, int numOfDays);
    int dayStarts(int firstDayOfYear, int monthNum);
    void printMonth(int numOfMonth, int firstDayOfYear);
};
