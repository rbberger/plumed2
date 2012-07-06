#ifndef __PLUMED_ActionSetup_h
#define __PLUMED_ActionSetup_h

#include "Action.h"

namespace PLMD{

/**
\ingroup MULTIINHERIT
Action used to create a PLMD::Action that do something during setup only e.g. PLMD::SetupUnits
*/
class ActionSetup :
  public virtual Action {
public:
/// Constructor
  ActionSetup(const ActionOptions&ao);
/// Creator of keywords
  static void registerKeywords( Keywords& keys ); 
/// Do nothing.
  void calculate(){};
/// Do nothing.
  void apply(){};
};

}

#endif
