#include <string>

class Output{

  public:
    void screen(std::string i, std::string a);

  private:
    std::string format(std::string i, std::string a);
    void clear();

};
