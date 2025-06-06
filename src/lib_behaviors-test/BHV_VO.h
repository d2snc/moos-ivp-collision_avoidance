/************************************************************/
/*    NAME: Douglas Lima                                              */
/*    ORGN: MIT                                             */
/*    FILE: BHV_VO.h                                      */
/*    DATE:                                                 */
/************************************************************/

#ifndef VO_HEADER
#define VO_HEADER

#include <string>
#include "IvPBehavior.h"

class BHV_VO : public IvPBehavior {
public:
  BHV_VO(IvPDomain);
  ~BHV_VO() {};
  
  bool         setParam(std::string, std::string);
  void         onSetParamComplete();
  void         onCompleteState();
  void         onIdleState();
  void         onHelmStart();
  void         postConfigStatus();
  void         onRunToIdleState();
  void         onIdleToRunState();
  IvPFunction* onRunState();

protected: // Local Utility functions

protected: // Configuration parameters

protected: // State variables
};

#define IVP_EXPORT_FUNCTION

extern "C" {
  IVP_EXPORT_FUNCTION IvPBehavior * createBehavior(std::string name, IvPDomain domain) 
  {return new BHV_VO(domain);}
}
#endif
