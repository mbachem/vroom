#ifndef CVRP_TWO_OPT_H
#define CVRP_TWO_OPT_H

/*

This file is part of VROOM.

Copyright (c) 2015-2022, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include "algorithms/local_search/operator.h"

namespace vroom {
namespace cvrp {

class TwoOpt : public ls::Operator {
protected:
  virtual void compute_gain() override;

  const Amount _s_delivery;
  const Amount _t_delivery;

public:
  TwoOpt(const Input& input,
         const utils::SolutionState& sol_state,
         RawRoute& s_route,
         Index s_vehicle,
         Index s_rank,
         RawRoute& t_route,
         Index t_vehicle,
         Index t_rank);

  virtual bool is_valid() override;

  virtual void apply() override;

  virtual std::vector<Index> addition_candidates() const override;

  virtual std::vector<Index> update_candidates() const override;
};

} // namespace cvrp
} // namespace vroom

#endif
