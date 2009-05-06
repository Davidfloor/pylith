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

/** @file modulesrc/feassemble/GeometryTri2D.i
 *
 * @brief Python interface to C++ GeometryTri2D object.
 */

namespace pylith {
  namespace feassemble {

    class GeometryTri2D : public CellGeometry
    { // GeometryTri2D

      // PUBLIC METHODS /////////////////////////////////////////////////
    public :
  
      /// Default constructor.
      GeometryTri2D(void);
      
      /// Default destructor.
      ~GeometryTri2D(void);
      
      /** Create a copy of geometry.
       *
       * @returns Copy of geometry.
       */
      CellGeometry* clone(void) const;
      
      /** Get cell geometry for lower dimension cell.
       *
       * @returns Pointer to cell geometry object corresponding to next
       * lower dimension, NULL if there is no lower dimension object.
       */
      CellGeometry* geometryLowerDim(void) const;
      
      /** Transform coordinates in reference cell to global coordinates.
       *
       * @param ptsGlobal Array of points in global coordinate system.
       * @param ptsRef Array of points in reference cell.
       * @param vertices Array of cell vertices in global coordinates.
       * @param dim Dimension of global coordinate system.
       * @param npts Number of points to transform.
       */
      void ptsRefToGlobal(double* ptsGlobal,
			  const double* ptsRef,
			  const double* vertices,
			  const int dim,
			  const int npts =1) const;
      
      /** Compute Jacobian at location in cell.
       *
       * @param jacobian Jacobian at location.
       * @param det Determinant of Jacobian at location.
       * @param vertices Coordinates of vertices of cell.
       * @param location Location in reference cell at which to compute Jacobian.
       */
      void jacobian(pylith::double_array* jacobian,
		    double* det,
		    const pylith::double_array& vertices,
		    const pylith::double_array& location) const;
      
      /** Compute Jacobian at location in cell.
       *
       * @param jacobian Jacobian at location.
       * @param det Determinant of Jacobian at location.
       * @param vertices Coordinates of vertices of cell.
       * @param ptsRef Points in reference cell at which to compute Jacobian.
       * @param dim Dimension of coordinate system.
       * @param npts Number of points to transform.
       */
      void jacobian(double* jacobian,
		    double* det,
		    const double* vertices,
		    const double* ptsRef,
		    const int dim,
		    const int npts =1) const;
      
    }; // GeometryTri2D

  } // feassemble
} // pylith

// End of file