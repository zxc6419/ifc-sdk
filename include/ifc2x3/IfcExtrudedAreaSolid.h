// IFC SDK : IFC2X3 C++ Early Classes  
// Copyright (C) 2009 CSTB
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full license is in Licence.txt file included with this 
// distribution or is available at :
//     http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.

#ifndef IFC2X3_IFCEXTRUDEDAREASOLID_H
#define IFC2X3_IFCEXTRUDEDAREASOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcSweptAreaSolid.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     * Generated class for the IfcExtrudedAreaSolid Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcExtrudedAreaSolid : public IfcSweptAreaSolid {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'ExtrudedDirection'.
         * 
         */
        virtual IfcDirection *getExtrudedDirection();
        /**
         * (const) Returns the value of the explicit attribute 'ExtrudedDirection'.
         * 
         * @return the value of the explicit attribute 'ExtrudedDirection'
         */
        virtual const IfcDirection *getExtrudedDirection() const;
        /**
         * Sets the value of the explicit attribute 'ExtrudedDirection'.
         * 
         * @param value
         */
        virtual void setExtrudedDirection(const Step::RefPtr< IfcDirection > &value);
        /**
         * unset the attribute 'ExtrudedDirection'.
         * 
         */
        virtual void unsetExtrudedDirection();
        /**
         * Test if the attribute 'ExtrudedDirection' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testExtrudedDirection() const;
        /**
         * Gets the value of the explicit attribute 'Depth'.
         * 
         */
        virtual IfcPositiveLengthMeasure getDepth();
        /**
         * (const) Returns the value of the explicit attribute 'Depth'.
         * 
         * @return the value of the explicit attribute 'Depth'
         */
        virtual const IfcPositiveLengthMeasure getDepth() const;
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        virtual void setDepth(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Depth'.
         * 
         */
        virtual void unsetDepth();
        /**
         * Test if the attribute 'Depth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDepth() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcExtrudedAreaSolid(Step::Id id, Step::SPFData *args);
        virtual ~IfcExtrudedAreaSolid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcExtrudedAreaSolid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_extrudedDirection;
        /**
         */
        Step::Real m_depth;

    };

}

#endif // IFC2X3_IFCEXTRUDEDAREASOLID_H
