#pragma once

#include <string>
#include <iostream>
#include "Map.h"
#include "Player.h"
#include <iomanip>

using namespace std;

class Player;


class PlayerStrategy {
public:
    virtual string toAttack() = 0;
    virtual void toDefend() = 0;
    virtual void issueOrder() = 0;
};

class HumanPlayerStrategy: public PlayerStrategy{
public:
    virtual string toAttack(){
        cout << "HumanPlayerStrategy toAttack player strat" << endl;
/*
cout << "The territories you can attack are: " << endl;
      for (int i = 0; i < territories.size(); i++) {
          for (int j = 0; j < territories[i]->getNumberAdj(); j++) {
              if (gameMap->getTerritory(territories[i]->getAdjacent(j))->getOwner() != name) {
                  cout <<
                      right << setw(40) << gameMap->getTerritory(territories[i]->getAdjacent(j))->getName() <<
                      " (" << setw(2) << territories[i]->getAdjacent(j) << ")" <<
                      setw(20) << " belonging to " <<
                      left << setw(20) << gameMap->getTerritory(territories[i]->getAdjacent(j))->getOwner() <<
                      " from " <<
                      right << setw(40) << territories[i]->getName() <<
                      " (" << setw(2) << territories[i]->getId() << ")" <<
                      endl;
              }
          }
      }
      cout << "--------" << endl;
*/

    }

    virtual void toDefend(){
        cout << "HumanPlayerStrategy toDefend player strat"<< endl;
    }
    virtual void issueOrder(){
        cout << "HumanPlayerStrategy issueOrder player strat"<< endl;
    }

};

class AggressivePlayerStrategy: public PlayerStrategy{
public:
    virtual string toAttack(){
        cout << "AggressivePlayerStrategy toAttack player strat"<< endl;
    }
    virtual void toDefend(){
        cout << "AggressivePlayerStrategy toDefend player strat"<< endl;
    }
    virtual void issueOrder(){
        cout << "AggressivePlayerStrategy issueOrder player strat"<< endl;
    }
};

class BenevolentPlayerStrategy: public PlayerStrategy{
public:
    virtual string toAttack(){
        cout << "BenevolentPlayerStrategy toAttack player strat"<< endl;
    }
    virtual void toDefend(){
        cout << "BenevolentPlayerStrategy toDefend player strat"<< endl;
    }
    virtual void issueOrder(){
        cout << "BenevolentPlayerStrategy issueOrder player strat"<< endl;
    }
};

class NeutralPlayerStrategy: public PlayerStrategy{
public:

    virtual string toAttack(){
        cout << "NeutralPlayerStrategy toAttack player strat"<< endl;
    }
    virtual void toDefend(){
        cout << "NeutralPlayerStrategy toDefend player strat"<< endl;
    }
    virtual void issueOrder(){
        cout << "NeutralPlayerStrategy issueOrder player strat"<< endl;
    }
};














/*class Players {
public:
    void setPlayerStrategy(PlayerStrategy* strat){
        this->playerstrat = strat;
    }
    void toAttack(){
        // if(this->playerstrat)
        this->playerstrat->toAttack();
    }
private:
    PlayerStrategy * playerstrat;
};*/






