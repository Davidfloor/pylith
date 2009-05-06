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

## @file pylith/topology/SubMesh.py
##
## @brief Python Mesh for lower-dimension finite-element topology
## information.

from topology import SubMesh as ModuleSubMesh

# SubMesh class
class SubMesh(ModuleSubMesh):
  """
  Python Mesh for lower-dimension finite-element topology information.
  """

  # PUBLIC METHODS /////////////////////////////////////////////////////

  def __init__(self, mesh=None, label=None):
    """
    Constructor.
    """
    if mesh is None:
      ModuleSubMesh.__init__(self)
    else:
      if label is None:
        raise ValueError("SubMesh constructor with mesh requires label.")
      ModuleSubMesh.__init__(self, mesh, label)
    return


  def comm(self):
    """
    Get communicator.
    """
    # Use Communicator object to wrap C++ MPI_Comm* returned by
    # module.
    from pylith.mpi.Communicator import Communicator
    return Communicator(ModuleSubMesh.comm(self))


# End of file