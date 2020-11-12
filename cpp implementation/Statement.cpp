#include <string>

using namespace std;


class Statement {
    public:
        string type;
        Statement(string type); 
};


Statement::Statement(string type) {
            this->type = type;
        }
