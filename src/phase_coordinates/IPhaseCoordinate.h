#pragma once

class IPhaseCoordinate
{
public:
    virtual ~IPhaseCoordinate()=0;
    virtual IPhaseCoordinate* copy()=0;

private:
};