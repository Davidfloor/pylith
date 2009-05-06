#!/usr/bin/env python
#
# ----------------------------------------------------------------------
#
#                           Brad T. Aagaard
#                        U.S. Geological Survey
#
# <LicenseText>
#
# ----------------------------------------------------------------------
#

## @file pylith/topology/Fields.py
##
## @brief Python object for managing vector fields over vertices or
## cells of a finite-element mesh.

from topology import MeshFields as ModuleMeshFields
from topology import SubMeshFields as ModuleSubMeshFields

# ----------------------------------------------------------------------
# MeshFields class
class MeshFields(ModuleMeshFields):
  """
  Python object for managing vector fields over vertices or cells of a
  finite-element mesh.
  """

  # PUBLIC METHODS /////////////////////////////////////////////////////

  def __init__(self, mesh):
    """
    Constructor.
    """
    ModuleMeshFields.__init__(self, mesh)
    return
    

  def cleanup(self):
    """
    Deallocate PETSc and local data structures.
    """
    self.deallocate()
    return
    

# ----------------------------------------------------------------------
# SubMeshFields class
class SubMeshFields(ModuleSubMeshFields):
  """
  Python object for managing vector fields over vertices or cells of
  a lower-dimension finite-element mesh.
  """

  # PUBLIC METHODS /////////////////////////////////////////////////////

  def __init__(self, mesh):
    """
    Constructor.
    """
    ModuleSubMeshFields.__init__(self, mesh)
    return
    

  def cleanup(self):
    """
    Deallocate PETSc and local data structures.
    """
    self.deallocate()
    return
    

# End of file