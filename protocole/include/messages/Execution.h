#ifndef H_BTTP_MESSAGE_EXECUTION
#define H_BTTP_MESSAGE_EXECUTION

#include "Resultat.h"

namespace BTTP
{
    namespace Protocole
    {
        namespace Messages
        {
            // TOTEST
            // TOCOMMENT
            class Execution : public Message
            {
            private:
                /**
                 * @brief Idenifiant numérique d'exécution.
                 * @details Cet identifiant permet à une application de gérer plusieurs requêtes d'exécution
                 * simultanées pour une même identité.
                 */
                uint32_t* _id;
                /**
                 * @brief Identifiant numérique du script à exécuter.
                 */
                uint32_t* _id_script;
                /**
                 * @brief Arguments d'exécution à ajouter au script, sous forme de paire nom/valeur.
                 */
                std::vector<Argument> _args;

                /**
                 * @brief Retourne le contenu du message.
                 * @return const std::string Contenu du message.
                 */
                const std::string contenu() const override;
                /**
                 * @brief Déconstruction du contenu d'un paquet et enregistrement des informations extraites.
                 * @param contenu Contenu du paquet à déconstruire.
                 */
                void deconstruction(const std::string contenu) override;

            public:
                /**
                 * @brief Construction d'un nouveau message à partir de l'identifiant du script à exécuter.
                 * @details L'identifiant numérique d'exécution est généré pseudo-aléatoirement (std::rand).
                 * @param id_script Identifiant numérique du script à exécuter.
                 */
                Execution(const uint32_t id_script);
                /**
                 * @brief Construction d'un message vide.
                 * @details L'identifiant numérique n'est pas généré.
                 */
                Execution();
                /**
                 * @brief Construction d'un message vide, déconstruction d'un paquet et enregistrement des informations extraites.
                 * @param paquet Paquet à déconstruire.
                 */
                Execution(const std::string paquet);
                /**
                 * @brief Destruction du message.
                 */
                ~Execution();

                /**
                 * @brief Retourne l'identifiant numérique du message.
                 * @return const uint32_t& Identifiant du message.
                 */
                inline const uint32_t& id() const { return *this->_id; }
                /**
                 * @brief Retourne l'identifiant numérique du script à exécuter.
                 * @return const uint32_t& Identifiant du script.
                 */
                inline const uint32_t& id_script() const { return *this->_id_script; }
                /**
                 * @brief Retourne les arguments d'exécution à ajouter au script.
                 * @return const std::vector<Argument>& Arguments d'exécution.
                 */
                inline const std::vector<Argument>& args() const { return this->_args; }

                /**
                 * @brief Ajoute un argument à ajouter au script à l'exécution.
                 * @param nom Nom de l'argument à ajouter.
                 * @param valeur Valeur de l'argument.
                 */
                inline void ajouter_argument(const std::string nom, const std::string valeur) 
                { this->_args.push_back(Argument(nom, valeur)); }
                /**
                 * @brief Supprime le dernier éléments ajouter.
                 */
                inline void supprimer_dernier_argument() { this->_args.pop_back(); }
            };
        }
    }
}

#endif