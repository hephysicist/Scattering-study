// -*- C++ -*-
// AID-GENERATED
// =========================================================================
// This class was generated by AID - Abstract Interface Definition          
// DO NOT MODIFY, but use the org.freehep.aid.Aid utility to regenerate it. 
// =========================================================================
#ifndef EVENT_TRACKERRAWDATA_H
#define EVENT_TRACKERRAWDATA_H 1

#include "EVENT/LCObject.h"
#include "LCIOSTLTypes.h"

namespace EVENT {

/** Generic class for raw tracker data. It can be used to store the full FADC spectrum as it comes out of the
 *  tracker DAQ or just one ore more single FADC readout values.
 *  @see TrackerData
 *  @see TrackerPulse
 * 
 * @author gaede
 * @version $Id: TrackerRawData.aid,v 1.2 2006/03/24 13:25:53 gaede Exp $
 */

class TrackerRawData : public LCObject {

public: 
    /// Destructor.
    virtual ~TrackerRawData() { /* nop */; }


    /** Useful typedef for template programming with LCIO */
    typedef TrackerRawData lcobject_type ;

    /** Returns the first detector specific (geometrical) cell id.
     */
    virtual int getCellID0() const = 0;

    /** Returns the second detector specific (geometrical) cell id. Optional, check/set 
     *  flag(LCIO::TRAWBIT_ID1)==1.
     */
    virtual int getCellID1() const = 0;

    /** Returns a time measurement associated with the adc values, e.g. the 
     *  t0 of the spectrum for the TPC. Subdetector dependent.
     */
    virtual int getTime() const = 0;

    /** The actual FADC spectrum.
     */
    virtual const ShortVec & getADCValues() const = 0;
}; // class
} // namespace EVENT
#endif /* ifndef EVENT_TRACKERRAWDATA_H */
