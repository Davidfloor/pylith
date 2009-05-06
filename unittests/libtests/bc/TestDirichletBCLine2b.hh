// -*- C++ -*-
//
// ----------------------------------------------------------------------
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ----------------------------------------------------------------------
//

/**
 * @file unittests/libtests/bc/TestDirichletBCLine2b.hh
 *
 * @brief C++ TestDirichletBC object.
 *
 * C++ unit testing for DirichletBC for mesh with 1-D line cells.
 */

#if !defined(pylith_bc_testdirichletbcline2b_hh)
#define pylith_bc_testdirichletbcline2b_hh

#include "TestDirichletBC.hh" // ISA TestDirichletBC

/// Namespace for pylith package
namespace pylith {
  namespace bc {
    class TestDirichletBCLine2b;
  } // bc
} // pylith

/// C++ unit testing for DirichletBC for mesh with 1-D line cells.
class pylith::bc::TestDirichletBCLine2b : public TestDirichletBC
{ // class TestDirichletBC

  // CPPUNIT TEST SUITE /////////////////////////////////////////////////
  CPPUNIT_TEST_SUB_SUITE( TestDirichletBCLine2b, TestDirichletBC );
  CPPUNIT_TEST( testInitialize );
  CPPUNIT_TEST( testSetConstraintSizes );
  CPPUNIT_TEST( testSetConstraints );
  CPPUNIT_TEST( testSetField );
  CPPUNIT_TEST_SUITE_END();

  // PUBLIC METHODS /////////////////////////////////////////////////////
public :

  /// Setup testing data.
  void setUp(void);

}; // class TestDirichletBCLine2b

#endif // pylith_bc_dirichletbcline2b_hh


// End of file 