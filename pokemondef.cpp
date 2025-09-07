#include <string>
enum type{
    Fire,
    Water,
    Grass,
    Electric,
    Ground,
    Ice,
    Fighting,
    Normal,
    Rock,
    Steel,
    Psychic,
    Dark,
    Fairy,
    Flying,
    Ghost,
    Dragon,
    Bug,
    Poison,
    STELLAR}

class Pokemon{
    type type1,type type2;
    std::string ability;
    std::map<std::string,int> stats;
    float hpNow;
public;
    pokemon(){
}
int maxDmgPos(){}
void pivotNow(){}
friend void oppHpNow(){}
void bestmove(){}
void runnerupmove(){}

}