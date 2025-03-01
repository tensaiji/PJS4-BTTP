#include "../../include/messages/Erreur.h"

namespace BTTP 
{
    namespace Protocole
    {
        namespace Messages
        {
            // TOTEST
            Erreur::Erreur(const BTTP::Erreur& erreur)
                : Message(Type::ERREUR),
                _nom{ erreur.nom() }, _message{ erreur.message() }, _code{ erreur.code() }
            {}

            Erreur::Erreur() 
                : Message(Type::ERREUR),
                _nom{ "" }, _message{ "" }, _code{ 0 }
            {}

            Erreur::Erreur(const std::string paquet)
                : Message(Type::ERREUR),
                _nom{ "" }, _message{ "" }, _code{ 0 }
            { this->deconstruire(paquet); }

            //TOTEST
            const std::string Erreur::contenu() const 
            { 
                // TOFIX Remplacer les occurences de BTTP_MESSAGE_SEP dans le nom et le message par sécurité.
                return this->_nom + BTTP_MESSAGE_SEP + this->_message + BTTP_MESSAGE_SEP + std::to_string(this->_code);
            }

            //TOTEST
            void Erreur::deconstruction(const std::string contenu) 
            {
                // Découpage selon le séparateur des messages BTTP standards.
                const std::vector<std::string> elements = decouper(contenu, BTTP_MESSAGE_SEP);
                if (elements.size() != 3) throw Protocole::Erreur::Messages::Deconstruction::Incomplet(contenu, elements.size(), 3);

                // Enregistrement des informations.
                this->_nom = elements[0];
                this->_message = elements[1];
                this->_code = std::atoi(elements[2].c_str());
            }
        }
    }
}