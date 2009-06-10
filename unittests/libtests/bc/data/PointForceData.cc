// -*- C++ -*-
//
// ======================================================================
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ======================================================================
//

#include "PointForceData.hh"

// ----------------------------------------------------------------------
// Constructor
pylith::bc::PointForceData::PointForceData(void) :
  tRef(0),
  forceRate(0),
  tResidual(0),
  numDOF(0),
  numForceDOF(0),
  numForcePts(0),
  id(0),
  label(0),
  forceDOF(0),
  forcePoints(0),
  forceInitial(0),
  residual(0),
  meshFilename(0),
  dbFilename(0)
{ // constructor
} // constructor

// ----------------------------------------------------------------------
// Destructor
pylith::bc::PointForceData::~PointForceData(void)
{ // destructor
} // destructor


// End of file