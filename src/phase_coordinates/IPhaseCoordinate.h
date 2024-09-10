#pragma once

class IPhaseCoordinate
{
public:
    virtual ~IPhaseCoordinate(){};
    virtual IPhaseCoordinate* copy()=0;

private:
};