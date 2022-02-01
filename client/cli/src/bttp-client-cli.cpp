#include "../include/CLI.h"

int main(const int argc, const char** argv)
{
    try
    {
        return BTTP::Client::CLI::executer(argc, argv);
    }
    catch (BTTP::Erreur& err) 
    {
        std::cout << std::endl << err << std::endl;
        return err.code();
    }
}