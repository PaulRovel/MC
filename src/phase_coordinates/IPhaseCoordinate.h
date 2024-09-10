#pragma once

class IPhaseCoordinate
{
public:
    virtual ~IPhaseCoordinate(){};
    virtual IPhaseCoordinate* copy()=0;
    virtual void move(double distance)=0;

private:
};