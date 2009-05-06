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

#if !defined(pylith_meshio_datawritervtkdatamatmeshtri3_hh)
#define pylith_meshio_datawritervtkdatamatmeshtri3_hh

#include "DataWriterVTKData.hh" // ISA DataWriterVTKData

namespace pylith {
  namespace meshio {
     class DataWriterVTKDataMatMeshTri3;
  } // meshio
} // pylith

class pylith::meshio::DataWriterVTKDataMatMeshTri3 : public DataWriterVTKData
{ // DataWriterVTKDataMatMeshTri3

public: 

  /// Constructor
  DataWriterVTKDataMatMeshTri3(void);

  /// Destructor
  ~DataWriterVTKDataMatMeshTri3(void);

private:

  static const char* _meshFilename; ///< Name of mesh file.
  static const char* _cellsLabel; ///< Label defining subset of cells.
  static const int _labelId; /// Value for label defining subset of cells.
  static const char* _faultLabel; ///< Name of group of vertices for fault.
  static const int _faultId; ///< Material identifier for fault.

  static const char* _timestepFilename; ///< Name of VTK file without fields.
  static const char* _vertexFilename; ///< Name of VTK file for vertex fields.
  static const char* _cellFilename; ///< Name of VTK file for cell fields.

  static const double _time; ///< Time for fields.
  static const char* _timeFormat; ///< Format for time stamp.

  /// @name Vertex field information.
  //@{
  static const int _numVertexFields; ///< Number of vertex fields.
  static const int _numVertices; ///< Number of vertices.
  static const FieldStruct _vertexFields[]; ///< Array of vertex fields.

  static const double _vertexField0[]; ///< Values for vertex field 0.
  static const double _vertexField1[]; ///< Values for vertex field 1.
  static const double _vertexField2[]; ///< Values for vertex field 2.
  //@}

  /// @name Cell field information.
  //@{
  static const int _numCellFields; ///< Number of cell fields.
  static const int _numCells; ///< Number of cells.
  static const FieldStruct _cellFields[]; ///< Array of cell fields.

  static const double _cellField0[]; ///< Values for cell field 0.
  static const double _cellField1[]; ///< Values for cell field 1.
  static const double _cellField2[]; ///< Values for cell field 2.
  //@}

}; // DataWriterVTKDataMatMeshTri3

#endif // pylith_meshio_datawritervtkdatamatmeshtri3_hh

// End of file