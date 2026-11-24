#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H
#include <entt/entt.hpp>

class EntityManager
{
private:
    EntityManager();
    static EntityManager* _instance;
    entt::registry _registry;
public:
    static EntityManager* instance();

    entt::registry& registry();
};

#endif // ENTITYMANAGER_H
