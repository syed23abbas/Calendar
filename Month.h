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
    static const std::string monday;
    static const std::string tuesday;
    static const std::string wednesday;
    static const std::string thursday;
    static const std::string friday;
    static const std::string saturday;
    static const std::string sunday;
    static const std::string january;
    static const std::string february;
    static const std::string march;
    static const std::string april;
    static const std::string may;
    static const std::string june;
    static const std::string july;
    static const std::string august;
    static const std::string september;
    static const std::string october;
    static const std::string november;
    static const std::string december;
};
