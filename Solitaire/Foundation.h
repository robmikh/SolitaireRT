#pragma once
#include "Pile.h"

class ShapeCache;
class CompositionCard;

class Foundation : public Pile
{
public:
    Foundation(std::shared_ptr<ShapeCache> const& shapeCache) : Pile(shapeCache) {}

    virtual bool CanSplit(int index) override;
    virtual bool CanTake(int index) override;
    virtual bool CanAdd(Pile::CardList const& cards) override;

    virtual void CompleteRemoval() override;

protected:
    virtual winrt::Windows::Foundation::Numerics::float3 ComputeOffset(int index) override;
    virtual winrt::Windows::Foundation::Numerics::float3 ComputeBaseSpaceOffset(int index) override;
};