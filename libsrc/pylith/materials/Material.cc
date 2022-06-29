// -*- C++ -*-
//
// ------------------------------------------------------------------------------------------------
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University at Buffalo
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2022 University of California, Davis
//
// See LICENSE.md for license information.
//
// ------------------------------------------------------------------------------------------------

#include <portinfo>

#include "Material.hh" // implementation of object methods

#include "pylith/utils/error.hh" // USES PYLITH_METHOD_*
#include "pylith/utils/journals.hh" // USES PYLITH_COMPONENT_*

#include <cassert> // USES assert()
#include <stdexcept> // USES std::runtime_error

// ------------------------------------------------------------------------------------------------
// Default constructor.
pylith::materials::Material::Material(void) :
    _gravityField(NULL),
    _description("") {}


// ------------------------------------------------------------------------------------------------
// Destructor.
pylith::materials::Material::~Material(void) {
    deallocate();
} // destructor


// ------------------------------------------------------------------------------------------------
// Deallocate PETSc and local data structures.
void
pylith::materials::Material::deallocate(void) {
    PYLITH_METHOD_BEGIN;

    pylith::problems::Physics::deallocate();

    _gravityField = NULL; // :TODO: Use shared pointer.

    PYLITH_METHOD_END;
} // deallocate


// ------------------------------------------------------------------------------------------------
// Set descriptive label of material.
void
pylith::materials::Material::setDescription(const char* value) {
    PYLITH_COMPONENT_DEBUG("setDescription(value="<<value<<")");

    _description = value;
} // setDescription


// ------------------------------------------------------------------------------------------------
// Get label of material.
const char*
pylith::materials::Material::getDescription(void) const {
    return _description.c_str();
} // getDescription


// ------------------------------------------------------------------------------------------------
// Set gravity field.
void
pylith::materials::Material::setGravityField(spatialdata::spatialdb::GravityField* const g) {
    _gravityField = g;
} // setGravityField


// ------------------------------------------------------------------------------------------------
// Create constraint and set kernels.
std::vector<pylith::feassemble::Constraint*>
pylith::materials::Material::createConstraints(const pylith::topology::Field& solution) {
    PYLITH_METHOD_BEGIN;
    PYLITH_COMPONENT_DEBUG("createConstraints(solution="<<solution.getLabel()<<") empty method");
    std::vector<pylith::feassemble::Constraint*> constraintArray;

    PYLITH_METHOD_RETURN(constraintArray);
} // createConstraints


// ------------------------------------------------------------------------------------------------
// Get default PETSc solver options appropriate for material.
pylith::utils::PetscOptions*
pylith::materials::Material::getSolverDefaults(const bool isParallel,
                                               const bool hasFault) const {
    return NULL;
}


// End of file
