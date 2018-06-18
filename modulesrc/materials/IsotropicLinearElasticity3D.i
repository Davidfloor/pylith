// -*- C++ -*-
//
// ----------------------------------------------------------------------
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2016 University of California, Davis
//
// See COPYING for license information.
//
// ----------------------------------------------------------------------
//

/** @file modulesrc/materials/IsotropicLinearElasticity3D.i
 *
 * Python interface to C++ IsotropicLinearElasticity3D.
 */

namespace pylith {
  namespace materials {

    class IsotropicLinearElasticity3D : public Material
    { // class IsotropicLinearElasticity3D

      // PUBLIC METHODS /////////////////////////////////////////////////////
    public :

      /// Default constructor.
      IsotropicLinearElasticity3D(void);

      /// Destructor.
      ~IsotropicLinearElasticity3D(void);

      /** Include inertia?
       *
       * @param[in] value Flag indicating to include inertial term.
       */
      void useInertia(const bool value);

      /** Include body force?
       *
       * @param[in] value Flag indicating to include body force term.
       */
      void useBodyForce(const bool value);

      /** Use reference stress and strain in computation of stress and
       * strain?
       *
       * @param[in] value Flag indicating to include reference stress and strain.
       */
      void useReferenceState(const bool value);

      /** Verify configuration is acceptable.
       *
       * @param[in] solution Solution field.
       */
      void verifyConfiguration(const pylith::topology::Field& solution) const;

// PROTECTED METHODS //////////////////////////////////////////////////
    protected :

      /// Setup auxiliary subfields (discretization and query fns).
      void _auxFieldSetup(void);

      /** Set kernels for RHS residual G(t,u).
       *
       * @param[in] solution Solution field.
       */
      void _setFEKernelsRHSResidual(const topology::Field& solution) const;

      /** Set kernels for RHS Jacobian G(t,u).
       *
       * @param[in] solution Solution field.
       */
      void _setFEKernelsRHSJacobian(const topology::Field& solution) const ;

      /** Set kernels for LHS residual F(t,u,\dot{u}).
       *
       * @param[in] solution Solution field.
       */
      void _setFEKernelsLHSResidual(const topology::Field& solution) const;


      /** Set kernels for LHS Jacobian F(t,u,\dot{u}) when implicit time-stepping.
       *
       * @param[in] solution Solution field.
       */
      void _setFEKernelsLHSJacobian(const topology::Field& solution) const;


    }; // class IsotropicLinearElasticity3D

  } // materials
} // pylith


// End of file
