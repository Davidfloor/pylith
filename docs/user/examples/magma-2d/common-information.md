# Common Information

In addition to the finite-element mesh, PyLith requires files to specify the simulation parameters.
We specify parameters common to all simulations in a directory in `pylithapp.cfg`.
The `pylithapp.cfg` file contains numerous comments, so we only summarize the parameters here.

The settings contained in `pylithapp.cfg` for this problem consist of:

* `pylithapp.metadata` Metadata common to all of the simulations in the directory.
* `pylithapp.journal.info` Parameters that control the verbosity of the output written to stdout for the different components.
* `pylithapp.mesh_generator` Parameters for importing the finite-element mesh.
* `pylithapp.problem` Parameters that define the boundary value problem and it solution, such as the type of solver, solution fields.
* `pylithapp.problem.materials` Paramters that specify the governing equation and bulk rheologies.

These quasistatic simulations solve the poroelasticity equation, so we have a solution field with  displacement, pressure, and volumetric strain subfields.
We specify a basis order of 2 for the displacement subfield, and 1 for each of the remaining subfields.

We use the material properties in all of the simulations in this directory, so we specify them in `pylithapp.cfg` to avoid repeating the information in the file with parameters for each simulation.
