//
// Created by colaarch on 5/18/23.
//

#ifndef ACTORCOMPONENTMODEL_COMPONENT_H
#define ACTORCOMPONENTMODEL_COMPONENT_H


class Component {
    // Constructor
    // The lower the updateOrder the earlier it updates
    Component(class Actor* owner, int updateOrder = 100);
    // Destructor
    virtual ~Component();
    // Update component by delta time
    virtual void Update(float deltaTime);
    int GetUpdateOrder() const { return mUpdateOrder;}
protected:
    // Owning Actor
    class Actor* mOwner;
    int mUpdateOrder;
};


#endif //ACTORCOMPONENTMODEL_COMPONENT_H
