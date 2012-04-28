/*
 * Proland: a procedural landscape rendering library.
 * Copyright (c) 2008-2011 INRIA
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Authors: Eric Bruneton, Antoine Begault, Guillaume Piolat.
 */

#ifndef _PROLAND_HYDROGRAPHFACTORY_H_
#define _PROLAND_HYDROGRAPHFACTORY_H_

#include "proland/graph/producer/GraphProducer.h"

namespace proland
{

/**
 * A GraphProducer::GraphFactory that creates HydroGraph.
 * @ingroup rivergraph
 * @author Antoine Begault
 */
PROLAND_API class HydroGraphFactory : public GraphProducer::GraphFactory
{
public:
    /**
     * Creates a new HydroGraphFactory.
     */
    HydroGraphFactory();

    /**
     * Deletes this HydroGraphFactory.
     */
    virtual ~HydroGraphFactory();

    /**
     * Returns a new HydroGraph.
     */
    virtual Graph *newGraph(int nodeCacheSize, int curveCacheSize, int areaCacheSize);
};

}

#endif