// ReaCl.cpp : Defines the entry point for the application.
//

#include "ReaCl.h"

using namespace std;

int main()
{
    sf::RenderWindow main_window;
    
    {
        Universe u{ main_window };
        u.exec();
    }
    
	return 0;
}
